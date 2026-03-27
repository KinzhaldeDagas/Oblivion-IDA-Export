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

  v3 = a1[1];
  v4 = *(__m128 **)(a2 + 0x14);
  result = *(__m128 **)a3;
  v6 = *(__m128 **)(a2 + 0x18);
  if ( !v4->m128_i8[0xC] )
    v3 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(v4[5], _mm_shuffle_ps(v3, v3, 0)), _mm_mul_ps(v4[6], _mm_shuffle_ps(v3, v3, 0x55))),
           _mm_mul_ps(v4[7], _mm_shuffle_ps(v3, v3, 0xAA)));
  *result = v3;
  if ( v6->m128_i8[0xC] )
  {
    result[1] = _mm_xor_ps(a1[1], (__m128)xmmword_A965C0);
  }
  else
  {
    v7 = _mm_xor_ps(a1[1], (__m128)xmmword_A965C0);
    result[1] = _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(v6[5], _mm_shuffle_ps(v7, v7, 0)),
                    _mm_mul_ps(v6[6], _mm_shuffle_ps(v7, v7, 0x55))),
                  _mm_mul_ps(v6[7], _mm_shuffle_ps(v7, v7, 0xAA)));
  }
  v8 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(*result, *result), v4[3]), _mm_mul_ps(_mm_mul_ps(result[1], result[1]), v6[3]));
  result->m128_f32[3] = fConstant_1
                      / ((float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                               + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]))
                       + flt_A9B1EC);
  v9 = a1[2].m128_f32[2] * a1->m128_f32[2] + a1[2].m128_f32[1] * a1->m128_f32[1];
  v10 = a1[2].m128_f32[0] * a1->m128_f32[0];
  v11 = *(_DWORD **)(a3 + 4);
  *v11 = 0x4040C;
  *(_DWORD *)a3 = result + 2;
  *(_DWORD *)(a3 + 4) = v11 + 1;
  result[1].m128_f32[3] = -(v9 + v10) * *(float *)(a2 + 4);
  return result;
}
