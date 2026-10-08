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

  v27.m128_f32[0] = *a2 - *a4; /*0x92d906*/
  v27.m128_f32[1] = a2[1] - a4[1]; /*0x92d910*/
  v27.m128_f32[2] = a2[2] - a4[2]; /*0x92d91a*/
  v27.m128_f32[3] = a2[3] - a4[3]; /*0x92d928*/
  v5 = v27; /*0x92d92c*/
  v6 = _mm_mul_ps(v27, v27); /*0x92d934*/
  if ( (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x92d95d*/
             + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0])) < (double)*(float *)(a1 + 8) )
    return *(float *)&SrcStr; /*0x92d968*/
  v8 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]; /*0x92d973*/
  v9 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]; /*0x92d97a*/
  v28 = 1.0 / fsqrt(v9 + v8); /*0x92d98e*/
  v10 = (__m128)0x3F000000u; /*0x92d9b7*/
  v11 = (__m128)0x3F000000u; /*0x92d9c4*/
  v11.m128_f32[0] = (float)(0.5 * v28) * (float)(3.0 - (float)((float)((float)(v9 + v8) * v28) * v28)); /*0x92d9cb*/
  v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v5); /*0x92d9dc*/
  v13 = _mm_mul_ps(*a3, v12); /*0x92d9e2*/
  v24 = -(float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x92da0c*/
               + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]));
  v29.m128_f32[0] = *a4 - *a5; /*0x92da1e*/
  v29.m128_f32[1] = a4[1] - a5[1]; /*0x92da28*/
  v29.m128_f32[2] = a4[2] - a5[2]; /*0x92da32*/
  v29.m128_f32[3] = a4[3] - a5[3]; /*0x92da3c*/
  v14 = _mm_sub_ps( /*0x92da60*/
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xC9), _mm_shuffle_ps(*a3, *a3, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), _mm_shuffle_ps(*a3, *a3, 0xC9)));
  v15 = _mm_mul_ps(v14, v14); /*0x92da66*/
  v16 = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]; /*0x92da70*/
  v17 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]; /*0x92da77*/
  v29.m128_f32[0] = 1.0 / fsqrt(v17 + v16); /*0x92da8b*/
  v10.m128_f32[0] = (float)(0.5 * v29.m128_f32[0]) /*0x92daa6*/
                  * (float)(3.0 - (float)((float)((float)(v17 + v16) * v29.m128_f32[0]) * v29.m128_f32[0]));
  v18 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v14), v12); /*0x92dab4*/
  v23 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x92dad0*/
      + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  if ( v23 * v23 + v24 * v24 < *(float *)(a1 + 8) ) /*0x92daec*/
    return flt_AA1C50; /*0x92daf7*/
  v19 = fabs(v24); /*0x92daff*/
  v26 = *(float *)(a1 + 0x30); /*0x92db01*/
  v25 = v19; /*0x92db05*/
  if ( v19 >= flt_A372CC || fabs(v23) >= flt_AA1C44 ) /*0x92db26*/
  {
    if ( fabs(v23) >= v25 ) /*0x92db55*/
    {
      if ( v23 >= (double)flt_AA1C48 || v25 >= (double)flt_A372CC ) /*0x92dbaa*/
      {
        if ( v23 >= (double)flt_AA1C4C ) /*0x92dbc4*/
          v22 = *(float *)&SrcStr; /*0x92dbce*/
        else
          v22 = flt_A46B10; /*0x92dbc6*/
        v20 = v24 / v23 + v22; /*0x92dbd4*/
      }
      else
      {
        v20 = flt_A46B10; /*0x92dbae*/
      }
      if ( fabs(v20) < v26 ) /*0x92dbe3*/
        goto LABEL_20; /*0x92dbe3*/
      if ( v23 > (double)flt_A372CC && v25 < (double)flt_AA1C44 ) /*0x92dc0e*/
      {
        v21 = flt_A58E1C; /*0x92dc10*/
        goto LABEL_25; /*0x92dc16*/
      }
    }
    else
    {
      v20 = fConstant_2 - v23 / v24; /*0x92db5e*/
      if ( v24 < (double)flt_AA1C4C ) /*0x92db73*/
      {
        v21 = flt_A46B10; /*0x92db79*/
LABEL_25:
        result = v20 + v21; /*0x92dc1e*/
        goto LABEL_26; /*0x92dc1e*/
      }
    }
    v21 = *(float *)&SrcStr; /*0x92dc18*/
    goto LABEL_25; /*0x92dc18*/
  }
  if ( v23 >= (double)*(float *)&SrcStr ) /*0x92db36*/
  {
LABEL_20:
    result = *(float *)&SrcStr; /*0x92dbe7*/
    goto LABEL_26; /*0x92dbed*/
  }
  result = flt_A46B10; /*0x92db3c*/
LABEL_26:
  if ( result < -v26 ) /*0x92dc2f*/
    result = result + flt_A58E1C; /*0x92dc31*/
  if ( result > flt_A58E1C ) /*0x92dc42*/
    return *(float *)&SrcStr; /*0x92dc46*/
  return result; /*0x92d965*/
}
