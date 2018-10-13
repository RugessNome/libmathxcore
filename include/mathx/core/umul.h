
#ifndef LIBMATHXCORE_UMUL_H
#define LIBMATHXCORE_UMUL_H

#include "mathx/core/defs.h"

LIBMATHXCORE_API mx_size_t unbr_long_mul(const mx_limb_t *a, mx_size_t as, const mx_limb_t *b, mx_size_t bs, mx_limb_t *result);
LIBMATHXCORE_API mx_size_t unbr_mul(const mx_limb_t *a, mx_size_t as, const mx_limb_t *b, mx_size_t bs, mx_limb_t *result);

#endif // LIBMATHXCORE_UMUL_H