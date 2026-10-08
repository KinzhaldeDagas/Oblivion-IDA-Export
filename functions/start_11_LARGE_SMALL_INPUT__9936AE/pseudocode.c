// local variable allocation has failed, the output may be wrong!
double __usercall start_11_::LARGE_SMALL_INPUT@<st0>(
        int a1@<eax>,
        double a2@<xmm0>,
        double a3@<xmm1>,
        __int64 a4@<xmm2>,
        __m128i a5@<xmm3>,
        __int64 a6@<xmm5>,
        __m128i a7@<xmm7>)
{
  unsigned int v7; // eax
  char v8; // al
  double v9; // xmm0_8
  __int64 v10; // xmm6_8
  double v11; // xmm1_8
  double v12; // xmm4_8
  double v13; // xmm0_8
  __int64 v14; // xmm2_8
  int v15; // edx
  double v16; // xmm7_8
  double v17; // xmm6_8
  __m128i v18; // xmm3
  double result; // st7

  v7 = a1 - 0x3BB; /*0x9936ae*/
  if ( v7 >= 0x43 ) /*0x9936b6*/
    return start_11_::VERY_SMALL_OR_LARGE(v7, a2, *(__m128d *)&a3, (__m128d)a7); /*0x9936b6*/
  *(double *)a5.m128i_i64 = sqrt(*(double *)a5.m128i_i64 - a3 * a3); /*0x9936c4*/
  v8 = _mm_movemask_epi8(a7); /*0x9936c8*/
  *(_QWORD *)&v9 = (unsigned __int64)(2LL * *(_QWORD *)&a2) >> 1; /*0x9936d9*/
  v10 = a7.m128i_i64[0] & 0x7FFFFFC000000000LL; /*0x9936ea*/
  v11 = v9 - COERCE_DOUBLE(a7.m128i_i64[0] & 0x7FFFFFC000000000LL); /*0x9936ee*/
  v12 = 1.0 - *(double *)&v10 * *(double *)&v10; /*0x9936fa*/
  v13 = (v9 + *(double *)&v10) * (v9 - *(double *)&v10); /*0x9936fe*/
  v14 = a4 & a5.m128i_i64[0] | a6; /*0x993714*/
  v15 = _mm_extract_epi16(_mm_slli_epi64(a5, 2u), 3) - 0xFEC0; /*0x99371e*/
  v16 = *(double *)a5.m128i_i64 * *(double *)&qword_AA7770[v15]; /*0x993720*/
  v17 = *(double *)&v10 * *(double *)&v14 - v16 + v11 * *(double *)&v14; /*0x993741*/
  v18 = (__m128i)_mm_sub_pd((__m128d)xmmword_AA7F70, (__m128d)xmmword_AA6870[v15]); /*0x993771*/
  *(_QWORD *)&result = COERCE_UNSIGNED_INT64( /*0x9937cd*/
                         (0.04464285714285714 * (v17 * v17) + 0.075) * (v17 * (v17 * v17) * (v17 * v17))
                       + 0.1666666666666667 * (v17 * (v17 * v17))
                       + *(double *)v18.m128i_i64
                       - (v12 - *(double *)&v14 * *(double *)&v14 - v13) / (v16 + v16 + v17)
                       + *(double *)_mm_shuffle_epi32(v18, 0xEE).m128i_i64)
                     | _mm_insert_epi16((__m128i)0LL, (unsigned __int8)(v8 & 0x80) << 8, 3).m128i_u64[0];
  return result; /*0x9937d4*/
}
