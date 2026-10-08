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

  v3 = *(__m128 **)a1; /*0x8f146d*/
  result = *(__m128 **)a3; /*0x8f147f*/
  v5 = *(_DWORD *)(a3 + 4); /*0x8f1481*/
  if ( *(_DWORD *)(a1 + 0xC) - 1 < 0 ) /*0x8f1484*/
  {
    *(_DWORD *)a3 = result; /*0x8f15e4*/
    *(_DWORD *)(a3 + 4) = v5; /*0x8f15e6*/
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 4) + 4; /*0x8f1495*/
    v14 = *(_DWORD *)(a1 + 0xC); /*0x8f1499*/
    do /*0x8f15cf*/
    {
      v6 = *(__m128 **)(a2 + 0x14); /*0x8f14a0*/
      v7 = *(__m128 **)(a2 + 0x18); /*0x8f14a7*/
      v8 = *v3; /*0x8f14aa*/
      if ( !v6->m128_i8[0xC] ) /*0x8f14a3*/
        v8 = _mm_add_ps( /*0x8f14dc*/
               _mm_add_ps(_mm_mul_ps(v6[5], _mm_shuffle_ps(v8, v8, 0)), _mm_mul_ps(v6[6], _mm_shuffle_ps(v8, v8, 0x55))),
               _mm_mul_ps(v6[7], _mm_shuffle_ps(v8, v8, 0xAA)));
      *result = v8; /*0x8f14df*/
      if ( v7->m128_i8[0xC] ) /*0x8f14e2*/
      {
        result[1] = _mm_xor_ps(*v3, (__m128)xmmword_A965C0); /*0x8f14f5*/
      }
      else
      {
        v9 = _mm_xor_ps(*v3, (__m128)xmmword_A965C0); /*0x8f150d*/
        result[1] = _mm_add_ps( /*0x8f1538*/
                      _mm_add_ps(
                        _mm_mul_ps(v7[5], _mm_shuffle_ps(v9, v9, 0)),
                        _mm_mul_ps(v7[6], _mm_shuffle_ps(v9, v9, 0x55))),
                      _mm_mul_ps(v7[7], _mm_shuffle_ps(v9, v9, 0xAA)));
      }
      v10 = _mm_add_ps( /*0x8f1563*/
              _mm_mul_ps(_mm_mul_ps(*result, *result), v6[3]),
              _mm_mul_ps(_mm_mul_ps(result[1], result[1]), v7[3]));
      v5 += 8; /*0x8f1591*/
      ++v3; /*0x8f1594*/
      result += 2; /*0x8f159d*/
      result[0xFFFFFFFE].m128_f32[3] = fConstant_1 /*0x8f15a0*/
                                     / ((float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                                              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
                                      + flt_A9B1EC);
      v11 = *(float *)(a1 + 8) * *(float *)a2; /*0x8f15a6*/
      *(_DWORD *)(v5 - 8) = 0x40809; /*0x8f15ac*/
      v13 += 8; /*0x8f15b6*/
      *(float *)(v5 - 4) = v11; /*0x8f15ba*/
      v12 = v14-- == 1; /*0x8f15c7*/
      result[0xFFFFFFFF].m128_f32[3] = *(float *)(v13 - 8) * *(float *)(a2 + 4); /*0x8f15cc*/
    }
    while ( !v12 ); /*0x8f15cf*/
    *(_DWORD *)a3 = result; /*0x8f15d8*/
    *(_DWORD *)(a3 + 4) = v5; /*0x8f15da*/
  }
  return result; /*0x8f15dd*/
}
