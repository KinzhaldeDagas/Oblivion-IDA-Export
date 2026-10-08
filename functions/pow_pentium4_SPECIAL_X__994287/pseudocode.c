double __usercall _pow_pentium4_::SPECIAL_X@<st0>(
        int a1@<edx>,
        __m128i a2@<xmm0>,
        __m128i a3@<xmm1>,
        __m128d a4@<xmm2>,
        __m128i a5@<xmm3>,
        __m128i a6@<xmm4>,
        __m128d a7@<xmm6>,
        __m128i a8@<xmm7>,
        double a9@<xmm5>,
        __int64 a10,
        double a11)
{
  int v11; // eax
  __m128i v12; // xmm1
  unsigned int v13; // ecx
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  unsigned __int8 v16; // al
  unsigned int v17; // edx
  __m128i v18; // xmm1
  __m128i v19; // xmm3
  __m128d v20; // xmm2
  double result; // st7

  *(double *)a3.m128i_i64 = a11; /*0x994287*/
  *(double *)a5.m128i_i64 = NAN; /*0x99428d*/
  v11 = _mm_cvtsi128_si32(a3); /*0x994295*/
  a4.m128d_f64[0] = a11; /*0x994299*/
  v12 = _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)a3, (__m128d)a5), 0x20u); /*0x9942a1*/
  v13 = _mm_cvtsi128_si32(v12); /*0x9942a6*/
  if ( v13 >= 0x7FF00000 ) /*0x9942b0*/
    return _pow_pentium4_::Y_INF_NAN_CHECK_X(a8, (__m128i)a4, (__m128d)a5, a6, *(double *)&a10); /*0x9942b0*/
  if ( !(v13 | v11) ) /*0x9942b6*/
    return _pow_pentium4_::Y_ZERO(a6, *(float *)&a10, *((float *)&a10 + 1), a11); /*0x9942bb*/
  if ( a1 >= 0 ) /*0x9942c4*/
  {
    _pow_pentium4_::DENORMAL_POS_X(a6, a10, SLODWORD(a11), SHIDWORD(a11)); /*0x9942c4*/
  }
  else
  {
    v14 = _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(v12, 0x14u), _mm_cvtsi32_si128(0x3F3u)), (__m128i)0LL); /*0x9942f1*/
    v15 = _mm_cmpeq_epi32(_mm_sll_epi64((__m128i)_mm_or_pd(a4, (__m128d)_mm_slli_epi64(a5, 0x34u)), v14), (__m128i)0LL); /*0x9942f9*/
    v16 = _mm_movemask_epi8(v15); /*0x9942fd*/
    v17 = (0x7FEF - a1) & 0x7FFF; /*0x994303*/
    if ( v17 >= 0x7FF0 ) /*0x99430f*/
    {
      return _pow_pentium4_::INF_NAN_X(v16, v15, (__m128d)0LL, a6, a10, SHIDWORD(a10), *(__int64 *)&a11); /*0x99430f*/
    }
    else if ( v16 == 0xFF ) /*0x99431f*/
    {
      *(double *)v14.m128i_i64 = a11; /*0x994325*/
      *(double *)v15.m128i_i64 = a11; /*0x99432b*/
      v19 = _mm_cvtsi32_si128(0x3F4u); /*0x994336*/
      v18 = _mm_sub_epi32(_mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v14, (__m128d)xmmword_AAB960), 0x34u), v19); /*0x994347*/
      *(double *)v19.m128i_i64 = -0.0; /*0x99434b*/
      v20 = (__m128d)_mm_cmpeq_epi32(_mm_sll_epi64(v15, v18), v19); /*0x994357*/
      if ( v17 < 0x10 ) /*0x994374*/
      {
        _pow_pentium4_::DENORMAL_X(a6, v20, v19, (__m128d)a8, a10, a11); /*0x994374*/
      }
      else
      {
        *(double *)v19.m128i_i64 = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL); /*0x99437b*/
        v20.m128d_f64[0] = 1.0; /*0x994383*/
        return _pow_pentium4_::BACK_MAIN(0xBFE7Fu, a2, v19, (__m128d)a6, a7, a8, v20, a9, *(double *)&a10, a11); /*0x99438b*/
      }
    }
    else
    {
      return _pow_pentium4_::RET_INVALID((__m128d)a2, v15, (__m128i)0LL, (__m128d)a6, (__m128d)a8, *(double *)&a10, a11); /*0x99431f*/
    }
  }
  return result;
}
