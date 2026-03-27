int __thiscall sub_910E30(__m128 *this, int a2, int *a3)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  float v10; // [esp+0h] [ebp-70h]
  float v11; // [esp+2Ch] [ebp-44h]
  float v12; // [esp+30h] [ebp-40h]
  __m128 v13; // [esp+40h] [ebp-30h] BYREF
  __m128 v14; // [esp+50h] [ebp-20h] BYREF
  __m128 v15; // [esp+60h] [ebp-10h]

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8);
  sub_88FCC0(&v13, *(__m128 **)(a2 + 0x1C), this + 1);
  sub_88FCC0(&v14, *(__m128 **)(a2 + 0x20), this + 2);
  v4 = _mm_sub_ps(v13, v14);
  v5 = _mm_mul_ps(v4, v4);
  v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  v12 = 1.0 / fsqrt(v5.m128_f32[0]);
  v6 = (__m128)0x3F000000u;
  v6.m128_f32[0] = 0.5 * v12;
  v7 = v6;
  v7.m128_f32[0] = (float)(0.5 * v12) * (float)(3.0 - (float)((float)(v5.m128_f32[0] * v12) * v12));
  v8 = _mm_shuffle_ps(v7, v7, 0);
  v11 = v5.m128_f32[0] * v8.m128_f32[0];
  if ( (float)(v5.m128_f32[0] * v8.m128_f32[0]) <= (double)*(float *)&SrcStr )
  {
    v15 = (__m128)xmmword_B2F090[0];
    v11 = 0.0;
  }
  else
  {
    v15 = _mm_mul_ps(v8, v4);
  }
  sub_8F1790(&v13, a2, (__m128 **)a3);
  v10 = this->m128_f32[3] - v11;
  return sub_8F0EF0(v10, a2, a3, 1);
}
