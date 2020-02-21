#ifndef INTERCEPTR_LIBRARY_STDIO_INTERFACE_H
#define INTERCEPTR_LIBRARY_STDIO_INTERFACE_H

#include "generator/interface.h"
#include "library/stdio/definition.h"

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, remove)
#define interceptr_get_wrapper_stdio_remove(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, remove, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, remove)
#define interceptr_set_wrapper_stdio_remove(interceptr, remove_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, remove, interceptr, remove_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, rename)
#define interceptr_get_wrapper_stdio_rename(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, rename, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, rename)
#define interceptr_set_wrapper_stdio_rename(interceptr, rename_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, rename, interceptr, rename_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, tmpfile)
#define interceptr_get_wrapper_stdio_tmpfile(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, tmpfile, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, tmpfile)
#define interceptr_set_wrapper_stdio_tmpfile(interceptr, tmpfile_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, tmpfile, interceptr, tmpfile_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, tmpnam)
#define interceptr_get_wrapper_stdio_tmpnam(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, tmpnam, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, tmpnam)
#define interceptr_set_wrapper_stdio_tmpnam(interceptr, tmpnam_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, tmpnam, interceptr, tmpnam_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fclose)
#define interceptr_get_wrapper_stdio_fclose(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fclose, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fclose)
#define interceptr_set_wrapper_stdio_fclose(interceptr, fclose_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, fclose, interceptr, fclose_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fflush)
#define interceptr_get_wrapper_stdio_fflush(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fflush, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fflush)
#define interceptr_set_wrapper_stdio_fflush(interceptr, fflush_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, fflush, interceptr, fflush_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fopen)
#define interceptr_get_wrapper_stdio_fopen(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fopen, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fopen)
#define interceptr_set_wrapper_stdio_fopen(interceptr, fopen_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fopen, interceptr, fopen_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, freopen)
#define interceptr_get_wrapper_stdio_freopen(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, freopen, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, freopen)
#define interceptr_set_wrapper_stdio_freopen(interceptr, freopen_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, freopen, interceptr, freopen_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, setbuf)
#define interceptr_get_wrapper_stdio_setbuf(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, setbuf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, setbuf)
#define interceptr_set_wrapper_stdio_setbuf(interceptr, setbuf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, setbuf, interceptr, setbuf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, setvbuf)
#define interceptr_get_wrapper_stdio_setvbuf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, setvbuf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, setvbuf)
#define interceptr_set_wrapper_stdio_setvbuf(interceptr, setvbuf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, setvbuf, interceptr, setvbuf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fprintf)
#define interceptr_get_wrapper_stdio_fprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fprintf)
#define interceptr_set_wrapper_stdio_fprintf(interceptr, fprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, fprintf, interceptr, fprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fscanf)
#define interceptr_get_wrapper_stdio_fscanf(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fscanf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fscanf)
#define interceptr_set_wrapper_stdio_fscanf(interceptr, fscanf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, fscanf, interceptr, fscanf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, printf)
#define interceptr_get_wrapper_stdio_printf(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, printf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, printf)
#define interceptr_set_wrapper_stdio_printf(interceptr, printf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, printf, interceptr, printf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, scanf)
#define interceptr_get_wrapper_stdio_scanf(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, scanf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, scanf)
#define interceptr_set_wrapper_stdio_scanf(interceptr, scanf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, scanf, interceptr, scanf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, snprintf)
#define interceptr_get_wrapper_stdio_snprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        stdio, snprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, snprintf)
#define interceptr_set_wrapper_stdio_snprintf(interceptr, snprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        stdio, snprintf, interceptr, snprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, sprintf)
#define interceptr_get_wrapper_stdio_sprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, sprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, sprintf)
#define interceptr_set_wrapper_stdio_sprintf(interceptr, sprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, sprintf, interceptr, sprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, sscanf)
#define interceptr_get_wrapper_stdio_sscanf(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, sscanf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, sscanf)
#define interceptr_set_wrapper_stdio_sscanf(interceptr, sscanf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, sscanf, interceptr, sscanf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vfprintf)
#define interceptr_get_wrapper_stdio_vfprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        stdio, vfprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vfprintf)
#define interceptr_set_wrapper_stdio_vfprintf(interceptr, vfprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        stdio, vfprintf, interceptr, vfprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vfscanf)
#define interceptr_get_wrapper_stdio_vfscanf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, vfscanf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vfscanf)
#define interceptr_set_wrapper_stdio_vfscanf(interceptr, vfscanf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, vfscanf, interceptr, vfscanf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vprintf)
#define interceptr_get_wrapper_stdio_vprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, vprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vprintf)
#define interceptr_set_wrapper_stdio_vprintf(interceptr, vprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, vprintf, interceptr, vprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vscanf)
#define interceptr_get_wrapper_stdio_vscanf(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, vscanf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vscanf)
#define interceptr_set_wrapper_stdio_vscanf(interceptr, vscanf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, vscanf, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vsnprintf)
#define interceptr_get_wrapper_stdio_vsnprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(   \
        stdio, vsnprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vsnprintf)
#define interceptr_set_wrapper_stdio_vsnprintf(interceptr, vsnprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                      \
        stdio, vsnprintf, interceptr, vsnprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vsprintf)
