signed int __cdecl sub_8D20C0(__m128 *a1, __m128 *a2, int a3, __m128 *a4)
{
  __m128 v4; // xmm5
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  __m128 v7; // xmm3
  __m128 v8; // xmm1
  float v9; // xmm4_4
  float v10; // xmm6_4
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  double v13; // st7
  hkVector4 v14; // xmm4
  double v15; // st7
  double v16; // st6
  int v17; // ecx
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  bool v21; // c0
  bool v22; // c3
  int v24; // edi
  __m128 v25; // xmm5
  __m128 v26; // xmm0
  float v27; // xmm1_4
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  float v30; // xmm3_4
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm1
  __m128 v34; // xmm1
  __m128 v35; // xmm5
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  long double v38; // st7
  long double v39; // st7
  float v40; // [esp+18h] [ebp-28h]
  float v41; // [esp+18h] [ebp-28h]
  float v42; // [esp+18h] [ebp-28h]
  float v43; // [esp+1Ch] [ebp-24h]
  float v44; // [esp+1Ch] [ebp-24h]
  unsigned int v45; // [esp+1Ch] [ebp-24h]
  unsigned int v46; // [esp+1Ch] [ebp-24h]
  __m128 v47; // [esp+20h] [ebp-20h] BYREF
  __m128 v48; // [esp+30h] [ebp-10h] BYREF

  v4 = *a1;
  v5 = a2[1];
  v6 = _mm_sub_ps(*a2, v5);
  v7 = _mm_sub_ps(v5, *a1);
  v8 = _mm_mul_ps(v7, v6);
  v9 = _mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0];
  v10 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0];
  v11 = _mm_sub_ps(a2[2], v5);
  v43 = v10 + v9;
  v12 = _mm_mul_ps(v7, v11);
  v40 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  v13 = v40 * *(float *)(a3 + 8);
  v14 = stru_BA7A40;
  v47.m128_i32[3] = 0x3A83126F;
  v15 = v13 - v43 * *(float *)(a3 + 4);
  v16 = v43 * *(float *)(a3 + 8) - v40 * *(float *)a3;
  v47.m128_f32[0] = v15 + flt_A37080;
  v47.m128_f32[1] = flt_A7B17C - v15 - v16;
  v47.m128_f32[2] = v16 + flt_A37080;
  v17 = _mm_movemask_ps(_mm_cmplt_ps((__m128)v14, v47)) & 7;
  if ( v17 == 7 )
  {
    v18 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(v11, v11, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(v11, v11, 0xC9)));
    *a4 = v18;
    v19 = _mm_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)(a3 + 0xC), (__m128)*(unsigned int *)(a3 + 0xC), 0), v18);
    v20 = _mm_mul_ps(v19, v7);
    v41 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
    v21 = v41 < (double)*(float *)&SrcStr;
    v22 = v41 == *(float *)&SrcStr;
    *a4 = v19;
    a4[1].m128_f32[0] = v41;
    if ( v21 || v22 )
      a4[1].m128_f32[0] = -v41;
    else
      *a4 = _mm_xor_ps(v19, (__m128)xmmword_A965C0);
    return 0;
  }
  else
  {
    v24 = byte_A99F04[v17];
    if ( v24 >= 0 )
    {
      sub_8D1CD0(a1, &a2[v24], &a2[byte_A99F0E[v24]], &v47);
      sub_8D1CD0(a1, &a2[byte_A99F0C[v24]], &a2[v24], &v48);
      v34 = _mm_sub_ps(v4, v47);
      v35 = _mm_sub_ps(v4, v48);
      v36 = _mm_mul_ps(v34, v34);
      v42 = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
      v37 = _mm_mul_ps(v35, v35);
      v44 = _mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]);
      if ( v42 >= (double)v44 )
      {
        v39 = fConstant_1 / sqrt(v44);
        a4[1].m128_f32[0] = v44 * v39;
        *(float *)&v46 = v39;
        *a4 = _mm_mul_ps(_mm_shuffle_ps((__m128)v46, (__m128)v46, 0), v35);
      }
      else
      {
        v38 = fConstant_1 / sqrt(v42);
        a4[1].m128_f32[0] = v42 * v38;
        *(float *)&v45 = v38;
        *a4 = _mm_mul_ps(_mm_shuffle_ps((__m128)v45, (__m128)v45, 0), v34);
      }
      return 1;
    }
    else
    {
      sub_8D1CD0(a1, &a2[byte_A99F16[v24]], &a2[byte_A99F14[v24]], &v47);
      v25 = _mm_sub_ps(v4, v47);
      v26 = _mm_mul_ps(v25, v25);
      v27 = _mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0];
      v28 = _mm_shuffle_ps(v26, v26, 0xAA);
      v29 = v28;
      v29.m128_f32[0] = v28.m128_f32[0] + v27;
      v47 = v29;
      v47.m128_f32[0] = 1.0 / fsqrt(v28.m128_f32[0] + v27);
      v30 = 3.0 - (float)((float)((float)(v28.m128_f32[0] + v27) * v47.m128_f32[0]) * v47.m128_f32[0]);
      v31 = (__m128)0x3F000000u;
      v31.m128_f32[0] = 0.5 * v47.m128_f32[0];
      v32 = v31;
      v32.m128_f32[0] = (float)(0.5 * v47.m128_f32[0]) * v30;
      v33 = _mm_shuffle_ps(v32, v32, 0);
      *a4 = _mm_mul_ps(v33, v25);
      a4[1].m128_f32[0] = v29.m128_f32[0] * v33.m128_f32[0];
      return 1;
    }
  }
}
