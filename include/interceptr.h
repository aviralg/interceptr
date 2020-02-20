#ifndef INTERCEPTR_INTERCEPTR_H
#define INTERCEPTR_INTERCEPTR_H

#include "definition.h"

struct interceptr_t* interceptr_create_interceptr() __attribute__((weak));

#define interceptr_create_interceptr() \
    (interceptr_create_interceptr ? interceptr_create_interceptr() : NULL)

void interceptr_destroy_interceptr(struct interceptr_t* interceptr)
    __attribute__((weak));

#define interceptr_destroy_interceptr(interceptr)  \
    if (interceptr_destroy_interceptr) {           \
        interceptr_destroy_interceptr(interceptr); \
    }

struct interceptr_t*
interceptr_set_interceptr_state(struct interceptr_t* interceptr, void* state)
    __attribute__((weak));

#define interceptr_set_interceptr_state(interceptr, state)    \
    (interceptr_set_interceptr_state                          \
         ? interceptr_set_interceptr_state(interceptr, state) \
         : NULL)

void* interceptr_get_interceptr_state(struct interceptr_t* interceptr)
    __attribute__((weak));

#define interceptr_get_interceptr_state(interceptr)    \
    (interceptr_get_interceptr_state                   \
         ? interceptr_get_interceptr_state(interceptr) \
         : NULL)

void interceptr_set_interceptr(struct interceptr_t* interceptr)
    __attribute__((weak));

#define interceptr_set_interceptr(interceptr)  \
    if (interceptr_set_interceptr) {           \
        interceptr_set_interceptr(interceptr); \
    }

struct interceptr_t* interceptr_get_interceptr() __attribute__((weak));

#define interceptr_get_interceptr() \
    (interceptr_get_interceptr ? interceptr_get_interceptr() : NULL)

void interceptr_enable() __attribute__((weak));

#define interceptr_enable()  \
    if (interceptr_enable) { \
        interceptr_enable(); \
    }

void interceptr_disable() __attribute__((weak));

#define interceptr_disable()  \
    if (interceptr_disable) { \
        interceptr_disable(); \
    }

int interceptr_is_enabled() __attribute__((weak));

#define interceptr_is_enabled() \
    (interceptr_is_enabled ? interceptr_is_enabled() : 0)

const char* interceptr_get_version() __attribute__((weak));

#define interceptr_get_version() \
    (interceptr_get_version ? interceptr_get_version() : "")

int interceptr_wrapper_is_active() __attribute__((weak));

#define interceptr_wrapper_is_active() \
    (interceptr_wrapper_is_active ? interceptr_wrapper_is_active() : 0)

void interceptr_set_active_wrapper(const char* wrapper_name)
    __attribute__((weak));

#define interceptr_set_active_wrapper()  \
    if (interceptr_set_active_wrapper) { \
        interceptr_set_active_wrapper(); \
    }

void interceptr_unset_active_wrapper() __attribute__((weak));

#define interceptr_unset_active_wrapper()  \
    if (interceptr_unset_active_wrapper) { \
        interceptr_unset_active_wrapper(); \
    }

#endif /* INTERCEPTR_INTERCEPTR_H */
