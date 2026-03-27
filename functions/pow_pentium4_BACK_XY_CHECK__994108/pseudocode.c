int __usercall _pow_pentium4_::BACK_XY_CHECK@<eax>(__int64 a1@<xmm1>, __int64 a2@<xmm3>, __int64 a3@<xmm6>)
{
  int v3; // eax

  v3 = (int)(COERCE_DOUBLE(a2 & a1)
           * COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & a3)
           * *(double *)_mm_insert_epi16((__m128i)0LL, 0x4060u, 3).m128i_i64);
  if ( ((v3 + 0x1E1FF) | (0x1FF7F - v3)) > 0 )
    JUMPOUT(0x99420C);
  return _pow_pentium4_::UF_OF_CASES();
}
