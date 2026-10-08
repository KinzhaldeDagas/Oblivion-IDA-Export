double __usercall start_18_::xge0_03125@<st0>(__m128d a1@<xmm2>, double a2@<xmm7>, __int64 a3)
{
  __m128d v3; // xmm1
  __m128d v4; // xmm3
  __m128d v5; // xmm5
  double result; // st7

  if ( a1.m128d_f64[0] >= 0.375 ) /*0x997462*/
  {
    start_18_::xge0_375(a1.m128d_f64[0], a3); /*0x997462*/
  }
  else
  {
    v3 = _mm_mul_pd(a1, a1); /*0x99746c*/
    v4 = _mm_mul_pd(v3, v3); /*0x997474*/
    v5 = _mm_add_pd( /*0x9974cc*/
           _mm_mul_pd(
             _mm_add_pd(
               _mm_mul_pd(
                 _mm_add_pd(
                   _mm_mul_pd(
                     _mm_add_pd(
                       _mm_mul_pd(
                         _mm_add_pd(
                           _mm_mul_pd(
                             _mm_add_pd(
                               _mm_mul_pd(
                                 _mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAFB20, v4), (__m128d)xmmword_AAFB10),
                                 v4),
                               (__m128d)xmmword_AAFB00),
                             v4),
                           (__m128d)xmmword_AAFAF0),
                         v4),
                       (__m128d)xmmword_AAFAE0),
                     v4),
                   (__m128d)xmmword_AAFAD0),
                 v4),
               (__m128d)xmmword_AAFAC0),
             v4),
           (__m128d)xmmword_AAFAB0);
    v5.m128d_f64[0] = v5.m128d_f64[0] * v3.m128d_f64[0]; /*0x9974d4*/
    return a2 - (v5.m128d_f64[0] + _mm_shuffle_pd(v5, v5, 1).m128d_f64[0]) * a2; /*0x9974f3*/
  }
  return result; /*0x9974f7*/
}
