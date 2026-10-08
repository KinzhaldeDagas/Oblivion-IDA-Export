// Normalizes a quaternion/vector with reciprocal sqrt refinement. Used before converting movement input orientation to basis vectors.
__m128 *__thiscall hkQuaternion_Normalize(__m128 *this)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  float v4; // xmm3_4
  __m128 v5; // xmm0

  v2 = _mm_mul_ps(*this, *this); /*0x4d6840*/
  v3 = _mm_add_ps(_mm_shuffle_ps(v2, v2, 0x4E), v2); /*0x4d684a*/
  v2.m128_f32[0] = _mm_shuffle_ps(v3, v3, 0xB1).m128_f32[0] + v3.m128_f32[0]; /*0x4d6854*/
  v3.m128_f32[0] = 1.0 / fsqrt(v2.m128_f32[0]); /*0x4d685a*/
  v4 = *(float *)&dword_A46C30 - (float)((float)(v2.m128_f32[0] * v3.m128_f32[0]) * v3.m128_f32[0]); /*0x4d6875*/
  v5 = 0; /*0x4d6879*/
  v5.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v3.m128_f32[0]) * v4; /*0x4d6884*/
  *this = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *this); /*0x4d6892*/
  return this; /*0x4d6895*/
}
