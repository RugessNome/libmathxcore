// Copyright (C) 2018 Vincent Chambrin
// This file is part of the libmathxcore library
// For conditions of distribution and use, see copyright notice in LICENSE

#include "mathx/core/comp.h"

#include "mathx/core/ucomp.h"

#include <stdlib.h> // abs

/*@
 * \fn mx_ssize_t int_comp(const mx_int_t *a, const mx_int_t *b)
 * \brief Compares two signed integers.
 * \param first integer
 * \param second integer
 * \returns zero, minus one or plus one
 *
 * Returns:
 * \begin{list}
 *   \li 0 if \c{a == b}
 *   \li 1 if \c{a > b}
 *   \li -1 if \c{a < b}
 * \end{list}
 */
mx_ssize_t int_comp(const mx_int_t *a, const mx_int_t *b)
{
  if (a->size < b->size)
    return -1;
  else if (a->size > b->size)
    return 1;

  return int_sign(a) * uint_comp(a->limbs, abs(a->size), b->limbs, abs(b->size));
}
