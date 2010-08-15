AC_INIT([CPP File System], [0.0.1])
AM_INIT_AUTOMAKE
AM_PROG_LIBTOOL
AC_PROG_INSTALL
AC_PROG_CXX

AC_LANG_CPLUSPLUS
AC_CHECK_LIB(linkedlist, liblinkedlist, ,AC_MSG_ERROR(The filesystem lib requires the linkedlist lib.))

AC_OUTPUT(Makefile src/Makefile)
