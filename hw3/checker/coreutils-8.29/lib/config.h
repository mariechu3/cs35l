/* lib/config.h.  Generated from config.hin by configure.  */
/* lib/config.hin.  Generated from configure.ac by autoheader.  */

/* CPU and C ABI indicator */
#ifndef __i386__
/* #undef __i386__ */
#endif
#ifndef __x86_64_x32__
/* #undef __x86_64_x32__ */
#endif
#ifndef __x86_64__
#define __x86_64__ 1
#endif
#ifndef __alpha__
/* #undef __alpha__ */
#endif
#ifndef __arm__
/* #undef __arm__ */
#endif
#ifndef __armhf__
/* #undef __armhf__ */
#endif
#ifndef __arm64_ilp32__
/* #undef __arm64_ilp32__ */
#endif
#ifndef __arm64__
/* #undef __arm64__ */
#endif
#ifndef __hppa__
/* #undef __hppa__ */
#endif
#ifndef __hppa64__
/* #undef __hppa64__ */
#endif
#ifndef __ia64_ilp32__
/* #undef __ia64_ilp32__ */
#endif
#ifndef __ia64__
/* #undef __ia64__ */
#endif
#ifndef __m68k__
/* #undef __m68k__ */
#endif
#ifndef __mips__
/* #undef __mips__ */
#endif
#ifndef __mipsn32__
/* #undef __mipsn32__ */
#endif
#ifndef __mips64__
/* #undef __mips64__ */
#endif
#ifndef __powerpc__
/* #undef __powerpc__ */
#endif
#ifndef __powerpc64__
/* #undef __powerpc64__ */
#endif
#ifndef __powerpc64_elfv2__
/* #undef __powerpc64_elfv2__ */
#endif
#ifndef __s390__
/* #undef __s390__ */
#endif
#ifndef __s390x__
/* #undef __s390x__ */
#endif
#ifndef __sh__
/* #undef __sh__ */
#endif
#ifndef __sparc__
/* #undef __sparc__ */
#endif
#ifndef __sparc64__
/* #undef __sparc64__ */
#endif


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the function xargmatch calls on failures. */
#define ARGMATCH_DIE usage (EXIT_FAILURE)

/* Define to the declaration of the xargmatch failure function. */
#define ARGMATCH_DIE_DECL void usage (int _e)

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define if you wish *printf() functions that have a safe handling of
   non-IEEE-754 'long double' values. */
#define CHECK_PRINTF_SAFE 1

/* Define to 1 if chown fails to change ctime when at least one argument was
   not -1. */
/* #undef CHOWN_CHANGE_TIME_BUG */

/* Define if chown is not POSIX compliant regarding IDs of -1. */
/* #undef CHOWN_FAILS_TO_HONOR_ID_OF_NEGATIVE_ONE */

/* Define if chown modifies symlinks. */
/* #undef CHOWN_MODIFIES_SYMLINK */

/* Define to 1 if chown mishandles trailing slash. */
/* #undef CHOWN_TRAILING_SLASH_BUG */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to 1 if the C locale may have encoding errors. */
#define C_LOCALE_MAYBE_EILSEQ 1

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* Define as the bit index in the word where to find the sign of 'double'. */
/* #undef DBL_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'double'. */
/* #undef DBL_SIGNBIT_WORD */

/* Define the default level of POSIX conformance. The value is of the form
   YYYYMM, specifying the year and month the standard was adopted. If not
   defined here, it defaults to the value of _POSIX2_VERSION in <unistd.h>.
   Define to 199209 to default to POSIX 1003.2-1992, which makes standard
   programs like 'head', 'tail', and 'sort' accept obsolete options like '+10'
   and '-10'. Define to 200112 to default to POSIX 1003.1-2001, which makes
   these standard programs treat leading-'+' operands as file names and
   require modern usages like '-n 10' instead of '-10'. Whether defined here
   or not, the default can be overridden at run time via the _POSIX2_VERSION
   environment variable. */
/* #undef DEFAULT_POSIX2_VERSION */

/* Define to 1 for DGUX with <sys/dg_sys_info.h>. */
/* #undef DGUX */

/* the name of the file descriptor member of DIR */
/* #undef DIR_FD_MEMBER_NAME */

#ifdef DIR_FD_MEMBER_NAME
# define DIR_TO_FD(Dir_p) ((Dir_p)->DIR_FD_MEMBER_NAME)
#else
# define DIR_TO_FD(Dir_p) -1
#endif


/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* Define if struct dirent has a member d_ino that actually works. */
#define D_INO_IN_DIRENT 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define to 1 if your platform has fchownat, but it does not reject an empty
   file name. */
/* #undef FCHOWNAT_EMPTY_FILENAME_BUG */

/* Define to 1 if your platform has fchownat, but it cannot perform lchown
   tasks. */
/* #undef FCHOWNAT_NOFOLLOW_BUG */

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like 'struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER /**/

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'float'. */
#define FLT_EXPBIT0_BIT 23

/* Define as the word index where to find the exponent of 'float'. */
#define FLT_EXPBIT0_WORD 0

/* Define as the bit index in the word where to find the sign of 'float'. */
/* #undef FLT_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'float'. */
/* #undef FLT_SIGNBIT_WORD */

/* Define to 1 if fopen() fails to recognize a trailing slash. */
/* #undef FOPEN_TRAILING_SLASH_BUG */

/* Enable compile-time and run-time bounds-checking, and some warnings,
      without upsetting glibc 2.15+. */
   #if !defined _FORTIFY_SOURCE && defined __OPTIMIZE__ && __OPTIMIZE__
   # define _FORTIFY_SOURCE 2
   #endif
  

/* Define to 1 if the system's ftello function has the Solaris bug. */
/* #undef FTELLO_BROKEN_AFTER_SWITCHING_FROM_READ_TO_WRITE */

/* Define to 1 if fflush is known to work on stdin as per POSIX.1-2008, 0 if
   fflush is known to not work, -1 if unknown. */
#define FUNC_FFLUSH_STDIN 0

/* Define to 1 if mkdir mistakenly creates a directory given with a trailing
   dot component. */
/* #undef FUNC_MKDIR_DOT_BUG */

/* Define to 1 if nl_langinfo (YESEXPR) returns a non-empty string. */
#define FUNC_NL_LANGINFO_YESEXPR_WORKS 1

/* Define to 1 if realpath() can malloc memory, always gives an absolute path,
   and handles trailing slash correctly. */
#define FUNC_REALPATH_WORKS 1

/* Define to 1 if ungetc is broken when used on arbitrary bytes. */
/* #undef FUNC_UNGETC_BROKEN */

/* Define to 1 if futimesat mishandles a NULL file name. */
/* #undef FUTIMESAT_NULL_BUG */

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define this to 1 if getgroups(0,NULL) does not return the number of groups.
   */
/* #undef GETGROUPS_ZERO_BUG */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE struct timezone

/* Define to 1 if getxattr works with XATTR_NAME_POSIX_ACL_ACCESS and
   XATTR_NAME_POSIX_ACL_DEFAULT. */
#define GETXATTR_WITH_POSIX_ACLS 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module areadlinkat shall be considered present. */
#define GNULIB_AREADLINKAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module calloc-gnu shall be considered present. */
#define GNULIB_CALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize shall be considered present. */
#define GNULIB_CANONICALIZE 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module close-stream shall be considered present. */
#define GNULIB_CLOSE_STREAM 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirent-safer shall be considered present. */
#define GNULIB_DIRENT_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirname shall be considered present. */
#define GNULIB_DIRNAME 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module faccessat shall be considered present. */
#define GNULIB_FACCESSAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fchmodat shall be considered present. */
#define GNULIB_FCHMODAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fchownat shall be considered present. */
#define GNULIB_FCHOWNAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fcntl-safer shall be considered present. */
#define GNULIB_FCNTL_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdopendir shall be considered present. */
#define GNULIB_FDOPENDIR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdutimensat shall be considered present. */
#define GNULIB_FDUTIMENSAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fd-safer-flag shall be considered present. */
#define GNULIB_FD_SAFER_FLAG 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fflush shall be considered present. */
#define GNULIB_FFLUSH 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module filenamecat shall be considered present. */
#define GNULIB_FILENAMECAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fopen-safer shall be considered present. */
#define GNULIB_FOPEN_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module freopen-safer shall be considered present. */
#define GNULIB_FREOPEN_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module getcwd shall be considered present. */
#define GNULIB_GETCWD 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module lock shall be considered present. */
#define GNULIB_LOCK 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#define GNULIB_MALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkostemp shall be considered present. */
#define GNULIB_MKOSTEMP 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module msvc-nothrow shall be considered present. */
#define GNULIB_MSVC_NOTHROW 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat shall be considered present. */
#define GNULIB_OPENAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat-safer shall be considered present. */
#define GNULIB_OPENAT_SAFER 1

/* enable some gnulib portability checks */
/* #undef GNULIB_PORTCHECK */

/* Define to 1 if printf and friends should be labeled with attribute
   "__gnu_printf__" instead of "__printf__" */
/* #undef GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU */

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module pthread shall be considered present. */
#define GNULIB_PTHREAD 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module realloc-gnu shall be considered present. */
#define GNULIB_REALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module snprintf shall be considered present. */
#define GNULIB_SNPRINTF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module statat shall be considered present. */
#define GNULIB_STATAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#define GNULIB_STRERROR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror_r-posix shall be considered present. */
#define GNULIB_STRERROR_R_POSIX IN_COREUTILS_GNULIB_TESTS

/* Define to 1 when the gnulib module accept should be tested. */
#define GNULIB_TEST_ACCEPT 1

/* Define to 1 when the gnulib module bind should be tested. */
#define GNULIB_TEST_BIND 1

/* Define to 1 when the gnulib module btowc should be tested. */
#define GNULIB_TEST_BTOWC 1

