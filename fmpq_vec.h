/*
    Copyright (C) 2014 Abhinav Baid

    This file is part of FLINT.

    FLINT is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#ifndef FMPQ_VEC_H
#define FMPQ_VEC_H

#ifdef FMPQ_VEC_INLINES_C
#define FMPQ_VEC_INLINE FLINT_DLL
#else
#define FMPQ_VEC_INLINE static __inline__
#endif

#include <gmp.h>
#include "fmpq.h"
#include "flint.h"

#ifdef __cplusplus
 extern "C" {
#endif

/*  Randomisation  ***********************************************************/

FLINT_DLL void _fmpq_vec_randtest(fmpq * f, flint_rand_t state, 
                        slong len, mp_bitcnt_t bits);

/*  Conversions  *************************************************************/

FLINT_DLL void _fmpq_vec_set_fmpz_vec(fmpq * res, const fmpz * vec, slong len);

/*  Dot product  **************************************************/

FLINT_DLL void _fmpq_vec_dot(fmpq_t res, const fmpq * vec1, const fmpq * vec2, slong len);

#ifdef __cplusplus
}
#endif

#endif
