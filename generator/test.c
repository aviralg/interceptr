
typedef int FILE;
typedef int va_arg;

extern int vfprintf(FILE* stream, const char* format, va_arg args);

extern int fprintf(FILE* stream, const char* format);

const char* f(int x);