/* Define to 1 when the gnulib module calloc-posix should be tested. */
#define GNULIB_TEST_CALLOC_POSIX 1

/* Define to 1 when the gnulib module canonicalize should be tested. */
#define GNULIB_TEST_CANONICALIZE 1

/* Define to 1 when the gnulib module canonicalize_file_name should be tested.
   */
#define GNULIB_TEST_CANONICALIZE_FILE_NAME 1

/* Define to 1 when the gnulib module chdir should be tested. */
#define GNULIB_TEST_CHDIR 1

/* Define to 1 when the gnulib module chown should be tested. */
#define GNULIB_TEST_CHOWN 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module closedir should be tested. */
#define GNULIB_TEST_CLOSEDIR 1

/* Define to 1 when the gnulib module connect should be tested. */
#define GNULIB_TEST_CONNECT 1

/* Define to 1 when the gnulib module dirfd should be tested. */
#define GNULIB_TEST_DIRFD 1

/* Define to 1 when the gnulib module dup should be tested. */
#define GNULIB_TEST_DUP 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module euidaccess should be tested. */
#define GNULIB_TEST_EUIDACCESS 1

/* Define to 1 when the gnulib module explicit_bzero should be tested. */
#define GNULIB_TEST_EXPLICIT_BZERO 1

/* Define to 1 when the gnulib module faccessat should be tested. */
#define GNULIB_TEST_FACCESSAT 1

/* Define to 1 when the gnulib module fchdir should be tested. */
#define GNULIB_TEST_FCHDIR 1

/* Define to 1 when the gnulib module fchmodat should be tested. */
#define GNULIB_TEST_FCHMODAT 1

/* Define to 1 when the gnulib module fchownat should be tested. */
#define GNULIB_TEST_FCHOWNAT 1

/* Define to 1 when the gnulib module fclose should be tested. */
#define GNULIB_TEST_FCLOSE 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fdatasync should be tested. */
#define GNULIB_TEST_FDATASYNC 1

/* Define to 1 when the gnulib module fdopen should be tested. */
#define GNULIB_TEST_FDOPEN 1

/* Define to 1 when the gnulib module fdopendir should be tested. */
#define GNULIB_TEST_FDOPENDIR 1

/* Define to 1 when the gnulib module fflush should be tested. */
#define GNULIB_TEST_FFLUSH 1

/* Define to 1 when the gnulib module fopen should be tested. */
#define GNULIB_TEST_FOPEN 1

/* Define to 1 when the gnulib module fpurge should be tested. */
#define GNULIB_TEST_FPURGE 1

/* Define to 1 when the gnulib module freopen should be tested. */
#define GNULIB_TEST_FREOPEN 1

/* Define to 1 when the gnulib module frexp should be tested. */
#define GNULIB_TEST_FREXP 1

/* Define to 1 when the gnulib module frexpl should be tested. */
#define GNULIB_TEST_FREXPL 1

/* Define to 1 when the gnulib module fseek should be tested. */
#define GNULIB_TEST_FSEEK 1

/* Define to 1 when the gnulib module fseeko should be tested. */
#define GNULIB_TEST_FSEEKO 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module fstatat should be tested. */
#define GNULIB_TEST_FSTATAT 1

/* Define to 1 when the gnulib module fsync should be tested. */
#define GNULIB_TEST_FSYNC 1

/* Define to 1 when the gnulib module ftell should be tested. */
#define GNULIB_TEST_FTELL 1

/* Define to 1 when the gnulib module ftello should be tested. */
#define GNULIB_TEST_FTELLO 1

/* Define to 1 when the gnulib module ftruncate should be tested. */
#define GNULIB_TEST_FTRUNCATE 1

/* Define to 1 when the gnulib module futimens should be tested. */
#define GNULIB_TEST_FUTIMENS 1

/* Define to 1 when the gnulib module getaddrinfo should be tested. */
#define GNULIB_TEST_GETADDRINFO 1

/* Define to 1 when the gnulib module getcwd should be tested. */
#define GNULIB_TEST_GETCWD 1

/* Define to 1 when the gnulib module getdelim should be tested. */
#define GNULIB_TEST_GETDELIM 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getgroups should be tested. */
#define GNULIB_TEST_GETGROUPS 1

/* Define to 1 when the gnulib module gethostname should be tested. */
#define GNULIB_TEST_GETHOSTNAME 1

/* Define to 1 when the gnulib module getline should be tested. */
#define GNULIB_TEST_GETLINE 1

/* Define to 1 when the gnulib module getloadavg should be tested. */
#define GNULIB_TEST_GETLOADAVG 1

/* Define to 1 when the gnulib module getlogin should be tested. */
#define GNULIB_TEST_GETLOGIN 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module getusershell should be tested. */
#define GNULIB_TEST_GETUSERSHELL 1

/* Define to 1 when the gnulib module group-member should be tested. */
#define GNULIB_TEST_GROUP_MEMBER 1

/* Define to 1 when the gnulib module ioctl should be tested. */
#define GNULIB_TEST_IOCTL 1

/* Define to 1 when the gnulib module isatty should be tested. */
#define GNULIB_TEST_ISATTY 1

/* Define to 1 when the gnulib module iswblank should be tested. */
#define GNULIB_TEST_ISWBLANK 1

/* Define to 1 when the gnulib module lchmod should be tested. */
#define GNULIB_TEST_LCHMOD 1

/* Define to 1 when the gnulib module lchown should be tested. */
#define GNULIB_TEST_LCHOWN 1

/* Define to 1 when the gnulib module link should be tested. */
#define GNULIB_TEST_LINK 1

/* Define to 1 when the gnulib module linkat should be tested. */
#define GNULIB_TEST_LINKAT 1

/* Define to 1 when the gnulib module listen should be tested. */
#define GNULIB_TEST_LISTEN 1

/* Define to 1 when the gnulib module localeconv should be tested. */
#define GNULIB_TEST_LOCALECONV 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrlen should be tested. */
#define GNULIB_TEST_MBRLEN 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbscasecmp should be tested. */
#define GNULIB_TEST_MBSCASECMP 1

/* Define to 1 when the gnulib module mbschr should be tested. */
#define GNULIB_TEST_MBSCHR 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbslen should be tested. */
#define GNULIB_TEST_MBSLEN 1

/* Define to 1 when the gnulib module mbsrtowcs should be tested. */
#define GNULIB_TEST_MBSRTOWCS 1

/* Define to 1 when the gnulib module mbsstr should be tested. */
#define GNULIB_TEST_MBSSTR 1

/* Define to 1 when the gnulib module mbtowc should be tested. */
#define GNULIB_TEST_MBTOWC 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mempcpy should be tested. */
#define GNULIB_TEST_MEMPCPY 1

/* Define to 1 when the gnulib module memrchr should be tested. */
#define GNULIB_TEST_MEMRCHR 1

/* Define to 1 when the gnulib module mkfifo should be tested. */
#define GNULIB_TEST_MKFIFO 1

/* Define to 1 when the gnulib module mknod should be tested. */
#define GNULIB_TEST_MKNOD 1

/* Define to 1 when the gnulib module mkostemp should be tested. */
#define GNULIB_TEST_MKOSTEMP 1

/* Define to 1 when the gnulib module mkstemp should be tested. */
#define GNULIB_TEST_MKSTEMP 1

/* Define to 1 when the gnulib module mktime should be tested. */
#define GNULIB_TEST_MKTIME 1

/* Define to 1 when the gnulib module nanosleep should be tested. */
#define GNULIB_TEST_NANOSLEEP 1

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#define GNULIB_TEST_NL_LANGINFO 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module openat should be tested. */
#define GNULIB_TEST_OPENAT 1

/* Define to 1 when the gnulib module opendir should be tested. */
#define GNULIB_TEST_OPENDIR 1

/* Define to 1 when the gnulib module perror should be tested. */
#define GNULIB_TEST_PERROR 1

/* Define to 1 when the gnulib module pipe should be tested. */
#define GNULIB_TEST_PIPE 1

/* Define to 1 when the gnulib module pipe2 should be tested. */
#define GNULIB_TEST_PIPE2 1

/* Define to 1 when the gnulib module pthread_sigmask should be tested. */
#define GNULIB_TEST_PTHREAD_SIGMASK 1

/* Define to 1 when the gnulib module putenv should be tested. */
#define GNULIB_TEST_PUTENV 1

/* Define to 1 when the gnulib module raise should be tested. */
#define GNULIB_TEST_RAISE 1

/* Define to 1 when the gnulib module read should be tested. */
#define GNULIB_TEST_READ 1

/* Define to 1 when the gnulib module readdir should be tested. */
#define GNULIB_TEST_READDIR 1

/* Define to 1 when the gnulib module readlink should be tested. */
#define GNULIB_TEST_READLINK 1

/* Define to 1 when the gnulib module readlinkat should be tested. */
#define GNULIB_TEST_READLINKAT 1

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#define GNULIB_TEST_REALLOC_POSIX 1

/* Define to 1 when the gnulib module remove should be tested. */
#define GNULIB_TEST_REMOVE 1

/* Define to 1 when the gnulib module rename should be tested. */
#define GNULIB_TEST_RENAME 1

/* Define to 1 when the gnulib module renameat should be tested. */
#define GNULIB_TEST_RENAMEAT 1

/* Define to 1 when the gnulib module rewinddir should be tested. */
#define GNULIB_TEST_REWINDDIR 1

/* Define to 1 when the gnulib module rmdir should be tested. */
#define GNULIB_TEST_RMDIR 1

/* Define to 1 when the gnulib module rpmatch should be tested. */
#define GNULIB_TEST_RPMATCH 1

/* Define to 1 when the gnulib module select should be tested. */
#define GNULIB_TEST_SELECT 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module setlocale should be tested. */
#define GNULIB_TEST_SETLOCALE 1

