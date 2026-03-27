void __usercall sub_8EB970(__m128 *a1@<ecx>, __m128 *a2@<esi>, int a3, __m128 *a4)
{
  __m128 v4; // xmm4
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 *v8; // edx
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  double v12; // st7
  double v13; // st7
  __m128 v14; // xmm1
  __m128 v15; // xmm3
  __m128 v16; // xmm3
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  float v20; // [esp+8h] [ebp-18h]
  float v21; // [esp+Ch] [ebp-14h]
  unsigned int v22; // [esp+Ch] [ebp-14h]
  float v23; // [esp+Ch] [ebp-14h]
  unsigned int v24; // [esp+Ch] [ebp-14h]
  float v25; // [esp+10h] [ebp-10h]
  float v26; // [esp+10h] [ebp-10h]
  float v27; // [esp+10h] [ebp-10h]
  float v28; // [esp+14h] [ebp-Ch]
  float v29; // [esp+18h] [ebp-8h]
  unsigned int v30; // [esp+1Ch] [ebp-4h]
  float v31; // [esp+1Ch] [ebp-4h]
  unsigned int v32; // [esp+1Ch] [ebp-4h]
  unsigned int v33; // [esp+1Ch] [ebp-4h]
  unsigned int v34; // [esp+1Ch] [ebp-4h]

  v4 = a1[1];
  v5 = *a1;
  v20 = a1[2].m128_f32[0];
  v6 = _mm_sub_ps(*a4, v4);
  v7 = _mm_mul_ps(v6, *a1);
  v29 = a1[2].m128_f32[3];
  v25 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
  v8 = *(__m128 **)(a3 + 0x38);
  *(float *)&v30 = -v25;
  v9 = _mm_mul_ps(v6, v6);
  v26 = v25 * v25;
  v10 = _mm_add_ps(v6, _mm_mul_ps(_mm_shuffle_ps((__m128)v30, (__m128)v30, 0), *a1));
  v28 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  v11 = _mm_mul_ps(v10, v8[3]);
  if ( (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) <= (double)*(float *)&SrcStr )
    v12 = a1[2].m128_f32[2];
  else
    v12 = a1[2].m128_f32[1];
  v31 = v12;
  if ( v12 <= *(float *)&SrcStr )
  {
    if ( (v20 * v20 + fConstant_1) * v26 >= v28 )
    {
      *a2 = v4;
      return;
    }
  }
  else
  {
    v13 = *(float *)&SrcStr;
    v14 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v8[3], v8[3], 0xC9), _mm_shuffle_ps(v5, v5, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v8[3], v8[3], 0xD2), _mm_shuffle_ps(v5, v5, 0xC9)));
    v15 = _mm_mul_ps(v14, v14);
    v21 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
    if ( v21 > (double)flt_A9AFD8 )
    {
      *(float *)&v22 = fConstant_1 / sqrt(v21);
      v14 = _mm_mul_ps(_mm_shuffle_ps((__m128)v22, (__m128)v22, 0), v14);
      v16 = _mm_mul_ps(v10, v14);
      v23 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
      v13 = v23;
      if ( v23 * v23 <= v20 * v20 * v26 )
      {
        *(float *)&v24 = -v23;
        v13 = *(float *)&SrcStr;
        v10 = _mm_add_ps(v10, _mm_mul_ps(_mm_shuffle_ps((__m128)v24, (__m128)v24, 0), v14));
      }
    }
    if ( v28 - v13 * v13 - v26 <= (v31 + v20) * (v31 + v20) * v26 )
    {
      if ( v13 == *(float *)&SrcStr )
      {
        *a2 = v4;
        return;
      }
      *(float *)&v32 = v13;
      v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v14);
    }
  }
  if ( v29 < (double)fConstant_1 )
  {
    v17 = _mm_mul_ps(v10, v10);
    v27 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    if ( v27 >= (double)flt_A9AFD8 && v28 * flt_A37080 < v27 )
    {
      *(float *)&v33 = sqrt(v28 / v27) * (fConstant_1 - v29) + v29;
      v18 = _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), v10);
      v19 = _mm_mul_ps(v5, v18);
      *(float *)&v34 = -(float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]));
      v10 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v34, (__m128)v34, 0), v5));
    }
  }
  *a2 = _mm_add_ps(v10, v4);
}
