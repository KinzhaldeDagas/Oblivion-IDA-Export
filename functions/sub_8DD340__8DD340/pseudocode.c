int __cdecl sub_8DD340(__m128 *a1, float a2, float a3, __m128 *a4)
{
  __m128 v4; // xmm4
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  double v8; // st7
  __m128 v9; // xmm0
  double v11; // st7
  unsigned __int8 v12; // c0
  unsigned __int8 v13; // c2
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm0
  float v21; // xmm3_4
  __m128 v22; // xmm0
  int result; // eax
  __m128 v24; // xmm0
  float v25; // [esp+0h] [ebp-18h]
  float v26; // [esp+4h] [ebp-14h]
  unsigned int v27; // [esp+4h] [ebp-14h]
  unsigned int v28; // [esp+4h] [ebp-14h]
  unsigned int v29; // [esp+4h] [ebp-14h]
  __m128 v30; // [esp+8h] [ebp-10h] BYREF

  v4 = a1[3];
  v5 = _mm_add_ps(a1[2], v4);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_add_ps(_mm_shuffle_ps(v6, v6, 0x4E), v6);
  v26 = v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 0xB1).m128_f32[0];
  v25 = (a2 - a1->m128_f32[3] + a3) * a1[1].m128_f32[3];
  v8 = flt_A41328 - v26 * flt_A9A480;
  *(float *)&v27 = (flt_A35AA4 - v26 * v8 * v8 * flt_A3D65C) * v8;
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v27, (__m128)v27, 0), v5);
  v11 = v25 + v25;
  if ( v12 | v13 )
  {
    *(float *)&v28 = v11;
    v14 = _mm_shuffle_ps((__m128)v28, (__m128)v28, 0);
    v15 = _mm_mul_ps(v14, v9);
    v16 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v14), a1[2]);
  }
  else
  {
    *(float *)&v29 = v11 - fConstant_1;
    v17 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0);
    v15 = _mm_mul_ps(v17, v4);
    v16 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v17), v9);
  }
  v18 = _mm_add_ps(v16, v15);
  v19 = _mm_mul_ps(v18, v18);
  v20 = _mm_add_ps(_mm_shuffle_ps(v19, v19, 0x4E), v19);
  v20.m128_f32[0] = v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 0xB1).m128_f32[0];
  v19.m128_f32[0] = 1.0 / fsqrt(v20.m128_f32[0]);
  v21 = 3.0 - (float)((float)(v20.m128_f32[0] * v19.m128_f32[0]) * v19.m128_f32[0]);
  v22 = (__m128)0x3F000000u;
  v22.m128_f32[0] = (float)(0.5 * v19.m128_f32[0]) * v21;
  v30 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v18);
  result = sub_8B1DD0(a4->m128_f32, v30.m128_f32);
  v24 = _mm_shuffle_ps((__m128)LODWORD(v25), (__m128)LODWORD(v25), 0);
  a4[3] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), *a1), _mm_mul_ps(v24, a1[1]));
  a4[3] = _mm_sub_ps(
            a4[3],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*a4, _mm_shuffle_ps(a1[4], a1[4], 0)),
                _mm_mul_ps(a4[1], _mm_shuffle_ps(a1[4], a1[4], 0x55))),
              _mm_mul_ps(a4[2], _mm_shuffle_ps(a1[4], a1[4], 0xAA))));
  return result;
}
