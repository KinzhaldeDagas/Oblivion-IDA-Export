void __thiscall sub_8A2C70(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm0
  float v4; // xmm2_4
  float v5; // xmm3_4
  __m128 v6; // xmm0
  __m128 v7; // xmm0

  v2 = *this;
  v3 = _mm_mul_ps(v2, v2);
  v3.m128_f32[0] = _mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]);
  v4 = 1.0 / fsqrt(v3.m128_f32[0]);
  v5 = *(float *)&dword_A46C30 - (float)((float)(v3.m128_f32[0] * v4) * v4);
  v6 = 0;
  v6.m128_f32[0] = (float)(flt_A3D65C * v4) * v5;
  *a2 = *this;
  v7 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v2);
  *a2 = v7;
  if ( this->m128_f32[3] < 0.0 )
    *a2 = _mm_xor_ps(v7, (__m128)xmmword_A965C0);
}