/* Define to 1 when the gnulib module setsockopt should be tested. */
#define GNULIB_TEST_SETSOCKOPT 1

/* Define to 1 when the gnulib module sigaction should be tested. */
#define GNULIB_TEST_SIGACTION 1

/* Define to 1 when the gnulib module signbit should be tested. */
#define GNULIB_TEST_SIGNBIT 1

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#define GNULIB_TEST_SIGPROCMASK 1

/* Define to 1 when the gnulib module sleep should be tested. */
#define GNULIB_TEST_SLEEP 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module socket should be tested. */
#define GNULIB_TEST_SOCKET 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module stpcpy should be tested. */
#define GNULIB_TEST_STPCPY 1

/* Define to 1 when the gnulib module stpncpy should be tested. */
#define GNULIB_TEST_STPNCPY 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strerror_r should be tested. */
#define GNULIB_TEST_STRERROR_R 1

/* Define to 1 when the gnulib module strncat should be tested. */
#define GNULIB_TEST_STRNCAT 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strpbrk should be tested. */
#define GNULIB_TEST_STRPBRK 1

/* Define to 1 when the gnulib module strsignal should be tested. */
#define GNULIB_TEST_STRSIGNAL 1

/* Define to 1 when the gnulib module strstr should be tested. */
#define GNULIB_TEST_STRSTR 1

/* Define to 1 when the gnulib module strtod should be tested. */
#define GNULIB_TEST_STRTOD 1

/* Define to 1 when the gnulib module strtoll should be tested. */
#define GNULIB_TEST_STRTOLL 1

/* Define to 1 when the gnulib module strtoull should be tested. */
#define GNULIB_TEST_STRTOULL 1

/* Define to 1 when the gnulib module symlink should be tested. */
#define GNULIB_TEST_SYMLINK 1

/* Define to 1 when the gnulib module symlinkat should be tested. */
#define GNULIB_TEST_SYMLINKAT 1

/* Define to 1 when the gnulib module timegm should be tested. */
#define GNULIB_TEST_TIMEGM 1

/* Define to 1 when the gnulib module time_r should be tested. */
#define GNULIB_TEST_TIME_R 1

/* Define to 1 when the gnulib module time_rz should be tested. */
#define GNULIB_TEST_TIME_RZ 1

/* Define to 1 when the gnulib module tzset should be tested. */
#define GNULIB_TEST_TZSET 1

/* Define to 1 when the gnulib module unlink should be tested. */
#define GNULIB_TEST_UNLINK 1

/* Define to 1 when the gnulib module unlinkat should be tested. */
#define GNULIB_TEST_UNLINKAT 1

/* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module usleep should be tested. */
#define GNULIB_TEST_USLEEP 1

/* Define to 1 when the gnulib module utime should be tested. */
#define GNULIB_TEST_UTIME 1

/* Define to 1 when the gnulib module utimensat should be tested. */
#define GNULIB_TEST_UTIMENSAT 1

/* Define to 1 when the gnulib module vasprintf should be tested. */
#define GNULIB_TEST_VASPRINTF 1

/* Define to 1 when the gnulib module vfprintf-posix should be tested. */
#define GNULIB_TEST_VFPRINTF_POSIX 1

/* Define to 1 when the gnulib module vprintf-posix should be tested. */
#define GNULIB_TEST_VPRINTF_POSIX 1

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#define GNULIB_TEST_WCRTOMB 1

/* Define to 1 when the gnulib module wcswidth should be tested. */
#define GNULIB_TEST_WCSWIDTH 1

/* Define to 1 when the gnulib module wctob should be tested. */
#define GNULIB_TEST_WCTOB 1

/* Define to 1 when the gnulib module wctomb should be tested. */
#define GNULIB_TEST_WCTOMB 1

/* Define to 1 when the gnulib module wcwidth should be tested. */
#define GNULIB_TEST_WCWIDTH 1

/* Define to 1 when the gnulib module write should be tested. */
#define GNULIB_TEST_WRITE 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-mbtoucr shall be considered present. */
#define GNULIB_UNISTR_U8_MBTOUCR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-uctomb shall be considered present. */
#define GNULIB_UNISTR_U8_UCTOMB 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module xgetgroups shall be considered present. */
#define GNULIB_XGETGROUPS 1

/* Define if your system defines TIOCGWINSZ in sys/ioctl.h. */
#define GWINSZ_IN_SYS_IOCTL 1

/* Define if your system defines TIOCGWINSZ in sys/pty.h. */
/* #undef GWINSZ_IN_SYS_PTY */

/* Define to 1 if you have the `access' function. */
/* #undef HAVE_ACCESS */

/* Define to 1 if you have the `aclsort' function. */
/* #undef HAVE_ACLSORT */

/* Define to 1 if you have the <aclv.h> header file. */
/* #undef HAVE_ACLV_H */

/* Define to 1 if you have the `aclx_get' function. */
/* #undef HAVE_ACLX_GET */

/* Define to 1 if you have the `acl_copy_ext_native' function. */
/* #undef HAVE_ACL_COPY_EXT_NATIVE */

/* Define to 1 if you have the `acl_create_entry_np' function. */
/* #undef HAVE_ACL_CREATE_ENTRY_NP */

/* Define to 1 if you have the `acl_delete_def_file' function. */
#define HAVE_ACL_DELETE_DEF_FILE 1

/* Define to 1 if you have the `acl_delete_fd_np' function. */
/* #undef HAVE_ACL_DELETE_FD_NP */

/* Define to 1 if you have the `acl_delete_file_np' function. */
/* #undef HAVE_ACL_DELETE_FILE_NP */

/* Define to 1 if you have the `acl_entries' function. */
#define HAVE_ACL_ENTRIES 1

/* Define to 1 if you have the `acl_extended_file' function. */
#define HAVE_ACL_EXTENDED_FILE 1

/* Define to 1 if the constant ACL_FIRST_ENTRY exists. */
#define HAVE_ACL_FIRST_ENTRY 1

/* Define to 1 if you have the `acl_free' function. */
#define HAVE_ACL_FREE 1

/* Define to 1 if you have the `acl_free_text' function. */
/* #undef HAVE_ACL_FREE_TEXT */

/* Define to 1 if you have the `acl_from_mode' function. */
#define HAVE_ACL_FROM_MODE 1

/* Define to 1 if you have the `acl_from_text' function. */
#define HAVE_ACL_FROM_TEXT 1

/* Define to 1 if you have the `acl_get_fd' function. */
#define HAVE_ACL_GET_FD 1

/* Define to 1 if you have the `acl_get_file' function. */
#define HAVE_ACL_GET_FILE 1

/* Define to 1 if you have the <acl/libacl.h> header file. */
#define HAVE_ACL_LIBACL_H 1

/* Define to 1 if you have the `acl_set_fd' function. */
#define HAVE_ACL_SET_FD 1

/* Define to 1 if you have the `acl_set_file' function. */
#define HAVE_ACL_SET_FILE 1

/* Define to 1 if you have the `acl_to_short_text' function. */
/* #undef HAVE_ACL_TO_SHORT_TEXT */

/* Define to 1 if you have the `acl_trivial' function. */
/* #undef HAVE_ACL_TRIVIAL */

/* Define to 1 if the ACL type ACL_TYPE_EXTENDED exists. */
/* #undef HAVE_ACL_TYPE_EXTENDED */

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define if you have an arithmetic hrtime_t type. */
/* #undef HAVE_ARITHMETIC_HRTIME_T */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `attr_copy_file' function. */
#define HAVE_ATTR_COPY_FILE 1

/* Define to 1 if you have the <attr/error_context.h> header file. */
#define HAVE_ATTR_ERROR_CONTEXT_H 1

/* Define to 1 if you have the <attr/libattr.h> header file. */
#define HAVE_ATTR_LIBATTR_H 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the `btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if nanosleep mishandles large arguments. */
#define HAVE_BUG_BIG_NANOSLEEP 1

/* Define to 1 if strtold conforms to C99. */
#define HAVE_C99_STRTOLD 1

/* Define to 1 if your system has a GNU libc compatible 'calloc' function, and
   to 0 otherwise. */
#define HAVE_CALLOC_GNU 1

/* Define if the 'calloc' function is POSIX compliant. */
#define HAVE_CALLOC_POSIX 1

/* Define to 1 if you have the `canonicalize_file_name' function. */
#define HAVE_CANONICALIZE_FILE_NAME 1

/* libcap usability */
#define HAVE_CAP 1

/* Define to 1 if you have the `catgets' function. */
#define HAVE_CATGETS 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `chown' function. */
#define HAVE_CHOWN 1

/* Define to 1 if you have the `chroot' function. */
#define HAVE_CHROOT 1

/* Define to 1 if you have the `chsize' function. */
/* #undef HAVE_CHSIZE */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `clock_settime' function. */
#define HAVE_CLOCK_SETTIME 1

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define if you have compound literals. */
#define HAVE_COMPOUND_LITERALS 1

/* Define if the copysignf function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGNF_IN_LIBC */

/* Define if the copysignl function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGNL_IN_LIBC */

/* Define if the copysign function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGN_IN_LIBC */

/* Define to 1 if you have the <crtdefs.h> header file. */
/* #undef HAVE_CRTDEFS_H */

/* FIXME */
#define HAVE_C_LINE 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
   */
#define HAVE_DECL_ALARM 1

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_CLEARERR_UNLOCKED 1

/* Define to 1 if you have the declaration of `copysign', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGN */

/* Define to 1 if you have the declaration of `copysignf', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGNF */

/* Define to 1 if you have the declaration of `copysignl', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGNL */

/* Define to 1 if you have the declaration of `dirfd', and to 0 if you don't.
   */
#define HAVE_DECL_DIRFD 1

/* Define to 1 if you have the declaration of `fchdir', and to 0 if you don't.
   */
#define HAVE_DECL_FCHDIR 1

