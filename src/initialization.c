#include "library/initialization.h"

static int interceptr_wrappers_initialized = 0;

void interceptr_initialize_wrappers() {
    if (interceptr_wrappers_initialized) {
        return;
    }
    initialize_fcntl_wrappers();
    initialize_stdio_wrappers();
    initialize_stdlib_wrappers();
    initialize_unistd_wrappers();
    initialize_sys_stat_wrappers();
    interceptr_wrappers_initialized = 1;
}

static void interceptr_construct() __attribute__((constructor));

static void interceptr_construct() {
    interceptr_initialize_wrappers();
}

static void interceptr_destroy() __attribute__((destructor));

static void interceptr_destroy() {
}
