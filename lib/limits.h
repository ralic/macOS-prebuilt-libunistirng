/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
/* A GNU-like <limits.h>.

   Copyright 2016 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef _GL_LIMITS_H

#if __GNUC__ >= 3
#pragma GCC system_header
#endif


/* The include_next requires a split double-inclusion guard.  */
#include_next <limits.h>

#ifndef _GL_LIMITS_H
#define _GL_LIMITS_H

/* The number of usable bits in an unsigned or signed integer type
   with minimum value MIN and maximum value MAX, as an int expression
   suitable in #if.  Cover all known practical hosts.  This
   implementation exploits the fact that MAX is 1 less than a power of
   2, and merely counts the number of 1 bits in MAX; "COBn" means
   "count the number of 1 bits in the low-order n bits").  */
#define _GL_INTEGER_WIDTH(min, max) (((min) < 0) + _GL_COB128 (max))
#define _GL_COB128(n) (_GL_COB64 ((n) >> 31 >> 31 >> 2) + _GL_COB64 (n))
#define _GL_COB64(n) (_GL_COB32 ((n) >> 31 >> 1) + _GL_COB32 (n))
#define _GL_COB32(n) (_GL_COB16 ((n) >> 16) + _GL_COB16 (n))
#define _GL_COB16(n) (_GL_COB8 ((n) >> 8) + _GL_COB8 (n))
#define _GL_COB8(n) (_GL_COB4 ((n) >> 4) + _GL_COB4 (n))
#define _GL_COB4(n) (!!((n) & 8) + !!((n) & 4) + !!((n) & 2) + !!((n) & 1))

/* Macros specified by ISO/IEC TS 18661-1:2014.  */

#if (! defined ULLONG_WIDTH                                             \
     && (defined _GNU_SOURCE || defined __STDC_WANT_IEC_60559_BFP_EXT__))
# define CHAR_WIDTH _GL_INTEGER_WIDTH (CHAR_MIN, CHAR_MAX)
# define SCHAR_WIDTH _GL_INTEGER_WIDTH (SCHAR_MIN, SCHAR_MAX)
# define UCHAR_WIDTH _GL_INTEGER_WIDTH (0, UCHAR_MAX)
# define SHRT_WIDTH _GL_INTEGER_WIDTH (SHRT_MIN, SHRT_MAX)
# define USHRT_WIDTH _GL_INTEGER_WIDTH (0, USHRT_MAX)
# define INT_WIDTH _GL_INTEGER_WIDTH (INT_MIN, INT_MAX)
# define UINT_WIDTH _GL_INTEGER_WIDTH (0, UINT_MAX)
# define LONG_WIDTH _GL_INTEGER_WIDTH (LONG_MIN, LONG_MAX)
# define ULONG_WIDTH _GL_INTEGER_WIDTH (0, ULONG_MAX)
# define LLONG_WIDTH _GL_INTEGER_WIDTH (LLONG_MIN, LLONG_MAX)
# define ULLONG_WIDTH _GL_INTEGER_WIDTH (0, ULLONG_MAX)
#endif /* !ULLONG_WIDTH && (_GNU_SOURCE || __STDC_WANT_IEC_60559_BFP_EXT__) */

#endif /* _GL_LIMITS_H */
#endif /* _GL_LIMITS_H */
