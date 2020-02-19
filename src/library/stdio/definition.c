#include "generator/definition.h"
//
#include "library/stdio/initialization.h"
#include "library/stdio/definition.h"

static interceptr_remove_t real_remove = NULL;
static interceptr_rename_t real_rename = NULL;
static interceptr_tmpfile_t real_tmpfile = NULL;
static interceptr_tmpnam_t real_tmpnam = NULL;
static interceptr_fclose_t real_fclose = NULL;
static interceptr_fflush_t real_fflush = NULL;
static interceptr_fopen_t real_fopen = NULL;
static interceptr_freopen_t real_freopen = NULL;
static interceptr_setbuf_t real_setbuf = NULL;
static interceptr_setvbuf_t real_setvbuf = NULL;
static interceptr_fprintf_t real_fprintf = NULL;
static interceptr_fscanf_t real_fscanf = NULL;
static interceptr_printf_t real_printf = NULL;
static interceptr_scanf_t real_scanf = NULL;
static interceptr_snprintf_t real_snprintf = NULL;

static interceptr_sprintf_t real_sprintf = NULL;
static interceptr_sscanf_t real_sscanf = NULL;
static interceptr_vfprintf_t real_vfprintf = NULL;
static interceptr_vfscanf_t real_vfscanf = NULL;
static interceptr_vprintf_t real_vprintf = NULL;
static interceptr_vscanf_t real_vscanf = NULL;
static interceptr_vsnprintf_t real_vsnprintf = NULL;
static interceptr_vsprintf_t real_vsprintf = NULL;
static interceptr_vsscanf_t real_vsscanf = NULL;
static interceptr_fgetc_t real_fgetc = NULL;
static interceptr_fgets_t real_fgets = NULL;
static interceptr_fputc_t real_fputc = NULL;
static interceptr_fputs_t real_fputs = NULL;
static interceptr_getc_t real_getc = NULL;
static interceptr_getchar_t real_getchar = NULL;

static interceptr_putc_t real_putc = NULL;
static interceptr_putchar_t real_putchar = NULL;
static interceptr_puts_t real_puts = NULL;
static interceptr_ungetc_t real_ungetc = NULL;
static interceptr_fread_t real_fread = NULL;
static interceptr_fwrite_t real_fwrite = NULL;
static interceptr_fgetpos_t real_fgetpos = NULL;
static interceptr_fseek_t real_fseek = NULL;
static interceptr_fsetpos_t real_fsetpos = NULL;
static interceptr_ftell_t real_ftell = NULL;
static interceptr_rewind_t real_rewind = NULL;
static interceptr_clearerr_t real_clearerr = NULL;
static interceptr_feof_t real_feof = NULL;
static interceptr_ferror_t real_ferror = NULL;
static interceptr_perror_t real_perror = NULL;

void initialize_stdio_wrappers() {
    real_remove = DLSYM_NEXT_FUNCTION(remove);
    real_rename = DLSYM_NEXT_FUNCTION(rename);
    real_tmpfile = DLSYM_NEXT_FUNCTION(tmpfile);
    real_tmpnam = DLSYM_NEXT_FUNCTION(tmpnam);
    real_fclose = DLSYM_NEXT_FUNCTION(fclose);
    real_fflush = DLSYM_NEXT_FUNCTION(fflush);
    real_fopen = DLSYM_NEXT_FUNCTION(fopen);
    real_freopen = DLSYM_NEXT_FUNCTION(freopen);
    real_setbuf = DLSYM_NEXT_FUNCTION(setbuf);
    real_setvbuf = DLSYM_NEXT_FUNCTION(setvbuf);
    real_fprintf = DLSYM_NEXT_FUNCTION(fprintf);
    real_fscanf = DLSYM_NEXT_FUNCTION(fscanf);
    real_printf = DLSYM_NEXT_FUNCTION(printf);
    real_scanf = DLSYM_NEXT_FUNCTION(scanf);
    real_snprintf = DLSYM_NEXT_FUNCTION(snprintf);
    real_sprintf = DLSYM_NEXT_FUNCTION(sprintf);
    real_sscanf = DLSYM_NEXT_FUNCTION(sscanf);
    real_vfprintf = DLSYM_NEXT_FUNCTION(vfprintf);
    real_vfscanf = DLSYM_NEXT_FUNCTION(vfscanf);
    real_vprintf = DLSYM_NEXT_FUNCTION(vprintf);
    real_vscanf = DLSYM_NEXT_FUNCTION(vscanf);
    real_vsnprintf = DLSYM_NEXT_FUNCTION(vsnprintf);
    real_vsprintf = DLSYM_NEXT_FUNCTION(vsprintf);
    real_vsscanf = DLSYM_NEXT_FUNCTION(vsscanf);
    real_fgetc = DLSYM_NEXT_FUNCTION(fgetc);
    real_fgets = DLSYM_NEXT_FUNCTION(fgets);
    real_fputc = DLSYM_NEXT_FUNCTION(fputc);
    real_fputs = DLSYM_NEXT_FUNCTION(fputs);
    real_getc = DLSYM_NEXT_FUNCTION(getc);
    real_getchar = DLSYM_NEXT_FUNCTION(getchar);
    real_putc = DLSYM_NEXT_FUNCTION(putc);
    real_putchar = DLSYM_NEXT_FUNCTION(putchar);
    real_puts = DLSYM_NEXT_FUNCTION(puts);
    real_ungetc = DLSYM_NEXT_FUNCTION(ungetc);
    real_fread = DLSYM_NEXT_FUNCTION(fread);
    real_fwrite = DLSYM_NEXT_FUNCTION(fwrite);
    real_fgetpos = DLSYM_NEXT_FUNCTION(fgetpos);
    real_fseek = DLSYM_NEXT_FUNCTION(fseek);
    real_fsetpos = DLSYM_NEXT_FUNCTION(fsetpos);
    real_ftell = DLSYM_NEXT_FUNCTION(ftell);
    real_rewind = DLSYM_NEXT_FUNCTION(rewind);
    real_clearerr = DLSYM_NEXT_FUNCTION(clearerr);
    real_feof = DLSYM_NEXT_FUNCTION(feof);
    real_ferror = DLSYM_NEXT_FUNCTION(ferror);
    real_perror = DLSYM_NEXT_FUNCTION(perror);
}

