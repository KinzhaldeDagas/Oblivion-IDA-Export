__m128 *__thiscall sub_914E00(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm5
  __m128 v5; // xmm4
  __m128 v6; // xmm0
  double v7; // st7
  int v8; // edx
  __m128 v10; // [esp+0h] [ebp-10h]

  v3 = *(this + 3);
  v4 = *(this + 2);
  v5 = _mm_shuffle_ps(v3, v3, 0x44);
  v6 = _mm_shuffle_ps(*(this + 1), v4, 0x44);
  v10 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v6, v5, 0x88), _mm_shuffle_ps(*a2, *a2, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v6, v5, 0xDD), _mm_shuffle_ps(*a2, *a2, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*(this + 1), v4, 0xEE), _mm_shuffle_ps(v3, v3, 0xEE), 0x88),
            _mm_shuffle_ps(*a2, *a2, 0xAA)));
  if ( v10.m128_f32[2] <= (double)v10.m128_f32[1] )
  {
    v7 = v10.m128_f32[1];
    v8 = 0x10;
  }
  else
  {
    v7 = v10.m128_f32[2];
    v8 = 0x20;
  }
  if ( v10.m128_f32[0] > v7 )
    v8 = 0;
  *a3 = *(__m128 *)((char *)this + v8 + 0x10);
  a3->m128_i32[3] = v8 | 0x3F000000;
  return a3;
}
