__m128 *__cdecl sub_93D670(__m128 *a1, float a2, __m128 *a3)
{
  float *v4; // ebx
  float v5; // ecx
  __m128 *v6; // edx
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  __m128 v13; // xmm0
  __m128 *v14; // eax
  __m128 v15; // xmm2
  int v16; // edx
  __m128 *result; // eax
  float v18; // [esp+0h] [ebp-34h]
  __m128 v19; // [esp+4h] [ebp-30h]
  __m128 v20[2]; // [esp+14h] [ebp-20h] BYREF

  v4 = (float *)a1[4].m128_i32[0];
  v5 = *v4;
  v6 = (__m128 *)a1->m128_i32[0];
  v18 = a2 * v4[2];
  sub_8DD340(v6 + 4, v5, v18, a3);
  sub_8DD340((__m128 *)(a1->m128_i32[1] + 0x40), *v4, v18, a3 + 4);
  sub_8B1FF0(a3 + 8, a3, a3 + 4);
  sub_88FE00(a3 + 0xC, a3 + 8, a1 + 2);
  sub_88FCC0(a3 + 0xD, a3 + 8, a1 + 3);
  a3[0xC].m128_f32[3] = -a1[1].m128_f32[1];
  v7 = a3[2];
  v8 = a3[1];
  v9 = _mm_shuffle_ps(*a3, v8, 0x44);
  v10 = _mm_shuffle_ps(*a3, v8, 0xEE);
  v11 = _mm_shuffle_ps(v7, v7, 0x44);
  v12 = _mm_shuffle_ps(v9, v11, 0x88);
  v13 = _mm_shuffle_ps(v9, v11, 0xDD);
  LODWORD(v18) = a1->m128_i32[0] + 0x80;
  v14 = a1 + 6;
  v15 = _mm_shuffle_ps(v10, _mm_shuffle_ps(v7, v7, 0xEE), 0x88);
  v16 = 2;
  do
  {
    *(__m128 *)((char *)v14 + (char *)v20 - (char *)&a1[6]) = _mm_add_ps(
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v12, _mm_shuffle_ps(*v14, *v14, 0)),
                                                                  _mm_mul_ps(v13, _mm_shuffle_ps(*v14, *v14, 0x55))),
                                                                _mm_mul_ps(v15, _mm_shuffle_ps(*v14, *v14, 0xAA)));
    ++v14;
    --v16;
  }
  while ( v16 );
  a3[0xF] = _mm_sub_ps(v20[1], v20[0]);
  sub_88FCC0(a3 + 0x10, a3 + 8, (__m128 *)(a1->m128_i32[1] + 0x80));
  v19 = _mm_sub_ps(a3[0x10], *(__m128 *)LODWORD(v18));
  result = sub_88FD90(a3 + 0xE, a3, a1 + 5);
  a3[0xE] = _mm_sub_ps(
              a3[0xE],
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xC9), _mm_shuffle_ps(v20[0], v20[0], 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xD2), _mm_shuffle_ps(v20[0], v20[0], 0xC9))));
  return result;
}
