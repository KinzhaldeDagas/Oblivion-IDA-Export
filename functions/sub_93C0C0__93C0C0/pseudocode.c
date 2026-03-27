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

  v3 = a1[1];
  v4 = a1[2];
  v5 = _mm_sub_ps(v3, *a1);
  v6 = _mm_sub_ps(*a1, v4);
  v7 = _mm_sub_ps(a1[3], *a1);
  v8 = _mm_sub_ps(a1[3], v3);
  v9 = _mm_sub_ps(a1[3], v4);
  v10 = _mm_sub_ps(v4, v3);
  v11 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9));
  v12 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2));
  v13 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
  v14 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v8, v8, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v8, v8, 0xC9)));
  v15 = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), _mm_sub_ps(*a2, a1[3]));
  v32 = v14;
  v16 = _mm_shuffle_ps(v13, v13, 0x44);
  v33 = _mm_sub_ps(v12, v11);
  v34 = v13;
  v17 = _mm_shuffle_ps(v14, v33, 0x44);
  v18 = _mm_mul_ps(
          _mm_shuffle_ps(_mm_shuffle_ps(v14, v33, 0xEE), _mm_shuffle_ps(v13, v13, 0xEE), 0x88),
          _mm_shuffle_ps(v15, v15, 0xAA));
  v19 = (__m128)xmmword_A372D0;
  v30 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v17, v16, 0x88), _mm_shuffle_ps(v15, v15, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v17, v16, 0xDD), _mm_shuffle_ps(v15, v15, 0x55))),
          v18);
  v31 = _mm_mul_ps(v30, _mm_and_ps(v30, v19));
  v20 = &v32;
  for ( i = 0; i < 3; ++i )
  {
    v22 = _mm_mul_ps(*v20, *v20);
    v27 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
    if ( v27 == *(float *)&SrcStr )
      v29.m128_i32[i] = 0x7F7FFFFF;
    else
      v29.m128_f32[i] = v31.m128_f32[i] / v27;
    ++v20;
  }
  v23 = v29.m128_f32[1];
  v24 = 1;
  if ( v29.m128_f32[0] > (double)v29.m128_f32[1] )
  {
    v25 = v29.m128_f32[0];
    v29.m128_f32[0] = v29.m128_f32[1];
    v23 = v25;
    v24 = 0;
  }
  if ( v23 <= v29.m128_f32[2] )
  {
    v24 = 2;
  }
  else
  {
    v28 = v23;
    v23 = v29.m128_f32[2];
    v29.m128_f32[2] = v28;
    if ( v29.m128_f32[0] > v23 )
      v23 = v29.m128_f32[0];
  }
  if ( v29.m128_f32[2] < (double)flt_A97450 )
    return 0xFFFFFFFF;
  if ( v29.m128_f32[2] > flt_A56E28 * v23 )
    return v24;
  v29 = v30;
  return sub_93AE50(a1, a2, v29.m128_f32);
}
