// Copyright (C) 2018 Vincent Chambrin
// This file is part of the libmathxcore library
// For conditions of distribution and use, see copyright notice in LICENSE

#ifndef LIBMATHXCORE_GCD_H
#define LIBMATHXCORE_GCD_H

#include "mathx/core/integer.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBMATHXCORE_API void int_gcd(mx_int_t *gcd, const mx_int_t *a, const mx_int_t *b);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // LIBMATHXCORE_GCD_H
