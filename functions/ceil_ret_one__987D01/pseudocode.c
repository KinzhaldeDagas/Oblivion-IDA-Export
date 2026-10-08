double __usercall ceil_::ret_one@<st0>(__m128d a1@<xmm3>)
{
  double result; // st7

  *(_QWORD *)&result = *(_QWORD *)&_mm_cmpnle_pd(a1, (__m128d)xmmword_AA3FB0).m128d_f64[0] & 0x3FF0000000000000LL; /*0x987d18*/
  return result; /*0x987d1c*/
}
