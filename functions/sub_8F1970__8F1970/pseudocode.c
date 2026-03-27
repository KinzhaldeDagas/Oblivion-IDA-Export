int __cdecl sub_8F1970(__m128 *a1, int a2, int *a3)
{
  __m128 *v3; // ecx
  __m128 *v4; // edx
  __m128 *v5; // esi
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  double v12; // st7
  int v13; // ecx
  __m128 v14; // xmm0
  double v15; // st7
  int v16; // eax
  double v17; // st6
  double v18; // st7
  int result; // eax
  float v20; // [esp+0h] [ebp-4h]

  v3 = (__m128 *)*a3;
  v4 = *(__m128 **)(a2 + 0x14);
  v5 = *(__m128 **)(a2 + 0x18);
  *(__m128 *)*a3 = a1[2];
  v6 = _mm_sub_ps(*a1, v4[4]);
  v7 = _mm_sub_ps(a1[1], v5[4]);
  v8 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(a1[2], a1[2], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(a1[2], a1[2], 0xC9)));
  if ( !v4->m128_i8[0xC] )
    v8 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v8, v8, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v8, v8, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v8, v8, 0xAA)));
  v3[1] = v8;
  v9 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(a1[2], a1[2], 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(a1[2], a1[2], 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
  if ( !v5->m128_i8[0xC] )
    v9 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v5[5], _mm_shuffle_ps(v9, v9, 0)), _mm_mul_ps(v5[6], _mm_shuffle_ps(v9, v9, 0x55))),
           _mm_mul_ps(v5[7], _mm_shuffle_ps(v9, v9, 0xAA)));
  v10 = v3[1];
  v3[2] = v9;
  v11 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v10, v10), v4[3]), _mm_mul_ps(_mm_mul_ps(v3[2], v3[2]), v5[3]));
  v12 = v5[3].m128_f32[3]
      + v4[3].m128_f32[3]
      + flt_A9B1EC
      + (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]));
  v13 = (int)&v3[3];
  *(float *)(v13 - 4) = v12;
  *(float *)(v13 - 0x14) = fConstant_1 / v12;
  v14 = _mm_mul_ps(_mm_sub_ps(a1[1], *a1), a1[2]);
  *(float *)(v13 - 0x24) = (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]))
                         * *(float *)(a2 + 4);
  v15 = -*(float *)(a2 + 4);
  v20 = v15;
  v16 = a3[1];
  v17 = v15 * a1[3].m128_f32[0];
  v18 = v20 * a1[3].m128_f32[1];
  *(_DWORD *)v16 = 0x30C0B;
  *(float *)(v16 + 4) = v17;
  result = v16 + 0xC;
  *(float *)(result - 4) = v18;
  *a3 = v13;
  a3[1] = result;
  return result;
}
