int __usercall _pow_pentium4_::BACK_XY_CHECK@<eax>(
        __int64 a1@<xmm1>,
        __int64 a2@<xmm3>,
        __int64 a3@<xmm6>,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  double v8; // xmm3_8

  v8 = COERCE_DOUBLE(a2 & a1) /*0x994142*/
     * COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & a3)
     * *(double *)_mm_insert_epi16((__m128i)0LL, 0x4060u, 3).m128i_i64;
  if ( (((int)v8 + 0x1E1FF) | (0x1FF7F - (int)v8)) > 0 ) /*0x994189*/
    JUMPOUT(0x99420C); /*0x99420c*/
  return _pow_pentium4_::UF_OF_CASES((int)v8, a4, a5, a6, a7, a8);
}
