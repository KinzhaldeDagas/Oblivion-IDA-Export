__m128 *__cdecl sub_8F1310(__m128 *a1, int a2, int a3)
{
  __m128 v3; // xmm0
  __m128 *v4; // edx
  __m128 *result; // eax
  __m128 *v6; // edi
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  double v9; // st7
  double v10; // st6
  _DWORD *v11; // ecx

  v3 = a1[1]; /*0x8f131a*/
  v4 = *(__m128 **)(a2 + 0x14); /*0x8f1322*/
  result = *(__m128 **)a3; /*0x8f132d*/
  v6 = *(__m128 **)(a2 + 0x18); /*0x8f1330*/
  if ( !v4->m128_i8[0xC] ) /*0x8f1325*/
    v3 = _mm_add_ps( /*0x8f1362*/
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v3, v3, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v3, v3, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v3, v3, 0xAA)));
  *result = v3; /*0x8f1365*/
  if ( v6->m128_i8[0xC] ) /*0x8f1368*/
  {
    result[1] = _mm_xor_ps(a1[1], (__m128)xmmword_A965C0); /*0x8f137c*/
  }
  else
  {
    v7 = _mm_xor_ps(a1[1], (__m128)xmmword_A965C0); /*0x8f1395*/
    result[1] = _mm_add_ps( /*0x8f13c0*/
                  _mm_add_ps(
                    _mm_mul_ps(v6[5], _mm_shuffle_ps(v7, v7, 0)),
                    _mm_mul_ps(v6[6], _mm_shuffle_ps(v7, v7, 0x55))),
                  _mm_mul_ps(v6[7], _mm_shuffle_ps(v7, v7, 0xAA)));
  }
  v8 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(*result, *result), v4[3]), _mm_mul_ps(_mm_mul_ps(result[1], result[1]), v6[3])); /*0x8f13eb*/
  result->m128_f32[3] = fConstant_1 /*0x8f1420*/
                      / ((float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                               + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]))
                       + flt_A9B1EC);
  v9 = a1[2].m128_f32[2] * a1->m128_f32[2] + a1[2].m128_f32[1] * a1->m128_f32[1]; /*0x8f142f*/
  v10 = a1[2].m128_f32[0] * a1->m128_f32[0]; /*0x8f1434*/
  v11 = *(_DWORD **)(a3 + 4); /*0x8f1436*/
  *v11 = 0x4040C; /*0x8f1439*/
  *(_DWORD *)a3 = result + 2; /*0x8f143f*/
  *(_DWORD *)(a3 + 4) = v11 + 1; /*0x8f1446*/
  result[1].m128_f32[3] = -(v9 + v10) * *(float *)(a2 + 4); /*0x8f1450*/
  return result; /*0x8f1455*/
}
