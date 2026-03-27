__m128 *__cdecl sub_8F1460(int a1, int a2, int a3)
{
  __m128 *v3; // ebx
  __m128 *result; // eax
  int v5; // ecx
  __m128 *v6; // esi
  __m128 *v7; // edi
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  double v11; // st7
  bool v12; // zf
  int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]

  v3 = *(__m128 **)a1;
  result = *(__m128 **)a3;
  v5 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a1 + 0xC) - 1 < 0 )
  {
    *(_DWORD *)a3 = result;
    *(_DWORD *)(a3 + 4) = v5;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 4) + 4;
    v14 = *(_DWORD *)(a1 + 0xC);
    do
    {
      v6 = *(__m128 **)(a2 + 0x14);
      v7 = *(__m128 **)(a2 + 0x18);
      v8 = *v3;
      if ( !v6->m128_i8[0xC] )
        v8 = _mm_add_ps(
               _mm_add_ps(_mm_mul_ps(v6[5], _mm_shuffle_ps(v8, v8, 0)), _mm_mul_ps(v6[6], _mm_shuffle_ps(v8, v8, 0x55))),
               _mm_mul_ps(v6[7], _mm_shuffle_ps(v8, v8, 0xAA)));
      *result = v8;
      if ( v7->m128_i8[0xC] )
      {
        result[1] = _mm_xor_ps(*v3, (__m128)xmmword_A965C0);
      }
      else
      {
        v9 = _mm_xor_ps(*v3, (__m128)xmmword_A965C0);
        result[1] = _mm_add_ps(
                      _mm_add_ps(
                        _mm_mul_ps(v7[5], _mm_shuffle_ps(v9, v9, 0)),
                        _mm_mul_ps(v7[6], _mm_shuffle_ps(v9, v9, 0x55))),
                      _mm_mul_ps(v7[7], _mm_shuffle_ps(v9, v9, 0xAA)));
      }
      v10 = _mm_add_ps(
              _mm_mul_ps(_mm_mul_ps(*result, *result), v6[3]),
              _mm_mul_ps(_mm_mul_ps(result[1], result[1]), v7[3]));
      v5 += 8;
      ++v3;
      result += 2;
      result[0xFFFFFFFE].m128_f32[3] = fConstant_1
                                     / ((float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                                              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
                                      + flt_A9B1EC);
      v11 = *(float *)(a1 + 8) * *(float *)a2;
      *(_DWORD *)(v5 - 8) = 0x40809;
      v13 += 8;
      *(float *)(v5 - 4) = v11;
      v12 = v14-- == 1;
      result[0xFFFFFFFF].m128_f32[3] = *(float *)(v13 - 8) * *(float *)(a2 + 4);
    }
    while ( !v12 );
    *(_DWORD *)a3 = result;
    *(_DWORD *)(a3 + 4) = v5;
  }
  return result;
}
