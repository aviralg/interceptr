#ifndef INTERCEPTR_LIBRARY_DEFINITION_H
#define INTERCEPTR_LIBRARY_DEFINITION_H

#include "library/fcntl/definition.h"
#include "library/stdio/definition.h"
#include "library/stdlib/definition.h"
#include "library/sys_stat/definition.h"
#include "library/unistd/definition.h"

typedef struct definition_t {
    struct fcntl_t fcntl;
    struct unistd_t unistd;
    struct stdlib_t stdlib;
    struct stdio_t stdio;
    struct sys_stat_t sys_stat;
} definition_t;

#endif /* INTERCEPTR_LIBRARY_DEFINITION_H */
