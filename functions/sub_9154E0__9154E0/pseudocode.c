bool *__thiscall sub_9154E0(__m128 *this, bool *a2, __m128 *a3, __m128 *a4)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  float v6; // xmm2_4
  float v7; // xmm3_4
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  char v11; // [esp+Fh] [ebp-11h] BYREF
  float v12; // [esp+10h] [ebp-10h]

  v4 = _mm_sub_ps(a3[1], *a3);
  v5 = _mm_mul_ps(v4, v4);
  v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  v6 = 1.0 / fsqrt(v5.m128_f32[0]);
  v7 = *(float *)&dword_A46C30 - (float)((float)(v5.m128_f32[0] * v6) * v6);
  v8 = 0;
  v8.m128_f32[0] = (float)(flt_A3D65C * v6) * v7;
  v9 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v4), *(this + 4));
  v12 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  *a2 = v12 < 0.0 && *sub_9149C0(this, (int)a3, &v11, a3, a4) != 0;
  return a2;
}
