__m128 *__thiscall sub_936CB0(__m128 *this, __m128 *a2, unsigned __int8 *a3)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm3
  __m128 v6; // xmm5
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  __m128 v9; // xmm1

  a2[3].m128_i32[2] = *a3;
  a2[3].m128_i32[0] = ((a3[1] & 0xF8) << 0x1C) | 0x3F800000;
  v4 = _mm_mul_ps(*(this + 6), *(__m128 *)((char *)&unk_AA1CC0 + (a3[1] & 0x70)));
  *a2 = v4;
  v5 = *(this + 4);
  v6 = *(this + 3);
  v7 = _mm_sub_ps(v4, *(this + 5));
  v8 = _mm_shuffle_ps(v5, v5, 0x44);
  v9 = _mm_shuffle_ps(*(this + 2), v6, 0x44);
  a2[1] = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0x88), _mm_shuffle_ps(v7, v7, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v9, v8, 0xDD), _mm_shuffle_ps(v7, v7, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v6, 0xEE), _mm_shuffle_ps(v5, v5, 0xEE), 0x88),
              _mm_shuffle_ps(v7, v7, 0xAA)));
  return a2;
}
