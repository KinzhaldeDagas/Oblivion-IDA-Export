double __usercall start_18_::xge0_03125@<st0>(__m128d a1@<xmm2>, double a2@<xmm7>)
{
  __m128d v2; // xmm1
  __m128d v3; // xmm3
  __m128d v4; // xmm5
  double result; // st7

  if ( a1.m128d_f64[0] >= 0.375 )
  {
    start_18_::xge0_375();
  }
  else
  {
    v2 = _mm_mul_pd(a1, a1);
    v3 = _mm_mul_pd(v2, v2);
    v4 = _mm_add_pd(
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
                                 _mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAFB20, v3), (__m128d)xmmword_AAFB10),
                                 v3),
                               (__m128d)xmmword_AAFB00),
                             v3),
                           (__m128d)xmmword_AAFAF0),
                         v3),
                       (__m128d)xmmword_AAFAE0),
                     v3),
                   (__m128d)xmmword_AAFAD0),
                 v3),
               (__m128d)xmmword_AAFAC0),
             v3),
           (__m128d)xmmword_AAFAB0);
    v4.m128d_f64[0] = v4.m128d_f64[0] * v2.m128d_f64[0];
    return a2 - (v4.m128d_f64[0] + _mm_shuffle_pd(v4, v4, 1).m128d_f64[0]) * a2;
  }
  return result;
}
