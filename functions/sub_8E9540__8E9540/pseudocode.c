__m128 *__thiscall sub_8E9540(__m128 *this, float *a2, __m128 *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  __m128 v7; // xmm0
  unsigned int v8; // [esp+Ch] [ebp-4h]
  unsigned int v9; // [esp+Ch] [ebp-4h]
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v3 = a2[2];
  v4 = fConstant_1 - v3 * *((float *)this + 0x32);
  if ( *(float *)&SrcStr > v4 )
    v4 = *(float *)&SrcStr;
  *(float *)&v8 = v4;
  *(this + 0xD) = _mm_mul_ps(_mm_shuffle_ps((__m128)v8, (__m128)v8, 0), *(this + 0xD));
  v5 = fConstant_1 - v3 * *((float *)this + 0x33);
  if ( *(float *)&SrcStr > v5 )
    v5 = *(float *)&SrcStr;
  *(float *)&v9 = v5;
  *(this + 0xE) = _mm_mul_ps(_mm_shuffle_ps((__m128)v9, (__m128)v9, 0), *(this + 0xE));
  a3->m128_i8[0] = 0;
  a3[3] = _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x31), (__m128)*((unsigned int *)this + 0x31), 0);
  a3[3].m128_i32[3] = *((_DWORD *)this + 0x30);
  *(float *)&v10 = (*a2 - *((float *)this + 0x17)) * *((float *)this + 0x1B);
  v7 = _mm_shuffle_ps((__m128)v10, (__m128)v10, 0);
  a3[4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v7), *(this + 5)), _mm_mul_ps(v7, *(this + 6)));
  a3[2] = *(this + 0xE);
  a3[1] = *(this + 0xD);
  a3[5] = 0;
  a3[6] = 0;
  a3[7] = 0;
  a3[5].m128_i32[0] = 0x3F800000;
  a3[6].m128_i32[1] = 0x3F800000;
  a3[7].m128_i32[2] = 0x3F800000;
  a3->m128_i8[0xC] = 1;
  a3->m128_i32[2] = *((unsigned __int16 *)this + 0x5E);
  a3->m128_i32[1] = *((unsigned __int16 *)this + 0x5F);
  return a3 + 8;
}
