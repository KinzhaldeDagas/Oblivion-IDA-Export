float *__thiscall sub_90FAC0(__m128 *this, __m128 *a2, __m128 *a3)
{
  int v4; // edi
  int v5; // eax
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  float v8; // xmm1_4
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  float v12; // [esp+0h] [ebp-24h] BYREF
  __m128 v13; // [esp+4h] [ebp-20h] BYREF
  __m128 v14; // [esp+14h] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 7);
  *(this + 3) = *a2;
  v5 = *((_DWORD *)this + 6);
  *(this + 4) = *a3;
  sub_88FCC0(&v14, (__m128 *)(*(_DWORD *)(v5 + 0x50) + 0x10), a2);
  sub_88FCC0(&v13, (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0x10), a3);
  v6 = _mm_sub_ps(v14, v13);
  v7 = _mm_mul_ps(v6, v6);
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0];
  v9 = _mm_shuffle_ps(v7, v7, 0xAA);
  v10 = v9;
  v10.m128_f32[0] = v9.m128_f32[0] + v8;
  v13 = v10;
  v13.m128_i32[0] = fsqrt(v9.m128_f32[0] + v8);
  v12 = v13.m128_f32[0];
  *((float *)this + 0x14) = v13.m128_f32[0];
  return &v12;
}
