__m128 *__cdecl sub_8B4350(__m128 *a1, __m128 **a2)
{
  __m128 *v2; // edx
  bool v3; // zf
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 *v7; // eax
  __m128 *v8; // ecx
  __m128 v9; // xmm0
  __m128 v10; // xmm4

  v2 = a2[1];
  v3 = v2 == 0;
  v4 = 0;
  v5 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
  v6 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0);
  if ( (int)v2 > 0 )
  {
    v7 = *a2;
    v8 = a2[1];
    do
    {
      v9 = *v7;
      v10 = *v7++;
      v8 = (__m128 *)((char *)v8 + 0xFFFFFFFF);
      v5 = _mm_min_ps(v10, v5);
      v6 = _mm_max_ps(v9, v6);
    }
    while ( v8 );
    v3 = v2 == 0;
  }
  if ( !v3 )
    v4 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v5, v6));
  *a1 = _mm_xor_ps(v4, (__m128)xmmword_A965C0);
  return a1;
}
