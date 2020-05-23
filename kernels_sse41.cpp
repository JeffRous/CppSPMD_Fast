#if !defined(_MSC_VER)
#if !__SSE4_1__ || !__SSE3__ || __SSE4_2__ || !__SSSE3__
#error Please check your compiler options
#endif
#endif

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <cmath>

#define CPPSPMD_SSE2 0
#include "cppspmd_sse.h"

#include "cppspmd_type_aliases.h"

#include "mandelbrot_declares.h"
#include "mandelbrot_imp.h"

#include "test_kernel_declares.h"
#include "test_kernel_imp.h"

#include "rt_kernel_declares.h"
#include "rt_kernel_imp.h"

#include "simple_declares.h"
#include "simple_imp.h"