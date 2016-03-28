#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <sys/types.h>

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

#ifdef	__cplusplus
}
#endif