/* Define to 1 if you have the declaration of `fdatasync', and to 0 if you
   don't. */
#define HAVE_DECL_FDATASYNC 1

/* Define to 1 if you have the declaration of `fdopendir', and to 0 if you
   don't. */
#define HAVE_DECL_FDOPENDIR 1

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_FEOF_UNLOCKED 1

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FERROR_UNLOCKED 1

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 1

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FGETS_UNLOCKED 1

/* Define to 1 if you have the declaration of `flockfile', and to 0 if you
   don't. */
#define HAVE_DECL_FLOCKFILE 1

/* Define to 1 if you have the declaration of `fpurge', and to 0 if you don't.
   */
#define HAVE_DECL_FPURGE 0

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 1

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FREAD_UNLOCKED 1

/* Define to 1 if you have the declaration of `freeaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_FREEADDRINFO 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `funlockfile', and to 0 if you
   don't. */
#define HAVE_DECL_FUNLOCKFILE 1

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FWRITE_UNLOCKED 1

/* Define to 1 if you have the declaration of `gai_strerror', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERROR 1

/* Define to 1 if you have the declaration of `gai_strerrorA', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERRORA 0

/* Define to 1 if you have the declaration of `getaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETADDRINFO 1

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_GETCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of `getcwd', and to 0 if you don't.
   */
#define HAVE_DECL_GETCWD 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of `getdelim', and to 0 if you
   don't. */
#define HAVE_DECL_GETDELIM 1

/* Define to 1 if you have the declaration of `getdtablesize', and to 0 if you
   don't. */
#define HAVE_DECL_GETDTABLESIZE 1

/* Define to 1 if you have the declaration of `geteuid', and to 0 if you
   don't. */
#define HAVE_DECL_GETEUID 1

/* Define to 1 if you have the declaration of `getgrgid', and to 0 if you
   don't. */
#define HAVE_DECL_GETGRGID 1

/* Define to 1 if you have the declaration of `gethrtime', and to 0 if you
   don't. */
#define HAVE_DECL_GETHRTIME 0

/* Define to 1 if you have the declaration of `getline', and to 0 if you
   don't. */
#define HAVE_DECL_GETLINE 1

/* Define to 1 if you have the declaration of `getlogin', and to 0 if you
   don't. */
#define HAVE_DECL_GETLOGIN 1

/* Define to 1 if you have the declaration of `getnameinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETNAMEINFO 1

/* Define to 1 if you have the declaration of `getpass', and to 0 if you
   don't. */
#define HAVE_DECL_GETPASS 1

/* Define to 1 if you have the declaration of `getpwuid', and to 0 if you
   don't. */
#define HAVE_DECL_GETPWUID 1

/* Define to 1 if you have the declaration of `getuid', and to 0 if you don't.
   */
#define HAVE_DECL_GETUID 1

/* Define to 1 if you have the declaration of `getusershell', and to 0 if you
   don't. */
#define HAVE_DECL_GETUSERSHELL 1

/* Define to 1 if you have the declaration of `getutent', and to 0 if you
   don't. */
#define HAVE_DECL_GETUTENT 1

/* Define to 1 if you have the declaration of `inet_ntop', and to 0 if you
   don't. */
#define HAVE_DECL_INET_NTOP 1

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
   don't. */
#define HAVE_DECL_INET_PTON 1

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ISBLANK */

/* Define to 1 if you have the declaration of `iswblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISWBLANK 1

/* Define to 1 if you have the declaration of `localtime_r', and to 0 if you
   don't. */
#define HAVE_DECL_LOCALTIME_R 1

/* Define to 1 if you have the declaration of `mbrlen', and to 0 if you don't.
   */
/* #undef HAVE_DECL_MBRLEN */

/* Define to 1 if you have the declaration of `mbrtowc', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBRTOWC */

/* Define to 1 if you have the declaration of `mbsinit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSINIT */

/* Define to 1 if you have the declaration of `mbsrtowcs', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSRTOWCS */

/* Define to 1 if you have a declaration of mbswidth() in <wchar.h>, and to 0
   otherwise. */
#define HAVE_DECL_MBSWIDTH_IN_WCHAR_H 0

/* Define to 1 if you have the declaration of `memrchr', and to 0 if you
   don't. */
#define HAVE_DECL_MEMRCHR 1

/* Define to 1 if you have the declaration of `mpz_inits', and to 0 if you
   don't. */
#define HAVE_DECL_MPZ_INITS 1

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 1

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_PUTCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `setenv', and to 0 if you don't.
   */
#define HAVE_DECL_SETENV 1

/* Define to 1 if you have the declaration of `setregid', and to 0 if you
   don't. */
#define HAVE_DECL_SETREGID 1

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#define HAVE_DECL_SLEEP 1

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `stpncpy', and to 0 if you
   don't. */
#define HAVE_DECL_STPNCPY 1

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `strmode', and to 0 if you
   don't. */
#define HAVE_DECL_STRMODE 0

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#define HAVE_DECL_STRNDUP 1

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `strsignal', and to 0 if you
   don't. */
#define HAVE_DECL_STRSIGNAL 1

/* Define to 1 if you have the declaration of `strtoimax', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOIMAX 1

/* Define to 1 if you have the declaration of `strtoll', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRTOLL */

/* Define to 1 if you have the declaration of `strtoull', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRTOULL */

/* Define to 1 if you have the declaration of `strtoumax', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOUMAX 1

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGLIST 1

/* Define to 1 if you have the declaration of `towlower', and to 0 if you
   don't. */
/* #undef HAVE_DECL_TOWLOWER */

/* Define to 1 if you have the declaration of `ttyname', and to 0 if you
   don't. */
#define HAVE_DECL_TTYNAME 1

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
/* #undef HAVE_DECL_TZNAME */

/* Define to 1 if you have the declaration of `unsetenv', and to 0 if you
   don't. */
#define HAVE_DECL_UNSETENV 1

/* Define to 1 if you have the declaration of `wcrtomb', and to 0 if you
   don't. */
/* #undef HAVE_DECL_WCRTOMB */

/* Define to 1 if you have the declaration of `wctob', and to 0 if you don't.
   */
#define HAVE_DECL_WCTOB 1

/* Define to 1 if you have the declaration of `wcwidth', and to 0 if you
   don't. */
#define HAVE_DECL_WCWIDTH 1

/* Define to 1 if you have the declaration of `_putenv', and to 0 if you
   don't. */
/* #undef HAVE_DECL__PUTENV */

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the declaration of `_sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL__SYS_SIGLIST 1

/* Define to 1 if you have the declaration of `__argv', and to 0 if you don't.
   */
#define HAVE_DECL___ARGV 0

/* Define to 1 if you have the declaration of `__fpending', and to 0 if you
   don't. */
#define HAVE_DECL___FPENDING 1

/* Define to 1 if you have the declaration of `__fsetlocking', and to 0 if you
   don't. */
#define HAVE_DECL___FSETLOCKING 1

/* Define to 1 if you have the declaration of `__sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL___SYS_SIGLIST 0

/* Define to 1 if you have the `directio' function. */
/* #undef HAVE_DIRECTIO */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the 'dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the <dustat.h> header file. */
/* #undef HAVE_DUSTAT_H */

/* Define to 1 if you have the `eaccess' function. */
/* #undef HAVE_EACCESS */

/* Define to 1 if you have the `endgrent' function. */
#define HAVE_ENDGRENT 1

/* Define to 1 if you have the `endpwent' function. */
#define HAVE_ENDPWENT 1

/* Define if you have the declaration of environ. */
#define HAVE_ENVIRON_DECL 1

/* Define to 1 if you have the `euidaccess' function. */
#define HAVE_EUIDACCESS 1

/* Define to 1 if you have the `explicit_bzero' function. */
/* #undef HAVE_EXPLICIT_BZERO */

/* Define to 1 if you have the `explicit_memset' function. */
/* #undef HAVE_EXPLICIT_MEMSET */

/* Define to 1 if you have the `faccessat' function. */
#define HAVE_FACCESSAT 1

/* Define to 1 if you have the `facl' function. */
/* #undef HAVE_FACL */

/* Define to 1 if you have the `fallocate' function. */
#define HAVE_FALLOCATE 1

/* Define to 1 if you have the `fchdir' function. */
#define HAVE_FCHDIR 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchmodat' function. */
#define HAVE_FCHMODAT 1

/* Define to 1 if you have the `fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the `fdatasync' function. */
#define HAVE_FDATASYNC 1

/* Define to 1 if you have the `fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if pipes are FIFOs, 0 if sockets. Leave undefined if not known.
   */
#define HAVE_FIFO_PIPES 1

/* Define to 1 if you have the `flockfile' function. */
#define HAVE_FLOCKFILE 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* whether fpsetprec is present and required */
/* #undef HAVE_FPSETPREC */

/* Define to 1 if you have the `fpurge' function. */
/* #undef HAVE_FPURGE */

/* Define if the frexpl function is available in libc. */
#define HAVE_FREXPL_IN_LIBC 1

/* Define if the frexp function is available in libc. */
#define HAVE_FREXP_IN_LIBC 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the `fstatfs' function. */
#define HAVE_FSTATFS 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the <fs_info.h> header file. */
/* #undef HAVE_FS_INFO_H */

/* Define to 1 if you have the `fs_stat_dev' function. */
/* #undef HAVE_FS_STAT_DEV */

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `funlockfile' function. */
#define HAVE_FUNLOCKFILE 1

/* Define to 1 if you have the `futimens' function. */
#define HAVE_FUTIMENS 1

/* Define to 1 if you have the `futimes' function. */
#define HAVE_FUTIMES 1

/* Define to 1 if you have the `futimesat' function. */
#define HAVE_FUTIMESAT 1

/* Define to 1 if you have the `getacl' function. */
/* #undef HAVE_GETACL */

/* Define to 1 if you have the `getattrat' function. */
/* #undef HAVE_GETATTRAT */

