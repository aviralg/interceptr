#ifndef INTERCEPTR_LIBRARY_SYS_STAT_DEFINITION_H
#define INTERCEPTR_LIBRARY_SYS_STAT_DEFINITION_H

#include <sys/stat.h>

struct interceptr_t;

typedef int (*interceptr_stat_t)(const char* path, struct stat* buf);
typedef int (*interceptr_wrapper_stat_t)(struct interceptr_t* interceptr,
                                         interceptr_stat_t callback,
                                         const char* path,
                                         struct stat* buf);

typedef int (*interceptr___xstat_t)(int version,
                                    const char* path,
                                    struct stat* buf);
typedef int (*interceptr_wrapper___xstat_t)(struct interceptr_t* interceptr,
                                            interceptr___xstat_t callback,
                                            int version,
                                            const char* path,
                                            struct stat* buf);

typedef int (*interceptr_stat64_t)(const char* path, struct stat64* buf);
typedef int (*interceptr_wrapper_stat64_t)(struct interceptr_t* interceptr,
                                           interceptr_stat64_t callback,
                                           const char* path,
                                           struct stat64* buf);

typedef int (*interceptr___xstat64_t)(int version,
                                      const char* path,
                                      struct stat64* buf);
typedef int (*interceptr_wrapper___xstat64_t)(struct interceptr_t* interceptr,
                                              interceptr___xstat64_t callback,
                                              int version,
                                              const char* path,
                                              struct stat64* buf);

typedef int (*interceptr_fstat_t)(int fd, struct stat* buf);
typedef int (*interceptr_wrapper_fstat_t)(struct interceptr_t* interceptr,
                                          interceptr_fstat_t callback,
                                          int fd,
                                          struct stat* buf);

typedef int (*interceptr___fxstat_t)(int version, int fd, struct stat* buf);
typedef int (*interceptr_wrapper___fxstat_t)(struct interceptr_t* interceptr,
                                             interceptr___fxstat_t callback,
                                             int version,
                                             int fd,
                                             struct stat* buf);

typedef int (*interceptr_fstat64_t)(int fd, struct stat64* buf);
typedef int (*interceptr_wrapper_fstat64_t)(struct interceptr_t* interceptr,
                                            interceptr_fstat64_t callback,
                                            int fd,
                                            struct stat64* buf);

typedef int (*interceptr___fxstat64_t)(int version, int fd, struct stat64* buf);
typedef int (*interceptr_wrapper___fxstat64_t)(struct interceptr_t* interceptr,
                                               interceptr___fxstat64_t callback,
                                               int version,
                                               int fd,
                                               struct stat64* buf);

typedef int (*interceptr_fstatat_t)(int dirfd,
                                    const char* pathname,
                                    struct stat* buf,
                                    int flags);
typedef int (*interceptr_wrapper_fstatat_t)(struct interceptr_t* interceptr,
                                            interceptr_fstatat_t callback,
                                            int dirfd,
                                            const char* pathname,
                                            struct stat* buf,
                                            int flags);

typedef int (*interceptr_lstat_t)(const char* path, struct stat* buf);
typedef int (*interceptr_wrapper_lstat_t)(struct interceptr_t* interceptr,
                                          interceptr_lstat_t callback,
                                          const char* path,
                                          struct stat* buf);

typedef int (*interceptr___lxstat_t)(int version,
                                     const char* path,
                                     struct stat* buf);
typedef int (*interceptr_wrapper___lxstat_t)(struct interceptr_t* interceptr,
                                             interceptr___lxstat_t callback,
                                             int version,
                                             const char* path,
                                             struct stat* buf);

typedef int (*interceptr_lstat64_t)(const char* path, struct stat64* buf);
typedef int (*interceptr_wrapper_lstat64_t)(struct interceptr_t* interceptr,
                                            interceptr_lstat64_t callback,
                                            const char* path,
                                            struct stat64* buf);

typedef int (*interceptr___lxstat64_t)(int version,
                                       const char* path,
                                       struct stat64* buf);
typedef int (*interceptr_wrapper___lxstat64_t)(struct interceptr_t* interceptr,
                                               interceptr___lxstat64_t callback,
                                               int version,
                                               const char* path,
                                               struct stat64* buf);

typedef int (*interceptr_chmod_t)(const char* path, mode_t mode);
typedef int (*interceptr_wrapper_chmod_t)(struct interceptr_t* interceptr,
                                          interceptr_chmod_t callback,
                                          const char* path,
                                          mode_t mode);

typedef int (*interceptr_fchmod_t)(int fd, mode_t mode);
typedef int (*interceptr_wrapper_fchmod_t)(struct interceptr_t* interceptr,
                                           interceptr_fchmod_t callback,
                                           int fd,
                                           mode_t mode);

typedef int (*interceptr_fchmodat_t)(int dirfd,
                                     const char* pathname,
                                     mode_t mode,
                                     int flags);
