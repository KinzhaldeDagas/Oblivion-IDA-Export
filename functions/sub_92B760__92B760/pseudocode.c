signed int __cdecl sub_92B760(_DWORD *a1, unsigned __int64 a2, __int32 a3, __m128 *a4)
{
  __m128 *v4; // edx
  __m128 *v5; // esi
  __m128 v6; // xmm1
  __m128 *v7; // ecx
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  double v12; // st7
  double v13; // st7
  float v14; // [esp+4h] [ebp-14h]
  unsigned int v15; // [esp+4h] [ebp-14h]
  __m128 v16; // [esp+8h] [ebp-10h]

  v4 = (__m128 *)(0x10 * a3 + *a1);
  v5 = (__m128 *)(0x10 * HIDWORD(a2) + *a1);
  v6 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(*v5, *v5, 0xC9), _mm_shuffle_ps(*v4, *v4, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(*v5, *v5, 0xD2), _mm_shuffle_ps(*v4, *v4, 0xC9)));
  v7 = (__m128 *)(*a1 + 0x10 * a2);
  v8 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xC9), _mm_shuffle_ps(*v7, *v7, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xD2), _mm_shuffle_ps(*v7, *v7, 0xC9)));
  v9 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(*v7, *v7, 0xC9), _mm_shuffle_ps(*v5, *v5, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(*v7, *v7, 0xD2), _mm_shuffle_ps(*v5, *v5, 0xC9)));
  v10 = _mm_mul_ps(v6, *v7);
  v14 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  if ( fabs(v14) < flt_AA1C24 )
    return 1;
  v16.m128_f32[0] = -v7->m128_f32[3];
  v16.m128_i32[3] = 0;
  v16.m128_f32[1] = -v5->m128_f32[3];
  v12 = v4->m128_f32[3];
  a4[1].m128_u64[0] = a2;
  v16.m128_f32[2] = -v12;
  v13 = fConstant_1 / v14;
  a4[1].m128_i32[2] = a3;
  *(float *)&v15 = v13;
  *a4 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)v15, (__m128)v15, 0),
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v6, _mm_shuffle_ps(v16, v16, 0)), _mm_mul_ps(v8, _mm_shuffle_ps(v16, v16, 0x55))),
            _mm_mul_ps(v9, _mm_shuffle_ps(v16, v16, 0xAA))));
  if ( (int)a2 > SHIDWORD(a2) )
  {
    a4[1].m128_i32[0] = HIDWORD(a2);
    a4[1].m128_i32[1] = a2;
  }
  return 0;
}
