float *__thiscall sub_5EA270(__m128 *this, float *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm0
  __m128 v5; // [esp+0h] [ebp-20h] BYREF

  v2 = 0;
  v2.m128_f32[0] = *((float *)this + 0x11);
  v3 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v3), *this), _mm_mul_ps(*(this + 1), v3));
  return sub_43F3E0(a2, &v5);
}
