__m128 *__thiscall sub_8CE090(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm0
  __m128 v5; // xmm0

  v3 = *(this + 1);
  *a3 = v3;
  v5 = _mm_xor_ps(v3, _mm_and_ps(*a2, (__m128)xmmword_A965C0));
  *a3 = v5;
  a3->m128_i32[3] = _mm_movemask_ps(v5) & 7 | 0x3F000000;
  return a3;
}
