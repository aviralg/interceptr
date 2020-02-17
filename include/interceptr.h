#ifndef INTERCEPTR_INTERCEPTR_H
#define INTERCEPTR_INTERCEPTR_H

#include "wrappers/fcntl_wrappers.h"
#include "wrappers/stdio_wrappers.h"
#include "wrappers/stdlib_wrappers.h"
#include "wrappers/unistd_wrappers.h"

typedef struct interceptr_t {
    struct wrapper {
        struct fcntl {
            interceptr_wrapper_open_t open;
            interceptr_wrapper___open_2_t __open_2;
            interceptr_wrapper_open64_t open64;
            interceptr_wrapper___open64_2_t __open64_2;
            interceptr_wrapper_openat_t openat;
            interceptr_wrapper_openat_2_t openat_2;
            interceptr_wrapper___openat_2_t __openat_2;
            interceptr_wrapper_openat64_t openat64;
            interceptr_wrapper_openat64_2_t openat64_2;
            interceptr_wrapper___openat64_2_t __openat64_2;
            interceptr_wrapper_creat_t creat;
            interceptr_wrapper_creat64_t creat64;
            interceptr_wrapper_fopen64_t fopen64;
        } fcntl;

        struct unistd {
            interceptr_wrapper_read_t read;
            interceptr_wrapper_write_t write;
        } unistd;

        struct stdlib {
            interceptr_wrapper_putenv_t putenv;
            interceptr_wrapper_getenv_t getenv;
            interceptr_wrapper_secure_getenv_t secure_getenv;
            interceptr_wrapper_clearenv_t clearenv;
            interceptr_wrapper_setenv_t setenv;
            interceptr_wrapper_unsetenv_t unsetenv;
        } stdlib;

        struct stdio {
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
        } stdio;

    } wrapper;

    void* state;
} interceptr_t;

void interceptr_set_interceptr(struct interceptr_t* interceptr)
    __attribute__((weak));

#define interceptr_set_interceptr(interceptr)  \
    if (interceptr_set_interceptr) {           \
        interceptr_set_interceptr(interceptr); \
    }

struct interceptr_t* interceptr_get_interceptr() __attribute__((weak));

#define interceptr_get_interceptr() \
    (interceptr_get_interceptr ? interceptr_get_interceptr() : NULL)

void interceptr_enable() __attribute__((weak));

#define interceptr_enable()  \
    if (interceptr_enable) { \
        interceptr_enable(); \
    }

void interceptr_disable() __attribute__((weak));

#define interceptr_disable()  \
    if (interceptr_disable) { \
        interceptr_disable(); \
    }

int interceptr_is_enabled() __attribute__((weak));

#define interceptr_is_enabled() \
    (interceptr_is_enabled ? interceptr_is_enabled() : 0)

const char* interceptr_get_version() __attribute__((weak));

#define interceptr_get_version() \
    (interceptr_get_version ? interceptr_get_version() : "")

int interceptr_wrapper_is_active() __attribute__((weak));

#define interceptr_wrapper_is_active() \
    (interceptr_wrapper_is_active ? interceptr_wrapper_is_active() : 0)

void interceptr_set_active_wrapper(const char* wrapper_name)
    __attribute__((weak));

#define interceptr_set_active_wrapper()  \
    if (interceptr_set_active_wrapper) { \
        interceptr_set_active_wrapper(); \
    }

void interceptr_unset_active_wrapper() __attribute__((weak));

#define interceptr_unset_active_wrapper()  \
    if (interceptr_unset_active_wrapper) { \
        interceptr_unset_active_wrapper(); \
    }

#endif /* INTERCEPTR_INTERCEPTR_H */