#define interceptr_get_wrapper_stdio_vsprintf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        stdio, vsprintf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vsprintf)
#define interceptr_set_wrapper_stdio_vsprintf(interceptr, vsprintf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        stdio, vsprintf, interceptr, vsprintf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, vsscanf)
#define interceptr_get_wrapper_stdio_vsscanf(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, vsscanf, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, vsscanf)
#define interceptr_set_wrapper_stdio_vsscanf(interceptr, vsscanf_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, vsscanf, interceptr, vsscanf_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fgetc)
#define interceptr_get_wrapper_stdio_fgetc(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fgetc, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fgetc)
#define interceptr_set_wrapper_stdio_fgetc(interceptr, fgetc_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fgetc, interceptr, fgetc_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fgets)
#define interceptr_get_wrapper_stdio_fgets(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fgets, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fgets)
#define interceptr_set_wrapper_stdio_fgets(interceptr, fgets_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fgets, interceptr, fgets_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fputc)
#define interceptr_get_wrapper_stdio_fputc(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fputc, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fputc)
#define interceptr_set_wrapper_stdio_fputc(interceptr, fputc_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fputc, interceptr, fputc_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fputs)
#define interceptr_get_wrapper_stdio_fputs(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fputs, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fputs)
#define interceptr_set_wrapper_stdio_fputs(interceptr, fputs_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fputs, interceptr, fputs_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, getc)
#define interceptr_get_wrapper_stdio_getc(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(stdio, getc, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, getc)
#define interceptr_set_wrapper_stdio_getc(interceptr, getc_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        stdio, getc, interceptr, getc_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, getchar)
#define interceptr_get_wrapper_stdio_getchar(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, getchar, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, getchar)
#define interceptr_set_wrapper_stdio_getchar(interceptr, getchar_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, getchar, interceptr, getchar_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, putc)
#define interceptr_get_wrapper_stdio_putc(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(stdio, putc, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, putc)
#define interceptr_set_wrapper_stdio_putc(interceptr, putc_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        stdio, putc, interceptr, putc_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, putchar)
#define interceptr_get_wrapper_stdio_putchar(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, putchar, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, putchar)
#define interceptr_set_wrapper_stdio_putchar(interceptr, putchar_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, putchar, interceptr, putchar_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, puts)
#define interceptr_get_wrapper_stdio_puts(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(stdio, puts, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, puts)
#define interceptr_set_wrapper_stdio_puts(interceptr, puts_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        stdio, puts, interceptr, puts_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, ungetc)
#define interceptr_get_wrapper_stdio_ungetc(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, ungetc, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, ungetc)
#define interceptr_set_wrapper_stdio_ungetc(interceptr, ungetc_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, ungetc, interceptr, ungetc_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fread)
#define interceptr_get_wrapper_stdio_fread(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fread, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fread)
#define interceptr_set_wrapper_stdio_fread(interceptr, fread_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fread, interceptr, fread_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fwrite)
#define interceptr_get_wrapper_stdio_fwrite(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fwrite, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fwrite)
#define interceptr_set_wrapper_stdio_fwrite(interceptr, fwrite_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, fwrite, interceptr, fwrite_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fgetpos)
#define interceptr_get_wrapper_stdio_fgetpos(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fgetpos, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fgetpos)
#define interceptr_set_wrapper_stdio_fgetpos(interceptr, fgetpos_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, fgetpos, interceptr, fgetpos_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fseek)
#define interceptr_get_wrapper_stdio_fseek(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fseek, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fseek)
#define interceptr_set_wrapper_stdio_fseek(interceptr, fseek_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, fseek, interceptr, fseek_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, fsetpos)
#define interceptr_get_wrapper_stdio_fsetpos(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, fsetpos, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, fsetpos)
#define interceptr_set_wrapper_stdio_fsetpos(interceptr, fsetpos_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        stdio, fsetpos, interceptr, fsetpos_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, ftell)
#define interceptr_get_wrapper_stdio_ftell(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, ftell, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, ftell)
#define interceptr_set_wrapper_stdio_ftell(interceptr, ftell_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        stdio, ftell, interceptr, ftell_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, rewind)
#define interceptr_get_wrapper_stdio_rewind(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, rewind, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, rewind)
#define interceptr_set_wrapper_stdio_rewind(interceptr, rewind_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, rewind, interceptr, rewind_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, clearerr)
#define interceptr_get_wrapper_stdio_clearerr(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        stdio, clearerr, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, clearerr)
#define interceptr_set_wrapper_stdio_clearerr(interceptr, clearerr_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        stdio, clearerr, interceptr, clearerr_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, feof)
#define interceptr_get_wrapper_stdio_feof(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(stdio, feof, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, feof)
#define interceptr_set_wrapper_stdio_feof(interceptr, feof_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        stdio, feof, interceptr, feof_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, ferror)
#define interceptr_get_wrapper_stdio_ferror(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, ferror, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, ferror)
#define interceptr_set_wrapper_stdio_ferror(interceptr, ferror_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, ferror, interceptr, ferror_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(stdio, perror)
#define interceptr_get_wrapper_stdio_perror(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        stdio, perror, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(stdio, perror)
#define interceptr_set_wrapper_stdio_perror(interceptr, perror_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        stdio, perror, interceptr, perror_wrapper)

#endif /* INTERCEPTR_LIBRARY_STDIO_INTERFACE_H */
