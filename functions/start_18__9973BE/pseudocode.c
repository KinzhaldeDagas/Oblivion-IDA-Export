double __usercall start_18@<st0>(__m128d a1@<xmm7>, double a2)
{
  __m128d v2; // xmm7
  __m128d v3; // xmm2
  __m128d v4; // xmm1
  __m128d v5; // xmm3
  __m128d v6; // xmm5

  v2 = _mm_unpacklo_pd(a1, a1); /*0x9973be*/
  v3 = _mm_and_pd(v2, (__m128d)xmmword_AAFA90); /*0x9973c6*/
  if ( v3.m128d_f64[0] >= 1.633123935319537e16 ) /*0x9973dc*/
    return start_18_::bigx(SLODWORD(a2), HIDWORD(a2)); /*0x9973dc*/
  if ( v3.m128d_f64[0] >= 0.03125 ) /*0x9973ea*/
    return start_18_::xge0_03125(v3, v2.m128d_f64[0]); /*0x9973ea*/
  if ( v3.m128d_f64[0] < 0.000000007450580596923828 ) /*0x9973f4*/
    return start_18_::retx(v3.m128d_f64[0], a2); /*0x9973f4*/
  v4 = _mm_mul_pd(v3, v3); /*0x9973fe*/
  v5 = _mm_mul_pd(v4, v4); /*0x997406*/
  v6 = _mm_add_pd( /*0x99742e*/
         _mm_mul_pd(
           _mm_add_pd(
             _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAFB60, v5), (__m128d)xmmword_AAFB50), v5),
             (__m128d)xmmword_AAFB40),
           v5),
         (__m128d)xmmword_AAFB30);
  v6.m128d_f64[0] = v6.m128d_f64[0] * v4.m128d_f64[0]; /*0x997436*/
  return v2.m128d_f64[0] - (v6.m128d_f64[0] + _mm_shuffle_pd(v6, v6, 1).m128d_f64[0]) * v2.m128d_f64[0]; /*0x997459*/
}
