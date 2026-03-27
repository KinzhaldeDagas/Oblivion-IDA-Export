int __thiscall sub_8E79E0(__m128 *this, float a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  int result; // eax
  __m128 v12; // xmm0
  unsigned int v13; // [esp+4h] [ebp-24h]
  __m128 v14; // [esp+8h] [ebp-20h] BYREF
  __m128 v15; // [esp+18h] [ebp-10h]

  v3 = (__m128)xmmword_A6DFE0;
  v5 = *(this + 3);
  *(float *)&v13 = (a2 - this->m128_f32[3]) * *((float *)this + 7);
  v15 = (__m128)v13;
  v6 = _mm_shuffle_ps(v15, v15, 0);
  v7 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v3, v6), *(this + 2)), _mm_mul_ps(v6, v5));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v8, v8, 0x4E), v8);
  v9.m128_f32[0] = v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 0xB1).m128_f32[0];
  v8.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0]);
  v3.m128_f32[0] = 3.0 - (float)((float)(v9.m128_f32[0] * v8.m128_f32[0]) * v8.m128_f32[0]);
  v10 = (__m128)0x3F000000u;
  v10.m128_f32[0] = (float)(0.5 * v8.m128_f32[0]) * v3.m128_f32[0];
  v14 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v7);
  result = sub_8B1DD0(a3->m128_f32, v14.m128_f32);
  v12 = _mm_shuffle_ps(v15, v15, 0);
  a3[3] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v12), *this), _mm_mul_ps(v12, *(this + 1)));
  a3[3] = _mm_sub_ps(
            a3[3],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*a3, _mm_shuffle_ps(*(this + 4), *(this + 4), 0)),
                _mm_mul_ps(a3[1], _mm_shuffle_ps(*(this + 4), *(this + 4), 0x55))),
              _mm_mul_ps(a3[2], _mm_shuffle_ps(*(this + 4), *(this + 4), 0xAA))));
  return result;
}
