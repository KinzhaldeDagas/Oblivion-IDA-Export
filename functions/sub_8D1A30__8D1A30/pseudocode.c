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

  v5 = *a2;
  v6 = _mm_sub_ps(*a3, *a1);
  v7 = _mm_mul_ps(*a2, *a4);
  v27 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
  v8 = _mm_mul_ps(*a2, v6);
  v9 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
  v10 = _mm_mul_ps(*a4, v6);
  v32 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  v11 = _mm_mul_ps(v5, v5);
  v6.m128_f32[0] = _mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0];
  v12 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0];
  v13 = _mm_mul_ps(*a4, *a4);
  v28 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  v29 = v12 + v6.m128_f32[0];
  v31 = v28 * (float)(v12 + v6.m128_f32[0]);
  v30 = v27 * v27;
  v22 = fabs(v31 - v30);
  v14 = v28 * v9 - v32 * v27;
  v25 = v14;
  if ( v22 * v22 <= v14 * v22 )
    goto LABEL_6;
  if ( v25 <= (double)*(float *)&SrcStr )
  {
    v15 = *(float *)&SrcStr;
    v16 = 2;
    goto LABEL_7;
  }
  if ( (v30 + v31) * flt_A99EFC >= v22 )
  {
LABEL_6:
    v15 = fConstant_1;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    v15 = v25 / v22;
  }
LABEL_7:
  v17 = v27 * v15 - v32;
  v23 = v17;
  if ( v17 < v28 )
  {
    if ( v23 > (double)*(float *)&SrcStr )
    {
      v24 = v23 / v28;
      goto LABEL_17;
    }
    v24 = 0.0;
    v16 = 8;
  }
  else
  {
    v24 = 1.0;
    v16 = 4;
  }
  v18 = v27 * v24 + v9;
  v26 = v18;
  if ( v18 > *(float *)&SrcStr )
  {
    if ( v26 < (double)v29 )
    {
      v15 = v26 / v29;
    }
    else
    {
      v15 = fConstant_1;
      v16 |= 1u;
    }
  }
  else
  {
    v15 = *(float *)&SrcStr;
    v16 |= 2u;
  }
LABEL_17:
  *(float *)&v33 = v15;
  v19 = _mm_add_ps(*a1, _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), v5));
  *a5 = v19;
  a5[1] = _mm_sub_ps(
            v19,
            _mm_add_ps(*a3, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v24), (__m128)LODWORD(v24), 0), *a4)));
  v20 = _mm_mul_ps(a5[1], a5[1]);
  a5[2].m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  return v16;
}
