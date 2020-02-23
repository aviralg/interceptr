#!/usr/bin/python

import sys
import copy
import os
from pycparser import c_parser, c_ast, parse_file, c_generator
from optparse import OptionParser

def is_pointer_type(ast):
    return isinstance(ast, c_ast.PtrDecl)

def get_return_type_string(function_declaration):
    pass

def generate_wrapper_declaration(declaration, options):
    real_typename = "interceptr_{}_t".format(declaration.name)
    wrapper_typename = "interceptr_wrapper_{}_t".format(declaration.name)

    print(declaration.type)

    real_typedef = c_ast.Typedef(
        name = real_typename,
        quals = [],
        storage = ["typedef"],
        type = c_ast.PtrDecl(
            quals = [],
            type = copy.deepcopy(declaration.type)
        )
    )

    if(is_pointer_type(real_typedef.type.type.type)):
        real_typedef.type.type.type.type.declname = real_typename
    else:
        real_typedef.type.type.type.declname = real_typename

    wrapper_typedef = c_ast.Typedef(
        name = wrapper_typename,
        quals = [],
        storage = ["typedef"],
        type = c_ast.PtrDecl(
            quals = [],
            type = copy.deepcopy(declaration.type)
        )
    )
    if(is_pointer_type(wrapper_typedef.type.type.type)):
        wrapper_typedef.type.type.type.type.declname = wrapper_typename
    else:
        wrapper_typedef.type.type.type.declname = wrapper_typename

    wrapper_typedef.type.type.args.params = [
        c_ast.Decl(name='interceptr',
                   quals=[],
                   storage=[],
                   funcspec=[],
                   type=c_ast.PtrDecl(quals=[],
                          type=c_ast.TypeDecl(declname='interceptr',
                                        quals=[],
                                        type=c_ast.Struct(name='interceptr_t',
                                                          decls=None
                                        )
                        )
             ),
             init=None,
             bitsize=None
        ),
        c_ast.Decl(name='callback',
                   quals=[],
                   storage=[],
                   funcspec=[],
                   type=c_ast.TypeDecl(declname='callback',
                                       quals=[],
                                       type=c_ast.IdentifierType(names=[real_typename]
                                       )
                   ),
                   init=None,
                   bitsize=None
        )
    ] + wrapper_typedef.type.type.args.params

    generator = c_generator.CGenerator()

    typedef = """#ifndef INTERCEPTR_LIBRARY_{LIBNAME}_FUNCTION_{FUNNAME}_DEFINITION_H
#define INTERCEPTR_LIBRARY_{LIBNAME}_FUNCTION_{FUNNAME}_DEFINITION_H

struct interceptr_t

{real_typedef};

{wrapper_typedef};

#endif /* INTERCEPTR_LIBRARY_{LIBNAME}_FUNCTION_{FUNNAME}_DEFINITION_H */
""".format(
        LIBNAME = options.libname.upper(),
        FUNNAME = declaration.name.upper(),
        real_typedef = generator.visit(real_typedef),
        wrapper_typedef = generator.visit(wrapper_typedef)
    )

    return typedef


def generate_vararg_wrapper_definition(declaration, options):

    definition = c_ast.FuncDef(
        decl = c_ast.Decl(
            name = declaration.name,
            quals = declaration.quals,
            storage = declaration.storage,
            funcspec = declaration.funcspec,
            type = declaration.type,
            init = declaration.init,
            bitsize = declaration.bitsize
        ),
        param_decls = None,
        body = c_ast.Compound(
            block_items = [
                c_ast.FuncCall(
                    name = c_ast.ID(name = "GENERATE_WRAPPER_BODY_NON_VARARG"),
                    args = c_ast.ExprList(
                        exprs = map(lambda decl: c_ast.ID(name = decl.name), declaration.type.args.params)
                    )
                )
            ]
        )
    )
    return definition

def generate_non_vararg_wrapper_definition(declaration, options):

    arguments = list(map(lambda decl: c_ast.ID(name = decl.name),
                         declaration.type.args.params))

    return_type = declaration.type.type.quals + declaration.type.type.type.names
    if is_pointer_type(declaration.type.type):
        return_type = return_type + ["*"]

    return_typename = " ".join(return_type)

    arguments = [c_ast.ID(name = options.libname),
                 c_ast.ID(name = declaration.name),
                 c_ast.ID(name = return_typename)] + arguments

    print(arguments)

    definition = c_ast.FuncDef(
        decl = c_ast.Decl(
            name = declaration.name,
            quals = declaration.quals,
            storage = declaration.storage,
            funcspec = declaration.funcspec,
            type = declaration.type,
            init = declaration.init,
            bitsize = declaration.bitsize
        ),
        param_decls = None,
        body = c_ast.Compound(
            block_items = [
                c_ast.FuncCall(
                    name = c_ast.ID(name = "GENERATE_WRAPPER_BODY"),
                    args = c_ast.ExprList(
                        exprs = arguments
                    )
                )
            ]
        )
    )

    print(c_generator.CGenerator().visit(definition))

    return definition

