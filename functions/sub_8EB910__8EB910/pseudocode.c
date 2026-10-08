// Tests whether a candidate point lies behind a surface plane by dot(point - surfacePoint, surfaceNormal) < epsilon.
bool *__usercall hkSurfaceConstraintUtil_IsPointBehindPlane@<eax>(__m128 *a1@<eax>, bool *a2@<ecx>, __m128 *a3)
{
  __m128 v3; // xmm0
  bool *result; // eax

  v3 = _mm_mul_ps(_mm_sub_ps(*a3, a1[1]), *a1); /*0x8eb92c*/
  result = a2; /*0x8eb95c*/
  *a2 = (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0] /*0x8eb967*/
              + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])) < (double)flt_A57CB0;
  return result; /*0x8eb963*/
}
