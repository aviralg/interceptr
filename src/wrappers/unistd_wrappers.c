#include "initialization/unistd_wrappers.h"
#include "utilities.h"
#include "wrappers/unistd_wrappers.h"

static interceptr_write_t real_write = NULL;
static interceptr_read_t real_read = NULL;

void initialize_unistd_wrappers() {
    real_write = DLSYM_NEXT_FUNCTION(write);
    real_read = DLSYM_NEXT_FUNCTION(read);
}

ssize_t write(int fd, const void* buf, size_t count) {
    GENERATE_WRAPPER_BODY(unistd, write, ssize_t, fd, buf, count);
}

ssize_t read(int fd, void* buf, size_t count) {
    GENERATE_WRAPPER_BODY(unistd, read, ssize_t, fd, buf, count);
}
