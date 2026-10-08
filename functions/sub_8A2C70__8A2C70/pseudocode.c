void __thiscall sub_8A2C70(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm0
  float v4; // xmm2_4
  float v5; // xmm3_4
  __m128 v6; // xmm0
  __m128 v7; // xmm0

  v2 = *this; /*0x8a2c76*/
  v3 = _mm_mul_ps(v2, v2); /*0x8a2c89*/
  v3.m128_f32[0] = _mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0] /*0x8a2c9b*/
                 + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]);
  v4 = 1.0 / fsqrt(v3.m128_f32[0]); /*0x8a2ca2*/
  v5 = *(float *)&dword_A46C30 - (float)((float)(v3.m128_f32[0] * v4) * v4); /*0x8a2cbd*/
  v6 = 0; /*0x8a2cc1*/
  v6.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v4) * v5; /*0x8a2ccc*/
  *a2 = *this; /*0x8a2cd0*/
  v7 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v2); /*0x8a2cd7*/
  *a2 = v7; /*0x8a2cda*/
  if ( this->m128_f32[3] < 0.0 ) /*0x8a2ce5*/
    *a2 = _mm_xor_ps(v7, (__m128)xmmword_A965C0); /*0x8a2cf1*/
}
