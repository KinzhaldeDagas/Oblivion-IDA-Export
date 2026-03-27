__m128 *__cdecl sub_936740(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 v5; // xmm0

  v5 = _mm_cmplt_ps(_mm_shuffle_ps(*a4, *a4, 0), *a3);
  *a1 = _mm_or_ps(_mm_and_ps(v5, _mm_shuffle_ps(*a2, *a2, 0)), _mm_andnot_ps(v5, *a1));
  return a1;
}
