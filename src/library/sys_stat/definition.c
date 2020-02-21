/* https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html */
#include "generator/definition.h"
//
#include "library/sys_stat/initialization.h"
#include "library/sys_stat/definition.h"

static interceptr_stat_t real_stat = NULL;
static interceptr___xstat_t real___xstat = NULL;
static interceptr_stat64_t real_stat64 = NULL;
static interceptr___xstat64_t real___xstat64 = NULL;

static interceptr_fstat_t real_fstat = NULL;
static interceptr_fstatat_t real_fstatat = NULL;
static interceptr_lstat_t real_lstat = NULL;
static interceptr_chmod_t real_chmod = NULL;
static interceptr_fchmod_t real_fchmod = NULL;
static interceptr_fchmodat_t real_fchmodat = NULL;
static interceptr_mkdir_t real_mkdir = NULL;
static interceptr_mkdirat_t real_mkdirat = NULL;
static interceptr_mknod_t real_mknod = NULL;
static interceptr_mknodat_t real_mknodat = NULL;
static interceptr_mkfifo_t real_mkfifo = NULL;
static interceptr_mkfifoat_t real_mkfifoat = NULL;
static interceptr_utimensat_t real_utimensat = NULL;
static interceptr_futimens_t real_futimens = NULL;
static interceptr_umask_t real_umask = NULL;

void initialize_sys_stat_wrappers() {
    real_stat = DLSYM_NEXT_FUNCTION(stat);
    real___xstat = DLSYM_NEXT_FUNCTION(__xstat);
    real_stat64 = DLSYM_NEXT_FUNCTION(stat64);
    real___xstat64 = DLSYM_NEXT_FUNCTION(__xstat64);

    real_fstat = DLSYM_NEXT_FUNCTION(fstat);
    real_fstatat = DLSYM_NEXT_FUNCTION(fstatat);
    real_lstat = DLSYM_NEXT_FUNCTION(lstat);
    real_chmod = DLSYM_NEXT_FUNCTION(chmod);
    real_fchmod = DLSYM_NEXT_FUNCTION(fchmod);
    real_fchmodat = DLSYM_NEXT_FUNCTION(fchmodat);
    real_mkdir = DLSYM_NEXT_FUNCTION(mkdir);
    real_mkdirat = DLSYM_NEXT_FUNCTION(mkdirat);
    real_mknod = DLSYM_NEXT_FUNCTION(mknod);
    real_mknodat = DLSYM_NEXT_FUNCTION(mknodat);
    real_mkfifo = DLSYM_NEXT_FUNCTION(mkfifo);
    real_mkfifoat = DLSYM_NEXT_FUNCTION(mkfifoat);
    real_utimensat = DLSYM_NEXT_FUNCTION(utimensat);
    real_futimens = DLSYM_NEXT_FUNCTION(futimens);
    real_umask = DLSYM_NEXT_FUNCTION(umask);
}

int stat(const char* path, struct stat* buf) {
    GENERATE_WRAPPER_BODY(sys_stat, stat, int, path, buf);
}

int __xstat(int version, const char* path, struct stat* buf) {
    GENERATE_WRAPPER_BODY(sys_stat, __xstat, int, version, path, buf);
}

int stat64(const char* path, struct stat64* buf) {
    GENERATE_WRAPPER_BODY(sys_stat, stat64, int, path, buf);
}

int __xstat64(int version, const char* path, struct stat64* buf) {
    GENERATE_WRAPPER_BODY(sys_stat, __xstat64, int, version, path, buf);
}

int fstat(int fd, struct stat* buf) {
    GENERATE_WRAPPER_BODY(sys_stat, fstat, int, fd, buf);
}

int fstatat(int dirfd, const char* pathname, struct stat* buf, int flags) {
    GENERATE_WRAPPER_BODY(sys_stat, fstatat, int, dirfd, pathname, buf, flags);
}

int lstat(const char* path, struct stat* buf) {
    GENERATE_WRAPPER_BODY(sys_stat, lstat, int, path, buf);
}

int chmod(const char* path, mode_t mode) {
    GENERATE_WRAPPER_BODY(sys_stat, chmod, int, path, mode);
}

int fchmod(int fd, mode_t mode) {
    GENERATE_WRAPPER_BODY(sys_stat, fchmod, int, fd, mode);
}

int fchmodat(int dirfd, const char* pathname, mode_t mode, int flags) {
    GENERATE_WRAPPER_BODY(sys_stat, fchmodat, int, dirfd, pathname, mode, flags);
}

int mkdir(const char* pathname, mode_t mode) {
    GENERATE_WRAPPER_BODY(sys_stat, mkdir, int, pathname, mode);
}

int mkdirat(int dirfd, const char* pathname, mode_t mode) {
    GENERATE_WRAPPER_BODY(sys_stat, mkdirat, int, dirfd, pathname, mode);
}

int mknod(const char* pathname, mode_t mode, dev_t dev) {
    GENERATE_WRAPPER_BODY(sys_stat, mknod, int, pathname, mode, dev);
}

int mknodat(int dirfd, const char* pathname, mode_t mode, dev_t dev) {
    GENERATE_WRAPPER_BODY(sys_stat, mknodat, int, dirfd, pathname, mode, dev);
}

int mkfifo(const char* pathname, mode_t mode) {
    GENERATE_WRAPPER_BODY(sys_stat, mkfifo, int, pathname, mode);
}

int mkfifoat(int dirfd, const char* pathname, mode_t mode) {
    GENERATE_WRAPPER_BODY(sys_stat, mkfifoat, int, dirfd, pathname, mode);
}

int utimensat(int dirfd,
              const char* pathname,
              const struct timespec times[2],
              int flags) {
    GENERATE_WRAPPER_BODY(
        sys_stat, utimensat, int, dirfd, pathname, times, flags);
}

int futimens(int fd, const struct timespec times[2]) {
    GENERATE_WRAPPER_BODY(sys_stat, futimens, int, fd, times);
}

mode_t umask(mode_t cmask) {
    GENERATE_WRAPPER_BODY(sys_stat, umask, mode_t, cmask);
}
