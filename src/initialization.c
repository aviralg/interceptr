#include "library/initialization.h"
#include <stdlib.h>
#include <string.h>

static int interceptr_wrappers_initialized = 0;

enum interceptr_state_t {
    INTERCEPTR_STATE_DEFAULT,
    INTERCEPTR_STATE_FORCE_ENABLE,
    INTERCEPTR_STATE_FORCE_DISABLE
};

enum interceptr_state_t interceptr_state;

enum interceptr_log_level_t {
    INTERCEPTR_LOG_LEVEL_DEBUG,
    INTERCEPTR_LOG_LEVEL_INFO,
    INTERCEPTR_LOG_LEVEL_WARN,
    INTERCEPTR_LOG_LEVEL_ERROR
};

enum interceptr_log_level_t interceptr_log_level;

void interceptr_initialize_wrappers() {
    if (interceptr_wrappers_initialized) {
        return;
    }
    initialize_fcntl_wrappers();
    initialize_stdio_wrappers();
    initialize_stdlib_wrappers();
    initialize_unistd_wrappers();
    initialize_sys_stat_wrappers();

    const char* value = getenv("INTERCEPTR_STATE");
    if (value == NULL || strcmp(value, "default") == 0) {
        interceptr_state = INTERCEPTR_STATE_DEFAULT;
    } else if (strcmp(value, "force-enable") == 0) {
        interceptr_state = INTERCEPTR_STATE_FORCE_ENABLE;
    } else if (strcmp(value, "force-disable") == 0) {
        interceptr_state = INTERCEPTR_STATE_FORCE_DISABLE;
    }

    value = getenv("INTERCEPTR_LOG_LEVEL");
    if (value == NULL || (strcmp(value, "error") == 0)) {
        interceptr_log_level = INTERCEPTR_LOG_LEVEL_ERROR;
    } else if (strcmp(value, "info") == 0) {
        interceptr_log_level = INTERCEPTR_LOG_LEVEL_INFO;
    } else if (strcmp(value, "warn") == 0) {
        interceptr_log_level = INTERCEPTR_LOG_LEVEL_WARN;
    } else if (strcmp(value, "debug") == 0) {
        interceptr_log_level = INTERCEPTR_LOG_LEVEL_DEBUG;
    }

    interceptr_wrappers_initialized = 1;
}

static void interceptr_construct() __attribute__((constructor));

static void interceptr_construct() {
    interceptr_initialize_wrappers();
}

static void interceptr_destroy() __attribute__((destructor));

static void interceptr_destroy() {
}
