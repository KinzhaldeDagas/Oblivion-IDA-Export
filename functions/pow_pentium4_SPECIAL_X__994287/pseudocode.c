int __usercall _pow_pentium4_::SPECIAL_X@<eax>(
        int a1@<edx>,
        __m128i a2@<xmm0>,
        __m128i a3@<xmm1>,
        __m128d a4@<xmm2>,
        __m128i a5@<xmm3>,
        __m128d a6@<xmm4>,
        __m128d a7@<xmm6>,
        __m128i a8@<xmm7>,
        __int64 a9,
        __int64 a10)
{
  int v10; // eax
  __m128i v11; // xmm1
  unsigned int v12; // ecx
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  __m128i v17; // xmm1
  __m128i v18; // xmm3
  int v19; // ecx

  a3.m128i_i64[0] = a10;
  *(double *)a5.m128i_i64 = NAN;
  v10 = _mm_cvtsi128_si32(a3);
  a4.m128d_f64[0] = *(double *)&a10;
  v11 = _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)a3, (__m128d)a5), 0x20u);
  v12 = _mm_cvtsi128_si32(v11);
  if ( v12 >= 0x7FF00000 )
    return _pow_pentium4_::Y_INF_NAN_CHECK_X(a9);
  if ( !(v12 | v10) )
    return _pow_pentium4_::Y_ZERO();
  if ( a1 >= 0 )
    return _pow_pentium4_::DENORMAL_POS_X();
  v13 = _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(v11, 0x14u), _mm_cvtsi32_si128(0x3F3u)), (__m128i)0LL);
  v14 = _mm_cmpeq_epi32(_mm_sll_epi64((__m128i)_mm_or_pd(a4, (__m128d)_mm_slli_epi64(a5, 0x34u)), v13), (__m128i)0LL);
  v15 = _mm_movemask_epi8(v14);
  v16 = (0x7FEF - a1) & 0x7FFF;
  if ( v16 >= 0x7FF0 )
    return _pow_pentium4_::INF_NAN_X(a9, HIDWORD(a9), a10);
  if ( v15 != 0xFF )
    return _pow_pentium4_::RET_INVALID(a9);
  v13.m128i_i64[0] = a10;
  v14.m128i_i64[0] = a10;
  v18 = _mm_cvtsi32_si128(0x3F4u);
  v17 = _mm_sub_epi32(_mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v13, (__m128d)xmmword_AAB960), 0x34u), v18);
  *(double *)v18.m128i_i64 = -0.0;
  v19 = ((unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(v14, v17), v18)) + 0x3FF01) & 0x40000;
  if ( v16 < 0x10 )
    return _pow_pentium4_::DENORMAL_X(v19);
  *(double *)v18.m128i_i64 = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
  return _pow_pentium4_::BACK_MAIN(0xBFE7Fu, a2, v18, a6, a7, a8, a9, *(double *)&a10);
}
