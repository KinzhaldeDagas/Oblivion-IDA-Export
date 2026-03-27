__m128 *__thiscall sub_8ED4A0(float *this, __m128 *a2, float a3, __m128 *a4)
{
  __m128 v5; // xmm0
  unsigned int v6; // [esp+Ch] [ebp-4h]

  *(float *)&v6 = a3 + *(this + 3);
  v5 = _mm_shuffle_ps((__m128)v6, (__m128)v6, 0);
  *a4 = _mm_sub_ps(a2[3], v5);
  a4[1] = _mm_add_ps(a2[3], v5);
  return a2;
}
