void __cdecl sub_8DDA10(__m128 *a1, int a2)
{
  __int128 v2; // xmm0
  double v3; // st7
  __m128 v4; // xmm0
  __int128 v5; // [esp+10h] [ebp-10h] BYREF

  *(_OWORD *)(a2 + 0x90) = 0;
  sub_8B1B40((float *)&v5, a1->m128_f32);
  *(__m128 *)a2 = *a1;
  *(__m128 *)(a2 + 0x10) = a1[1];
  *(__m128 *)(a2 + 0x20) = a1[2];
  *(__m128 *)(a2 + 0x30) = a1[3];
  v2 = v5;
  *(__int128 *)(a2 + 0x60) = v5;
  *(_OWORD *)(a2 + 0x70) = v2;
  v3 = *(float *)(a2 + 0x4C);
  v4 = _mm_add_ps(
         a1[3],
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(*a1, _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0)),
             _mm_mul_ps(a1[1], _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0x55))),
           _mm_mul_ps(a1[2], _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0xAA))));
  *(__m128 *)(a2 + 0x40) = v4;
  *(__m128 *)(a2 + 0x50) = v4;
  *(float *)(a2 + 0x4C) = v3;
  *(_DWORD *)(a2 + 0x5C) = 0;
}
