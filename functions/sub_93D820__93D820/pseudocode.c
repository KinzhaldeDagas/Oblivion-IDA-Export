double __usercall sub_93D820@<st0>(
        __m128 *a1@<eax>,
        __m128 *a2@<edx>,
        __m128 *a3@<ecx>,
        __m128 *a4,
        __m128 *a5,
        __m128 *a6,
        float a7)
{
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  double v12; // st7
  unsigned __int8 v13; // c0
  unsigned __int8 v14; // c3
  double v15; // st7
  double v16; // st7
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  double v21; // st6
  char v22; // c0
  unsigned int v24; // [esp+4h] [ebp-8h]
  float v25; // [esp+8h] [ebp-4h]
  unsigned int v26; // [esp+8h] [ebp-4h]

  v7 = _mm_mul_ps(_mm_xor_ps(*a6, (__m128)xmmword_A965C0), *a5);
  v25 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
  *(float *)&v24 = (a7 - a1[4].m128_f32[3]) * a1[5].m128_f32[3];
  v8 = _mm_shuffle_ps((__m128)v24, (__m128)v24, 0);
  v9 = _mm_sub_ps(*a4, _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v8), a1[4]), _mm_mul_ps(v8, a1[5])));
  v10 = _mm_mul_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9))),
          *a5);
  v12 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]));
  if ( v13 | v14 )
    v15 = v12 * flt_A57414;
  else
    v15 = v12 * flt_AA1DD4;
  v16 = v15 + v25;
  *(float *)&v26 = (a7 - a2[4].m128_f32[3]) * a2[5].m128_f32[3];
  v17 = _mm_shuffle_ps((__m128)v26, (__m128)v26, 0);
  v18 = _mm_sub_ps(*a4, _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v17), a2[4]), _mm_mul_ps(v17, a2[5])));
  v19 = _mm_mul_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(a3[1], a3[1], 0xC9), _mm_shuffle_ps(v18, v18, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(a3[1], a3[1], 0xD2), _mm_shuffle_ps(v18, v18, 0xC9))),
          *a5);
  v21 = (float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]));
  if ( v22 )
    return v16 - v21 * flt_AA1DD4;
  else
    return v16 - v21 * flt_A57414;
}
