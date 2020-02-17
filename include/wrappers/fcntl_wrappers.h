#ifndef INTERCEPTR_WRAPPERS_FCNTL_WRAPPERS_H
#define INTERCEPTR_WRAPPERS_FCNTL_WRAPPERS_H

#define _GNU_SOURCE
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

struct interceptr_t;

typedef int (*interceptr_open_t)(const char* path, int flags, ...);
typedef int (*interceptr_wrapper_open_t)(struct interceptr_t* interceptr,
                                         interceptr_open_t callback,
                                         const char* path,
                                         int flags,
                                         mode_t mode);

typedef int (*interceptr___open_2_t)(const char* path, int flags);
typedef int (*interceptr_wrapper___open_2_t)(struct interceptr_t* interceptr,
                                             interceptr___open_2_t callback,
                                             const char* path,
                                             int flags);

typedef int (*interceptr_open64_t)(const char* path, int flags, ...);
typedef int (*interceptr_wrapper_open64_t)(struct interceptr_t* interceptr,
                                           interceptr_open64_t callback,
                                           const char* path,
                                           int flags,
                                           mode_t mode);

typedef int (*interceptr___open64_2_t)(const char* path, int flags);
typedef int (*interceptr_wrapper___open64_2_t)(struct interceptr_t* interceptr,
                                               interceptr___open64_2_t callback,
                                               const char* path,
                                               int flags);

typedef int (*interceptr_openat_t)(int dirfd, const char* path, int flags, ...);
typedef int (*interceptr_wrapper_openat_t)(struct interceptr_t* interceptr,
                                           interceptr_openat_t callback,
                                           int dirfd,
                                           const char* path,
                                           int flags,
                                           mode_t mode);

typedef int (*interceptr_openat_2_t)(int dirfd, const char* path, int flags);
typedef int (*interceptr_wrapper_openat_2_t)(struct interceptr_t* interceptr,
                                             interceptr_openat_2_t callback,
                                             int dirfd,
                                             const char* path,
                                             int flags);

typedef int (*interceptr___openat_2_t)(int dirfd, const char* path, int flags);
typedef int (*interceptr_wrapper___openat_2_t)(struct interceptr_t* interceptr,
                                               interceptr___openat_2_t callback,
                                               int dirfd,
                                               const char* path,
                                               int flags);

typedef int (*interceptr_openat64_t)(int dirfd,
                                     const char* path,
                                     int flags,
                                     ...);
typedef int (*interceptr_wrapper_openat64_t)(struct interceptr_t* interceptr,
                                             interceptr_openat64_t callback,
                                             int dirfd,
                                             const char* path,
                                             int flags,
                                             mode_t mode);

typedef int (*interceptr_openat64_2_t)(int dirfd, const char* path, int flags);
typedef int (*interceptr_wrapper_openat64_2_t)(struct interceptr_t* interceptr,
                                               interceptr_openat64_2_t callback,
                                               int dirfd,
                                               const char* path,
                                               int flags);

typedef int (*interceptr___openat64_2_t)(int dirfd,
                                         const char* path,
                                         int flags);
typedef int (*interceptr_wrapper___openat64_2_t)(
    struct interceptr_t* interceptr,
    interceptr___openat64_2_t callback,
    int dirfd,
    const char* path,
    int flags);

typedef int (*interceptr_creat_t)(const char* path, mode_t mode);
typedef int (*interceptr_wrapper_creat_t)(struct interceptr_t* interceptr,
                                          interceptr_creat_t callback,
                                          const char* path,
                                          mode_t mode);

typedef int (*interceptr_creat64_t)(const char* path, mode_t mode);
typedef int (*interceptr_wrapper_creat64_t)(struct interceptr_t* interceptr,
                                            interceptr_creat64_t callback,
                                            const char* path,
                                            mode_t mode);

typedef FILE* (*interceptr_fopen64_t)(const char* path, const char* mode);
typedef FILE* (*interceptr_wrapper_fopen64_t)(struct interceptr_t* interceptr,
                                              interceptr_fopen64_t callback,
                                              const char* path,
                                              const char* mode);

#endif /* INTERCEPTR_WRAPPERS_FCNTL_WRAPPERS_H */
