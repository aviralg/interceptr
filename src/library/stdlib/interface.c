#include "library/stdlib/interface.h"
#include "definition.h"

#undef interceptr_get_wrapper_stdlib_putenv
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(stdlib, putenv)
#undef interceptr_set_wrapper_stdlib_putenv
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(stdlib, putenv)

/******************************************************************************/

#undef interceptr_get_wrapper_stdlib_getenv
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(stdlib, getenv)
#undef interceptr_set_wrapper_stdlib_getenv
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(stdlib, getenv)

/******************************************************************************/

#undef interceptr_get_wrapper_stdlib_secure_getenv
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(stdlib, secure_getenv)
#undef interceptr_set_wrapper_stdlib_secure_getenv
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(stdlib, secure_getenv)

/******************************************************************************/

#undef interceptr_get_wrapper_stdlib_clearenv
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(stdlib, clearenv)
#undef interceptr_set_wrapper_stdlib_clearenv
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(stdlib, clearenv)

/******************************************************************************/

#undef interceptr_get_wrapper_stdlib_setenv
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(stdlib, setenv)
#undef interceptr_set_wrapper_stdlib_setenv
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(stdlib, setenv)

/******************************************************************************/

#undef interceptr_get_wrapper_stdlib_unsetenv
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(stdlib, unsetenv)
#undef interceptr_set_wrapper_stdlib_unsetenv
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(stdlib, unsetenv)

