double __usercall start_13_::LARGE_SMALL_INPUT_0@<st0>(
        int a1@<eax>,
        __m128i a2@<xmm0>,
        double a3@<xmm1>,
        __int64 a4@<xmm2>,
        __m128i a5@<xmm3>,
        __int64 a6@<xmm4>,
        __int64 a7@<xmm5>,
        unsigned __int64 a8@<xmm7>)
{
  double v8; // xmm7_8
  char v9; // al
  double v10; // xmm1_8
  double v11; // xmm6_8
  __int64 v12; // xmm5_8
  double v13; // xmm0_8
  double v14; // xmm4_8
  unsigned int v15; // eax
  double v16; // xmm2_8
  int v17; // edx
  double v18; // xmm7_8
  double v19; // xmm6_8
  double v20; // xmm4_8
  __m128i v21; // xmm3
  double v22; // xmm0_8
  double result; // st7

  if ( (unsigned int)(a1 - 0x3BB) >= 0x41 )
  {
    start_13_::VERY_SMALL_OR_LARGE_0();
  }
  else
  {
    *(_QWORD *)&v8 = a8 >> 0x26 << 0x26;
    v9 = _mm_movemask_epi8(a2);
    v10 = a3 - v8;
    v11 = v8;
    v12 = a7 | ~a6 & a2.m128i_i64[0];
    v13 = (*(double *)a2.m128i_i64 + v8) * v10;
    v14 = *(double *)a5.m128i_i64 - v8 * v8;
    *(double *)a5.m128i_i64 = sqrt(v14 - v13);
    v15 = -((unsigned __int8)(v9 & 0x80) >> 7);
    *(_QWORD *)&v16 = a4 & a5.m128i_i64[0] | v12;
    v17 = _mm_extract_epi16(_mm_slli_epi64(a5, 2u), 3) - 0xFEC0;
    v18 = *(double *)a5.m128i_i64 * *(double *)&qword_AAD1B0[v17];
    v19 = v11 * v16 - v18 + v10 * v16;
    v20 = v14 - v16 * v16 - v13;
    v21 = (__m128i)_mm_add_pd(
                     _mm_and_pd((__m128d)_mm_shuffle_epi32(_mm_cvtsi32_si128(v15), 0), (__m128d)xmmword_AAD9C0),
                     (__m128d)xmmword_AAC2B0[v17]);
    v22 = (-0.04464285714285714 * (v19 * v19) + -0.075) * (v19 * (v19 * v19) * (v19 * v19))
        + -0.1666666666666667 * (v19 * (v19 * v19))
        + *(double *)v21.m128i_i64;
    v21.m128i_i64[0] = _mm_shuffle_epi32(v21, 0xEE).m128i_i64[0];
    *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                           v22
                         + v20 / (v18 + v18 + v19)
                         + *(double *)v21.m128i_i64
                         - (v20 / (v18 + v18 + v19)
                          + *(double *)v21.m128i_i64)
                         + v20 / (v18 + v18 + v19)
                         + *(double *)v21.m128i_i64)
                       ^ _mm_insert_epi16((__m128i)0LL, (unsigned __int16)v15 & 0x8000, 3).m128i_u64[0];
  }
  return result;
}
