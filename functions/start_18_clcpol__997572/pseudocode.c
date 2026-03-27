double __usercall start_18_::clcpol@<st0>(int a1@<eax>, __m128d a2@<xmm2>, __int64 a3@<xmm6>)
{
  __m128d v3; // xmm1
  __m128d v4; // xmm3
  __m128d v5; // xmm5
  double result; // st7

  v3 = _mm_mul_pd(a2, a2);
  v4 = _mm_mul_pd(v3, v3);
  v5 = _mm_add_pd(
         _mm_mul_pd(
           _mm_add_pd(
             _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAFB60, v4), (__m128d)xmmword_AAFB50), v4),
             (__m128d)xmmword_AAFB40),
           v4),
         (__m128d)xmmword_AAFB30);
  v5.m128d_f64[0] = v5.m128d_f64[0] * v3.m128d_f64[0];
  *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                         *(double *)&qword_AB0FB0[a1]
                       - ((v5.m128d_f64[0] + _mm_shuffle_pd(v5, v5, 1).m128d_f64[0]) * a2.m128d_f64[0]
                        - *(double *)&qword_AB0FB8[a1]
                        - a2.m128d_f64[0]))
                     | a3;
  return result;
}
