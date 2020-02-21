#ifndef INTERCEPTR_LIBRARY_STDLIB_INTERFACE_H
#define INTERCEPTR_LIBRARY_STDLIB_INTERFACE_H

#include "generator/interface.h"
#include "library/stdlib/definition.h"

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdlib, putenv)
#define interceptr_get_wrapper_stdlib_putenv(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdlib, putenv, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdlib, putenv)
#define interceptr_set_wrapper_stdlib_putenv(interceptr, putenv_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                 \
        stdlib, putenv, interceptr, putenv_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdlib, getenv)
#define interceptr_get_wrapper_stdlib_getenv(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdlib, getenv, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdlib, getenv)
#define interceptr_set_wrapper_stdlib_getenv(interceptr, getenv_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                 \
        stdlib, getenv, interceptr, getenv_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdlib, secure_getenv)
#define interceptr_get_wrapper_stdlib_secure_getenv(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(        \
        stdlib, secure_getenv, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdlib, secure_getenv)
#define interceptr_set_wrapper_stdlib_secure_getenv(interceptr,            \
                                                    secure_getenv_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                   \
        stdlib, secure_getenv, interceptr, secure_getenv_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdlib, clearenv)
#define interceptr_get_wrapper_stdlib_clearenv(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(   \
        stdlib, clearenv, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdlib, clearenv)
#define interceptr_set_wrapper_stdlib_clearenv(interceptr, clearenv_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                     \
        stdlib, clearenv, interceptr, clearenv_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdlib, setenv)
#define interceptr_get_wrapper_stdlib_setenv(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdlib, setenv, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdlib, setenv)
#define interceptr_set_wrapper_stdlib_setenv(interceptr, setenv_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                 \
        stdlib, setenv, interceptr, setenv_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdlib, unsetenv)
#define interceptr_get_wrapper_stdlib_unsetenv(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(   \
        stdlib, unsetenv, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdlib, unsetenv)
#define interceptr_set_wrapper_stdlib_unsetenv(interceptr, unsetenv_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                     \
        stdlib, unsetenv, interceptr, unsetenv_wrapper)

#endif /* INTERCEPTR_LIBRARY_STDLIB_INTERFACE_H */
