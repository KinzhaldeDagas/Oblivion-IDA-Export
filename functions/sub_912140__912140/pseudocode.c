void __usercall sub_912140(int a1@<ecx>, int a2@<esi>)
{
  int v2; // edx
  __m128 v3; // xmm1
  __m128 v4; // xmm0
  float v5; // xmm2_4
  float v6; // xmm3_4
  __m128 v7; // xmm0

  v2 = *(_DWORD *)(4 * a2 + 0xB2FF9C);
  v3 = *(__m128 *)(0x10 * (v2 + 5) + a1);
  v4 = _mm_mul_ps(*(__m128 *)(0x10 * (*(_DWORD *)(4 * a2 + 0xB2FFA0) + 8) + a1), v3);
  v5 = _mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0];
  v6 = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0];
  v7 = _mm_mul_ps(*(__m128 *)(0x10 * (v2 + 8) + a1), v3);
  sub_8ECBB0(
    v6 + v5,
    _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]));
}
