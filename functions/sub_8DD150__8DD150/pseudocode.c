int __cdecl sub_8DD150(__m128 *a1, float a2, __m128 *a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  double v7; // st7
  __m128 v8; // xmm0
  double v10; // st7
  unsigned __int8 v11; // c0
  unsigned __int8 v12; // c2
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  float v20; // xmm3_4
  __m128 v21; // xmm0
  int result; // eax
  __m128 v23; // xmm0
  float v24; // [esp+0h] [ebp-18h]
  float v25; // [esp+4h] [ebp-14h]
  unsigned int v26; // [esp+4h] [ebp-14h]
  unsigned int v27; // [esp+4h] [ebp-14h]
  unsigned int v28; // [esp+4h] [ebp-14h]
  __m128 v29; // [esp+8h] [ebp-10h] BYREF

  v3 = a1[3];
  v4 = _mm_add_ps(a1[2], v3);
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_add_ps(_mm_shuffle_ps(v5, v5, 0x4E), v5);
  v25 = v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 0xB1).m128_f32[0];
  v24 = (a2 - a1->m128_f32[3]) * a1[1].m128_f32[3];
  v7 = flt_A41328 - v25 * flt_A9A480;
  *(float *)&v26 = (flt_A35AA4 - v25 * v7 * v7 * flt_A3D65C) * v7;
  v8 = _mm_mul_ps(_mm_shuffle_ps((__m128)v26, (__m128)v26, 0), v4);
  v10 = v24 + v24;
  if ( v11 | v12 )
  {
    *(float *)&v27 = v10;
    v13 = _mm_shuffle_ps((__m128)v27, (__m128)v27, 0);
    v14 = _mm_mul_ps(v13, v8);
    v15 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v13), a1[2]);
  }
  else
  {
    *(float *)&v28 = v10 - fConstant_1;
    v16 = _mm_shuffle_ps((__m128)v28, (__m128)v28, 0);
    v14 = _mm_mul_ps(v16, v3);
    v15 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v16), v8);
  }
  v17 = _mm_add_ps(v15, v14);
  v18 = _mm_mul_ps(v17, v17);
  v19 = _mm_add_ps(_mm_shuffle_ps(v18, v18, 0x4E), v18);
  v19.m128_f32[0] = v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 0xB1).m128_f32[0];
  v18.m128_f32[0] = 1.0 / fsqrt(v19.m128_f32[0]);
  v20 = 3.0 - (float)((float)(v19.m128_f32[0] * v18.m128_f32[0]) * v18.m128_f32[0]);
  v21 = (__m128)0x3F000000u;
  v21.m128_f32[0] = (float)(0.5 * v18.m128_f32[0]) * v20;
  v29 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v17);
  result = sub_8B1DD0(a3->m128_f32, v29.m128_f32);
  v23 = _mm_shuffle_ps((__m128)LODWORD(v24), (__m128)LODWORD(v24), 0);
  a3[3] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v23), *a1), _mm_mul_ps(v23, a1[1]));
  a3[3] = _mm_sub_ps(
            a3[3],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*a3, _mm_shuffle_ps(a1[4], a1[4], 0)),
                _mm_mul_ps(a3[1], _mm_shuffle_ps(a1[4], a1[4], 0x55))),
              _mm_mul_ps(a3[2], _mm_shuffle_ps(a1[4], a1[4], 0xAA))));
  return result;
}
