// local variable allocation has failed, the output may be wrong!
double __usercall start_13_::LARGE_SMALL_INPUT_0@<st0>(
        int a1@<eax>,
        __m128i a2@<xmm0>,
        double a3@<xmm1>,
        __int64 a4@<xmm2>,
        __m128i a5@<xmm3>,
        __int64 a6@<xmm4>,
        __int64 a7@<xmm5>,
        double a8@<xmm7>)
{
  unsigned int v8; // eax
  double v9; // xmm7_8
  char v10; // al
  double v11; // xmm1_8
  double v12; // xmm6_8
  __int64 v13; // xmm5_8
  double v14; // xmm0_8
  double v15; // xmm4_8
  unsigned int v16; // eax
  __int64 v17; // xmm2_8
  int v18; // edx
  double v19; // xmm7_8
  double v20; // xmm6_8
  double v21; // xmm4_8
  __m128i v22; // xmm3
  double v23; // xmm0_8
  double result; // st7

  v8 = a1 - 0x3BB; /*0x995896*/
  if ( v8 >= 0x41 ) /*0x99589e*/
    return start_13_::VERY_SMALL_OR_LARGE_0(v8, (__m128d)a2, *(__m128d *)&a3, a8); /*0x99589e*/
  *(_QWORD *)&v9 = *(_QWORD *)&a8 >> 0x26 << 0x26; /*0x9958a9*/
  v10 = _mm_movemask_epi8(a2); /*0x9958ae*/
  v11 = a3 - v9; /*0x9958b6*/
  v12 = v9; /*0x9958ba*/
  v13 = a7 | ~a6 & a2.m128i_i64[0]; /*0x9958c6*/
  v14 = (*(double *)a2.m128i_i64 + v9) * v11; /*0x9958ce*/
  v15 = *(double *)a5.m128i_i64 - v9 * v9; /*0x9958d2*/
  *(double *)a5.m128i_i64 = sqrt(v15 - v14); /*0x9958da*/
  v16 = -((unsigned __int8)(v10 & 0x80) >> 7); /*0x9958e6*/
  v17 = a4 & a5.m128i_i64[0] | v13; /*0x9958fa*/
  v18 = _mm_extract_epi16(_mm_slli_epi64(a5, 2u), 3) - 0xFEC0; /*0x99590d*/
  v19 = *(double *)a5.m128i_i64 * *(double *)&qword_AAD1B0[v18]; /*0x99590f*/
  v20 = v12 * *(double *)&v17 - v19 + v11 * *(double *)&v17; /*0x995930*/
  v21 = v15 - *(double *)&v17 * *(double *)&v17 - v14; /*0x995944*/
  v22 = (__m128i)_mm_add_pd( /*0x995960*/
                   _mm_and_pd((__m128d)_mm_shuffle_epi32(_mm_cvtsi32_si128(v16), 0), (__m128d)xmmword_AAD9C0),
                   (__m128d)xmmword_AAC2B0[v18]);
  v23 = (-0.04464285714285714 * (v20 * v20) + -0.075) * (v20 * (v20 * v20) * (v20 * v20)) /*0x995994*/
      + -0.1666666666666667 * (v20 * (v20 * v20))
      + *(double *)v22.m128i_i64;
  v22.m128i_i64[0] = _mm_shuffle_epi32(v22, 0xEE).m128i_i64[0]; /*0x9959a6*/
  *(_QWORD *)&result = COERCE_UNSIGNED_INT64( /*0x9959c9*/
                         v23
                       + v21 / (v19 + v19 + v20)
                       + *(double *)v22.m128i_i64
                       - (v21 / (v19 + v19 + v20)
                        + *(double *)v22.m128i_i64)
                       + v21 / (v19 + v19 + v20)
                       + *(double *)v22.m128i_i64)
                     ^ _mm_insert_epi16((__m128i)0LL, (unsigned __int16)v16 & 0x8000, 3).m128i_u64[0];
  return result; /*0x9959d0*/
}
