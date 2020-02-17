#ifndef INTERCEPTR_WRAPPERS_SYS_STAT_WRAPPERS_H
#define INTERCEPTR_WRAPPERS_SYS_STAT_WRAPPERS_H

#include <sys/stat.h>

struct interceptr_t;

typedef int (*interceptr_stat_t)(const char* path, struct stat* buf);
typedef int (*interceptr_wrapper_stat_t)(struct interceptr_t* interceptr,
                                         interceptr_stat_t callback,
                                         const char* path,
                                         struct stat* buf);

typedef int (*interceptr_fstat_t)(int fd, struct stat* buf);
typedef int (*interceptr_wrapper_fstat_t)(struct interceptr_t* interceptr,
                                          interceptr_fstat_t callback,
                                          int fd,
                                          struct stat* buf);

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

#endif /* INTERCEPTR_WRAPPERS_SYS_STAT_WRAPPERS_H */
