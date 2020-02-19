#include "generator/definition.h"
//
#include "library/stdlib/initialization.h"
#include "library/stdlib/definition.h"

static interceptr_putenv_t real_putenv = NULL;
static interceptr_getenv_t real_getenv = NULL;
static interceptr_secure_getenv_t real_secure_getenv = NULL;
static interceptr_clearenv_t real_clearenv = NULL;
static interceptr_setenv_t real_setenv = NULL;
static interceptr_unsetenv_t real_unsetenv = NULL;

void initialize_stdlib_wrappers() {
    real_putenv = DLSYM_NEXT_FUNCTION(putenv);
    real_getenv = DLSYM_NEXT_FUNCTION(getenv);
    real_secure_getenv = DLSYM_NEXT_FUNCTION(secure_getenv);
    real_clearenv = DLSYM_NEXT_FUNCTION(clearenv);
    real_setenv = DLSYM_NEXT_FUNCTION(setenv);
    real_unsetenv = DLSYM_NEXT_FUNCTION(unsetenv);
}

int putenv(char* string) {
    GENERATE_WRAPPER_BODY(stdlib, putenv, int, string);
}


char* getenv(const char* name) {
    GENERATE_WRAPPER_BODY(stdlib, getenv, char*, name);
}


char* secure_getenv(const char* name) {
    GENERATE_WRAPPER_BODY(stdlib, secure_getenv, char*, name);
}


int clearenv(void) {
    GENERATE_WRAPPER_BODY(stdlib, clearenv, int);
}


int setenv(const char* name, const char* value, int overwrite) {
    GENERATE_WRAPPER_BODY(stdlib, setenv, int, name, value, overwrite);
}


int unsetenv(const char* name) {
    GENERATE_WRAPPER_BODY(stdlib, unsetenv, int, name);
}

