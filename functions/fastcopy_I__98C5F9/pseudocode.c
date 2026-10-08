void __cdecl fastcopy_I(__m128i *a1, const __m128i *a2, unsigned int a3)
{
  unsigned int v5; // ecx
  __m128i si128; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  __m128i v9; // xmm5
  __m128i v10; // xmm6
  __m128i v11; // xmm7

  v5 = a3 >> 7; /*0x98c60e*/
  do /*0x98c674*/
  {
    si128 = _mm_load_si128(a2 + 1); /*0x98c61d*/
    v7 = _mm_load_si128(a2 + 2); /*0x98c622*/
    v8 = _mm_load_si128(a2 + 3); /*0x98c627*/
    *a1 = _mm_load_si128(a2); /*0x98c62c*/
    a1[1] = si128; /*0x98c630*/
    a1[2] = v7; /*0x98c635*/
    a1[3] = v8; /*0x98c63a*/
    v9 = _mm_load_si128(a2 + 5); /*0x98c644*/
    v10 = _mm_load_si128(a2 + 6); /*0x98c649*/
    v11 = _mm_load_si128(a2 + 7); /*0x98c64e*/
    a1[4] = _mm_load_si128(a2 + 4); /*0x98c653*/
    a1[5] = v9; /*0x98c658*/
    a1[6] = v10; /*0x98c65d*/
    a1[7] = v11; /*0x98c662*/
    a2 += 8; /*0x98c667*/
    a1 += 8; /*0x98c66d*/
    --v5; /*0x98c673*/
  }
  while ( v5 ); /*0x98c674*/
}