typedef int (*interceptr_wrapper_fchmodat_t)(struct interceptr_t* interceptr,
                                             interceptr_fchmodat_t callback,
                                             int dirfd,
                                             const char* pathname,
                                             mode_t mode,
                                             int flags);

typedef int (*interceptr_mkdir_t)(const char* pathname, mode_t mode);
typedef int (*interceptr_wrapper_mkdir_t)(struct interceptr_t* interceptr,
                                          interceptr_mkdir_t callback,
                                          const char* pathname,
                                          mode_t mode);

typedef int (*interceptr_mkdirat_t)(int dirfd,
                                    const char* pathname,
                                    mode_t mode);
typedef int (*interceptr_wrapper_mkdirat_t)(struct interceptr_t* interceptr,
                                            interceptr_mkdirat_t callback,
                                            int dirfd,
                                            const char* pathname,
                                            mode_t mode);

typedef int (*interceptr_mknod_t)(const char* pathname, mode_t mode, dev_t dev);
typedef int (*interceptr_wrapper_mknod_t)(struct interceptr_t* interceptr,
                                          interceptr_mknod_t callback,
                                          const char* pathname,
                                          mode_t mode,
                                          dev_t dev);

typedef int (*interceptr_mknodat_t)(int dirfd,
                                    const char* pathname,
                                    mode_t mode,
                                    dev_t dev);
typedef int (*interceptr_wrapper_mknodat_t)(struct interceptr_t* interceptr,
                                            interceptr_mknodat_t callback,
                                            int dirfd,
                                            const char* pathname,
                                            mode_t mode,
                                            dev_t dev);

typedef int (*interceptr_mkfifo_t)(const char* pathname, mode_t mode);
typedef int (*interceptr_wrapper_mkfifo_t)(struct interceptr_t* interceptr,
                                           interceptr_mkfifo_t callback,
                                           const char* pathname,
                                           mode_t mode);

typedef int (*interceptr_mkfifoat_t)(int dirfd,
                                     const char* pathname,
                                     mode_t mode);
typedef int (*interceptr_wrapper_mkfifoat_t)(struct interceptr_t* interceptr,
                                             interceptr_mkfifoat_t callback,
                                             int dirfd,
                                             const char* pathname,
                                             mode_t mode);

typedef int (*interceptr_utimensat_t)(int dirfd,
                                      const char* pathname,
                                      const struct timespec times[2],
                                      int flags);
typedef int (*interceptr_wrapper_utimensat_t)(struct interceptr_t* interceptr,
                                              interceptr_utimensat_t callback,
                                              int dirfd,
                                              const char* pathname,
                                              const struct timespec times[2],
                                              int flags);

typedef int (*interceptr_futimens_t)(int fd, const struct timespec times[2]);
typedef int (*interceptr_wrapper_futimens_t)(struct interceptr_t* interceptr,
                                             interceptr_futimens_t callback,
                                             int fd,
                                             const struct timespec times[2]);

typedef mode_t (*interceptr_umask_t)(mode_t cmask);
typedef mode_t (*interceptr_wrapper_umask_t)(struct interceptr_t* interceptr,
                                             interceptr_umask_t callback,
                                             mode_t cmask);

typedef struct sys_stat_t {
    interceptr_wrapper_stat_t stat;
    interceptr_wrapper___xstat_t __xstat;
    interceptr_wrapper_stat64_t stat64;
    interceptr_wrapper___xstat64_t __xstat64;

    interceptr_wrapper_fstat_t fstat;
    interceptr_wrapper___fxstat_t __fxstat;
    interceptr_wrapper_fstat64_t fstat64;
    interceptr_wrapper___fxstat64_t __fxstat64;

    interceptr_wrapper_fstatat_t fstatat;

    interceptr_wrapper_lstat_t lstat;
    interceptr_wrapper___lxstat_t __lxstat;
    interceptr_wrapper_lstat64_t lstat64;
    interceptr_wrapper___lxstat64_t __lxstat64;

    interceptr_wrapper_chmod_t chmod;
    interceptr_wrapper_fchmod_t fchmod;
    interceptr_wrapper_fchmodat_t fchmodat;
    interceptr_wrapper_mkdir_t mkdir;
    interceptr_wrapper_mkdirat_t mkdirat;
    interceptr_wrapper_mknod_t mknod;
    interceptr_wrapper_mknodat_t mknodat;
    interceptr_wrapper_mkfifo_t mkfifo;
    interceptr_wrapper_mkfifoat_t mkfifoat;
    interceptr_wrapper_utimensat_t utimensat;
    interceptr_wrapper_futimens_t futimens;
    interceptr_wrapper_umask_t umask;
} sys_stat_t;

#endif /* INTERCEPTR_LIBRARY_SYS_STAT_DEFINITION_H */
