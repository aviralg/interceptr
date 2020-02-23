#include <clang-c/Index.h>
#include <iostream>
#include <string>

std::string getCursorKindName(CXCursorKind cursorKind) {
    CXString kindName = clang_getCursorKindSpelling(cursorKind);
    std::string result = clang_getCString(kindName);

    clang_disposeString(kindName);
    return result;
}

std::string getCursorSpelling(CXCursor cursor) {
    CXString cursorSpelling = clang_getCursorSpelling(cursor);
    std::string result = clang_getCString(cursorSpelling);

    clang_disposeString(cursorSpelling);
    return result;
}

void handle_function_definition(CXCursor cursor) {
    std::cout << getCursorSpelling(cursor);

    clang_visitChildren(cursor, visitor, &parameter_position);
}

CXChildVisitResult
visitor(CXCursor cursor, CXCursor parent, CXClientData clientData) {
    CXSourceLocation location = clang_getCursorLocation(cursor);
    // if (clang_Location_isFromMainFile(location) == 0)
    //    return CXChildVisit_Continue;

    CXCursorKind cursorKind = clang_getCursorKind(cursor);

    unsigned int parameter_position =
        *(reinterpret_cast<unsigned int*>(clientData));

    unsigned int next_parameter_position = parameter_position + 1;

    if (cursorKind == CXCursor_FunctionDecl) {
        next_parameter_position += 1;
    }

    std::cout << std::string(curLevel, '-') << " "
              << getCursorKindName(cursorKind) << " ("
              << getCursorSpelling(cursor) << ")\n";

    clang_visitChildren(cursor, visitor, &next_parameter_position);

    return CXChildVisit_Continue;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Here";
        return -1;
    }

    CXIndex index = clang_createIndex(0, 0);
    CXTranslationUnit unit = clang_parseTranslationUnit(
        index, argv[1], nullptr, 0, nullptr, 0, CXTranslationUnit_None);

    if (!unit) {
        std::cout << "Here2";
        return -1;
    }

    CXCursor rootCursor = clang_getTranslationUnitCursor(unit);

    unsigned int parameter_position = 0;

    clang_visitChildren(rootCursor, visitor, &parameter_position);

    clang_disposeTranslationUnit(unit);
    clang_disposeIndex(index);

    return 0;
}