def generate_wrapper_definition(declaration, options):
    def has_vararg(declaration):
        return isinstance(declaration.type.args.params[-1], c_ast.EllipsisParam)

    if has_vararg(declaration):
        definition = generate_vararg_wrapper_definition(declaration, options)
    else:
        definition = generate_non_vararg_wrapper_definition(declaration, options)

    generator = c_generator.CGenerator()

    definition = """#include "generator/definition.h"
//
#include "library/{libname}/function/{funname}/definition.h"

{wrapper}
""".format(
        libname = options,
        LIBNAME = options.libname.upper(),
        funname = declaration.name,
        FUNNAME = declaration.name.upper(),
        wrapper = generator.visit(definition)
    )

    return definition


def generate_interface_declaration(declaration, options):
    interface = """#ifndef INTERCEPTR_LIBRARY_{LIBNAME}_FUNCTION_{FUNNAME}_INTERFACE_H
#define INTERCEPTR_LIBRARY_{LIBNAME}_FUNCTION_{FUNNAME}_INTERFACE_H

#include "generator/interface.h"
#include "library/{libname}/function/{funname}/definition.h"

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION({LIBNAME},{FUNNAME})
#define interceptr_get_wrapper_{libname}_{funname}(interceptr) \\
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION({libname}, {funname}, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION({LIBNAME}, {FUNNAME})
#define interceptr_set_wrapper_{libname}_{funname}(interceptr, {funname}_wrapper) \\
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION({libname}, {funname}, interceptr, {funname}_wrapper)

#endif /* INTERCEPTR_LIBRARY_{LIBNAME}_FUNCTION_{FUNNAME}_INTERFACE_H */
""".format(
    libname = options.libname,
    LIBNAME = options.libname.upper(),
    funname = declaration.name,
    FUNNAME = declaration.name.upper()
)

    return interface

def generate_interface_definition(declaration, options):
    interface = """#include "library/{libname}/function/{funname}/interface.h"
#include "definition.h

#undef interceptr_get_wrapper_{libname}_{funname}
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION({libname}, {funname})

#undef interceptr_set_wrapper_{libname}_{funname}
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION({libname}, {funname})
""".format(
        libname = options.libname,
        funname = declaration.name
    )

    return interface


def generate_wrapper(filename, options):

    def generate_wrapper_helper(node):
        inferface_declaration_filepath = os.path.join(options.header_directory, "interface.h")
        with open(inferface_declaration_filepath, "w") as f:
            f.write(generate_interface_declaration(node, options))

        inferface_definition_filepath = os.path.join(options.implementation_directory, "interface.c")
        with open(inferface_definition_filepath, "w") as f:
            f.write(generate_interface_definition(node, options))

        wrapper_declaration_filepath = os.path.join(options.header_directory, "definition.h")
        with open(wrapper_declaration_filepath, "w") as f:
            f.write(generate_wrapper_declaration(node, options))

        wrapper_definition_filepath = os.path.join(options.implementation_directory, "definition.c")
        with open(wrapper_definition_filepath, "w") as f:
            f.write(generate_wrapper_definition(node, options))

    ast = parse_file(filename, use_cpp=True)

    for node in ast.ext:
        if isinstance(node, c_ast.Decl):
            name = node.name
            if isinstance(node.type, c_ast.FuncDecl):
                generate_wrapper_helper(node)
                ##############################################
                # print(generate_wrapper_declaration(node))  #
                # print(generate_wrapper_definition(node))   #
                # print()                                    #
                # print(generate_interface_definition(node)) #
                ##############################################
                ############################################
                # ast = c_ast.FileAST(                     #
                #     ext = [                              #
                #         generate_function_wrapper(node), #
                #         generate_real_typedef(node),     #
                #         generate_wrapper_typedef(node)   #
                #     ]                                    #
                # )                                        #
                #                                          #
                # generator = c_generator.CGenerator()     #
                # print(generator.visit(ast))              #
                ############################################


def parse_program_arguments():
    parser = OptionParser()
    parser.add_option("-l",
                      "--libname",
                      dest="libname",
                      help="library to which this function belongs",
                      metavar="LIBNAME")
    parser.add_option("-c",
                      "--header-directory",
                      dest="header_directory",
                      help="directory in which to store the header files")
    parser.add_option("-i",
                      "--implementation-directory",
                      dest="implementation_directory",
                      help="directory in which to store the implementation files")
    return parser.parse_args()



def main():
    (options, args) = parse_program_arguments()
    for filename in args:
        generate_wrapper(filename, options)

if __name__ == "__main__":
    main()
