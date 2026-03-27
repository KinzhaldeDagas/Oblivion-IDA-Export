double __thiscall sub_8AC530(float *this, __m128 *a2, int a3, __m128 *a4, __m128 *a5)
{
  __m128 v5; // xmm0
  __m128 *v6; // eax
  __m128 v7; // xmm1
  double v8; // st7
  __m128 v9; // xmm0
  float v11; // [esp+8h] [ebp-18h]
  unsigned int v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+10h] [ebp-10h]

  v5 = _mm_mul_ps(*a2, *a2);
  v13 = fsqrt(_mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0]
                                                               + v5.m128_f32[0]));
  v6 = *(__m128 **)(a3 + 0x10);
  v7 = _mm_mul_ps(*a2, v6[1]);
  v11 = v6->m128_f32[3]
      - flt_A30634
      / ((float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]))
       * (fConstant_1
        / v13))
      * *(this + 0x16)
      * (fConstant_1
       / v13);
  if ( v11 >= (double)fConstant_1 )
  {
    v8 = fConstant_1;
  }
  else
  {
    v8 = v11;
    if ( *(float *)&SrcStr > (double)v11 )
      v8 = *(float *)&SrcStr;
  }
  *(float *)&v12 = v8;
  v9 = _mm_shuffle_ps((__m128)v12, (__m128)v12, 0);
  *a5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v9), *a5), _mm_mul_ps(v9, *a4));
  return v8 * a2[2].m128_f32[0];
}
