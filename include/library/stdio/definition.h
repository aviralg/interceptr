#ifndef INTERCEPTR_LIBRARY_STDIO_DEFINITION_H
#define INTERCEPTR_LIBRARY_STDIO_DEFINITION_H

#include <stdarg.h>
#include <stdio.h>

struct interceptr_t;

typedef int (*interceptr_remove_t)(const char* filename);
typedef int (*interceptr_wrapper_remove_t)(struct interceptr_t* interceptr,
                                           interceptr_remove_t callback,
                                           const char* filename);

typedef int (*interceptr_rename_t)(const char* old, const char* new);
typedef int (*interceptr_wrapper_rename_t)(struct interceptr_t* interceptr,
                                           interceptr_rename_t callback,
                                           const char* old,
                                           const char* new);

typedef FILE* (*interceptr_tmpfile_t)();
typedef FILE* (*interceptr_wrapper_tmpfile_t)(struct interceptr_t* interceptr,
                                              interceptr_tmpfile_t callback);

typedef char* (*interceptr_tmpnam_t)(char* s);
typedef char* (*interceptr_wrapper_tmpnam_t)(struct interceptr_t* interceptr,
                                             interceptr_tmpnam_t callback,
                                             char* s);

typedef int (*interceptr_fclose_t)(FILE* stream);
typedef int (*interceptr_wrapper_fclose_t)(struct interceptr_t* interceptr,
                                           interceptr_fclose_t callback,
                                           FILE* stream);

typedef int (*interceptr_fflush_t)(FILE* stream);
typedef int (*interceptr_wrapper_fflush_t)(struct interceptr_t* interceptr,
                                           interceptr_fflush_t callback,
                                           FILE* stream);

typedef FILE* (*interceptr_fopen_t)(const char* filename, const char* mode);
typedef FILE* (*interceptr_wrapper_fopen_t)(struct interceptr_t* interceptr,
                                            interceptr_fopen_t callback,
                                            const char* filename,
                                            const char* mode);

typedef FILE* (*interceptr_freopen_t)(const char* filename,
                                      const char* mode,
                                      FILE* stream);
typedef FILE* (*interceptr_wrapper_freopen_t)(struct interceptr_t* interceptr,
                                              interceptr_freopen_t callback,
                                              const char* filename,
                                              const char* mode,
                                              FILE* stream);

typedef void (*interceptr_setbuf_t)(FILE* stream, char* buf);
typedef void (*interceptr_wrapper_setbuf_t)(struct interceptr_t* interceptr,
                                            interceptr_setbuf_t callback,
                                            FILE* stream,
                                            char* buf);

typedef int (*interceptr_setvbuf_t)(FILE* stream,
                                    char* buf,
                                    int mode,
                                    size_t size);
typedef int (*interceptr_wrapper_setvbuf_t)(struct interceptr_t* interceptr,
                                            interceptr_setvbuf_t callback,
                                            FILE* stream,
                                            char* buf,
                                            int mode,
                                            size_t size);

typedef int (*interceptr_fprintf_t)(FILE* stream, const char* format, ...);

typedef int (*interceptr_fscanf_t)(FILE* stream, const char* format, ...);

typedef int (*interceptr_printf_t)(const char* format, ...);

typedef int (*interceptr_scanf_t)(const char* format, ...);

typedef int (*interceptr_snprintf_t)(char* s,
                                     size_t n,
                                     const char* format,
                                     ...);

typedef int (*interceptr_sprintf_t)(char* s, const char* format, ...);

typedef int (*interceptr_sscanf_t)(const char* s, const char* format, ...);

typedef int (*interceptr_vfprintf_t)(FILE* stream,
                                     const char* format,
                                     va_list arg);
typedef int (*interceptr_wrapper_vfprintf_t)(struct interceptr_t* interceptr,
                                             interceptr_vfprintf_t callback,
                                             FILE* stream,
                                             const char* format,
                                             va_list arg);

typedef int (*interceptr_vfscanf_t)(FILE* stream,
                                    const char* format,
                                    va_list arg);
typedef int (*interceptr_wrapper_vfscanf_t)(struct interceptr_t* interceptr,
                                            interceptr_vfscanf_t callback,
                                            FILE* stream,
                                            const char* format,
                                            va_list arg);

typedef int (*interceptr_vprintf_t)(const char* format, va_list arg);
typedef int (*interceptr_wrapper_vprintf_t)(struct interceptr_t* interceptr,
                                            interceptr_vprintf_t callback,
                                            const char* format,
                                            va_list arg);

typedef int (*interceptr_vscanf_t)(const char* format, va_list arg);
typedef int (*interceptr_wrapper_vscanf_t)(struct interceptr_t* interceptr,
                                           interceptr_vscanf_t callback,
                                           const char* format,
                                           va_list arg);

typedef int (*interceptr_vsnprintf_t)(char* s,
                                      size_t n,
                                      const char* format,
                                      va_list arg);
typedef int (*interceptr_wrapper_vsnprintf_t)(struct interceptr_t* interceptr,
                                              interceptr_vsnprintf_t callback,
                                              char* s,
                                              size_t n,
                                              const char* format,
                                              va_list arg);

