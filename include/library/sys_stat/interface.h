#ifndef INTERCEPTR_LIBRARY_SYS_STAT_INTERFACE_H
#define INTERCEPTR_LIBRARY_SYS_STAT_INTERFACE_H

#include "generator/interface.h"
#include "library/sys_stat/definition.h"

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, stat)
#define interceptr_get_wrapper_sys_stat_stat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION( \
        sys_stat, stat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, stat)
#define interceptr_set_wrapper_sys_stat_stat(interceptr, stat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(       \
        sys_stat, stat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, fstat)
#define interceptr_get_wrapper_sys_stat_fstat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        sys_stat, fstat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, fstat)
#define interceptr_set_wrapper_sys_stat_fstat(interceptr, fstat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(         \
        sys_stat, fstat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, fstatat)
#define interceptr_get_wrapper_sys_stat_fstatat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(    \
        sys_stat, fstatat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, fstatat)
#define interceptr_set_wrapper_sys_stat_fstatat(interceptr, fstatat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(             \
        sys_stat, fstatat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, lstat)
#define interceptr_get_wrapper_sys_stat_lstat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        sys_stat, lstat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, lstat)
#define interceptr_set_wrapper_sys_stat_lstat(interceptr, lstat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(         \
        sys_stat, lstat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, chmod)
#define interceptr_get_wrapper_sys_stat_chmod(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        sys_stat, chmod, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, chmod)
#define interceptr_set_wrapper_sys_stat_chmod(interceptr, chmod) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(         \
        sys_stat, chmod, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, fchmod)
#define interceptr_get_wrapper_sys_stat_fchmod(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(   \
        sys_stat, fchmod, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, fchmod)
#define interceptr_set_wrapper_sys_stat_fchmod(interceptr, fchmod) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(           \
        sys_stat, fchmod, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, fchmodat)
#define interceptr_get_wrapper_sys_stat_fchmodat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(     \
        sys_stat, fchmodat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, fchmodat)
#define interceptr_set_wrapper_sys_stat_fchmodat(interceptr, fchmodat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(               \
        sys_stat, fchmodat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, mkdir)
#define interceptr_get_wrapper_sys_stat_mkdir(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        sys_stat, mkdir, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, mkdir)
#define interceptr_set_wrapper_sys_stat_mkdir(interceptr, mkdir) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(         \
        sys_stat, mkdir, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, mkdirat)
#define interceptr_get_wrapper_sys_stat_mkdirat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(    \
        sys_stat, mkdirat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, mkdirat)
#define interceptr_set_wrapper_sys_stat_mkdirat(interceptr, mkdirat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(             \
        sys_stat, mkdirat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, mknod)
#define interceptr_get_wrapper_sys_stat_mknod(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        sys_stat, mknod, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, mknod)
#define interceptr_set_wrapper_sys_stat_mknod(interceptr, mknod) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(         \
        sys_stat, mknod, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, mknodat)
#define interceptr_get_wrapper_sys_stat_mknodat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(    \
        sys_stat, mknodat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, mknodat)
#define interceptr_set_wrapper_sys_stat_mknodat(interceptr, mknodat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(             \
        sys_stat, mknodat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, mkfifo)
#define interceptr_get_wrapper_sys_stat_mkfifo(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(   \
        sys_stat, mkfifo, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, mkfifo)
#define interceptr_set_wrapper_sys_stat_mkfifo(interceptr, mkfifo) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(           \
        sys_stat, mkfifo, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, mkfifoat)
#define interceptr_get_wrapper_sys_stat_mkfifoat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(     \
        sys_stat, mkfifoat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, mkfifoat)
#define interceptr_set_wrapper_sys_stat_mkfifoat(interceptr, mkfifoat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(               \
        sys_stat, mkfifoat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, utimensat)
#define interceptr_get_wrapper_sys_stat_utimensat(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(      \
        sys_stat, utimensat, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, utimensat)
#define interceptr_set_wrapper_sys_stat_utimensat(interceptr, utimensat) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(                 \
        sys_stat, utimensat, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, futimens)
#define interceptr_get_wrapper_sys_stat_futimens(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(     \
        sys_stat, futimens, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, futimens)
#define interceptr_set_wrapper_sys_stat_futimens(interceptr, futimens) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(               \
        sys_stat, futimens, interceptr)

/******************************************************************************/

INTERCEPTR_GENERATE_WRAPPER_GETTER_DECLARATION(sys_stat, umask)
#define interceptr_get_wrapper_sys_stat_umask(interceptr) \
    INTERCEPTR_GENERATE_WRAPPER_GETTER_MACRO_DEFINITION(  \
        sys_stat, umask, interceptr)

INTERCEPTR_GENERATE_WRAPPER_SETTER_DECLARATION(sys_stat, umask)
#define interceptr_set_wrapper_sys_stat_umask(interceptr, umask) \
    INTERCEPTR_GENERATE_WRAPPER_SETTER_MACRO_DEFINITION(         \
        sys_stat, umask, interceptr)

#endif /* INTERCEPTR_LIBRARY_SYS_STAT_INTERFACE_H */