// positive sp value has been detected, the output may be wrong!
double __usercall _pow_pentium4_::SCALE2@<st0>(
        __m128i a1@<xmm0>,
        double a2@<xmm1>,
        double a3@<xmm6>,
        double a4@<xmm7>,
        float a5,
        float a6,
        double a7)
{
  int v7; // eax
  int v8; // edx

  *(double *)a1.m128i_i64 = (*(double *)a1.m128i_i64 + a2) * a4 + a3 * ((*(double *)a1.m128i_i64 + a2) * a4); /*0x99495c*/
  v7 = _mm_extract_epi16(a1, 3) & 0x7FF0; /*0x994965*/
  v8 = 0x18; /*0x99496a*/
  if ( v7 == 0x7FF0 ) /*0x994974*/
    return _pow_pentium4_::CALL_LIBM_ERROR_0(v8, *(double *)a1.m128i_i64, a5, a6, a7); /*0x994974*/
  v8 = 0x19; /*0x99497a*/
  if ( !v7 ) /*0x994982*/
    return _pow_pentium4_::CALL_LIBM_ERROR_0(v8, *(double *)a1.m128i_i64, a5, a6, a7); /*0x994974*/
  else
    return *(double *)a1.m128i_i64; /*0x994991*/
}
