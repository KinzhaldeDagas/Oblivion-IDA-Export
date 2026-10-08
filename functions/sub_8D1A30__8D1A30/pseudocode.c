signed int __cdecl sub_8D1A30(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5)
{
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  float v9; // xmm6_4
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  float v12; // xmm5_4
  __m128 v13; // xmm0
  double v14; // st7
  double v15; // st7
  int v16; // ecx
  double v17; // st6
  double v18; // st7
  __m128 v19; // xmm4
  __m128 v20; // xmm0
  float v22; // [esp+Ch] [ebp-24h]
  float v23; // [esp+Ch] [ebp-24h]
  float v24; // [esp+Ch] [ebp-24h]
  float v25; // [esp+10h] [ebp-20h]
  float v26; // [esp+10h] [ebp-20h]
  float v27; // [esp+14h] [ebp-1Ch]
  float v28; // [esp+18h] [ebp-18h]
  float v29; // [esp+1Ch] [ebp-14h]
  float v30; // [esp+20h] [ebp-10h]
  float v31; // [esp+24h] [ebp-Ch]
  float v32; // [esp+28h] [ebp-8h]
  unsigned int v33; // [esp+2Ch] [ebp-4h]

  v5 = *a2; /*0x8d1a3e*/
  v6 = _mm_sub_ps(*a3, *a1); /*0x8d1a4d*/
  v7 = _mm_mul_ps(*a2, *a4); /*0x8d1a59*/
  v27 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]); /*0x8d1a76*/
  v8 = _mm_mul_ps(*a2, v6); /*0x8d1a7d*/
  v9 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]); /*0x8d1a92*/
  v10 = _mm_mul_ps(*a4, v6); /*0x8d1a99*/
  v32 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x8d1ab6*/
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  v11 = _mm_mul_ps(v5, v5); /*0x8d1abd*/
  v6.m128_f32[0] = _mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]; /*0x8d1ac7*/
  v12 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]; /*0x8d1ace*/
  v13 = _mm_mul_ps(*a4, *a4); /*0x8d1ad5*/
  v28 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x8d1afe*/
      + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  v29 = v12 + v6.m128_f32[0]; /*0x8d1b0a*/
  v31 = v28 * (float)(v12 + v6.m128_f32[0]); /*0x8d1b12*/
  v30 = v27 * v27; /*0x8d1b1e*/
  v22 = fabs(v31 - v30); /*0x8d1b2c*/
  v14 = v28 * v9 - v32 * v27; /*0x8d1b40*/
  v25 = v14; /*0x8d1b42*/
  if ( v22 * v22 <= v14 * v22 ) /*0x8d1b59*/
    goto LABEL_6; /*0x8d1b59*/
  if ( v25 <= (double)*(float *)&SrcStr ) /*0x8d1b6a*/
  {
    v15 = *(float *)&SrcStr; /*0x8d1b6c*/
    v16 = 2; /*0x8d1b72*/
    goto LABEL_7; /*0x8d1b77*/
  }
  if ( (v30 + v31) * flt_A99EFC >= v22 ) /*0x8d1b90*/
  {
LABEL_6:
    v15 = fConstant_1; /*0x8d1b9e*/
    v16 = 1; /*0x8d1ba4*/
  }
  else
  {
    v16 = 0; /*0x8d1b96*/
    v15 = v25 / v22; /*0x8d1b98*/
  }
LABEL_7:
  v17 = v27 * v15 - v32; /*0x8d1ba9*/
  v23 = v17; /*0x8d1bb3*/
  if ( v17 < v28 ) /*0x8d1bc0*/
  {
    if ( v23 > (double)*(float *)&SrcStr ) /*0x8d1be0*/
    {
      v24 = v23 / v28; /*0x8d1c45*/
      goto LABEL_17; /*0x8d1c45*/
    }
    v24 = 0.0; /*0x8d1be2*/
    v16 = 8; /*0x8d1bea*/
  }
  else
  {
    v24 = 1.0; /*0x8d1bc2*/
    v16 = 4; /*0x8d1bca*/
  }
  v18 = v27 * v24 + v9; /*0x8d1bf9*/
  v26 = v18; /*0x8d1bfd*/
  if ( v18 > *(float *)&SrcStr ) /*0x8d1c0c*/
  {
    if ( v26 < (double)v29 ) /*0x8d1c26*/
    {
      v15 = v26 / v29; /*0x8d1c37*/
    }
    else
    {
      v15 = fConstant_1; /*0x8d1c28*/
      v16 |= 1u; /*0x8d1c2e*/
    }
  }
  else
  {
    v15 = *(float *)&SrcStr; /*0x8d1c0e*/
    v16 |= 2u; /*0x8d1c14*/
  }
LABEL_17:
  *(float *)&v33 = v15; /*0x8d1c49*/
  v19 = _mm_add_ps(*a1, _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), v5)); /*0x8d1c64*/
  *a5 = v19; /*0x8d1c71*/
  a5[1] = _mm_sub_ps( /*0x8d1c8a*/
            v19,
            _mm_add_ps(*a3, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v24), (__m128)LODWORD(v24), 0), *a4)));
  v20 = _mm_mul_ps(a5[1], a5[1]); /*0x8d1c92*/
  a5[2].m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x8d1cb8*/
                    + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  return v16; /*0x8d1cb7*/
}
