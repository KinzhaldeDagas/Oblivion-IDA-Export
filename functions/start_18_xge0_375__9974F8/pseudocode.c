// local variable allocation has failed, the output may be wrong!
double __usercall start_18_::xge0_375@<st0>(double a1@<xmm2>, __m128i a2@<xmm7>, __int64 a3)
{
  unsigned __int64 v3; // xmm6_8
  __m128i v4; // xmm3
  int v5; // eax
  __m128d v6; // xmm2
  double result; // st7

  v3 = _mm_move_epi64(a2).m128i_u64[0] ^ *(_QWORD *)&a1; /*0x9974fc*/
  if ( a1 >= 8.0 ) /*0x997508*/
  {
    start_18_::xge8_0(a3); /*0x997508*/
  }
  else
  {
    v4 = _mm_move_epi64(*(__m128i *)&a1); /*0x99751a*/
    *(double *)v4.m128i_i64 = *(double *)v4.m128i_i64 + 8.0; /*0x99751e*/
    v5 = 3 /*0x99752f*/
       * _mm_cvtsi128_si32(_mm_sub_epi32(_mm_srli_epi64(v4, 0x2Cu), _mm_loadl_epi64((const __m128i *)&qword_AAFB70)));
    v6.m128d_f64[0] = (a1 - qword_AB0FC0[v5]) /*0x99754f*/
                    / (*(double *)_mm_move_epi64(*(__m128i *)&a1).m128i_i64 * qword_AB0FC0[v5] + 1.0);
    return start_18_::clcpol(v5, _mm_unpacklo_pd(v6, v6), v3); /*0x997557*/
  }
  return result;
}
