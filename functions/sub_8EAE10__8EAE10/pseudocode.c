__m128 *__thiscall sub_8EAE10(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 *result; // eax
  __m128 v4; // xmm0
  __m128 v5; // xmm5
  __m128 v6; // xmm0
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  __m128 v10; // xmm5
  __m128 v11; // xmm0

  result = a2;
  *(this + 0xD) = _mm_add_ps(
                    *(this + 0xD),
                    _mm_mul_ps(
                      _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x30), (__m128)*((unsigned int *)this + 0x30), 0),
                      *a2));
  v4 = _mm_sub_ps(*a3, *(this + 6));
  v5 = *(this + 2);
  v6 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xC9), _mm_shuffle_ps(*result, *result, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xD2), _mm_shuffle_ps(*result, *result, 0xC9)));
  v7 = *(this + 3);
  v8 = _mm_shuffle_ps(v7, v7, 0x44);
  v9 = _mm_shuffle_ps(*(this + 1), v5, 0xEE);
  v10 = _mm_shuffle_ps(*(this + 1), v5, 0x44);
  v11 = _mm_mul_ps(
          *(this + 0xF),
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v10, v8, 0x88), _mm_shuffle_ps(v6, v6, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v10, v8, 0xDD), _mm_shuffle_ps(v6, v6, 0x55))),
            _mm_mul_ps(_mm_shuffle_ps(v9, _mm_shuffle_ps(v7, v7, 0xEE), 0x88), _mm_shuffle_ps(v6, v6, 0xAA))));
  *(this + 0xE) = _mm_add_ps(
                    *(this + 0xE),
                    _mm_add_ps(
                      _mm_add_ps(
                        _mm_mul_ps(*(this + 1), _mm_shuffle_ps(v11, v11, 0)),
                        _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v11, v11, 0x55))),
                      _mm_mul_ps(v7, _mm_shuffle_ps(v11, v11, 0xAA))));
  return result;
}
