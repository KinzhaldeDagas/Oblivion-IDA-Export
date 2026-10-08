__m128 *__thiscall sub_8D2450(__m128 *this, __m128 *a2, unsigned int a3, __m128 *a4)
{
  __m128 v5; // xmm1
  __m128 v6; // xmm0

  v5 = _mm_add_ps(a2[3], *(this + 2)); /*0x8d2468*/
  v6 = _mm_add_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(this + 1)); /*0x8d2474*/
  *a4 = _mm_sub_ps(v5, v6); /*0x8d2480*/
  a4[1] = _mm_add_ps(v6, v5); /*0x8d2483*/
  return a4; /*0x8d2489*/
}
