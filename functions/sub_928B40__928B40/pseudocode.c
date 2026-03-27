double __thiscall sub_928B40(_DWORD *this, unsigned int a2, __m128 *a3, __m128 *a4)
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

  if ( *(float *)&a2 < (double)*(float *)&SrcStr )
    *(float *)&a2 = 0.0;
  v5 = sub_8ECB30(a2);
  v6 = *(this + 9);
  v7 = v5 + 1;
  if ( v5 + 1 >= v6 )
  {
    v7 = v6 - 1;
    v5 = v6 - 2;
  }
  v8 = *a3;
  v39 = *(this + 8);
  v34 = (__m128 *)(0x10 * v5 + v39);
  v9 = 0x10 * v7;
  v10 = v7 + 1;
  v11 = v34;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = _mm_sub_ps(*(__m128 *)(v9 + v39), *v11);
      v13 = _mm_mul_ps(v12, _mm_sub_ps(v8, *v34));
      v38 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
      v14 = _mm_mul_ps(v12, v12);
      v15 = v38
          / (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]));
      if ( v15 >= *(float *)&SrcStr )
        break;
      if ( !v5 )
        goto LABEL_16;
      --v5;
      v11 += 0xFFFFFFFF;
      --v7;
      --v10;
      v34 += 0xFFFFFFFF;
      v9 -= 0x10;
    }
    v16 = _mm_sub_ps(v8, *(__m128 *)(v9 + v39));
    v17 = _mm_mul_ps(v12, v16);
    if ( (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])) <= (double)*(float *)&SrcStr
      || v10 >= v6 )
    {
      break;
    }
    v18 = _mm_sub_ps(*(__m128 *)(v9 + *(this + 8) + 0x10), *(__m128 *)(v9 + *(this + 8)));
    v19 = _mm_mul_ps(v18, v16);
    if ( (float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0])) <= (double)*(float *)&SrcStr )
    {
      v20 = _mm_mul_ps(v12, v12);
      v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
      v21 = fsqrt(v20.m128_f32[0]);
      v22 = 3.0 - (float)((float)(v20.m128_f32[0] * (float)(1.0 / v21)) * (float)(1.0 / v21));
      v23 = (__m128)0x3F000000u;
      v24 = (__m128)0x3F000000u;
      v24.m128_f32[0] = 0.5 * (float)(1.0 / v21);
      v25 = v24;
      v26 = _mm_mul_ps(v18, v18);
      v25.m128_f32[0] = v25.m128_f32[0] * v22;
      v26.m128_f32[0] = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
      v41 = 1.0 / fsqrt(v26.m128_f32[0]);
      v27 = 3.0 - (float)((float)(v26.m128_f32[0] * v41) * v41);
      v28 = _mm_mul_ps(v16, _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v12));
      v23.m128_f32[0] = (float)(0.5 * v41) * v27;
      v29 = _mm_mul_ps(v16, _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v18));
      v35 = v5;
      if ( -(float)(_mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0])) > (float)(_mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0])) )
      {
        v15 = flt_A65520;
        goto LABEL_17;
      }
      v15 = flt_A34BA0;
      ++v5;
      ++v7;
      break;
    }
    ++v5;
    ++v11;
    ++v7;
    ++v10;
    ++v34;
    v9 += 0x10;
  }
LABEL_16:
  v35 = v5;
LABEL_17:
  v36 = (double)v35 + v15;
  *(float *)&v40 = v15;
  v30 = _mm_shuffle_ps((__m128)v40, (__m128)v40, 0);
  *a4 = _mm_add_ps(
          _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v30), *(__m128 *)(0x10 * v5 + *(this + 8))),
          _mm_mul_ps(v30, *(__m128 *)(0x10 * v7 + *(this + 8))));
  if ( !*((_BYTE *)this + 0xC) )
    return v36;
  result = (double)(*(this + 9) - 1);
  if ( v36 < (double)flt_A41304 )
  {
    v32 = result - (fConstant_1 - v36);
    (*(void (__stdcall **)(_DWORD, __m128 *, __m128 *))(*this + 0xC))(LODWORD(v32), a3, a4);
    return result;
  }
  if ( result - flt_A41304 >= v36 )
    return v36;
  result = fConstant_1 - (result - v36);
  v33 = result;
  (*(void (__stdcall **)(_DWORD, __m128 *, __m128 *))(*this + 0xC))(LODWORD(v33), a3, a4);
  return result;
}
