#ifndef INTERCEPTR_WRAPPERS_STDLIB_WRAPPERS_H
#define INTERCEPTR_WRAPPERS_STDLIB_WRAPPERS_H

#include <stdlib.h>

struct interceptr_t;

typedef int (*interceptr_putenv_t)(char* string);
typedef int (*interceptr_wrapper_putenv_t)(struct interceptr_t* interceptr,
                                           interceptr_putenv_t callback,
                                           char* string);

typedef char* (*interceptr_getenv_t)(const char* name);
typedef char* (*interceptr_wrapper_getenv_t)(struct interceptr_t* interceptr,
                                             interceptr_getenv_t callback,
                                             const char* name);

typedef char* (*interceptr_secure_getenv_t)(const char* name);
typedef char* (*interceptr_wrapper_secure_getenv_t)(
    struct interceptr_t* interceptr,
    interceptr_secure_getenv_t callback,
    const char* name);

typedef int (*interceptr_clearenv_t)(void);
typedef int (*interceptr_wrapper_clearenv_t)(struct interceptr_t* interceptr,
                                             interceptr_clearenv_t callback);

typedef int (*interceptr_setenv_t)(const char* name,
                                   const char* value,
                                   int overwrite);
typedef int (*interceptr_wrapper_setenv_t)(struct interceptr_t* interceptr,
                                           interceptr_setenv_t callback,
                                           const char* name,
                                           const char* value,
                                           int overwrite);

typedef int (*interceptr_unsetenv_t)(const char* name);
typedef int (*interceptr_wrapper_unsetenv_t)(struct interceptr_t* interceptr,
                                             interceptr_unsetenv_t callback,
                                             const char* name);

#endif /* INTERCEPTR_WRAPPERS_STDLIB_WRAPPERS_H */
