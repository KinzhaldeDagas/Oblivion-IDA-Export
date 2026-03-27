double __cdecl sub_92D8F0(int a1, float *a2, __m128 *a3, float *a4, float *a5)
{
  __m128 v5; // xmm5
  __m128 v6; // xmm0
  double result; // st7
  float v8; // xmm1_4
  float v9; // xmm2_4
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v12; // xmm4
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  float v16; // xmm5_4
  float v17; // xmm6_4
  __m128 v18; // xmm0
  long double v19; // st7
  long double v20; // st7
  double v21; // st6
  double v22; // st6
  float v23; // [esp+0h] [ebp-20h]
  float v24; // [esp+4h] [ebp-1Ch]
  float v25; // [esp+8h] [ebp-18h]
  float v26; // [esp+Ch] [ebp-14h]
  __m128 v27; // [esp+10h] [ebp-10h]
  float v28; // [esp+10h] [ebp-10h]
  __m128 v29; // [esp+10h] [ebp-10h]

  v27.m128_f32[0] = *a2 - *a4;
  v27.m128_f32[1] = a2[1] - a4[1];
  v27.m128_f32[2] = a2[2] - a4[2];
  v27.m128_f32[3] = a2[3] - a4[3];
  v5 = v27;
  v6 = _mm_mul_ps(v27, v27);
  if ( (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0])) < (double)*(float *)(a1 + 8) )
    return *(float *)&SrcStr;
  v8 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0];
  v28 = 1.0 / fsqrt(v9 + v8);
  v10 = (__m128)0x3F000000u;
  v11 = (__m128)0x3F000000u;
  v11.m128_f32[0] = (float)(0.5 * v28) * (float)(3.0 - (float)((float)((float)(v9 + v8) * v28) * v28));
  v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v5);
  v13 = _mm_mul_ps(*a3, v12);
  v24 = -(float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]));
  v29.m128_f32[0] = *a4 - *a5;
  v29.m128_f32[1] = a4[1] - a5[1];
  v29.m128_f32[2] = a4[2] - a5[2];
  v29.m128_f32[3] = a4[3] - a5[3];
  v14 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xC9), _mm_shuffle_ps(*a3, *a3, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), _mm_shuffle_ps(*a3, *a3, 0xC9)));
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0];
  v17 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0];
  v29.m128_f32[0] = 1.0 / fsqrt(v17 + v16);
  v10.m128_f32[0] = (float)(0.5 * v29.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v17 + v16) * v29.m128_f32[0]) * v29.m128_f32[0]));
  v18 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v14), v12);
  v23 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  if ( v23 * v23 + v24 * v24 < *(float *)(a1 + 8) )
    return flt_AA1C50;
  v19 = fabs(v24);
  v26 = *(float *)(a1 + 0x30);
  v25 = v19;
  if ( v19 >= flt_A372CC || fabs(v23) >= flt_AA1C44 )
  {
    if ( fabs(v23) >= v25 )
    {
      if ( v23 >= (double)flt_AA1C48 || v25 >= (double)flt_A372CC )
      {
        if ( v23 >= (double)flt_AA1C4C )
          v22 = *(float *)&SrcStr;
        else
          v22 = flt_A46B10;
        v20 = v24 / v23 + v22;
      }
      else
      {
        v20 = flt_A46B10;
      }
      if ( fabs(v20) < v26 )
        goto LABEL_20;
      if ( v23 > (double)flt_A372CC && v25 < (double)flt_AA1C44 )
      {
        v21 = flt_A58E1C;
        goto LABEL_25;
      }
    }
    else
    {
      v20 = fConstant_2 - v23 / v24;
      if ( v24 < (double)flt_AA1C4C )
      {
        v21 = flt_A46B10;
LABEL_25:
        result = v20 + v21;
        goto LABEL_26;
      }
    }
    v21 = *(float *)&SrcStr;
    goto LABEL_25;
  }
  if ( v23 >= (double)*(float *)&SrcStr )
  {
LABEL_20:
    result = *(float *)&SrcStr;
    goto LABEL_26;
  }
  result = flt_A46B10;
LABEL_26:
  if ( result < -v26 )
    result = result + flt_A58E1C;
  if ( result > flt_A58E1C )
    return *(float *)&SrcStr;
  return result;
}
