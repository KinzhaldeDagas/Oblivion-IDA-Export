double __usercall floor_::ret_neg_one@<st0>(__m128d a1@<xmm3>)
{
  double result; // st7

  *(_QWORD *)&result = (*(_QWORD *)&_mm_cmplt_pd(a1, *(__m128d *)0xAA3F70).m128d_f64[0] | *(_QWORD *)0xAA3F70)
                     & *(_QWORD *)0xAA3F60;
  return result;
}
