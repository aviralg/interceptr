#ifndef INTERCEPTR_LIBRARY_FCNTL_INTERFACE_H
#define INTERCEPTR_LIBRARY_FCNTL_INTERFACE_H

#include "generator/interface.h"
#include "library/fcntl/definition.h"

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, open)
#define interceptr_get_wrapper_fcntl_open(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(fcntl, open, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, open)
#define interceptr_set_wrapper_fcntl_open(interceptr, open_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        fcntl, open, interceptr, open_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, __open_2)
#define interceptr_get_wrapper_fcntl___open_2(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        fcntl, __open_2, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, __open_2)
#define interceptr_set_wrapper_fcntl___open_2(interceptr, __open_2_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        fcntl, __open_2, interceptr, __open_2_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, open64)
#define interceptr_get_wrapper_fcntl_open64(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        fcntl, open64, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, open64)
#define interceptr_set_wrapper_fcntl_open64(interceptr, open64_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        fcntl, open64, interceptr, open64_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, __open64_2)
#define interceptr_get_wrapper_fcntl___open64_2(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(    \
        fcntl, __open64_2, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, __open64_2)
#define interceptr_set_wrapper_fcntl___open64_2(interceptr,         \
                                                __open64_2_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        fcntl, __open64_2, interceptr, __open64_2_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, openat)
#define interceptr_get_wrapper_fcntl_openat(interceptr)  \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        fcntl, openat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, openat)
#define interceptr_set_wrapper_fcntl_openat(interceptr, openat_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        fcntl, openat, interceptr, openat_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, openat_2)
#define interceptr_get_wrapper_fcntl_openat_2(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        fcntl, openat_2, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, openat_2)
#define interceptr_set_wrapper_fcntl_openat_2(interceptr, openat_2_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        fcntl, openat_2, interceptr, openat_2_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, __openat_2)
#define interceptr_get_wrapper_fcntl___openat_2(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(    \
        fcntl, __openat_2, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, __openat_2)
#define interceptr_set_wrapper_fcntl___openat_2(interceptr,         \
                                                __openat_2_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        fcntl, __openat_2, interceptr, __openat_2_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, openat64)
#define interceptr_get_wrapper_fcntl_openat64(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        fcntl, openat64, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, openat64)
#define interceptr_set_wrapper_fcntl_openat64(interceptr, openat64_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                    \
        fcntl, openat64, interceptr, openat64_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, openat64_2)
#define interceptr_get_wrapper_fcntl_openat64_2(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(    \
        fcntl, openat64_2, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, openat64_2)
#define interceptr_set_wrapper_fcntl_openat64_2(interceptr,         \
                                                openat64_2_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(            \
        fcntl, openat64_2, interceptr, openat64_2_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, __openat64_2)
#define interceptr_get_wrapper_fcntl___openat64_2(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(      \
        fcntl, __openat64_2, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, __openat64_2)
#define interceptr_set_wrapper_fcntl___openat64_2(interceptr,           \
                                                  __openat64_2_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                \
        fcntl, __openat64_2, interceptr, __openat64_2_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, creat)
#define interceptr_get_wrapper_fcntl_creat(interceptr)   \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        fcntl, creat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, creat)
#define interceptr_set_wrapper_fcntl_creat(interceptr, creat_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(              \
        fcntl, creat, interceptr, creat_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, creat64)
#define interceptr_get_wrapper_fcntl_creat64(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        fcntl, creat64, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, creat64)
#define interceptr_set_wrapper_fcntl_creat64(interceptr, creat64_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        fcntl, creat64, interceptr, creat64_wrapper)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(fcntl, fopen64)
#define interceptr_get_wrapper_fcntl_fopen64(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        fcntl, fopen64, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(fcntl, fopen64)
#define interceptr_set_wrapper_fcntl_fopen64(interceptr, fopen64_wrapper) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                  \
        fcntl, fopen64, interceptr, fopen64_wrapper)

#endif /* INTERCEPTR_LIBRARY_FCNTL_INTERFACE_H */
