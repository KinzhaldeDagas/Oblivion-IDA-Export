signed int __usercall sub_93C0C0@<eax>(__m128 *a1@<eax>, __m128 *a2@<ebx>, unsigned int a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm7
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm5
  __m128 v10; // xmm0
  __m128 v11; // xmm6
  __m128 v12; // xmm5
  __m128 v13; // xmm1
  __m128 v14; // xmm4
  __m128 v15; // xmm0
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm4
  __m128 v19; // xmm1
  __m128 *v20; // edx
  int i; // ecx
  __m128 v22; // xmm0
  double v23; // st7
  int v24; // ecx
  float v25; // ecx
  float v27; // [esp+Ch] [ebp-64h]
  float v28; // [esp+Ch] [ebp-64h]
  __m128 v29; // [esp+10h] [ebp-60h] BYREF
  __m128 v30; // [esp+20h] [ebp-50h]
  __m128 v31; // [esp+30h] [ebp-40h]
  __m128 v32; // [esp+40h] [ebp-30h] BYREF
  __m128 v33; // [esp+50h] [ebp-20h]
  __m128 v34; // [esp+60h] [ebp-10h]

  v3 = a1[1]; /*0x93c0cc*/
  v4 = a1[2]; /*0x93c0d7*/
  v5 = _mm_sub_ps(v3, *a1); /*0x93c0de*/
  v6 = _mm_sub_ps(*a1, v4); /*0x93c0e4*/
  v7 = _mm_sub_ps(a1[3], *a1); /*0x93c0ea*/
  v8 = _mm_sub_ps(a1[3], v3); /*0x93c0f0*/
  v9 = _mm_sub_ps(a1[3], v4); /*0x93c0f3*/
  v10 = _mm_sub_ps(v4, v3); /*0x93c0f9*/
  v11 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9)); /*0x93c12f*/
  v12 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)); /*0x93c140*/
  v13 = _mm_sub_ps( /*0x93c175*/
          _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
  v14 = _mm_sub_ps( /*0x93c17b*/
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v8, v8, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v8, v8, 0xC9)));
  v15 = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), _mm_sub_ps(*a2, a1[3])); /*0x93c195*/
  v32 = v14; /*0x93c19b*/
  v16 = _mm_shuffle_ps(v13, v13, 0x44); /*0x93c1aa*/
  v33 = _mm_sub_ps(v12, v11); /*0x93c1b2*/
  v34 = v13; /*0x93c1b7*/
  v17 = _mm_shuffle_ps(v14, v33, 0x44); /*0x93c1bc*/
  v18 = _mm_mul_ps( /*0x93c1d1*/
          _mm_shuffle_ps(_mm_shuffle_ps(v14, v33, 0xEE), _mm_shuffle_ps(v13, v13, 0xEE), 0x88),
          _mm_shuffle_ps(v15, v15, 0xAA));
  v19 = (__m128)xmmword_A372D0; /*0x93c1ed*/
  v30 = _mm_add_ps( /*0x93c200*/
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v17, v16, 0x88), _mm_shuffle_ps(v15, v15, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v17, v16, 0xDD), _mm_shuffle_ps(v15, v15, 0x55))),
          v18);
  v31 = _mm_mul_ps(v30, _mm_and_ps(v30, v19)); /*0x93c20b*/
  v20 = &v32; /*0x93c210*/
  for ( i = 0; i < 3; ++i ) /*0x93c214*/
  {
    v22 = _mm_mul_ps(*v20, *v20); /*0x93c229*/
    v27 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0] /*0x93c246*/
        + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
    if ( v27 == *(float *)&SrcStr ) /*0x93c255*/
      v29.m128_i32[i] = 0x7F7FFFFF; /*0x93c265*/
    else
      v29.m128_f32[i] = v31.m128_f32[i] / v27; /*0x93c25f*/
    ++v20; /*0x93c270*/
  }
  v23 = v29.m128_f32[1]; /*0x93c278*/
  v24 = 1; /*0x93c27c*/
  if ( v29.m128_f32[0] > (double)v29.m128_f32[1] ) /*0x93c28c*/
  {
    v25 = v29.m128_f32[0]; /*0x93c28e*/
    v29.m128_f32[0] = v29.m128_f32[1]; /*0x93c292*/
    v23 = v25; /*0x93c29a*/
    v24 = 0; /*0x93c29e*/
  }
  if ( v23 <= v29.m128_f32[2] ) /*0x93c2a9*/
  {
    v24 = 2; /*0x93c2d0*/
  }
  else
  {
    v28 = v23; /*0x93c2ab*/
    v23 = v29.m128_f32[2]; /*0x93c2b3*/
    v29.m128_f32[2] = v28; /*0x93c2b7*/
    if ( v29.m128_f32[0] > v23 ) /*0x93c2c6*/
      v23 = v29.m128_f32[0]; /*0x93c2ca*/
  }
  if ( v29.m128_f32[2] < (double)flt_A97450 ) /*0x93c2e4*/
    return 0xFFFFFFFF; /*0x93c2e8*/
  if ( v29.m128_f32[2] > flt_A56E28 * v23 ) /*0x93c307*/
    return v24; /*0x93c309*/
  v29 = v30; /*0x93c324*/
  return sub_93AE50(a1, a2, v29.m128_f32); /*0x93c2ed*/
}
