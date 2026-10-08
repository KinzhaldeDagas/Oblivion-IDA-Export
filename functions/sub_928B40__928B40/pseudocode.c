double __thiscall sub_928B40(_DWORD *this, float a2, __m128 *a3, __m128 *a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // edx
  __m128 v8; // xmm3
  int v9; // ecx
  int v10; // ebx
  __m128 *v11; // edi
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  double v15; // st7
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm6
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  float v21; // xmm3_4
  float v22; // xmm7_4
  __m128 v23; // xmm4
  __m128 v24; // xmm0
  __m128 v25; // xmm5
  __m128 v26; // xmm0
  float v27; // xmm3_4
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  double result; // st7
  float v32; // [esp+0h] [ebp-5Ch]
  float v33; // [esp+0h] [ebp-5Ch]
  __m128 *v34; // [esp+18h] [ebp-44h]
  int v35; // [esp+18h] [ebp-44h]
  float v36; // [esp+18h] [ebp-44h]
  float v38; // [esp+24h] [ebp-38h]
  int v39; // [esp+2Ch] [ebp-30h]
  unsigned int v40; // [esp+38h] [ebp-24h]
  float v41; // [esp+3Ch] [ebp-20h]

  if ( a2 < (double)*(float *)&SrcStr ) /*0x928b60*/
    a2 = 0.0; /*0x928b62*/
  v5 = sub_8ECB30(LODWORD(a2)); /*0x928b72*/
  v6 = *(this + 9); /*0x928b74*/
  v7 = v5 + 1; /*0x928b77*/
  if ( v5 + 1 >= v6 ) /*0x928b87*/
  {
    v7 = v6 - 1; /*0x928b89*/
    v5 = v6 - 2; /*0x928b8c*/
  }
  v8 = *a3; /*0x928b99*/
  v39 = *(this + 8); /*0x928ba0*/
  v34 = (__m128 *)(0x10 * v5 + v39); /*0x928bad*/
  v9 = 0x10 * v7; /*0x928bb7*/
  v10 = v7 + 1; /*0x928bba*/
  v11 = v34; /*0x928bbd*/
  while ( 1 ) /*0x928c36*/
  {
    while ( 1 ) /*0x928bcf*/
    {
      v12 = _mm_sub_ps(*(__m128 *)(v9 + v39), *v11); /*0x928bcf*/
      v13 = _mm_mul_ps(v12, _mm_sub_ps(v8, *v34)); /*0x928bde*/
      v38 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x928bfb*/
          + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
      v14 = _mm_mul_ps(v12, v12); /*0x928c06*/
      v15 = v38 /*0x928c27*/
          / (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]));
      if ( v15 >= *(float *)&SrcStr ) /*0x928c36*/
        break; /*0x928c36*/
      if ( !v5 ) /*0x928c3a*/
        goto LABEL_16; /*0x928c3a*/
      --v5; /*0x928c49*/
      v11 += 0xFFFFFFFF; /*0x928c4a*/
      --v7; /*0x928c4d*/
      --v10; /*0x928c4e*/
      v34 += 0xFFFFFFFF; /*0x928c4f*/
      v9 -= 0x10; /*0x928c53*/
    }
    v16 = _mm_sub_ps(v8, *(__m128 *)(v9 + v39)); /*0x928c66*/
    v17 = _mm_mul_ps(v12, v16); /*0x928c6c*/
    if ( (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x928ca6*/
               + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])) <= (double)*(float *)&SrcStr
      || v10 >= v6 )
    {
      break; /*0x928ca6*/
    }
    v18 = _mm_sub_ps(*(__m128 *)(v9 + *(this + 8) + 0x10), *(__m128 *)(v9 + *(this + 8))); /*0x928cbe*/
    v19 = _mm_mul_ps(v18, v16); /*0x928cc4*/
    if ( (float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x928cf9*/
               + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0])) <= (double)*(float *)&SrcStr )
    {
      v20 = _mm_mul_ps(v12, v12); /*0x928d17*/
      v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x928d2f*/
                      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
      v21 = fsqrt(v20.m128_f32[0]); /*0x928d38*/
      v22 = 3.0 - (float)((float)(v20.m128_f32[0] * (float)(1.0 / v21)) * (float)(1.0 / v21)); /*0x928d60*/
      v23 = (__m128)0x3F000000u; /*0x928d6c*/
      v24 = (__m128)0x3F000000u; /*0x928d72*/
      v24.m128_f32[0] = 0.5 * (float)(1.0 / v21); /*0x928d75*/
      v25 = v24; /*0x928d79*/
      v26 = _mm_mul_ps(v18, v18); /*0x928d7f*/
      v25.m128_f32[0] = v25.m128_f32[0] * v22; /*0x928d8d*/
      v26.m128_f32[0] = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0] /*0x928d9b*/
                      + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
      v41 = 1.0 / fsqrt(v26.m128_f32[0]); /*0x928da8*/
      v27 = 3.0 - (float)((float)(v26.m128_f32[0] * v41) * v41); /*0x928dbb*/
      v28 = _mm_mul_ps(v16, _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v12)); /*0x928dcf*/
      v23.m128_f32[0] = (float)(0.5 * v41) * v27; /*0x928de1*/
      v29 = _mm_mul_ps(v16, _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v18)); /*0x928df8*/
      v35 = v5; /*0x928e2f*/
      if ( -(float)(_mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0] /*0x928e38*/
                  + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0])) > (float)(_mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0])) )
      {
        v15 = flt_A65520; /*0x928e3a*/
        goto LABEL_17; /*0x928e40*/
      }
      v15 = flt_A34BA0; /*0x928e42*/
      ++v5; /*0x928e48*/
      ++v7; /*0x928e49*/
      break; /*0x928e49*/
    }
    ++v5; /*0x928d02*/
    ++v11; /*0x928d03*/
    ++v7; /*0x928d06*/
    ++v10; /*0x928d07*/
    ++v34; /*0x928d08*/
    v9 += 0x10; /*0x928d0c*/
  }
LABEL_16:
  v35 = v5; /*0x928e4a*/
LABEL_17:
  v36 = (double)v35 + v15; /*0x928e4e*/
  *(float *)&v40 = v15; /*0x928e73*/
  v30 = _mm_shuffle_ps((__m128)v40, (__m128)v40, 0); /*0x928e7d*/
  *a4 = _mm_add_ps( /*0x928e94*/
          _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v30), *(__m128 *)(0x10 * v5 + *(this + 8))),
          _mm_mul_ps(v30, *(__m128 *)(0x10 * v7 + *(this + 8))));
  if ( !*((_BYTE *)this + 0xC) ) /*0x928e97*/
    return v36; /*0x928e97*/
  result = (double)(*(this + 9) - 1); /*0x928ea6*/
  if ( v36 < (double)flt_A41304 ) /*0x928eb9*/
  {
    v32 = result - (fConstant_1 - v36); /*0x928ecf*/
    (*(void (__stdcall **)(_DWORD, __m128 *, __m128 *))(*this + 0xC))(LODWORD(v32), a3, a4); /*0x928ed4*/
    return result; /*0x928edd*/
  }
  if ( result - flt_A41304 >= v36 ) /*0x928ef1*/
    return v36; /*0x928f16*/
  result = fConstant_1 - (result - v36); /*0x928efd*/
  v33 = result; /*0x928f05*/
  (*(void (__stdcall **)(_DWORD, __m128 *, __m128 *))(*this + 0xC))(LODWORD(v33), a3, a4); /*0x928f08*/
  return result; /*0x928eda*/
}
