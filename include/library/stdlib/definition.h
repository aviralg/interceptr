#ifndef INTERCEPTR_LIBRARY_STDLIB_DEFINITION_H
#define INTERCEPTR_LIBRARY_STDLIB_DEFINITION_H

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

typedef struct stdlib_t {
    interceptr_wrapper_putenv_t putenv;
    interceptr_wrapper_getenv_t getenv;
    interceptr_wrapper_secure_getenv_t secure_getenv;
    interceptr_wrapper_clearenv_t clearenv;
    interceptr_wrapper_setenv_t setenv;
    interceptr_wrapper_unsetenv_t unsetenv;
} stdlib_t;

#endif /* INTERCEPTR_LIBRARY_STDLIB_DEFINITION_H */
