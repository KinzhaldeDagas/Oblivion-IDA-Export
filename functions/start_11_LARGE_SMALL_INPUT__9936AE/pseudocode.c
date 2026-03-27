double __usercall start_11_::LARGE_SMALL_INPUT@<st0>(
        int a1@<eax>,
        __int64 a2@<xmm0>,
        double a3@<xmm1>,
        __int64 a4@<xmm2>,
        __m128i a5@<xmm3>,
        __int64 a6@<xmm5>,
        __m128i a7@<xmm7>)
{
  char v7; // al
  double v8; // xmm0_8
  __int64 v9; // xmm6_8
  double v10; // xmm1_8
  double v11; // xmm4_8
  double v12; // xmm0_8
  double v13; // xmm2_8
  int v14; // edx
  double v15; // xmm7_8
  double v16; // xmm6_8
  __m128i v17; // xmm3
  double result; // st7

  if ( (unsigned int)(a1 - 0x3BB) >= 0x43 )
  {
    start_11_::VERY_SMALL_OR_LARGE();
  }
  else
  {
    *(double *)a5.m128i_i64 = sqrt(*(double *)a5.m128i_i64 - a3 * a3);
    v7 = _mm_movemask_epi8(a7);
    *(_QWORD *)&v8 = (unsigned __int64)(2 * a2) >> 1;
    v9 = a7.m128i_i64[0] & 0x7FFFFFC000000000LL;
    v10 = v8 - COERCE_DOUBLE(a7.m128i_i64[0] & 0x7FFFFFC000000000LL);
    v11 = 1.0 - *(double *)&v9 * *(double *)&v9;
    v12 = (v8 + *(double *)&v9) * (v8 - *(double *)&v9);
    *(_QWORD *)&v13 = a4 & a5.m128i_i64[0] | a6;
    v14 = _mm_extract_epi16(_mm_slli_epi64(a5, 2u), 3) - 0xFEC0;
    v15 = *(double *)a5.m128i_i64 * *(double *)&qword_AA7770[v14];
    v16 = *(double *)&v9 * v13 - v15 + v10 * v13;
    v17 = (__m128i)_mm_sub_pd((__m128d)xmmword_AA7F70, (__m128d)xmmword_AA6870[v14]);
    *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                           (0.04464285714285714 * (v16 * v16) + 0.075) * (v16 * (v16 * v16) * (v16 * v16))
                         + 0.1666666666666667 * (v16 * (v16 * v16))
                         + *(double *)v17.m128i_i64
                         - (v11 - v13 * v13 - v12) / (v15 + v15 + v16)
                         + *(double *)_mm_shuffle_epi32(v17, 0xEE).m128i_i64)
                       | _mm_insert_epi16((__m128i)0LL, (unsigned __int8)(v7 & 0x80) << 8, 3).m128i_u64[0];
  }
  return result;
}
