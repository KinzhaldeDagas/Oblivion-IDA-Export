int __usercall _pow_pentium4_::Y_INF_NAN_CHECK_X@<eax>(__m128i a1@<xmm7>, double a2)
{
  int v2; // edx
  unsigned int v3; // eax

  *(double *)a1.m128i_i64 = a2;
  v2 = _mm_cvtsi128_si32(a1);
  v3 = _mm_cvtsi128_si32(_mm_srli_epi64(a1, 0x20u)) & 0x7FFFFFFF;
  if ( v3 >= 0x7FF00000 && (v3 > 0x7FF00000 || v2) )
    return _pow_pentium4_::X_NAN();
  else
    return _pow_pentium4_::Y_INF_NAN(*(__int64 *)&a2);
}
