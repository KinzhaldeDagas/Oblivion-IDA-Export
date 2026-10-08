float *__cdecl sub_8D1EF0(__m128 *a1, float *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm0
  __m128 v4; // xmm6
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  float v7; // xmm3_4
  __m128 v9; // xmm2
  float v10; // xmm5_4
  __m128 v11; // xmm2
  float v12; // xmm3_4
  float v13; // xmm4_4
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  double v16; // st7
  float v17; // [esp+Ch] [ebp-14h]
  float v18; // [esp+10h] [ebp-10h]
  float v19; // [esp+10h] [ebp-10h]

  v2 = a1[1]; /*0x8d1f00*/
  v3 = _mm_sub_ps(a1[2], v2); /*0x8d1f0a*/
  v4 = _mm_sub_ps(v2, *a1); /*0x8d1f10*/
  v5 = _mm_sub_ps(*a1, a1[2]); /*0x8d1f16*/
  v6 = _mm_mul_ps(v3, v3); /*0x8d1f1c*/
  v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x8d1f34*/
                 + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  v7 = fsqrt(v6.m128_f32[0]); /*0x8d1f3d*/
  *a2 = (float)(0.5 * (float)(1.0 / v7)) /*0x8d1f94*/
      * (float)(3.0 - (float)((float)(v6.m128_f32[0] * (float)(1.0 / v7)) * (float)(1.0 / v7)));
  v9 = _mm_mul_ps(v5, v5); /*0x8d1f96*/
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x8d1fae*/
                 + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  v10 = fsqrt(v9.m128_f32[0]); /*0x8d1fb7*/
  v17 = (float)(0.5 * (float)(1.0 / v10)) /*0x8d1fe4*/
      * (float)(3.0 - (float)((float)(v9.m128_f32[0] * (float)(1.0 / v10)) * (float)(1.0 / v10)));
  v11 = _mm_mul_ps(v4, v4); /*0x8d1fef*/
  v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x8d2007*/
                  + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v18 = 1.0 / fsqrt(v11.m128_f32[0]); /*0x8d2014*/
  v12 = 3.0 - (float)((float)(v11.m128_f32[0] * v18) * v18); /*0x8d2027*/
  v13 = 0.5 * v18; /*0x8d202b*/
  a2[1] = v17; /*0x8d202f*/
  v14 = _mm_sub_ps( /*0x8d2061*/
          _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), _mm_shuffle_ps(v5, v5, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v5, v5, 0xC9)));
  v15 = _mm_mul_ps(v14, v14); /*0x8d2064*/
  v19 = fsqrt( /*0x8d2095*/
          _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
  v16 = fConstant_1 / v19; /*0x8d20a8*/
  a2[2] = v13 * v12; /*0x8d20ac*/
  a2[4] = v19; /*0x8d20b3*/
  a2[3] = v16; /*0x8d20b6*/
  return a2; /*0x8d20b9*/
}
