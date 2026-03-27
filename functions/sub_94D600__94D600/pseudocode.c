__m128 *__thiscall sub_94D600(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v5; // xmm0
  __m128 v6; // xmm1

  v2 = *(this + 8);
  v3 = *(this + 6);
  *a2 = *(this + 7);
  a2[1] = *(this + 7);
  a2[2] = *(this + 7);
  a2[3] = *(this + 7);
  v5 = _mm_mul_ps(
         *(this + 9),
         _mm_sub_ps(
           _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), _mm_shuffle_ps(v2, v2, 0xD2)),
           _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v2, v2, 0xC9))));
  v6 = _mm_mul_ps(*(this + 9), *(this + 8));
  *a2 = _mm_add_ps(_mm_add_ps(*a2, v5), v6);
  a2[1] = _mm_add_ps(a2[1], v5);
  a2[1] = _mm_sub_ps(a2[1], v6);
  a2[2] = _mm_sub_ps(a2[2], v5);
  a2[2] = _mm_add_ps(a2[2], v6);
  a2[3] = _mm_sub_ps(a2[3], v5);
  a2[3] = _mm_sub_ps(a2[3], v6);
  return a2;
}