/* Define to 1 if getcwd works, but with shorter paths than is generally
   tested with the replacement. */
/* #undef HAVE_GETCWD_SHORTER */

/* Define to 1 if you have the `getdelim' function. */
#define HAVE_GETDELIM 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `getegid' function. */
#define HAVE_GETEGID 1

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the `getgrent_nomembers' function. */
/* #undef HAVE_GETGRENT_NOMEMBERS */

/* Define to 1 if you have the `getgrgid_nomembers' function. */
/* #undef HAVE_GETGRGID_NOMEMBERS */

/* Define to 1 if you have the `getgrnam_nomembers' function. */
/* #undef HAVE_GETGRNAM_NOMEMBERS */

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if your system has a working `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostid' function. */
#define HAVE_GETHOSTID 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getlocalename_l' function. */
/* #undef HAVE_GETLOCALENAME_L */

/* Define to 1 if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define to 1 if you have the `getmntent' function. */
#define HAVE_GETMNTENT 1

/* Define to 1 if you have the `getmntinfo' function. */
/* #undef HAVE_GETMNTINFO */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getppriv' function. */
/* #undef HAVE_GETPPRIV */

/* Define to 1 if you have the `getprogname' function. */
/* #undef HAVE_GETPROGNAME */

/* Define to 1 if you have the `getservbyname' function. */
#define HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `getsysinfo' function. */
/* #undef HAVE_GETSYSINFO */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getusershell' function. */
#define HAVE_GETUSERSHELL 1

/* Define if you have GNU libgmp (or replacement) */
#define HAVE_GMP 1

/* Define to 1 if you have the <gmp.h> header file. */
#define HAVE_GMP_H 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if you have the `hasmntopt' function. */
#define HAVE_HASMNTOPT 1

/* Define to 1 if you have the <hurd.h> header file. */
/* #undef HAVE_HURD_H */

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if the compiler supports one of the keywords 'inline',
   '__inline__', '__inline' and effectively inlines functions marked as such.
   */
#define HAVE_INLINE 1

/* Define to 1 if you have usable inotify support. */
#define HAVE_INOTIFY 1

/* Define to 1 if you have the `inotify_init' function. */
#define HAVE_INOTIFY_INIT 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the `ioctl' function. */
#define HAVE_IOCTL 1

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Define to 1 if you have the `isapipe' function. */
/* #undef HAVE_ISAPIPE */

/* Define to 1 if you have the `isascii' function. */
#define HAVE_ISASCII 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define if the isnan(double) function is available in libc. */
#define HAVE_ISNAND_IN_LIBC 1

/* Define if the isnan(float) function is available in libc. */
#define HAVE_ISNANF_IN_LIBC 1

/* Define if the isnan(long double) function is available in libc. */
#define HAVE_ISNANL_IN_LIBC 1

/* Define to 1 if you have the `iswblank' function. */
#define HAVE_ISWBLANK 1

/* Define to 1 if you have the `iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the `iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define to 1 if you have the `iswspace' function. */
#define HAVE_ISWSPACE 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if you have <langinfo.h> and nl_langinfo(YESEXPR). */
/* #undef HAVE_LANGINFO_YESEXPR */

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define if the ldexpl function is available in libc. */
#define HAVE_LDEXPL_IN_LIBC 1

/* Define if the ldexp function is available in libc. */
#define HAVE_LDEXP_IN_LIBC 1

/* Define to 1 if you have the `dgc' library (-ldgc). */
/* #undef HAVE_LIBDGC */

/* Define to 1 if you have the <libgen.h> header file. */
/* #undef HAVE_LIBGEN_H */

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define to 1 if you have the `kstat' library (-lkstat). */
/* #undef HAVE_LIBKSTAT */

/* Define to 1 if you have the `os' library (-los). */
/* #undef HAVE_LIBOS */

/* Define to 1 if you have the `perfstat' library (-lperfstat). */
/* #undef HAVE_LIBPERFSTAT */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the `linkat' function. */
#define HAVE_LINKAT 1

/* Define to 1 if you have the <linux/falloc.h> header file. */
#define HAVE_LINUX_FALLOC_H 1

/* Define to 1 if you have the <linux/fs.h> header file. */
#define HAVE_LINUX_FS_H 1

/* Define to 1 if you have the `listmntent' function. */
/* #undef HAVE_LISTMNTENT */

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you support file names longer than 14 characters. */
#define HAVE_LONG_FILE_NAMES 1

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the `lutimes' function. */
#define HAVE_LUTIMES 1

/* Define to 1 if you have the <machine/hal_sysinfo.h> header file. */
/* #undef HAVE_MACHINE_HAL_SYSINFO_H */

/* Define to 1 if you have the <mach/mach.h> header file. */
/* #undef HAVE_MACH_MACH_H */

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC_GNU 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define if the 'malloc' function is POSIX compliant. */
#define HAVE_MALLOC_POSIX 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the `matchpathcon_init_prefix' function. */
#define HAVE_MATCHPATHCON_INIT_PREFIX 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbrlen' function. */
#define HAVE_MBRLEN 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if you have the `mbslen' function. */
/* #undef HAVE_MBSLEN */

/* Define to 1 if you have the `mbsrtowcs' function. */
#define HAVE_MBSRTOWCS 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `memrchr' function. */
#define HAVE_MEMRCHR 1

/* Define to 1 if you have the `microuptime' function. */
/* #undef HAVE_MICROUPTIME */

/* Define to 1 if getcwd minimally works, that is, its result can be trusted
   when it succeeds. */
#define HAVE_MINIMALLY_WORKING_GETCWD 1

/* Define to 1 if <limits.h> defines the MIN and MAX macros. */
/* #undef HAVE_MINMAX_IN_LIMITS_H */

/* Define to 1 if <sys/param.h> defines the MIN and MAX macros. */
#define HAVE_MINMAX_IN_SYS_PARAM_H 1

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mknod' function. */
#define HAVE_MKNOD 1

/* Define to 1 if you have the `mkostemp' function. */
#define HAVE_MKOSTEMP 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the `mode_to_security_class' function. */
#define HAVE_MODE_TO_SECURITY_CLASS 1

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
/* #undef HAVE_MSVC_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the `nanotime' function. */
/* #undef HAVE_NANOTIME */

/* Define to 1 if you have the `nanouptime' function. */
/* #undef HAVE_NANOUPTIME */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the `newlocale' function. */
#define HAVE_NEWLOCALE 1

/* Define to 1 if you have the `next_dev' function. */
/* #undef HAVE_NEXT_DEV */

/* Define to 1 if you have the <nfs/nfs_client.h> header file. */
/* #undef HAVE_NFS_NFS_CLIENT_H */

/* Define to 1 if you have the <nfs/vfs.h> header file. */
/* #undef HAVE_NFS_VFS_H */

/* Define to 1 if you have the `nice' function. */
/* #undef HAVE_NICE */

/* Define to 1 if you have the <nlist.h> header file. */
/* #undef HAVE_NLIST_H */

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if the system has obstacks that work with any size object. */
/* #undef HAVE_OBSTACK */

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if libcrypto is used for MD5. */
/* #undef HAVE_OPENSSL_MD5 */

/* Define to 1 if libcrypto is used for SHA1. */
/* #undef HAVE_OPENSSL_SHA1 */

/* Define to 1 if libcrypto is used for SHA256. */
/* #undef HAVE_OPENSSL_SHA256 */

/* Define to 1 if libcrypto is used for SHA512. */
/* #undef HAVE_OPENSSL_SHA512 */

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if getcwd works, except it sometimes fails when it shouldn't,
   setting errno to ERANGE, ENAMETOOLONG, or ENOENT. */
/* #undef HAVE_PARTLY_WORKING_GETCWD */

/* Define to 1 if you have the `pathconf' function. */
#define HAVE_PATHCONF 1

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the `pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the `posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Define to 1 if you have the `prctl' function. */
#define HAVE_PRCTL 1

/* Define to 1 if you have the <priv.h> header file. */
/* #undef HAVE_PRIV_H */

/* Define if your system has the /proc/uptime special file. */
#define HAVE_PROC_UPTIME 1

/* Define to 1 if you have the `pstat_getdynamic' function. */
/* #undef HAVE_PSTAT_GETDYNAMIC */

/* Define to 1 if you have the `pstat_getstatic' function. */
/* #undef HAVE_PSTAT_GETSTATIC */

/* Define to 1 if you have the `pthread_atfork' function. */
#define HAVE_PTHREAD_ATFORK 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define if the POSIX multithreading library has read/write locks. */
#define HAVE_PTHREAD_RWLOCK 1

/* Define if the 'pthread_rwlock_rdlock' function prefers a writer to a
   reader. */
/* #undef HAVE_PTHREAD_RWLOCK_RDLOCK_PREFER_WRITER */

/* Define to 1 if the pthread_sigmask function can be used (despite bugs). */
/* #undef HAVE_PTHREAD_SIGMASK */

/* Define to 1 if the system has the type `pthread_spinlock_t'. */
#define HAVE_PTHREAD_SPINLOCK_T 1

/* Define to 1 if the system has the type `pthread_t'. */
#define HAVE_PTHREAD_T 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `readlinkat' function. */
#define HAVE_READLINKAT 1

/* Define to 1 if your system has a GNU libc compatible 'realloc' function,
   and to 0 otherwise. */
#define HAVE_REALLOC_GNU 1

/* Define if the 'realloc' function is POSIX compliant. */
#define HAVE_REALLOC_POSIX 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `renameat' function. */
#define HAVE_RENAMEAT 1

/* Define to 1 if you have the `rewinddir' function. */
#define HAVE_REWINDDIR 1

/* Define to 1 if you have the `rpmatch' function. */
#define HAVE_RPMATCH 1

/* Define to 1 if you have run the test for working tzset. */
#define HAVE_RUN_TZSET_TEST 1