int remove(const char* filename) {
    GENERATE_WRAPPER_BODY(stdio, remove, int, filename);
}

int rename(const char* old, const char* new) {
    GENERATE_WRAPPER_BODY(stdio, rename, int, old, new);
}

FILE* tmpfile() {
    GENERATE_WRAPPER_BODY(stdio, tmpfile, FILE*);
}

char* tmpnam(char* s) {
    GENERATE_WRAPPER_BODY(stdio, tmpnam, char*, s);
}

int fclose(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fclose, int, stream);
}

int fflush(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fflush, int, stream);
}

FILE* fopen(const char* filename, const char* mode) {
    GENERATE_WRAPPER_BODY(stdio, fopen, FILE*, filename, mode);
}

FILE* freopen(const char* filename, const char* mode, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, freopen, FILE*, filename, mode, stream);
}

void setbuf(FILE* stream, char* buf) {
    GENERATE_WRAPPER_BODY_VOID(stdio, setbuf, stream, buf);
}

int setvbuf(FILE* stream, char* buf, int mode, size_t size) {
    GENERATE_WRAPPER_BODY(stdio, setvbuf, int, stream, buf, mode, size);
}

int fprintf(FILE* stream, const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, fprintf, int, format, stream, format);
}

int vfprintf(FILE* stream, const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vfprintf, int, stream, format, arg);
}

int fscanf(FILE* stream, const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, fscanf, int, format, stream, format);
}

int vfscanf(FILE* stream, const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vfscanf, int, stream, format, arg);
}

int printf(const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, printf, int, format, format);
}

int vprintf(const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vprintf, int, format, arg);
}

int scanf(const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, scanf, int, format, format);
}

int vscanf(const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vscanf, int, format, arg);
}

int snprintf(char* s, size_t n, const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, snprintf, int, format, s, n, format);
}

int vsnprintf(char* s, size_t n, const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vsnprintf, int, s, n, format, arg);
}

int sprintf(char* s, const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, sprintf, int, format, s, format);
}

int vsprintf(char* s, const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vsprintf, int, s, format, arg);
}

int sscanf(const char* s, const char* format, ...) {
    GENERATE_WRAPPER_BODY_VARARG(stdio, sscanf, int, format, s, format);
}

int vsscanf(const char* s, const char* format, va_list arg) {
    GENERATE_WRAPPER_BODY(stdio, vsscanf, int, s, format, arg);
}

int fgetc(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fgetc, int, stream);
}

char* fgets(char* s, int n, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fgets, char*, s, n, stream);
}

int fputc(int c, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fputc, int, c, stream);
}

int fputs(const char* s, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fputs, int, s, stream);
}

int getc(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, getc, int, stream);
}

int getchar() {
    GENERATE_WRAPPER_BODY(stdio, getchar, int);
}

int putc(int c, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, putc, int, c, stream);
}

int putchar(int c) {
    GENERATE_WRAPPER_BODY(stdio, putchar, int, c);
}

int puts(const char* s) {
    GENERATE_WRAPPER_BODY(stdio, puts, int, s);
}

int ungetc(int c, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, ungetc, int, c, stream);
}

size_t fread(void* ptr, size_t size, size_t nmemb, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fread, size_t, ptr, size, nmemb, stream);
}

size_t fwrite(const void* ptr, size_t size, size_t nmemb, FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, fwrite, size_t, ptr, size, nmemb, stream);
}

int fgetpos(FILE* stream, fpos_t* pos) {
    GENERATE_WRAPPER_BODY(stdio, fgetpos, int, stream, pos);
}

int fseek(FILE* stream, long int offset, int whence) {
    GENERATE_WRAPPER_BODY(stdio, fseek, int, stream, offset, whence);
}

int fsetpos(FILE* stream, const fpos_t* pos) {
    GENERATE_WRAPPER_BODY(stdio, fsetpos, int, stream, pos);
}

long int ftell(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, ftell, long int, stream);
}

void rewind(FILE* stream) {
    GENERATE_WRAPPER_BODY_VOID(stdio, rewind, stream);
}

void clearerr(FILE* stream) {
    GENERATE_WRAPPER_BODY_VOID(stdio, clearerr, stream);
}

int feof(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, feof, int, stream);
}

int ferror(FILE* stream) {
    GENERATE_WRAPPER_BODY(stdio, ferror, int, stream);
}

void perror(const char* s) {
    GENERATE_WRAPPER_BODY_VOID(stdio, perror, s);
}

