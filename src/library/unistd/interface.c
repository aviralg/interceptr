#include "library/unistd/interface.h"
#include "definition.h"

#undef interceptr_get_wrapper_unistd_write
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(unistd, write)

#undef interceptr_set_wrapper_unistd_write
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(unistd, write)

/******************************************************************************/

#undef interceptr_get_wrapper_unistd_read
INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(unistd, read)

#undef interceptr_set_wrapper_unistd_read
INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(unistd, read)

