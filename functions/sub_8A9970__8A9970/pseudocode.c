__m128 *__cdecl sub_8A9970(int a1, __m128 *a2)
{
  int v2; // ecx
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  __m128 *result; // eax
  __m128 v7; // xmm0
  double v8; // st7
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // [esp+24h] [ebp-20h] BYREF
  __m128 v12; // [esp+34h] [ebp-10h]

  (*(void (__thiscall **)(int, __int128 *, _DWORD, __m128 *))(*(_DWORD *)v2 + 0xC))(v2, xmmword_B2F090, 0, &v11);
  v3 = v12;
  v4 = v11;
  v5 = _mm_sub_ps(v12, v11);
  *a2 = v5;
  result = *(__m128 **)(a1 + 0x50);
  v7 = _mm_mul_ps(v5, v5);
  v8 = fsqrt(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]))
     * flt_A3D65C;
  v9 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v4, v3)),
         result[9]);
  v10 = _mm_mul_ps(v9, v9);
  result[0xB].m128_f32[0] = v8
                          + fsqrt(
                              _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]));
  return result;
}
