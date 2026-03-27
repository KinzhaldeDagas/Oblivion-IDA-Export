double __usercall _pow_pentium4_::X_NINF@<st0>(__m128i a1@<xmm1>, int a2, int a3, double a4)
{
  double result; // st7

  *(double *)a1.m128i_i64 = a4;
  if ( (_mm_extract_epi16(a1, 3) & 0x8000) != 0 )
    return 0.0;
  _pow_pentium4_::RET_INF();
  return result;
}
