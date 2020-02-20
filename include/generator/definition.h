#ifndef INTERCEPTR_GENERATOR_DEFINITION_H
#define INTERCEPTR_GENERATOR_DEFINITION_H

#define _GNU_SOURCE
#include "initialization.h"
#include "interceptr.h"
#undef interceptr_set_interceptr
#undef interceptr_get_interceptr
#undef interceptr_enable
#undef interceptr_disable
#undef interceptr_is_enabled
#undef interceptr_get_version
#undef interceptr_wrapper_is_active
#undef interceptr_set_active_wrapper
#undef interceptr_unset_active_wrapper

#include "definition.h"

#include <dlfcn.h>
#include <stdarg.h>

#define DLSYM_NEXT_FUNCTION(sym) (interceptr_##sym##_t)(dlsym(RTLD_NEXT, #sym));

#define GENERATE_WRAPPER_BODY(libname, funname, type, ...)            \
    interceptr_initialize_wrappers();                                 \
    type val;                                                         \
    struct interceptr_t* interceptr = interceptr_get_interceptr();    \
    if (interceptr_is_enabled() && !interceptr_wrapper_is_active() && \
        interceptr && interceptr->definition.libname.funname) {       \
        interceptr_set_active_wrapper(#funname);                      \
        val = interceptr->definition.libname.funname(                 \
            interceptr, real_##funname, ##__VA_ARGS__);               \
        interceptr_unset_active_wrapper();                            \
    } else {                                                          \
        val = real_##funname(__VA_ARGS__);                            \
    }                                                                 \
    return val;

#define GENERATE_WRAPPER_BODY_VOID(libname, funname, ...)             \
    interceptr_initialize_wrappers();                                 \
    struct interceptr_t* interceptr = interceptr_get_interceptr();    \
    if (interceptr_is_enabled() && !interceptr_wrapper_is_active() && \
        interceptr && interceptr->definition.libname.funname) {       \
        interceptr_set_active_wrapper(#funname);                      \
        interceptr->definition.libname.funname(                       \
            interceptr, real_##funname, ##__VA_ARGS__);               \
        interceptr_unset_active_wrapper();                            \
    } else {                                                          \
        real_##funname(__VA_ARGS__);                                  \
    }                                                                 \
    return;

#define GENERATE_WRAPPER_BODY_VARARG(libname, funname, type, last, ...) \
    interceptr_initialize_wrappers();                                   \
    struct interceptr_t* interceptr = interceptr_get_interceptr();      \
    type val;                                                           \
    va_list varargs;                                                    \
    va_start(varargs, last);                                            \
    if (interceptr_is_enabled() && !interceptr_wrapper_is_active() &&   \
        interceptr && interceptr->definition.libname.funname) {         \
        interceptr_set_active_wrapper(#funname);                        \
        val = interceptr->definition.libname.funname(                   \
            interceptr, real_v##funname, ##__VA_ARGS__, varargs);       \
        interceptr_unset_active_wrapper();                              \
    } else {                                                            \
        val = real_v##funname(__VA_ARGS__, varargs);                    \
    }                                                                   \
    va_end(varargs);                                                    \
    return val;

#endif /* INTERCEPTR_GENERATOR_DEFINITION_H */