typedef int (*interceptr_vsprintf_t)(char* s, const char* format, va_list arg);
typedef int (*interceptr_wrapper_vsprintf_t)(struct interceptr_t* interceptr,
                                             interceptr_vsprintf_t callback,
                                             char* s,
                                             const char* format,
                                             va_list arg);

typedef int (*interceptr_vsscanf_t)(const char* s,
                                    const char* format,
                                    va_list arg);

typedef int (*interceptr_wrapper_vsscanf_t)(struct interceptr_t* interceptr,
                                            interceptr_vsscanf_t callback,
                                            const char* s,
                                            const char* format,
                                            va_list arg);

typedef int (*interceptr_wrapper_fprintf_t)(struct interceptr_t* interceptr,
                                            interceptr_vfprintf_t callback,
                                            FILE* stream,
                                            const char* format,
                                            va_list arg);

typedef int (*interceptr_wrapper_fscanf_t)(struct interceptr_t* interceptr,
                                           interceptr_vfscanf_t callback,
                                           FILE* stream,
                                           const char* format,
                                           va_list arg);

typedef int (*interceptr_wrapper_printf_t)(struct interceptr_t* interceptr,
                                           interceptr_vprintf_t callback,
                                           const char* format,
                                           va_list arg);

typedef int (*interceptr_wrapper_scanf_t)(struct interceptr_t* interceptr,
                                          interceptr_vscanf_t callback,
                                          const char* format,
                                          va_list arg);

typedef int (*interceptr_wrapper_snprintf_t)(struct interceptr_t* interceptr,
                                             interceptr_vsnprintf_t callback,
                                             char* s,
                                             size_t n,
                                             const char* format,
                                             va_list arg);

typedef int (*interceptr_wrapper_sprintf_t)(struct interceptr_t* interceptr,
                                            interceptr_vsprintf_t callback,
                                            char* s,
                                            const char* format,
                                            va_list arg);

typedef int (*interceptr_wrapper_sscanf_t)(struct interceptr_t* interceptr,
                                           interceptr_vsscanf_t callback,
                                           const char* s,
                                           const char* format,
                                           va_list arg);

typedef int (*interceptr_fgetc_t)(FILE* stream);
typedef int (*interceptr_wrapper_fgetc_t)(struct interceptr_t* interceptr,
                                          interceptr_fgetc_t callback,
                                          FILE* stream);

typedef char* (*interceptr_fgets_t)(char* s, int n, FILE* stream);
typedef char* (*interceptr_wrapper_fgets_t)(struct interceptr_t* interceptr,
                                            interceptr_fgets_t callback,
                                            char* s,
                                            int n,
                                            FILE* stream);

typedef int (*interceptr_fputc_t)(int c, FILE* stream);
typedef int (*interceptr_wrapper_fputc_t)(struct interceptr_t* interceptr,
                                          interceptr_fputc_t callback,
                                          int c,
                                          FILE* stream);

typedef int (*interceptr_fputs_t)(const char* s, FILE* stream);
typedef int (*interceptr_wrapper_fputs_t)(struct interceptr_t* interceptr,
                                          interceptr_fputs_t callback,
                                          const char* s,
                                          FILE* stream);

typedef int (*interceptr_getc_t)(FILE* stream);
typedef int (*interceptr_wrapper_getc_t)(struct interceptr_t* interceptr,
                                         interceptr_getc_t callback,
                                         FILE* stream);

typedef int (*interceptr_getchar_t)();
typedef int (*interceptr_wrapper_getchar_t)(struct interceptr_t* interceptr,
                                            interceptr_getchar_t callback);

typedef int (*interceptr_putc_t)(int c, FILE* stream);
typedef int (*interceptr_wrapper_putc_t)(struct interceptr_t* interceptr,
                                         interceptr_putc_t callback,
                                         int c,
                                         FILE* stream);

typedef int (*interceptr_putchar_t)(int c);
typedef int (*interceptr_wrapper_putchar_t)(struct interceptr_t* interceptr,
                                            interceptr_putchar_t callback,
                                            int c);

typedef int (*interceptr_puts_t)(const char* s);
typedef int (*interceptr_wrapper_puts_t)(struct interceptr_t* interceptr,
                                         interceptr_puts_t callback,
                                         const char* s);

typedef int (*interceptr_ungetc_t)(int c, FILE* stream);
typedef int (*interceptr_wrapper_ungetc_t)(struct interceptr_t* interceptr,
                                           interceptr_ungetc_t callback,
                                           int c,
                                           FILE* stream);

typedef size_t (*interceptr_fread_t)(void* ptr,
                                     size_t size,
                                     size_t nmemb,
                                     FILE* stream);
typedef size_t (*interceptr_wrapper_fread_t)(struct interceptr_t* interceptr,
                                             interceptr_fread_t callback,
                                             void* ptr,
                                             size_t size,
                                             size_t nmemb,
                                             FILE* stream);

typedef size_t (*interceptr_fwrite_t)(const void* ptr,
                                      size_t size,
                                      size_t nmemb,
                                      FILE* stream);
