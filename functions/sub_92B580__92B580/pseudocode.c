void __cdecl sub_92B580(_DWORD *a1, int a2, int a3, int a4, __m128 *a5)
{
  __m128 v5; // xmm1
  __m128 v6; // xmm0

  v5 = _mm_sub_ps(
         _mm_mul_ps(
           _mm_shuffle_ps(*(__m128 *)(0x10 * a2 + *a1), *(__m128 *)(0x10 * a2 + *a1), 0xC9),
           _mm_shuffle_ps(*(__m128 *)(0x10 * a3 + *a1), *(__m128 *)(0x10 * a3 + *a1), 0xD2)),
         _mm_mul_ps(
           _mm_shuffle_ps(*(__m128 *)(0x10 * a2 + *a1), *(__m128 *)(0x10 * a2 + *a1), 0xD2),
           _mm_shuffle_ps(*(__m128 *)(0x10 * a3 + *a1), *(__m128 *)(0x10 * a3 + *a1), 0xC9)));
  *a5 = v5;
  v6 = _mm_mul_ps(v5, *(__m128 *)(0x10 * a4 + *a1));
  if ( (float)((float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0])
             + (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + _mm_shuffle_ps(v5, v5, 0xFF).m128_f32[0])) > (double)*(float *)&SrcStr )
    *a5 = _mm_xor_ps(v5, (__m128)xmmword_A965C0);
}
