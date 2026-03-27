void __thiscall sub_8907A0(__m128 *this, float *a2, float a3)
{
  __m128 v3; // xmm1
  double v4; // st6
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  float v7; // xmm2_4
  float v8; // xmm3_4
  __m128 v9; // xmm0
  float v10; // [esp+Ch] [ebp-34h]
  __m128 v11; // [esp+20h] [ebp-20h]

  v3 = 0;
  v4 = hkFactor;
  v11.m128_f32[0] = *a2 * v4;
  v11.m128_f32[1] = a2[1] * v4;
  v11.m128_f32[2] = v4 * a2[2];
  v10 = 1.0 / a3;
  v3.m128_f32[0] = v10;
  v5 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v11);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0];
  v8 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0];
  v9 = _mm_mul_ps(*(this + 0x2F), *(this + 0x2F));
  if ( (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])) < (double)(float)(v8 + v7) )
  {
    *((float *)this + 0xC0) = a3;
    *(this + 0x2F) = v5;
  }
}
