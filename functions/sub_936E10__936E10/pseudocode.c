__m128 *__thiscall sub_936E10(__m128 **this, __m128 *a2, int a3, __m128 *a4)
{
  __m128 v4; // xmm0
  __m128 *result; // eax

  a2[2].m128_i16[0] = *(_WORD *)(a3 + 2);
  *a2 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(**(this + 5), _mm_shuffle_ps(*a4, *a4, 0)),
            _mm_mul_ps((*(this + 5))[1], _mm_shuffle_ps(*a4, *a4, 0x55))),
          _mm_add_ps(_mm_mul_ps((*(this + 5))[2], _mm_shuffle_ps(*a4, *a4, 0xAA)), (*(this + 5))[3]));
  v4 = a4[2];
  result = *(this + 5);
  a2[1] = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*result, _mm_shuffle_ps(v4, v4, 0)),
              _mm_mul_ps(result[1], _mm_shuffle_ps(v4, v4, 0x55))),
            _mm_mul_ps(result[2], _mm_shuffle_ps(v4, v4, 0xAA)));
  a2[1].m128_i32[3] = a4[3].m128_i32[1];
  return result;
}
