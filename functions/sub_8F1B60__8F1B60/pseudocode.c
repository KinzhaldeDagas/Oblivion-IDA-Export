__m128 *__cdecl sub_8F1B60(__m128 *a1, int a2, int a3)
{
  __m128 *v3; // ebx
  __m128 *v4; // esi
  __m128 *result; // eax
  int v6; // ecx
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  int v10; // ecx
  double v11; // st7
  double v12; // st6

  v3 = *(__m128 **)(a2 + 0x18); /*0x8f1b6b*/
  v4 = *(__m128 **)(a2 + 0x14); /*0x8f1b6f*/
  result = *(__m128 **)a3; /*0x8f1b79*/
  v6 = *(_DWORD *)(a3 + 4); /*0x8f1b7b*/
  v7 = *a1; /*0x8f1b83*/
  if ( !v4->m128_i8[0xC] ) /*0x8f1b72*/
    v7 = _mm_add_ps( /*0x8f1bb5*/
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v7, v7, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v7, v7, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v7, v7, 0xAA)));
  *result = v7; /*0x8f1bb8*/
  if ( v3->m128_i8[0xC] ) /*0x8f1bbb*/
  {
    result[1] = _mm_xor_ps(*a1, (__m128)xmmword_A965C0); /*0x8f1bce*/
  }
  else
  {
    v8 = _mm_xor_ps(*a1, (__m128)xmmword_A965C0); /*0x8f1be6*/
    result[1] = _mm_add_ps( /*0x8f1c11*/
                  _mm_add_ps(
                    _mm_mul_ps(v3[5], _mm_shuffle_ps(v8, v8, 0)),
                    _mm_mul_ps(v3[6], _mm_shuffle_ps(v8, v8, 0x55))),
                  _mm_mul_ps(v3[7], _mm_shuffle_ps(v8, v8, 0xAA)));
  }
  v9 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(*result, *result), v4[3]), _mm_mul_ps(_mm_mul_ps(result[1], result[1]), v3[3])); /*0x8f1c3c*/
  v10 = v6 + 0x10; /*0x8f1c6a*/
  result->m128_f32[3] = fConstant_1 /*0x8f1c73*/
                      / ((float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                               + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]))
                       + flt_A9B1EC);
  v11 = -*(float *)(a2 + 4); /*0x8f1c79*/
  v12 = v11 * a1[1].m128_f32[1]; /*0x8f1c85*/
  *(float *)(v10 - 0xC) = v11 * a1[1].m128_f32[0]; /*0x8f1c87*/
  *(_DWORD *)(v10 - 0x10) = 0x4100A; /*0x8f1c8a*/
  *(_DWORD *)(v10 - 4) = 0x3F000000; /*0x8f1c91*/
  *(float *)(v10 - 8) = v12; /*0x8f1c98*/
  *(_DWORD *)(a3 + 4) = v10; /*0x8f1c9b*/
  *(_DWORD *)a3 = result + 2; /*0x8f1ca1*/
  result[1].m128_f32[3] = v11 * a1[1].m128_f32[2]; /*0x8f1ca8*/
  result->m128_f32[3] = result->m128_f32[3] * kHeadBodyNormalMatchRadius; /*0x8f1cb5*/
  return result; /*0x8f1cb8*/
}
