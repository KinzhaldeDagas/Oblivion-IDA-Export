__m128 __thiscall sub_94DB40(__m128 *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  long double v6; // st7
  __m128 *v7; // edi
  long double v8; // st6
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  double v12; // st7
  float v13; // edx
  __m128 v14; // xmm0
  float v15; // xmm1_4
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm0
  int v23; // edx
  __m128 result; // xmm0
  int v25; // ecx
  __m128 v26; // xmm1
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  float v29; // [esp+0h] [ebp-64h]
  float v30; // [esp+18h] [ebp-4Ch]
  float v31; // [esp+18h] [ebp-4Ch]
  float v32; // [esp+1Ch] [ebp-48h]
  unsigned int v33; // [esp+1Ch] [ebp-48h]
  unsigned int v34; // [esp+1Ch] [ebp-48h]
  unsigned int v35; // [esp+1Ch] [ebp-48h]
  unsigned int v36; // [esp+20h] [ebp-44h]
  float v37; // [esp+20h] [ebp-44h]
  unsigned int v38; // [esp+20h] [ebp-44h]
  unsigned int v39; // [esp+20h] [ebp-44h]
  __m128 v40; // [esp+24h] [ebp-40h] BYREF
  __m128 v41; // [esp+34h] [ebp-30h] BYREF
  __m128 v42; // [esp+44h] [ebp-20h] BYREF
  __m128 v43; // [esp+54h] [ebp-10h]

  v3 = *((_DWORD *)this + 0x20); /*0x94db54*/
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x94db5a*/
  if ( v4 < v3 ) /*0x94db61*/
  {
    v5 = 2 * v4; /*0x94db63*/
    if ( v3 >= v5 ) /*0x94db67*/
      v5 = *((_DWORD *)this + 0x20); /*0x94db69*/
    sub_8A6E40((const void **)a2, v5, 0x10); /*0x94db6f*/
  }
  *(_DWORD *)(a2 + 4) = v3; /*0x94db77*/
  v6 = fabs(*((float *)this + 0x1C)); /*0x94db7d*/
  v7 = this + 7; /*0x94db7f*/
  v8 = fabs(*((float *)this + 0x1D)); /*0x94db85*/
  v9 = 0; /*0x94db87*/
  v10 = 1; /*0x94db90*/
  v32 = fabs(*((float *)this + 0x1E)); /*0x94db9f*/
  if ( v8 < v6 ) /*0x94dbaa*/
  {
    v10 = 0; /*0x94dbae*/
    v30 = v8; /*0x94db89*/
    v6 = v30; /*0x94dbb0*/
    v9 = 1; /*0x94dbb4*/
  }
  if ( v32 >= v6 ) /*0x94dbc6*/
  {
    v11 = 2; /*0x94dbd1*/
  }
  else
  {
    v11 = v9; /*0x94dbc8*/
    v9 = 2; /*0x94dbca*/
  }
  v40.m128_i32[v9] = 0; /*0x94dbd5*/
  v40.m128_i32[3] = 0; /*0x94dbdd*/
  v40.m128_i32[v10] = v7->m128_i32[v11]; /*0x94dbe8*/
  v12 = v7->m128_f32[v10]; /*0x94dbec*/
  v13 = *((float *)this + 0x21); /*0x94dbef*/
  v40.m128_f32[v11] = -v12; /*0x94dbf7*/
  v14 = _mm_mul_ps(v40, v40); /*0x94dc03*/
  v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x94dc0d*/
  v16 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x94dc14*/
  v17 = v16; /*0x94dc18*/
  v17.m128_f32[0] = v16.m128_f32[0] + v15; /*0x94dc1b*/
  v43 = v17; /*0x94dc1f*/
  v43.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15); /*0x94dc28*/
  v18 = (__m128)0x3F000000u; /*0x94dc55*/
  v18.m128_f32[0] = (float)(0.5 * v43.m128_f32[0]) /*0x94dc5f*/
                  * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v43.m128_f32[0]) * v43.m128_f32[0]));
  v40 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v40); /*0x94dc77*/
  hkQuaternion_SetAxisAngleScaled(&v41, &v40, v13); /*0x94dc7c*/
  v29 = flt_A46B14 / (double)*((int *)this + 0x20); /*0x94dc92*/
  hkQuaternion_SetAxisAngleScaled(&v42, this + 7, v29); /*0x94dc96*/
  v19 = *v7; /*0x94dca8*/
  v43 = v41; /*0x94dcab*/
  v43.m128_i32[3] = 0; /*0x94dcb2*/
  v20 = _mm_mul_ps(v43, v19); /*0x94dcc8*/
  *(float *)&v36 = v41.m128_f32[3] * v41.m128_f32[3] + v41.m128_f32[3] * v41.m128_f32[3] - fConstant_1; /*0x94dcd2*/
  v21 = (__m128)v36; /*0x94dcd6*/
  v37 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x94dcef*/
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  *(float *)&v38 = v37 + v37; /*0x94dd03*/
  v22 = (__m128)v38; /*0x94dd07*/
  *(float *)&v39 = v41.m128_f32[3] + v41.m128_f32[3]; /*0x94dd1a*/
  v23 = 0; /*0x94dd59*/
  result = _mm_add_ps( /*0x94dd63*/
             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v19), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v43)),
             _mm_mul_ps(
               _mm_shuffle_ps((__m128)v39, (__m128)v39, 0),
               _mm_sub_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(v19, v19, 0xD2)),
                 _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(v19, v19, 0xC9)))));
  if ( *((int *)this + 0x20) > 0 ) /*0x94dd66*/
  {
    v25 = 0; /*0x94dd6c*/
    do /*0x94de6f*/
    {
      *(__m128 *)(*(_DWORD *)a2 + v25) = *(this + 6); /*0x94dd76*/
      *(__m128 *)(v25 + *(_DWORD *)a2) = _mm_add_ps( /*0x94dd9f*/
                                           *(__m128 *)(*(_DWORD *)a2 + v25),
                                           _mm_mul_ps(
                                             _mm_shuffle_ps(
                                               (__m128)*((unsigned int *)this + 0x22),
                                               (__m128)*((unsigned int *)this + 0x22),
                                               0),
                                             result));
      v43 = v42; /*0x94ddaf*/
      v43.m128_i32[3] = 0; /*0x94ddb4*/
      v26 = _mm_mul_ps(v43, result); /*0x94ddc6*/
      *(float *)&v33 = v42.m128_f32[3] * v42.m128_f32[3] + v42.m128_f32[3] * v42.m128_f32[3] - fConstant_1; /*0x94dddd*/
      v27 = (__m128)v33; /*0x94dde1*/
      v31 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0] /*0x94ddf3*/
          + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
      *(float *)&v34 = v31 + v31; /*0x94de0a*/
      v28 = (__m128)v34; /*0x94de15*/
      *(float *)&v35 = v42.m128_f32[3] + v42.m128_f32[3]; /*0x94de2b*/
      ++v23; /*0x94de5a*/
      v25 += 0x10; /*0x94de61*/
      result = _mm_add_ps( /*0x94de6c*/
                 _mm_add_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), result),
                   _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v43)),
                 _mm_mul_ps(
                   _mm_shuffle_ps((__m128)v35, (__m128)v35, 0),
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(result, result, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(result, result, 0xC9)))));
    }
    while ( v23 < *((_DWORD *)this + 0x20) ); /*0x94de6f*/
  }
  return result; /*0x94de75*/
}
