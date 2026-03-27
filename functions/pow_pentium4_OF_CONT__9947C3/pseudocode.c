// positive sp value has been detected, the output may be wrong!
double __usercall _pow_pentium4_::OF_CONT@<st0>(
        int a1@<eax>,
        unsigned int a2@<edx>,
        unsigned int a3@<ecx>,
        unsigned int a4@<edi>,
        __m128d a5@<xmm0>,
        __m128d a6@<xmm1>,
        __m128d a7@<xmm2>,
        double a8@<xmm3>,
        double a9@<xmm4>,
        double a10@<xmm5>,
        __m128d a11@<xmm7>,
        float a12,
        float a13,
        double a14)
{
  double v14; // xmm4_8
  __m128d v15; // xmm2
  __m128d v16; // xmm7
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128d v19; // xmm0
  __m128d v20; // xmm6
  double v21; // xmm4_8
  __m128i v22; // xmm7
  double v23; // xmm7_8
  double v24; // xmm1_8
  unsigned __int64 v25; // xmm4_8
  double v26; // xmm1_8
  double v27; // xmm6_8
  __m128i v28; // xmm0
  int v29; // eax
  int v30; // edx
  double result; // st7

  v14 = a9 + a5.m128d_f64[0];
  v15 = _mm_mul_pd(a7, a11);
  v16 = _mm_mul_pd(a11, a11);
  a5.m128d_f64[0] = a8 - (a8 + 6.755399441055744e15 - 6.755399441055744e15);
  v17 = (__m128i)_mm_add_pd(v15, _mm_mul_pd(a6, v16));
  v18 = (__m128i)_mm_mul_pd(
                   *((__m128d *)&unk_AAB130 + a1),
                   (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_cvtsi32_si128(a2), 0x2Du), 0x44));
  a5.m128d_f64[0] = a5.m128d_f64[0] * *(double *)_mm_insert_epi16((__m128i)0LL, 0x3F80u, 3).m128i_i64
                  + a10
                  + (*(double *)v17.m128i_i64 * v16.m128d_f64[0]
                   + *(double *)_mm_shuffle_epi32(v17, 0xEE).m128i_i64
                   + v14)
                  * a14;
  v19 = _mm_unpacklo_pd(a5, a5);
  v20 = _mm_mul_pd((__m128d)xmmword_AAB970, v19);
  v21 = 0.6931471805599453 * v19.m128d_f64[0];
  v28 = (__m128i)_mm_mul_pd(v19, v19);
  v22 = (__m128i)_mm_mul_pd(_mm_add_pd((__m128d)xmmword_AAB980, v20), (__m128d)v28);
  v20.m128d_f64[0] = *(double *)_mm_shuffle_epi32(v22, 0xEE).m128i_i64;
  *(double *)v28.m128i_i64 = *(double *)v28.m128i_i64 * *(double *)v18.m128i_i64 * *(double *)v22.m128i_i64;
  *(_QWORD *)&v23 = _mm_cvtsi32_si128(a3).m128i_u64[0] << 0x2D;
  v17.m128i_i8[0] = _mm_cvtsi32_si128((((unsigned __int8)((int)(0x1FF80 - a2) >> 7) + 2) & 0x20u) + ((int)(0x1FF80 - a2) >> 7) + 2).m128i_u8[0];
  *(_QWORD *)&v24 = (0xFFFFFFFFFFFFFFFFuLL << v17.m128i_i8[0]) & v18.m128i_i64[0];
  *(double *)v28.m128i_i64 = *(double *)v28.m128i_i64
                           + *(double *)_mm_shuffle_epi32(v18, 0xEE).m128i_i64
                           + v20.m128d_f64[0] * *(double *)v18.m128i_i64
                           + v21 * *(double *)v18.m128i_i64;
  v25 = 0xFFFFFFFFFFFFFFFFuLL << v17.m128i_i8[0];
  *(double *)v18.m128i_i64 = *(double *)v18.m128i_i64 - v24;
  *(double *)v17.m128i_i64 = v24;
  *(_QWORD *)&v26 = COERCE_UNSIGNED_INT64(v24 + *(double *)v28.m128i_i64) & v25;
  *(_QWORD *)&v27 = _mm_insert_epi16((__m128i)0LL, a4, 3).m128i_u64[0];
  *(double *)v28.m128i_i64 = *(double *)v28.m128i_i64 + *(double *)v17.m128i_i64 - v26 + *(double *)v18.m128i_i64;
  if ( (int)(a2 - 0x1FF80) > 0 )
  {
    _pow_pentium4_::SCALE2();
  }
  else
  {
    *(double *)v28.m128i_i64 = *(double *)v28.m128i_i64 * v23
                             + v26 * v23
                             + v27 * (*(double *)v28.m128i_i64 * v23 + v26 * v23);
    v29 = _mm_extract_epi16(v28, 3) & 0x7FF0;
    v30 = 0x18;
    if ( v29 == 0x7FF0 )
      return _pow_pentium4_::CALL_LIBM_ERROR_0(v30, *(double *)v28.m128i_i64, a12, a13, a14);
    v30 = 0x19;
    if ( !v29 )
      return _pow_pentium4_::CALL_LIBM_ERROR_0(v30, *(double *)v28.m128i_i64, a12, a13, a14);
    else
      return *(double *)v28.m128i_i64;
  }
  return result;
}
