#pragma once

#ifdef CPP98_COMPAT
#define nullptr 0
#define noexcept
#define constexpr

typedef int* intptr_t;
typedef unsigned int* uintptr_t;
typedef long ptrdiff_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef unsigned long uintmax_t;

//typedef char int8_t;
typedef short int16_t;
//typedef int int32_t;
typedef long int64_t;
typedef long intmax_t;


#define static_assert(x, y)
#endif

#include <string.h>
#include <stdlib.h>