/* Define to 1 if 'long double' and 'double' have the same representation. */
/* #undef HAVE_SAME_LONG_DOUBLE_AS_DOUBLE */

/* Define to 1 if the system has the type `sa_family_t'. */
#define HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the `sched_getaffinity' function. */
#define HAVE_SCHED_GETAFFINITY 1

/* Define to 1 if sched_getaffinity has a glibc compatible declaration. */
#define HAVE_SCHED_GETAFFINITY_LIKE_GLIBC 1

/* Define to 1 if you have the `sched_getaffinity_np' function. */
/* #undef HAVE_SCHED_GETAFFINITY_NP */

/* Define to 1 if you have the <sched.h> header file. */
/* #undef HAVE_SCHED_H */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the <selinux/context.h> header file. */
#define HAVE_SELINUX_CONTEXT_H 1

/* Define to 1 if you have the <selinux/flask.h> header file. */
#define HAVE_SELINUX_FLASK_H 1

/* Define to 1 if you have the <selinux/selinux.h> header file. */
#define HAVE_SELINUX_SELINUX_H 1

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the `setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `sethostname' function. */
#define HAVE_SETHOSTNAME 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the `settimeofday' function. */
#define HAVE_SETTIMEOFDAY 1

/* Define to 1 if you have the `shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if you have the `sig2str' function. */
/* #undef HAVE_SIG2STR */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigaltstack' function. */
#define HAVE_SIGALTSTACK 1

/* Define to 1 if the system has the type `siginfo_t'. */
/* #undef HAVE_SIGINFO_T */

/* Define to 1 if you have the `siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
#define HAVE_SIGSET_T 1

/* Define to 1 if you have the `sigsuspend' function. */
#define HAVE_SIGSUSPEND 1

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* libsmack usability */
/* #undef HAVE_SMACK */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* Define to 1 if you have the `statacl' function. */
/* #undef HAVE_STATACL */

/* Define to 1 if you have the `statvfs' function. */
/* #undef HAVE_STATVFS */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
#define HAVE_STDIO_EXT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stime' function. */
#define HAVE_STIME 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define if you have the stpncpy() function and it works. */
#define HAVE_STPNCPY 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtod_l' function. */
#define HAVE_STRTOD_L 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the `strtoimax' function. */
#define HAVE_STRTOIMAX 1

/* Define to 1 if you have the `strtold_l' function. */
#define HAVE_STRTOLD_L 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have the `strtoumax' function. */
#define HAVE_STRTOUMAX 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Define if there is a member named d_type in the struct describing directory
   headers. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if `f_fstypename' is a member of `struct fsstat'. */
/* #undef HAVE_STRUCT_FSSTAT_F_FSTYPENAME */

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
/* #undef HAVE_STRUCT_LCONV_DECIMAL_POINT */

/* Define to 1 if `n_un.n_name' is a member of `struct nlist'. */
/* #undef HAVE_STRUCT_NLIST_N_UN_N_NAME */

/* Define to 1 if `sa_sigaction' is a member of `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION_SA_SIGACTION 1

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if `f_frsize' is a member of `struct statfs'. */
#define HAVE_STRUCT_STATFS_F_FRSIZE 1

/* Define to 1 if `f_fstypename' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FSTYPENAME */

/* Define to 1 if `f_namelen' is a member of `struct statfs'. */
#define HAVE_STRUCT_STATFS_F_NAMELEN 1

/* Define to 1 if `f_namemax' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_NAMEMAX */

/* Define to 1 if `f_type' is a member of `struct statfs'. */
#define HAVE_STRUCT_STATFS_F_TYPE 1

/* Define to 1 if `f_basetype' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_BASETYPE */

/* Define to 1 if `f_fstypename' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_FSTYPENAME */

/* Define to 1 if `f_namemax' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_NAMEMAX */

/* Define to 1 if `f_type' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_TYPE */

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC */

/* Define to 1 if `st_atim.st__tim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC 1

/* Define to 1 if `st_author' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_AUTHOR */

/* Define to 1 if `st_birthtimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC */

/* Define to 1 if `st_birthtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `mem_unit' is a member of `struct sysinfo'. */
#define HAVE_STRUCT_SYSINFO_MEM_UNIT 1

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_ZONE 1

/* Define to 1 if `ut_exit' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT 1

/* Define to 1 if `ut_exit.e_exit' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT_E_EXIT 1

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_EXIT_E_TERMINATION 1

/* Define to 1 if `ut_exit.ut_exit' is a member of `struct utmpx'. */
/* #undef HAVE_STRUCT_UTMPX_UT_EXIT_UT_EXIT */

/* Define to 1 if `ut_exit.ut_termination' is a member of `struct utmpx'. */
/* #undef HAVE_STRUCT_UTMPX_UT_EXIT_UT_TERMINATION */

/* Define to 1 if `ut_id' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_ID 1

/* Define to 1 if `ut_name' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_NAME 1

/* Define to 1 if `ut_pid' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_PID 1

/* Define to 1 if `ut_type' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_TYPE 1

/* Define to 1 if `ut_user' is a member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_USER 1

/* Define to 1 if `ut_exit' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT 1

/* Define to 1 if `ut_exit.e_exit' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT_E_EXIT 1

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT_E_TERMINATION 1

/* Define to 1 if `ut_exit.ut_exit' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT_UT_EXIT */

/* Define to 1 if `ut_exit.ut_termination' is a member of `struct utmp'. */
/* #undef HAVE_STRUCT_UTMP_UT_EXIT_UT_TERMINATION */

/* Define to 1 if `ut_id' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_ID 1

/* Define to 1 if `ut_name' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_NAME 1

/* Define to 1 if `ut_pid' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_PID 1

/* Define to 1 if `ut_type' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_TYPE 1

/* Define to 1 if `ut_user' is a member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_USER 1

/* Define to 1 if the system has the type `struct utsname'. */
#define HAVE_STRUCT_UTSNAME 1

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
#define HAVE_ST_BLOCKS 1

/* Define if struct stat has an st_dm_mode member. */
/* #undef HAVE_ST_DM_MODE */

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `symlinkat' function. */
#define HAVE_SYMLINKAT 1

/* Define to 1 if you have the `sync' function. */
#define HAVE_SYNC 1

/* Define to 1 if you have the `syncfs' function. */
#define HAVE_SYNCFS 1

/* Define to 1 if you have the `sysctl' function. */
#define HAVE_SYSCTL 1

/* Define to 1 if you have the `sysinfo' function. */
#define HAVE_SYSINFO 1

/* FIXME */
#define HAVE_SYSLOG 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the `sysmp' function. */
/* #undef HAVE_SYSMP */

/* Define to 1 if you have the <sys/acl.h> header file. */
#define HAVE_SYS_ACL_H 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/fs/s5param.h> header file. */
/* #undef HAVE_SYS_FS_S5PARAM_H */

/* Define to 1 if you have the <sys/fs_types.h> header file. */
/* #undef HAVE_SYS_FS_TYPES_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/loadavg.h> header file. */
/* #undef HAVE_SYS_LOADAVG_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mntent.h> header file. */
/* #undef HAVE_SYS_MNTENT_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/mtio.h> header file. */
#define HAVE_SYS_MTIO_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/pstat.h> header file. */
/* #undef HAVE_SYS_PSTAT_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if you have the <sys/sysmp.h> header file. */
/* #undef HAVE_SYS_SYSMP_H */

/* Define to 1 if you have the <sys/systemcfg.h> header file. */
/* #undef HAVE_SYS_SYSTEMCFG_H */

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define to 1 if you have the <sys/table.h> header file. */
/* #undef HAVE_SYS_TABLE_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/ucred.h> header file. */
/* #undef HAVE_SYS_UCRED_H */

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `table' function. */
/* #undef HAVE_TABLE */

/* Define to 1 if you have the `tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#define HAVE_TCGETPGRP 1

/* Define to 1 if you have the `tcsetattr' function. */
#define HAVE_TCSETATTR 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the `timer_settime' function. */
#define HAVE_TIMER_SETTIME 1

/* Define to 1 if the system has the type `timezone_t'. */
/* #undef HAVE_TIMEZONE_T */

/* Define if struct tm has the tm_gmtoff member. */
#define HAVE_TM_GMTOFF 1

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#define HAVE_TM_ZONE 1

/* Define to 1 if you have the `towlower' function. */
#define HAVE_TOWLOWER 1

/* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlinkat' function. */
#define HAVE_UNLINKAT 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `uselocale' function. */
#define HAVE_USELOCALE 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the `utmpname' function. */
#define HAVE_UTMPNAME 1

/* Define to 1 if you have the `utmpxname' function. */
#define HAVE_UTMPXNAME 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* FIXME */
#define HAVE_UT_HOST 1

/* Define if you have a global __progname variable */
/* #undef HAVE_VAR___PROGNAME */

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if you have the `wcswidth' function. */
#define HAVE_WCSWIDTH 1

/* Define to 1 if you have the `wctob' function. */
#define HAVE_WCTOB 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the `wcwidth' function. */
#define HAVE_WCWIDTH 1

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if you have the `wmemchr' function. */
#define HAVE_WMEMCHR 1

/* Define to 1 if you have the `wmemcpy' function. */
#define HAVE_WMEMCPY 1

/* Define to 1 if you have the `wmempcpy' function. */
#define HAVE_WMEMPCPY 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if fstatat (..., 0) works. For example, it does not work in AIX
   7.1. */
/* #undef HAVE_WORKING_FSTATAT_ZERO_FLAG */

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 1

/* Define if utimes works properly. */
#define HAVE_WORKING_UTIMES 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_fseeki64' function. */
/* #undef HAVE__FSEEKI64 */

/* Define to 1 if you have the `_ftelli64' function. */
/* #undef HAVE__FTELLI64 */

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
/* #undef HAVE__SET_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the external variable, _system_configuration with a
   member named physmem. */
