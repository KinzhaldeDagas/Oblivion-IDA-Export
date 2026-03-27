void __cdecl sub_8D1700(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4, int a5)
{
  __m128 v5; // xmm3
  __m128 v6; // xmm5
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  double v12; // st7
  double v13; // st7
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  float v16; // xmm1_4
  float v17; // xmm4_4
  __m128 v18; // xmm0
  double v19; // st6
  __m128 v20; // xmm4
  __m128 v21; // xmm0
  double v22; // st7
  bool v23; // c0
  bool v24; // c3
  __m128 v25; // xmm0
  double v26; // st7
  __m128 v27; // xmm0
  double v28; // st7
  __m128 v29; // xmm0
  double v30; // st7
  __m128 v31; // xmm0
  double v32; // st7
  float v33; // [esp+8h] [ebp-18h]
  float v34; // [esp+Ch] [ebp-14h]
  float v35; // [esp+Ch] [ebp-14h]
  float v36; // [esp+10h] [ebp-10h]
  float v37; // [esp+14h] [ebp-Ch]
  float v38; // [esp+1Ch] [ebp-4h]
  float v39; // [esp+1Ch] [ebp-4h]

  v5 = *a3;
  v6 = *a4;
  v7 = _mm_sub_ps(*a2, *a3);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_sub_ps(*a4, *a3);
  v33 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
  v10 = _mm_mul_ps(v9, v9);
  v36 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  v11 = _mm_mul_ps(v9, v7);
  v34 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v12 = v36 * v33 - v34 * v34;
  v37 = v12;
  if ( v12 <= *(float *)&SrcStr )
  {
    v20 = _mm_sub_ps(*a2, v6);
    v21 = _mm_mul_ps(v20, v20);
    v35 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
    v22 = v35;
    if ( v33 < (double)v36 )
    {
      if ( v22 < v36 )
      {
        v31 = _mm_mul_ps(_mm_sub_ps(*a1, v5), v9);
        v32 = (float)(_mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]))
            / v36;
        *(_DWORD *)a5 = 0;
        *(float *)(a5 + 8) = v32;
        *(float *)(a5 + 4) = fConstant_1 - v32;
      }
      else
      {
        v29 = _mm_mul_ps(_mm_sub_ps(*a1, v6), v20);
        v30 = (float)(_mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]))
            / v35;
        *(_DWORD *)(a5 + 4) = 0;
        *(float *)a5 = v30;
        *(float *)(a5 + 8) = fConstant_1 - v30;
      }
    }
    else if ( v22 < v33 )
    {
      v27 = _mm_mul_ps(_mm_sub_ps(*a1, v5), v7);
      v28 = (float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]))
          / v33;
      *(_DWORD *)(a5 + 8) = 0;
      *(float *)a5 = v28;
      *(float *)(a5 + 4) = fConstant_1 - v28;
    }
    else
    {
      v23 = v35 < (double)*(float *)&SrcStr;
      v24 = v35 == *(float *)&SrcStr;
      *(_DWORD *)(a5 + 4) = 0;
      if ( v23 || v24 )
      {
        *(_DWORD *)a5 = 0;
        *(_DWORD *)(a5 + 8) = 0;
      }
      else
      {
        v25 = _mm_mul_ps(_mm_sub_ps(*a1, *a4), v20);
        v26 = (float)(_mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]))
            / v35;
        *(float *)a5 = v26;
        *(float *)(a5 + 8) = fConstant_1 - v26;
      }
    }
  }
  else
  {
    v13 = fConstant_1 / v37;
    v14 = _mm_sub_ps(v5, *a1);
    v15 = _mm_mul_ps(v14, v7);
    v16 = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0];
    v17 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0];
    v18 = _mm_mul_ps(v14, v9);
    v38 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
    v19 = v38 * v34 - (float)(v17 + v16) * v36;
    v39 = v34 * (float)(v17 + v16) - v38 * v33;
    *(float *)a5 = v19 * v13;
    *(float *)(a5 + 4) = (v37 - v19 - v39) * v13;
    *(float *)(a5 + 8) = v39 * v13;
  }
}
