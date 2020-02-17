#ifndef INTERCEPTR_WRAPPERS_UNISTD_WRAPPERS_H
#define INTERCEPTR_WRAPPERS_UNISTD_WRAPPERS_H

#include <unistd.h>

struct interceptr_t;

typedef ssize_t (*interceptr_write_t)(int fd, const void* buf, size_t count);
typedef ssize_t (*interceptr_wrapper_write_t)(struct interceptr_t* interceptr,
                                              interceptr_write_t callback,
                                              int fd,
                                              const void* buf,
                                              size_t count);

typedef ssize_t (*interceptr_read_t)(int fd, void* buf, size_t count);
typedef ssize_t (*interceptr_wrapper_read_t)(struct interceptr_t* interceptr,
                                             interceptr_read_t callback,
                                             int fd,
                                             void* buf,
                                             size_t count);

#endif /* #ifndef INTERCEPTR_WRAPPERS_UNISTD_WRAPPERS_H */
