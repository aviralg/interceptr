#include "interceptr.h"

#include "definition.h"

static struct interceptr_t* interceptr_active_interceptr = NULL;
static int interceptr_intercept = 0;
static const char* interceptr_active_wrapper = NULL;

#undef interceptr_create_interceptr
struct interceptr_t* interceptr_create_interceptr() {
    return (struct interceptr_t*) calloc(1, sizeof(interceptr_t));
}

#undef interceptr_destroy_interceptr
void interceptr_destroy_interceptr(struct interceptr_t* interceptr) {
    free(interceptr);
}

#undef interceptr_get_interceptr
struct interceptr_t* interceptr_get_interceptr() {
    return interceptr_active_interceptr;
}

#undef interceptr_set_interceptr
void interceptr_set_interceptr(struct interceptr_t* interceptr) {
    interceptr_active_interceptr = interceptr;
}

#undef interceptr_enable
void interceptr_enable() {
    interceptr_intercept = 1;
}

#undef interceptr_disable
void interceptr_disable() {
    interceptr_intercept = 0;
}

#undef interceptr_is_enabled
int interceptr_is_enabled() {
    return interceptr_intercept;
}

#undef interceptr_get_version
const char* interceptr_get_version() {
    return GIT_COMMIT_INFO;
}

#undef interceptr_wrapper_is_active
int interceptr_wrapper_is_active() {
    return interceptr_active_wrapper != NULL;
}

#undef interceptr_set_active_wrapper
void interceptr_set_active_wrapper(const char* wrapper_name) {
    interceptr_active_wrapper = wrapper_name;
}

#undef interceptr_unset_active_wrapper
void interceptr_unset_active_wrapper() {
    interceptr_active_wrapper = NULL;
}
