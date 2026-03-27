_BYTE *__thiscall sub_951EE0(__m128 *this, _BYTE *a2, int a3)
{
  __m128 v4; // xmm0
  bool v5; // c0
  bool v6; // c3
  __m128 *v7; // ecx
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  float v15; // [esp+Ch] [ebp-64h]
  __m128 v16; // [esp+10h] [ebp-60h] BYREF
  __m128 v17; // [esp+20h] [ebp-50h]
  __m128 v18; // [esp+30h] [ebp-40h] BYREF
  __int128 v19; // [esp+40h] [ebp-30h]
  __int128 v20; // [esp+50h] [ebp-20h]

  v4 = _mm_mul_ps(*(this + 3), *(this + 3));
  v15 = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  v5 = v15 < (double)*((float *)this + 0x14);
  v6 = v15 == *((float *)this + 0x14);
  v16 = _mm_xor_ps(*(this + 3), (__m128)xmmword_A965C0);
  if ( v5 || v6 )
    v16 = (__m128)xmmword_B2F0A0;
  sub_951D00(this, &v16, &v18);
  *(__m128 *)(0x10 * **((_DWORD **)this + 0x1B) + *((_DWORD *)this + 0x1A)) = v18;
  *(__int128 *)(0x10 * **((_DWORD **)this + 0x1B) + *((_DWORD *)this + 0x18)) = v19;
  *(__int128 *)(*((_DWORD *)this + 0x19) + 0x10 * (**((_DWORD **)this + 0x1B))++) = v20;
  v7 = *((__m128 **)this + 0x1A);
  v8 = _mm_mul_ps(*v7, *v7);
  if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) > (double)*((float *)this + 0x14) )
  {
    *a2 = 0;
    return a2;
  }
  else
  {
    v9 = _mm_mul_ps(*v7, *v7);
    v10 = _mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0];
    v11 = _mm_shuffle_ps(v9, v9, 0xAA);
    v12 = v11;
    v12.m128_f32[0] = v11.m128_f32[0] + v10;
    v17 = v12;
    v17.m128_i32[0] = fsqrt(v11.m128_f32[0] + v10);
    v13 = v16;
    *(float *)(a3 + 0x20) = v17.m128_f32[0];
    *(__m128 *)a3 = v13;
    *(__int128 *)(a3 + 0x10) = v19;
    *(_DWORD *)(a3 + 0x24) = 0x3F000000;
    *a2 = 1;
    return a2;
  }
}
