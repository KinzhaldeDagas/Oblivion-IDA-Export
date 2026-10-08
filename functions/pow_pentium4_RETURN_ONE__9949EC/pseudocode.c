// local variable allocation has failed, the output may be wrong!
int __usercall _pow_pentium4_::RETURN_ONE@<eax>(
        __int64 a1@<xmm1>,
        __int64 a2@<xmm3>,
        __int64 a3@<xmm6>,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v8; // eax

  v8 = _mm_extract_epi16((__m128i)_mm_mul_pd((__m128d)_mm_shuffle_epi32(*(__m128i *)&a1, 0x44), *(__m128d *)&a3), 3) /*0x9949fa*/
     & 0x7FF0;
  if ( ((v8 - 0x3C70) | (unsigned int)(0x40A0 - v8)) >= 0x80000000 ) /*0x994a13*/
    JUMPOUT(0x994A19); /*0x994a19*/
  return _pow_pentium4_::BACK_XY_CHECK(a1, a2, a3, a4, a5, a6, a7, a8);
}
