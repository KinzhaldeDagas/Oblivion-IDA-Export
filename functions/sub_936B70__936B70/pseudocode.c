__m128 *__thiscall sub_936B70(__m128 *this, __m128 *a2, unsigned __int8 *a3)
{
  __m128 v4; // xmm0

  a2[3].m128_i32[2] = *a3;
  a2[3].m128_i32[0] = ((a3[1] & 0xF8) << 0x1C) | 0x3F800000;
  a2[1] = _mm_mul_ps(*(this + 7), *(__m128 *)((char *)&unk_AA1CC0 + (a3[1] & 0x70)));
  v4 = a2[1];
  *a2 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v4, v4, 0)),
            _mm_mul_ps(*(this + 3), _mm_shuffle_ps(v4, v4, 0x55))),
          _mm_add_ps(_mm_mul_ps(*(this + 4), _mm_shuffle_ps(v4, v4, 0xAA)), *(this + 5)));
  return a2;
}
