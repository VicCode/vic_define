#pragma once

#include <vic/predef.h>

#include <stdbool.h>
#include <stddef.h>
#include <sys/types.h>
#ifdef _VIC_WINDOWS_
#include <windows.h>
#else
#include <errno.h>
#endif

#include <vic/inttype.h>

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
#   if	__cplusplus < 201103L
#       define nil NULL
#   else
#       define nil nullptr
#   endif
#else
#   define nil NULL
#endif

typedef char * char_ptr;
typedef const char * const_char_ptr;

/* Float types */
typedef float float32_t;
typedef double float64_t;
typedef long double float96_t;

typedef float32_t floatmin_t;
typedef float96_t floatmax_t;

//using ::size_t;
//using ::ssize_t;
//using ::ptrdiff_t;
//using ::off_t;
//using ::time_t;

typedef uint32_t line_t;
typedef uint8_t byte_t;
typedef size_t iov_len_t;
typedef int32_t fd_t;
#define vic_invalid_fd -1

typedef fd_t socket_t;
#define vic_invalid_socket vic_invalid_fd

//using ::pid_t; // Process ID
typedef pid_t tid_t; // Thread ID

//typedef size_t fls_key_t;

#ifdef _VIC_WINDOWS_
    typedef DWORD error_t;
#   define last_error() GetLastError()
#   define set_last_error(err) SetLastError(err)
#else
#   ifndef __error_t_defined
        typedef int32_t error_t;
#       define __error_t_defined 1
#   endif
#   define last_error() errno
#   define set_last_error(err) (errno = err)
#endif

#ifdef	__cplusplus
}
#endif
