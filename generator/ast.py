#!/usr/bin/python3
import sys
from pycparser import c_parser, c_ast, parse_file

if __name__ == "__main__":
    #_zz_test_translate()
    if len(sys.argv) > 1:
        for i in range(1, len(sys.argv)):
            filename = sys.argv[i]
            ast = parse_file(filename, use_cpp = False)
            print(ast)
    else:
        print("Please provide a filename as argument")

