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

static interceptr_t* interceptr_active_interceptr = NULL;
static int interceptr_intercept = 0;
static const char* interceptr_active_wrapper = NULL;

void interceptr_set_interceptr(interceptr_t* interceptr) {
    interceptr_active_interceptr = interceptr;
}

interceptr_t* interceptr_get_interceptr() {
    return interceptr_active_interceptr;
}

void interceptr_enable() {
    interceptr_intercept = 1;
}

void interceptr_disable() {
    interceptr_intercept = 0;
}

int interceptr_is_enabled() {
    return interceptr_intercept;
}

const char* interceptr_get_version() {
    return GIT_COMMIT_INFO;
}

int interceptr_wrapper_is_active() {
    return interceptr_active_wrapper != NULL;
}

void interceptr_set_active_wrapper(const char* wrapper_name) {
    interceptr_active_wrapper = wrapper_name;
}

void interceptr_unset_active_wrapper() {
    interceptr_active_wrapper = NULL;
}
