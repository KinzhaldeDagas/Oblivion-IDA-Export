__m128 *__thiscall sub_8ABCE0(_DWORD *this, __m128 *a2, __m128 *a3)
{
  __m128 *result; // eax
  __m128 v4; // xmm0
  __m128 v5; // xmm0

  result = (__m128 *)*(this + 0x14);
  v4 = _mm_sub_ps(*a2, result[6]);
  v5 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(result[0xE], result[0xE], 0xC9), _mm_shuffle_ps(v4, v4, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(result[0xE], result[0xE], 0xD2), _mm_shuffle_ps(v4, v4, 0xC9)));
  *a3 = v5;
  *a3 = _mm_add_ps(v5, result[0xD]);
  return result;
}
