double __usercall start_18@<st0>(__m128d a1@<xmm7>, __int64 a2)
{
  __m128d v2; // xmm7
  __m128d v3; // xmm2
  __m128d v4; // xmm1
  __m128d v5; // xmm3
  __m128d v6; // xmm5
  double result; // st7

  v2 = _mm_unpacklo_pd(a1, a1);
  v3 = _mm_and_pd(v2, (__m128d)xmmword_AAFA90);
  if ( v3.m128d_f64[0] >= 1.633123935319537e16 )
  {
    start_18_::bigx(a2, HIDWORD(a2));
  }
  else if ( v3.m128d_f64[0] >= 0.03125 )
  {
    start_18_::xge0_03125(a2);
  }
  else if ( v3.m128d_f64[0] < 0.000000007450580596923828 )
  {
    start_18_::retx(*(double *)&a2);
  }
  else
  {
    v4 = _mm_mul_pd(v3, v3);
    v5 = _mm_mul_pd(v4, v4);
    v6 = _mm_add_pd(
           _mm_mul_pd(
             _mm_add_pd(
               _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAFB60, v5), (__m128d)xmmword_AAFB50), v5),
               (__m128d)xmmword_AAFB40),
             v5),
           (__m128d)xmmword_AAFB30);
    v6.m128d_f64[0] = v6.m128d_f64[0] * v4.m128d_f64[0];
    return v2.m128d_f64[0] - (v6.m128d_f64[0] + _mm_shuffle_pd(v6, v6, 1).m128d_f64[0]) * v2.m128d_f64[0];
  }
  return result;
}
