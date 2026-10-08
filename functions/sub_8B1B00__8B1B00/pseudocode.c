// Builds a quaternion from an axis vector and scaled angle: vector part = axis*sin(angleScale), w = cos(angleScale). Used by 0x896000 while refreshing movement basis.
__m128 *__thiscall hkQuaternion_SetAxisAngleScaled(__m128 *this, __m128 *a2, float a3)
{
  long double v4; // st7
  unsigned int v5; // [esp+Ch] [ebp-4h]

  v4 = a3 * kHeadBodyNormalMatchRadius; /*0x8b1b0f*/
  *(float *)&v5 = sin(v4); /*0x8b1b1c*/
  *this = _mm_mul_ps(_mm_shuffle_ps((__m128)v5, (__m128)v5, 0), *a2); /*0x8b1b32*/
  this->m128_f32[3] = cos(v4); /*0x8b1b35*/
  return a2; /*0x8b1b38*/
}
