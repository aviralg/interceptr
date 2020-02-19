#ifndef INTERCEPTR_DEFINITION_H
#define INTERCEPTR_DEFINITION_H

#include "library/definition.h"

typedef struct interceptr_t {
    struct definition_t definition;
    void* state;
} interceptr_t;

#endif /* INTERCEPTR_DEFINITION_H */
