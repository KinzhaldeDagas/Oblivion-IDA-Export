int __cdecl sub_8DD750(float a1, __m128 *a2)
{
  __m128 v2; // xmm3
  __m128 v3; // xmm4
  __m128 *v4; // ecx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  double v8; // st7
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
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  int result; // eax
  float v25; // [esp+Ch] [ebp-14h]
  unsigned int v26; // [esp+Ch] [ebp-14h]
  unsigned int v27; // [esp+Ch] [ebp-14h]
  unsigned int v28; // [esp+Ch] [ebp-14h]
  unsigned int v29; // [esp+Ch] [ebp-14h]
  float v30; // [esp+10h] [ebp-10h]

  if ( a1 <= (double)a2[4].m128_f32[3] )
    a1 = a2[4].m128_f32[3];
  v2 = a2[6];
  v3 = a2[7];
  v4 = a2 + 7;
  v5 = _mm_add_ps(v2, v3);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_add_ps(_mm_shuffle_ps(v6, v6, 0x4E), v6);
  v25 = v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 0xB1).m128_f32[0];
  v8 = (a1 - a2[4].m128_f32[3]) * a2[5].m128_f32[3];
  a2[7] = v5;
  v9 = flt_A41328 - v25 * flt_A9A480;
  *(float *)&v26 = (flt_A35AA4 - v25 * v9 * v9 * flt_A3D65C) * v9;
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v26, (__m128)v26, 0), v5);
  a2[7] = v10;
  v12 = v8 + v8;
  if ( v13 | v14 )
  {
    *(float *)&v27 = v12;
    v15 = _mm_shuffle_ps((__m128)v27, (__m128)v27, 0);
    *v4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v15), v2), _mm_mul_ps(v15, v10));
  }
  else
  {
    *(float *)&v28 = v12 - fConstant_1;
    v16 = _mm_shuffle_ps((__m128)v28, (__m128)v28, 0);
    *v4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v16), v10), _mm_mul_ps(v16, v3));
  }
  v17 = _mm_mul_ps(*v4, *v4);
  v18 = _mm_add_ps(_mm_shuffle_ps(v17, v17, 0x4E), v17);
  v18.m128_f32[0] = v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 0xB1).m128_f32[0];
  v30 = 1.0 / fsqrt(v18.m128_f32[0]);
  v19 = 3.0 - (float)((float)(v18.m128_f32[0] * v30) * v30);
  v20 = (__m128)0x3F000000u;
  *(float *)&v29 = v8;
  v20.m128_f32[0] = (float)(0.5 * v30) * v19;
  *v4 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), *v4);
  v21 = a2[5];
  a2[6] = *v4;
  v22 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0);
  v23 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v22), a2[4]), _mm_mul_ps(v22, v21));
  a2[5] = v23;
  a2[4] = v23;
  a2[4].m128_f32[3] = a1;
  a2[5].m128_i32[3] = 0;
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
