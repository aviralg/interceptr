#include "initialization/fcntl_wrappers.h"

#include "utilities.h"
#include "wrappers/fcntl_wrappers.h"

#include <sys/stat.h>
#include <sys/types.h>
#define _GNU_SOURCE
#include <fcntl.h>


static interceptr_open_t real_open = NULL;
static interceptr___open_2_t real___open_2 = NULL;
static interceptr_open64_t real_open64 = NULL;
static interceptr___open64_2_t real___open64_2 = NULL;
static interceptr_openat_t real_openat = NULL;
static interceptr_openat_2_t real_openat_2 = NULL;
static interceptr___openat_2_t real___openat_2 = NULL;
static interceptr_openat64_t real_openat64 = NULL;
static interceptr_openat64_2_t real_openat64_2 = NULL;
static interceptr___openat64_2_t real___openat64_2 = NULL;
static interceptr_creat_t real_creat = NULL;
static interceptr_creat64_t real_creat64 = NULL;
static interceptr_fopen64_t real_fopen64 = NULL;

void initialize_fcntl_wrappers() {
    real_open = DLSYM_NEXT_FUNCTION(open);
    real___open_2 = DLSYM_NEXT_FUNCTION(__open_2);
    real_open64 = DLSYM_NEXT_FUNCTION(open64);
    real___open64_2 = DLSYM_NEXT_FUNCTION(__open64_2);
    real_fopen64 = DLSYM_NEXT_FUNCTION(fopen64);
    real_openat = DLSYM_NEXT_FUNCTION(openat);
    real_openat_2 = DLSYM_NEXT_FUNCTION(openat_2);
    real___openat_2 = DLSYM_NEXT_FUNCTION(__openat_2);
    real_openat64 = DLSYM_NEXT_FUNCTION(openat64);
    real_openat64_2 = DLSYM_NEXT_FUNCTION(openat64_2);
    real___openat64_2 = DLSYM_NEXT_FUNCTION(__openat64_2);
    real_creat = DLSYM_NEXT_FUNCTION(creat);
    real_creat64 = DLSYM_NEXT_FUNCTION(creat64);
}

int open(const char* path, int flags, ...) {
    mode_t mode = 0;

    if (flags & O_CREAT || flags & O_TMPFILE) {
        va_list varargs;
        va_start(varargs, flags);
        mode = va_arg(varargs, int);
        va_end(varargs);
    }

    GENERATE_WRAPPER_BODY(fcntl, open, int, path, flags, mode);
}

int __open_2(const char* path, int flags) {
    GENERATE_WRAPPER_BODY(fcntl, __open_2, int, path, flags);
}

int open64(const char* path, int flags, ...) {
    mode_t mode = 0;

    if (flags & O_CREAT || flags & O_TMPFILE) {
        va_list varargs;
        va_start(varargs, flags);
        mode = va_arg(varargs, int);
        va_end(varargs);
    }

    GENERATE_WRAPPER_BODY(fcntl, open64, int, path, flags, mode);
}

int __open64_2(const char* path, int flags) {
    GENERATE_WRAPPER_BODY(fcntl, __open64_2, int, path, flags);
}

int openat(int dirfd, const char* path, int flags, ...) {
    mode_t mode = 0;

    if (flags & O_CREAT || flags & O_TMPFILE) {
        va_list varargs;
        va_start(varargs, flags);
        mode = va_arg(varargs, int);
        va_end(varargs);
    }

    GENERATE_WRAPPER_BODY(fcntl, openat, int, dirfd, path, flags, mode);
}

int openat_2(int dirfd, const char* path, int flags) {
    GENERATE_WRAPPER_BODY(fcntl, openat_2, int, dirfd, path, flags);
}

int __openat_2(int dirfd, const char* path, int flags) {
    GENERATE_WRAPPER_BODY(fcntl, __openat_2, int, dirfd, path, flags);
}

int openat64(int dirfd, const char* path, int flags, ...) {
    mode_t mode = 0;

    if (flags & O_CREAT || flags & O_TMPFILE) {
        va_list varargs;
        va_start(varargs, flags);
        mode = va_arg(varargs, int);
        va_end(varargs);
    }
    GENERATE_WRAPPER_BODY(fcntl, openat64, int, dirfd, path, flags, mode);
}

int openat64_2(int dirfd, const char* path, int flags) {
    GENERATE_WRAPPER_BODY(fcntl, openat64_2, int, dirfd, path, flags);
}

int __openat64_2(int dirfd, const char* path, int flags) {
    GENERATE_WRAPPER_BODY(fcntl, __openat64_2, int, dirfd, path, flags);
}

int creat(const char* path, mode_t mode) {
    GENERATE_WRAPPER_BODY(fcntl, creat, int, path, mode);
}

int creat64(const char* path, mode_t mode) {
    GENERATE_WRAPPER_BODY(fcntl, creat64, int, path, mode);
}

FILE* fopen64(const char* path, const char* mode) {
    GENERATE_WRAPPER_BODY(fcntl, fopen64, FILE*, path, mode);
}
