float *__thiscall sub_5EA270(__m128 *this, float *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm0
  __m128 v5; // [esp+0h] [ebp-20h] BYREF

  v2 = 0; /*0x5ea291*/
  v2.m128_f32[0] = *((float *)this + 0x11); /*0x5ea294*/
  v3 = _mm_shuffle_ps(v2, v2, 0); /*0x5ea29f*/
  v5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v3), *this), _mm_mul_ps(*(this + 1), v3)); /*0x5ea2b8*/
  return HavokVector_ToWorldVector(a2, &v5); /*0x5ea2c9*/
}
