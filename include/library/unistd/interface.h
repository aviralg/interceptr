#ifndef INTERCEPTR_LIBRARY_UNISTD_INTERFACE_H
#define INTERCEPTR_LIBRARY_UNISTD_INTERFACE_H

#include "generator/interface.h"
#include "library/unistd/definition.h"

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(unistd, write)
#define interceptr_get_wrapper_unistd_write(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        unistd, write, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(unistd, write)
#define interceptr_set_wrapper_unistd_write(interceptr, write) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(       \
        unistd, write, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(unistd, read)
#define interceptr_get_wrapper_unistd_read(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        unistd, read, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(unistd, read)
#define interceptr_set_wrapper_unistd_read(interceptr, read) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(     \
        unistd, read, interceptr)

#endif /* INTERCEPTR_LIBRARY_UNISTD_INTERFACE_H */
