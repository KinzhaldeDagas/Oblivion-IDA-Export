int __usercall _pow_pentium4_::BACK_DEN@<eax>(
        __m128d a1@<xmm0>,
        __m128d a2@<xmm2>,
        __m128i a3@<xmm3>,
        __m128d a4@<xmm4>,
        __m128d a5@<xmm7>,
        __int64 a6,
        double a7)
{
  __m128d v7; // xmm7
  __m128i v8; // xmm0
  __m128i v9; // xmm7
  int v10; // eax

  v7 = _mm_and_pd(a5, a1);
  a4.m128d_f64[0] = a1.m128d_f64[0];
  v8 = _mm_srli_epi64((__m128i)_mm_and_pd(a1, (__m128d)xmmword_AAB960), 0x2Cu);
  v9 = (__m128i)_mm_or_pd(v7, a2);
  v10 = ((unsigned __int8)_mm_extract_epi16(v8, 0) + 1) & 0x1FE;
  *(double *)v9.m128i_i64 = *(double *)v9.m128i_i64 * *(double *)((char *)&qword_AA80B0 + 4 * v10);
  return _pow_pentium4_::BACK_MAIN(0x43E7Fu, v8, a3, a4, *(__m128d *)((char *)&xmmword_AA84C0 + 8 * v10), v9, a6, a7);
}
