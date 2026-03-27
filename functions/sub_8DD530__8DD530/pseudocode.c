int __cdecl sub_8DD530(float a1, __m128 *a2)
{
  double v2; // st7
  __m128 v3; // xmm3
  __m128 v4; // xmm4
  __m128 *v5; // ecx
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  double v9; // st6
  __m128 v10; // xmm0
  double v12; // st6
  unsigned __int8 v13; // c0
  unsigned __int8 v14; // c2
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  float v19; // xmm3_4
  __m128 v20; // xmm0
  double v21; // st6
  __m128 v22; // xmm1
  int result; // eax
  float v24; // [esp+8h] [ebp-14h]
  unsigned int v25; // [esp+8h] [ebp-14h]
  unsigned int v26; // [esp+8h] [ebp-14h]
  unsigned int v27; // [esp+8h] [ebp-14h]
  unsigned int v28; // [esp+8h] [ebp-14h]
  float v29; // [esp+Ch] [ebp-10h]

  v2 = (a1 - a2[4].m128_f32[3]) * a2[5].m128_f32[3];
  if ( v2 <= flt_A9A468 )
    v2 = flt_A9A468;
  v3 = a2[6];
  v4 = a2[7];
  v5 = a2 + 7;
  v6 = _mm_add_ps(v3, v4);
  v7 = _mm_mul_ps(v6, v6);
  v8 = _mm_add_ps(_mm_shuffle_ps(v7, v7, 0x4E), v7);
  v24 = v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 0xB1).m128_f32[0];
  v9 = v24 * flt_A9A480;
  a2[7] = v6;
  *(float *)&v25 = (flt_A35AA4 - v24 * (flt_A41328 - v9) * (flt_A41328 - v9) * flt_A3D65C) * (flt_A41328 - v9);
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v6);
  a2[7] = v10;
  v12 = v2 + v2;
  if ( v13 | v14 )
  {
    *(float *)&v26 = v12;
    v15 = _mm_shuffle_ps((__m128)v26, (__m128)v26, 0);
    *v5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v15), v3), _mm_mul_ps(v15, v10));
  }
  else
  {
    *(float *)&v27 = v12 - fConstant_1;
    v16 = _mm_shuffle_ps((__m128)v27, (__m128)v27, 0);
    *v5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v16), v10), _mm_mul_ps(v16, v4));
  }
  v17 = _mm_mul_ps(*v5, *v5);
  v18 = _mm_add_ps(_mm_shuffle_ps(v17, v17, 0x4E), v17);
  v18.m128_f32[0] = v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 0xB1).m128_f32[0];
  v29 = 1.0 / fsqrt(v18.m128_f32[0]);
  v19 = 3.0 - (float)((float)(v18.m128_f32[0] * v29) * v29);
  v20 = (__m128)0x3F000000u;
  v20.m128_f32[0] = (float)(0.5 * v29) * v19;
  *v5 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *v5);
  v21 = a2[5].m128_f32[3];
  *(float *)&v28 = v2;
  v22 = _mm_shuffle_ps((__m128)v28, (__m128)v28, 0);
  a2[5] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v22), a2[4]), _mm_mul_ps(v22, a2[5]));
  a2[5].m128_f32[3] = v21 / v2;
  a2[9] = _mm_mul_ps(v22, a2[9]);
  result = sub_8B1DD0(a2->m128_f32, a2[7].m128_f32);
  a2[3] = _mm_sub_ps(
            a2[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*a2, _mm_shuffle_ps(a2[8], a2[8], 0)),
                _mm_mul_ps(a2[1], _mm_shuffle_ps(a2[8], a2[8], 0x55))),
              _mm_mul_ps(a2[2], _mm_shuffle_ps(a2[8], a2[8], 0xAA))));
  return result;
}
