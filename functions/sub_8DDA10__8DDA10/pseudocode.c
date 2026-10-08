void __cdecl sub_8DDA10(__m128 *a1, int a2)
{
  __int128 v2; // xmm0
  double v3; // st7
  __m128 v4; // xmm0
  __int128 v5; // [esp+10h] [ebp-10h] BYREF

  *(_OWORD *)(a2 + 0x90) = 0; /*0x8dda29*/
  sub_8B1B40((float *)&v5, a1->m128_f32); /*0x8dda30*/
  *(__m128 *)a2 = *a1; /*0x8dda38*/
  *(__m128 *)(a2 + 0x10) = a1[1]; /*0x8dda3f*/
  *(__m128 *)(a2 + 0x20) = a1[2]; /*0x8dda47*/
  *(__m128 *)(a2 + 0x30) = a1[3]; /*0x8dda4f*/
  v2 = v5; /*0x8dda53*/
  *(__int128 *)(a2 + 0x60) = v5; /*0x8dda58*/
  *(_OWORD *)(a2 + 0x70) = v2; /*0x8dda5c*/
  v3 = *(float *)(a2 + 0x4C); /*0x8dda60*/
  v4 = _mm_add_ps( /*0x8ddaa0*/
         a1[3],
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(*a1, _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0)),
             _mm_mul_ps(a1[1], _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0x55))),
           _mm_mul_ps(a1[2], _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0xAA))));
  *(__m128 *)(a2 + 0x40) = v4; /*0x8ddaa3*/
  *(__m128 *)(a2 + 0x50) = v4; /*0x8ddaa7*/
  *(float *)(a2 + 0x4C) = v3; /*0x8ddaab*/
  *(_DWORD *)(a2 + 0x5C) = 0; /*0x8ddaaf*/
}
