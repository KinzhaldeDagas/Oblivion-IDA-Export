__m128 *__thiscall sub_8EAF30(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm3
  __m128 v3; // xmm5
  __m128 v5; // xmm4
  __m128 v6; // xmm2
  __m128 v7; // xmm5
  __m128 v8; // xmm0

  v2 = *(this + 3);
  v3 = *(this + 2);
  v5 = _mm_shuffle_ps(v2, v2, 0x44);
  v6 = _mm_shuffle_ps(*(this + 1), v3, 0xEE);
  v7 = _mm_shuffle_ps(*(this + 1), v3, 0x44);
  v8 = _mm_mul_ps(
         *(this + 0xF),
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(v7, v5, 0x88), _mm_shuffle_ps(*a2, *a2, 0)),
             _mm_mul_ps(_mm_shuffle_ps(v7, v5, 0xDD), _mm_shuffle_ps(*a2, *a2, 0x55))),
           _mm_mul_ps(_mm_shuffle_ps(v6, _mm_shuffle_ps(v2, v2, 0xEE), 0x88), _mm_shuffle_ps(*a2, *a2, 0xAA))));
  *(this + 0xE) = _mm_add_ps(
                    *(this + 0xE),
                    _mm_add_ps(
                      _mm_add_ps(
                        _mm_mul_ps(*(this + 1), _mm_shuffle_ps(v8, v8, 0)),
                        _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v8, v8, 0x55))),
                      _mm_mul_ps(v2, _mm_shuffle_ps(v8, v8, 0xAA))));
  return a2;
}
