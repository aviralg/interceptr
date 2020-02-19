#ifndef INTERCEPTR_GENERATOR_INTERFACE_H
#define INTERCEPTR_GENERATOR_INTERFACE_H

struct interceptr_t;

#define INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(libname, funname) \
    interceptr_wrapper_##funname##_t                                     \
        interceptr_get_wrapper_##libname##_##funname(                    \
            struct interceptr_t* interceptr) __attribute__((weak));

#define INTERCEPTR_GENERATE_WRAPPER_GETTER_DEFINITION(libname, funname) \
    interceptr_wrapper_##funname##_t                                    \
        interceptr_get_wrapper_##libname##_##funname(                   \
            struct interceptr_t* interceptr) {                          \
        return interceptr->definition.libname.funname;                  \
    }

#define INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(        \
    libname, funname, interceptr)                                   \
    (interceptr_get_wrapper_##libname##_##funname                   \
         ? interceptr_get_wrapper_##libname##_##funname(interceptr) \
         : NULL)

#define INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(libname, funname) \
    struct interceptr_t* interceptr_set_wrapper_##libname##_##funname(   \
        struct interceptr_t* interceptr,                                 \
        interceptr_wrapper_##funname##_t funname) __attribute__((weak));

#define INTERCEPTR_GENERATE_WRAPPER_SETTER_DEFINITION(libname, funname) \
    struct interceptr_t* interceptr_set_wrapper_##libname##_##funname(  \
        struct interceptr_t* interceptr,                                \
        interceptr_wrapper_##funname##_t funname) {                     \
        interceptr->definition.libname.funname = funname;               \
        return interceptr;                                              \
    }

#define INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                 \
    libname, funname, interceptr)                                            \
    (interceptr_set_wrapper_##libname##_##funname                            \
         ? interceptr_set_wrapper_##libname##_##funname(interceptr, funname) \
         : NULL)

#endif /* INTERCEPTR_GENERATOR_INTERFACE_H */
