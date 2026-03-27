// local variable allocation has failed, the output may be wrong!
int __usercall _pow_pentium4_::RETURN_ONE@<eax>(__int64 a1@<xmm1>, __int64 a2@<xmm3>, __int64 a3@<xmm6>)
{
  int v3; // eax

  v3 = _mm_extract_epi16((__m128i)_mm_mul_pd((__m128d)_mm_shuffle_epi32(*(__m128i *)&a1, 0x44), *(__m128d *)&a3), 3)
     & 0x7FF0;
  if ( ((v3 - 0x3C70) | (unsigned int)(0x40A0 - v3)) >= 0x80000000 )
    JUMPOUT(0x994A19);
  return _pow_pentium4_::BACK_XY_CHECK(a1, a2, a3);
}