typedef size_t (*interceptr_wrapper_fwrite_t)(struct interceptr_t* interceptr,
                                              interceptr_fwrite_t callback,
                                              const void* ptr,
                                              size_t size,
                                              size_t nmemb,
                                              FILE* stream);

typedef int (*interceptr_fgetpos_t)(FILE* stream, fpos_t* pos);
typedef int (*interceptr_wrapper_fgetpos_t)(struct interceptr_t* interceptr,
                                            interceptr_fgetpos_t callback,
                                            FILE* stream,
                                            fpos_t* pos);

typedef int (*interceptr_fseek_t)(FILE* stream, long int offset, int whence);
typedef int (*interceptr_wrapper_fseek_t)(struct interceptr_t* interceptr,
                                          interceptr_fseek_t callback,
                                          FILE* stream,
                                          long int offset,
                                          int whence);

typedef int (*interceptr_fsetpos_t)(FILE* stream, const fpos_t* pos);
typedef int (*interceptr_wrapper_fsetpos_t)(struct interceptr_t* interceptr,
                                            interceptr_fsetpos_t callback,
                                            FILE* stream,
                                            const fpos_t* pos);

typedef long int (*interceptr_ftell_t)(FILE* stream);
typedef long int (*interceptr_wrapper_ftell_t)(struct interceptr_t* interceptr,
                                               interceptr_ftell_t callback,
                                               FILE* stream);

typedef void (*interceptr_rewind_t)(FILE* stream);
typedef void (*interceptr_wrapper_rewind_t)(struct interceptr_t* interceptr,
                                            interceptr_rewind_t callback,
                                            FILE* stream);

typedef void (*interceptr_clearerr_t)(FILE* stream);
typedef void (*interceptr_wrapper_clearerr_t)(struct interceptr_t* interceptr,
                                              interceptr_clearerr_t callback,
                                              FILE* stream);

typedef int (*interceptr_feof_t)(FILE* stream);
typedef int (*interceptr_wrapper_feof_t)(struct interceptr_t* interceptr,
                                         interceptr_feof_t callback,
                                         FILE* stream);

typedef int (*interceptr_ferror_t)(FILE* stream);
typedef int (*interceptr_wrapper_ferror_t)(struct interceptr_t* interceptr,
                                           interceptr_ferror_t callback,
                                           FILE* stream);

typedef void (*interceptr_perror_t)(const char* s);
typedef void (*interceptr_wrapper_perror_t)(struct interceptr_t* interceptr,
                                            interceptr_perror_t callback,
                                            const char* s);

typedef struct stdio_t {
    interceptr_wrapper_remove_t remove;
    interceptr_wrapper_rename_t rename;
    interceptr_wrapper_tmpfile_t tmpfile;
    interceptr_wrapper_tmpnam_t tmpnam;
    interceptr_wrapper_fclose_t fclose;
    interceptr_wrapper_fflush_t fflush;
    interceptr_wrapper_fopen_t fopen;
    interceptr_wrapper_freopen_t freopen;
    interceptr_wrapper_setbuf_t setbuf;
    interceptr_wrapper_setvbuf_t setvbuf;
    interceptr_wrapper_fprintf_t fprintf;
    interceptr_wrapper_fscanf_t fscanf;
    interceptr_wrapper_printf_t printf;
    interceptr_wrapper_scanf_t scanf;
    interceptr_wrapper_snprintf_t snprintf;
    interceptr_wrapper_sprintf_t sprintf;
    interceptr_wrapper_sscanf_t sscanf;
    interceptr_wrapper_vfprintf_t vfprintf;
    interceptr_wrapper_vfscanf_t vfscanf;
    interceptr_wrapper_vprintf_t vprintf;
    interceptr_wrapper_vscanf_t vscanf;
    interceptr_wrapper_vsnprintf_t vsnprintf;
    interceptr_wrapper_vsprintf_t vsprintf;
    interceptr_wrapper_vsscanf_t vsscanf;
    interceptr_wrapper_fgetc_t fgetc;
    interceptr_wrapper_fgets_t fgets;
    interceptr_wrapper_fputc_t fputc;
    interceptr_wrapper_fputs_t fputs;
    interceptr_wrapper_getc_t getc;
    interceptr_wrapper_getchar_t getchar;
    interceptr_wrapper_putc_t putc;
    interceptr_wrapper_putchar_t putchar;
    interceptr_wrapper_puts_t puts;
    interceptr_wrapper_ungetc_t ungetc;
    interceptr_wrapper_fread_t fread;
    interceptr_wrapper_fwrite_t fwrite;
    interceptr_wrapper_fgetpos_t fgetpos;
    interceptr_wrapper_fseek_t fseek;
    interceptr_wrapper_fsetpos_t fsetpos;
    interceptr_wrapper_ftell_t ftell;
    interceptr_wrapper_rewind_t rewind;
    interceptr_wrapper_clearerr_t clearerr;
    interceptr_wrapper_feof_t feof;
    interceptr_wrapper_ferror_t ferror;
    interceptr_wrapper_perror_t perror;
} stdio_t;

#endif /* INTERCEPTR_LIBRARY_STDIO_DEFINITION_H */