/* #undef HAVE__SYSTEM_CONFIGURATION */

/* Define to 1 if the compiler supports __builtin_expect,
   and to 2 if <builtins.h> does.  */
#define HAVE___BUILTIN_EXPECT 1
#ifndef HAVE___BUILTIN_EXPECT
# define __builtin_expect(e, c) (e)
#elif HAVE___BUILTIN_EXPECT == 2
# include <builtins.h>
#endif
    

/* Define to 1 if you have the `__fpurge' function. */
#define HAVE___FPURGE 1

/* Define to 1 if you have the `__freadahead' function. */
/* #undef HAVE___FREADAHEAD */

/* Define to 1 if you have the `__freading' function. */
#define HAVE___FREADING 1

/* Define to 1 if you have the `__freadptr' function. */
/* #undef HAVE___FREADPTR */

/* Define to 1 if you have the `__freadptrinc' function. */
/* #undef HAVE___FREADPTRINC */

/* Define to 1 if you have the `__fseterr' function. */
/* #undef HAVE___FSETERR */

/* Define to 1 if you have the `__fsetlocking' function. */
#define HAVE___FSETLOCKING 1

/* Define to 1 if the system has the type `__fsword_t'. */
#define HAVE___FSWORD_T 1

/* Define to 1 if you have the `__xpg_strerror_r' function. */
#define HAVE___XPG_STRERROR_R 1

/* Define HOST_NAME_MAX when <limits.h> does not define it. */
/* #undef HOST_NAME_MAX */

/* The host operating system. */
#define HOST_OPERATING_SYSTEM "GNU/Linux"

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Define to a symbolic name denoting the flavor of iconv_open()
   implementation. */
/* #undef ICONV_FLAVOR */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'long double'. */
#define LDBL_EXPBIT0_BIT 0

/* Define as the word index where to find the exponent of 'long double'. */
#define LDBL_EXPBIT0_WORD 2

/* Define as the bit index in the word where to find the sign of 'long
   double'. */
/* #undef LDBL_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'long double'. */
/* #undef LDBL_SIGNBIT_WORD */

/* Define to 1 if linkat can create hardlinks to symlinks */
/* #undef LINKAT_SYMLINK_NOTSUP */

/* Define to 1 if linkat fails to recognize a trailing slash. */
/* #undef LINKAT_TRAILING_SLASH_BUG */

/* Define to 1 if 'link(2)' dereferences symbolic links, 0 if it creates hard
   links to symlinks, -1 if it depends on the variable __xpg4, and -2 if
   unknown. */
#define LINK_FOLLOWS_SYMLINKS 0

/* FIXME */
/* #undef LOCALTIME_CACHE */

/* Define to 1 if lseek does not detect pipes. */
/* #undef LSEEK_PIPE_BROKEN */

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#define MAJOR_IN_SYSMACROS 1

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function does not return (size_t) -2 for empty input.
   */
#define MBRTOWC_EMPTY_INPUT_BUG 1

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* Use GNU style printf and scanf.  */
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif


/* Define to 1 if mkfifo does not reject trailing slash */
/* #undef MKFIFO_TRAILING_SLASH_BUG */

/* Define to 1 if mknod cannot create a fifo without super-user privileges */
/* #undef MKNOD_FIFO_BUG */

/* Define if there is no specific function for reading the list of mounted
   file systems. fread will be used to read /etc/mnttab. (SVR2) */
/* #undef MOUNTED_FREAD */

/* Define if (like SVR2) there is no specific function for reading the list of
   mounted file systems, and your system has these header files: <sys/fstyp.h>
   and <sys/statfs.h>. (SVR3) */
/* #undef MOUNTED_FREAD_FSTYP */

/* Define if there are functions named next_dev and fs_stat_dev for reading
   the list of mounted file systems. (BeOS) */
/* #undef MOUNTED_FS_STAT_DEV */

/* Define if there is a function named getfsstat for reading the list of
   mounted file systems. (DEC Alpha running OSF/1) */
/* #undef MOUNTED_GETFSSTAT */

/* Define if there is a function named getmnt for reading the list of mounted
   file systems. (Ultrix) */
/* #undef MOUNTED_GETMNT */

/* Define if there is a function named getmntent for reading the list of
   mounted file systems, and that function takes a single argument. (4.3BSD,
   SunOS, HP-UX, Dynix, Irix) */
#define MOUNTED_GETMNTENT1 1

/* Define if there is a function named getmntent for reading the list of
   mounted file systems, and that function takes two arguments. (SVR4) */
/* #undef MOUNTED_GETMNTENT2 */

/* Define if there is a function named getmntinfo for reading the list of
   mounted file systems and it returns an array of 'struct statfs'. (4.4BSD,
   Darwin) */
/* #undef MOUNTED_GETMNTINFO */

/* Define if there is a function named getmntinfo for reading the list of
   mounted file systems and it returns an array of 'struct statvfs'. (NetBSD
   3.0) */
/* #undef MOUNTED_GETMNTINFO2 */

/* Define if we are on interix, and ought to use statvfs plus some special
   knowledge on where mounted file systems can be found. (Interix) */
/* #undef MOUNTED_INTERIX_STATVFS */

/* Define if there is a function named listmntent that can be used to list all
   mounted file systems. (UNICOS) */
/* #undef MOUNTED_LISTMNTENT */

/* Define if there is a function named mntctl that can be used to read the
   list of mounted file systems, and there is a system header file that
   declares 'struct vmount'. (AIX) */
/* #undef MOUNTED_VMOUNT */

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Define if the compilation of mktime.c should define 'mktime_internal'. */
#define NEED_MKTIME_INTERNAL 1

/* Define if the compilation of mktime.c should define 'mktime' with the
   native Windows TZ workaround. */
/* #undef NEED_MKTIME_WINDOWS */

/* Define if the compilation of mktime.c should define 'mktime' with the
   algorithmic workarounds. */
/* #undef NEED_MKTIME_WORKING */

/* Define if the vasnprintf implementation needs special code for the 'a' and
   'A' directives. */
/* #undef NEED_PRINTF_DIRECTIVE_A */

/* Define if the vasnprintf implementation needs special code for the 'F'
   directive. */
/* #undef NEED_PRINTF_DIRECTIVE_F */

/* Define if the vasnprintf implementation needs special code for the 'ls'
   directive. */
/* #undef NEED_PRINTF_DIRECTIVE_LS */

/* Define if the vasnprintf implementation needs special code for 'double'
   arguments. */
/* #undef NEED_PRINTF_DOUBLE */

/* Define if the vasnprintf implementation needs special code for surviving
   out-of-memory conditions. */
/* #undef NEED_PRINTF_ENOMEM */

/* Define if the vasnprintf implementation needs special code for the ' flag.
   */
/* #undef NEED_PRINTF_FLAG_GROUPING */

/* Define if the vasnprintf implementation needs special code for the '-'
   flag. */
/* #undef NEED_PRINTF_FLAG_LEFTADJUST */

/* Define if the vasnprintf implementation needs special code for the 0 flag.
   */
/* #undef NEED_PRINTF_FLAG_ZERO */

/* Define if the vasnprintf implementation needs special code for infinite
   'double' arguments. */
/* #undef NEED_PRINTF_INFINITE_DOUBLE */

/* Define if the vasnprintf implementation needs special code for infinite
   'long double' arguments. */
/* #undef NEED_PRINTF_INFINITE_LONG_DOUBLE */

/* Define if the vasnprintf implementation needs special code for 'long
   double' arguments. */
/* #undef NEED_PRINTF_LONG_DOUBLE */

/* Define if the vasnprintf implementation needs special code for supporting
   large precisions without arbitrary bounds. */
/* #undef NEED_PRINTF_UNBOUNDED_PRECISION */

/* Define to 1 if the nlist n_name member is a pointer */
/* #undef N_NAME_POINTER */

/* Define to 1 if open() fails to recognize a trailing slash. */
/* #undef OPEN_TRAILING_SLASH_BUG */

/* Name of package */
#define PACKAGE "coreutils"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-coreutils@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU coreutils"

/* String identifying the packager of this software */
/* #undef PACKAGE_PACKAGER */

/* Packager info for bug reports (URL/e-mail/...) */
/* #undef PACKAGE_PACKAGER_BUG_REPORTS */

/* Packager-specific version information */
/* #undef PACKAGE_PACKAGER_VERSION */

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU coreutils 8.29"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "coreutils"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://www.gnu.org/software/coreutils/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "8.29"

/* Define to the maximum link count that a true pipe can have. */
#define PIPE_LINK_COUNT_MAX (1)

/* Define this if you prefer euidaccess to return the correct result even if
   this would make it nonreentrant. Define this only if your entire
   application is safe even if the uid or gid might temporarily change. If
   your application uses signal handlers or threads it is probably not safe.
   */
#define PREFER_NONREENTRANT_EUIDACCESS 1

/* Define if <inttypes.h> exists and defines unusable PRI* macros. */
/* #undef PRI_MACROS_BROKEN */

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T mode_t

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to 1 if pthread_sigmask(), when it fails, returns -1 and sets errno.
   */
/* #undef PTHREAD_SIGMASK_FAILS_WITH_ERRNO */

/* Define to 1 if pthread_sigmask may return 0 and have no effect. */
/* #undef PTHREAD_SIGMASK_INEFFECTIVE */

/* Define to 1 if pthread_sigmask() unblocks signals incorrectly. */
/* #undef PTHREAD_SIGMASK_UNBLOCK_BUG */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if readlink fails to recognize a trailing slash. */
/* #undef READLINK_TRAILING_SLASH_BUG */

/* Define if rename does not work when the destination file exists, as on
   Cygwin 1.5 or Windows. */
/* #undef RENAME_DEST_EXISTS_BUG */

/* Define if rename fails to leave hard links alone, as on NetBSD 1.6 or
   Cygwin 1.5. */
