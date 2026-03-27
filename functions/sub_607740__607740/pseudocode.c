int __cdecl sub_607740(int a1, __m128 *a2)
{
  int result; // eax
  float *v4; // ecx
  int v5; // esi
  __m128 v6; // xmm0

  result = a1;
  v4 = (float *)(a1 + 0x18);
  v5 = 3;
  do
  {
    v6 = *a2;
    v4[0xFFFFFFFA] = a2->m128_f32[0];
    v4[0xFFFFFFFD] = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0];
    *v4 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0];
    ++a2;
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
