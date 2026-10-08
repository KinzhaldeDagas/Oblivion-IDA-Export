int __usercall _pow_pentium4_::DENORMAL_X@<eax>(
        __m128i a1@<xmm4>,
        __m128d a2@<xmm2>,
        __m128i a3@<xmm3>,
        __m128d a4@<xmm7>,
        __int64 a5,
        double a6)
{
  __m128d inserted; // xmm0
  int v7; // edx
  __m128i v8; // xmm4
  int v9; // eax

  inserted = (__m128d)_mm_insert_epi16((__m128i)0LL, 0x43F0u, 3); /*0x9943dd*/
  a4.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL); /*0x9943e2*/
  a2.m128d_f64[0] = 1.0; /*0x9943ea*/
  inserted.m128d_f64[0] = inserted.m128d_f64[0] * *(double *)a1.m128i_i64; /*0x9943f2*/
  v7 = _mm_cvtsi128_si32(a1); /*0x9943f6*/
  v8 = _mm_srli_epi64(a1, 0x20u); /*0x9943fa*/
  v9 = _mm_cvtsi128_si32(v8); /*0x9943ff*/
  if ( v7 ) /*0x994406*/
    return _pow_pentium4_::BACK_DEN(inserted, a2, a3, (__m128d)v8, a4, a5, a6); /*0x994407*/
  else
    return _pow_pentium4_::ZERO_X(v9, inserted, a2, a3, (__m128d)v8, a4, a5, a6); /*0x994406*/
}