/* #undef RENAME_HARD_LINK_BUG */

/* Define if rename does not correctly handle slashes on the destination
   argument, such as on Solaris 11 or NetBSD 1.6. */
/* #undef RENAME_TRAILING_SLASH_DEST_BUG */

/* Define if rename does not correctly handle slashes on the source argument,
   such as on Solaris 9 or cygwin 1.5. */
/* #undef RENAME_TRAILING_SLASH_SOURCE_BUG */

/* Define to 1 if gnulib's dirfd() replacement is used. */
/* #undef REPLACE_DIRFD */

/* Define to 1 if gnulib's fchdir() replacement is used. */
/* #undef REPLACE_FCHDIR */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define if nl_langinfo exists but is overridden by gnulib. */
/* #undef REPLACE_NL_LANGINFO */

/* Define to 1 if open() should work around the inability to open a directory.
   */
/* #undef REPLACE_OPEN_DIRECTORY */

/* Define to 1 if strerror(0) does not return a message implying success. */
/* #undef REPLACE_STRERROR_0 */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define if vfprintf is overridden by a POSIX compliant gnulib
   implementation. */
/* #undef REPLACE_VFPRINTF_POSIX */

/* Define if vprintf is overridden by a POSIX compliant gnulib implementation.
   */
/* #undef REPLACE_VPRINTF_POSIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define if the block counts reported by statfs may be truncated to 2GB and
   the correct values may be stored in the f_spare array. (SunOS 4.1.2, 4.1.3,
   and 4.1.3_U1 are reported to have this problem. SunOS 4.1.1 seems not to be
   affected.) */
/* #undef STATFS_TRUNCATES_BLOCK_COUNTS */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define if statfs takes 2 args and struct statfs has a field named f_bsize.
   (4.3BSD, SunOS 4, HP-UX, AIX PS/2) */
/* #undef STAT_STATFS2_BSIZE */

/* Define if statfs takes 2 args and struct statfs has a field named f_frsize.
   (glibc/Linux > 2.6) */
#define STAT_STATFS2_FRSIZE 1

/* Define if statfs takes 2 args and struct statfs has a field named f_fsize.
   (4.4BSD, NetBSD) */
/* #undef STAT_STATFS2_FSIZE */

/* Define if statfs takes 2 args and the second argument has type struct
   fs_data. (Ultrix) */
/* #undef STAT_STATFS2_FS_DATA */

/* Define if statfs takes 3 args. (DEC Alpha running OSF/1) */
/* #undef STAT_STATFS3_OSF1 */

/* Define if statfs takes 4 args. (SVR3, Dynix, old Irix, old AIX, Dolphin) */
/* #undef STAT_STATFS4 */

/* Define if there is a function named statvfs. (SVR4) */
#define STAT_STATVFS 1

/* Define if statvfs64 should be preferred over statvfs. */
/* #undef STAT_STATVFS64 */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Define to 1 if the f_fsid member of struct statfs is an integer. */
/* #undef STRUCT_STATFS_F_FSID_IS_INTEGER */

/* Define to 1 if the f_fsid member of struct statvfs is an integer. */
/* #undef STRUCT_STATVFS_F_FSID_IS_INTEGER */

/* Define to 1 on System V Release 4. */
/* #undef SVR4 */

/* FIXME */
/* #undef TERMIOS_NEEDS_XOPEN_SOURCE */

/* Define to 1 if time_t is signed. */
#define TIME_T_IS_SIGNED 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* group used by system for TTYs */
/* #undef TTY_GROUP_NAME */

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
#define TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC 1

/* Define if tzset clobbers localtime's static buffer. */
/* #undef TZSET_CLOBBERS_LOCALTIME */

/* Define to 1 for Encore UMAX. */
/* #undef UMAX */

/* Define to 1 for Encore UMAX 4.3 that has <inq_status/cpustats.h> instead of
   <sys/cpustats.h>. */
/* #undef UMAX4_3 */

/* Define to 1 if unlink (dir) cannot possibly succeed. */
#define UNLINK_CANNOT_UNLINK_DIR 1

/* Define to 1 if unlink() on a parent directory may succeed */
/* #undef UNLINK_PARENT_BUG */

/* Define to nonzero if you want access control list support. */
#define USE_ACL 1

/* Define if the POSIX multithreading library can be used. */
#define USE_POSIX_THREADS 1

/* Define if references to the POSIX multithreading library should be made
   weak. */
#define USE_POSIX_THREADS_WEAK 1

/* Define if the GNU Pth multithreading library can be used. */
/* #undef USE_PTH_THREADS */

/* Define if references to the GNU Pth multithreading library should be made
   weak. */
/* #undef USE_PTH_THREADS_WEAK */

/* Define if the old Solaris multithreading library can be used. */
/* #undef USE_SOLARIS_THREADS */

/* Define if references to the old Solaris multithreading library should be
   made weak. */
/* #undef USE_SOLARIS_THREADS_WEAK */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable NetBSD extensions on NetBSD.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD extensions on NetBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions if necessary.  HP-UX 11.11 defines
   mbstate_t only if _XOPEN_SOURCE is defined to 500, regardless of
   whether compiling with -Ae or -D_HPUX_SOURCE=1.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to 1 if you want getc etc. to use unlocked I/O if available.
   Unlocked I/O can improve performance in unithreaded apps, but it is not
   safe for multithreaded apps. */
#define USE_UNLOCKED_IO 1

/* Define if the native Windows multithreading API can be used. */
/* #undef USE_WINDOWS_THREADS */

/* Define if you want extended attribute support. */
#define USE_XATTR 1

/* Version number of package */
#define VERSION "8.29"

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define if WSAStartup is needed. */
/* #undef WINDOWS_SOCKETS */

/* Define if sys/ptem.h is required for struct winsize. */
/* #undef WINSIZE_IN_PTEM */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5. */
#define _DARWIN_USE_64_BIT_INODE 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 on Solaris. */
/* #undef _LCONV_C99 */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 1 to make NetBSD features available. MINIX 3 needs this. */
#define _NETBSD_SOURCE 1

/* The _Noreturn keyword of C11.  */
#if ! (defined _Noreturn \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 in order to get the POSIX compatible declarations of socket
   functions. */
/* #undef _POSIX_PII_SOCKET */

/* Define to 1 if you need to in order for 'stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* For thread-safety on OSF/1, Solaris. */
#define _REENTRANT 1

/* Define if you want <regex.h> to include <limits.h>, so that it consistently
   overrides <limits.h>'s RE_DUP_MAX. */
/* #undef _REGEX_INCLUDE_LIMITS_H */

/* Define if you want regoff_t to be at least as wide POSIX requires. */
/* #undef _REGEX_LARGE_OFFSETS */

/* For thread-safety on AIX, FreeBSD. */
#define _THREAD_SAFE 1

/* For standard stat data types on VMS. */
#define _USE_STD_STAT 1

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
/* #undef __GETOPT_PREFIX */

/* For 64-bit time_t on 32-bit mingw. */
/* #undef __MINGW_USE_VC2005_COMPAT */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_CONSTANT_MACROS */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_LIMIT_MACROS */

/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions.  This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/bleeding-edge-potential/latest-per-pkg/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.  */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined __header_inline \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Always use our fgetfilecon wrapper. */
#define fgetfilecon rpl_fgetfilecon

/* Define to a replacement function name for fnmatch(). */
/* #undef fnmatch */

/* Always use our getfilecon wrapper. */
#define getfilecon rpl_getfilecon

/* Define to a replacement function name for getpass(). */
#define getpass gnu_getpass

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned long int' if <sys/types.h> does not define. */
/* #undef ino_t */

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Always use our lgetfilecon wrapper. */
#define lgetfilecon rpl_lgetfilecon

/* Define to 1 if the compiler is checking for lint. */
/* #undef lint */

/* Define to `unsigned int' if <sys/types.h> does not define. */
#define major_t unsigned int

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
#define minor_t unsigned int

/* Define to the real name of the mktime_internal function. */
/* #undef mktime_internal */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the name of the strftime replacement function. */
#define my_strftime nstrftime

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to rpl_re_comp if the replacement should be used. */
/* #undef re_comp */

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
/* #undef re_compile_fastmap */

/* Define to rpl_re_compile_pattern if the replacement should be used. */
/* #undef re_compile_pattern */

/* Define to rpl_re_exec if the replacement should be used. */
/* #undef re_exec */

/* Define to rpl_re_match if the replacement should be used. */
/* #undef re_match */

/* Define to rpl_re_match_2 if the replacement should be used. */
/* #undef re_match_2 */

/* Define to rpl_re_search if the replacement should be used. */
/* #undef re_search */

/* Define to rpl_re_search_2 if the replacement should be used. */
/* #undef re_search_2 */

/* Define to rpl_re_set_registers if the replacement should be used. */
/* #undef re_set_registers */

/* Define to rpl_re_set_syntax if the replacement should be used. */
/* #undef re_set_syntax */

/* Define to rpl_re_syntax_options if the replacement should be used. */
/* #undef re_syntax_options */

/* Define to rpl_regcomp if the replacement should be used. */
/* #undef regcomp */

/* Define to rpl_regerror if the replacement should be used. */
/* #undef regerror */

/* Define to rpl_regexec if the replacement should be used. */
/* #undef regexec */

/* Define to rpl_regfree if the replacement should be used. */
/* #undef regfree */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* gcc supports the "unused" attribute on possibly unused labels, and
   g++ has since version 4.5.  Note to support C++ as well as C,
   _GL_UNUSED_LABEL should be used with a trailing ;  */
#if !defined __cplusplus || __GNUC__ > 4 \
    || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif


/* Define to an unsigned 32-bit type if <sys/types.h> lacks this type. */
/* #undef useconds_t */

/* Define as a macro for copying va_list variables. */
/* #undef va_copy */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
