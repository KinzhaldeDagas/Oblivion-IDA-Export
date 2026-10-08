float *__cdecl sub_8D1DB0(__m128 *a1, float *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  float v6; // xmm4_4
  __m128 v7; // xmm2
  float v8; // xmm4_4
  __m128 v9; // xmm2
  double v11; // st7
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  float v14; // [esp+4h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-18h]

  v2 = a1[1]; /*0x8d1dbc*/
  v3 = _mm_sub_ps(*a1, v2); /*0x8d1dc7*/
  v4 = _mm_sub_ps(a1[2], v2); /*0x8d1dca*/
  v5 = _mm_mul_ps(v3, v3); /*0x8d1dd0*/
  v6 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]); /*0x8d1de5*/
  v7 = _mm_mul_ps(v4, v4); /*0x8d1dec*/
  v15 = v6; /*0x8d1dfe*/
  v8 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]); /*0x8d1e09*/
  v9 = _mm_mul_ps(v4, v3); /*0x8d1e10*/
  v14 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]); /*0x8d1e3d*/
  v11 = fConstant_1 / (v8 * v15 - v14 * v14); /*0x8d1e58*/
  v12 = _mm_sub_ps( /*0x8d1e79*/
          _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), _mm_shuffle_ps(v4, v4, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v4, v4, 0xC9)));
  v13 = _mm_mul_ps(v12, v12); /*0x8d1e7c*/
  *a2 = v15 * v11; /*0x8d1eb2*/
  a2[1] = v8 * v11; /*0x8d1eba*/
  a2[2] = v14 * v11; /*0x8d1ec3*/
  a2[3] = fConstant_1 /*0x8d1eda*/
        / fsqrt(
            _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]));
  return a2; /*0x8d1edd*/
}
