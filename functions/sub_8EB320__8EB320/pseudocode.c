__m128 *__thiscall sub_8EB320(__m128 *this, float *a2, __m128 *a3)
{
  double v3; // st7
  double v5; // st6
  double v6; // st7
  __m128 v7; // xmm0
  unsigned int v9; // [esp+Ch] [ebp-4h]
  unsigned int v10; // [esp+Ch] [ebp-4h]
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v3 = a2[2];
  v5 = fConstant_1 - v3 * *((float *)this + 0x32);
  if ( *(float *)&SrcStr > v5 )
    v5 = *(float *)&SrcStr;
  *(float *)&v9 = v5;
  *(this + 0xD) = _mm_mul_ps(_mm_shuffle_ps((__m128)v9, (__m128)v9, 0), *(this + 0xD));
  v6 = fConstant_1 - v3 * *((float *)this + 0x33);
  if ( *(float *)&SrcStr > v6 )
    v6 = *(float *)&SrcStr;
  *(float *)&v10 = v6;
  *(this + 0xE) = _mm_mul_ps(_mm_shuffle_ps((__m128)v10, (__m128)v10, 0), *(this + 0xE));
  sub_8D2860((__m128 *)a3[5].m128_i32, (_DWORD *)this + 4);
  a3->m128_i8[0] = 0;
  a3[3] = *(this + 0xF);
  a3[1] = *(this + 0xD);
  *(float *)&v11 = (*a2 - *((float *)this + 0x17)) * *((float *)this + 0x1B);
  v7 = _mm_shuffle_ps((__m128)v11, (__m128)v11, 0);
  a3[4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v7), *(this + 5)), _mm_mul_ps(v7, *(this + 6)));
  a3[2] = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(a3[5], _mm_shuffle_ps(*(this + 0xE), *(this + 0xE), 0)),
              _mm_mul_ps(a3[6], _mm_shuffle_ps(*(this + 0xE), *(this + 0xE), 0x55))),
            _mm_mul_ps(a3[7], _mm_shuffle_ps(*(this + 0xE), *(this + 0xE), 0xAA)));
  a3->m128_i8[0xC] = 0;
  a3->m128_i32[2] = *((unsigned __int16 *)this + 0x5E);
  a3->m128_i32[1] = *((unsigned __int16 *)this + 0x5F);
  return a3 + 8;
}
