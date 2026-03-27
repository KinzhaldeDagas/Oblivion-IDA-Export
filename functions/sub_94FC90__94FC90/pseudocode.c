double __cdecl sub_94FC90(__m128 *a1, float *a2, __m128 *a3, __m128 *a4)
{
  bool v4; // c0
  double v6; // st7
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  double v10; // st7
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  long double v13; // st7
  long double v14; // st6
  long double v15; // st7
  double v16; // st6
  __m128 v17; // xmm0
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st2
  long double v22; // st3
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  double v25; // st6
  unsigned int v26; // [esp+Ch] [ebp-34h]
  float v27; // [esp+Ch] [ebp-34h]
  unsigned int v28; // [esp+Ch] [ebp-34h]
  unsigned int v29; // [esp+Ch] [ebp-34h]
  __m128 v30; // [esp+10h] [ebp-30h] BYREF
  __m128 v31; // [esp+20h] [ebp-20h] BYREF
  __m128 v32; // [esp+30h] [ebp-10h]

  sub_94FB80(a1, a3, a4, &v30);
  if ( v30.m128_f32[0] > (double)a2[6] )
  {
    v4 = a2[6] < (double)a2[7];
    v30.m128_f32[0] = a2[6];
    if ( !v4 )
      return *(float *)&SrcStr;
  }
  v6 = a2[5] + fConstant_1;
  v7 = a1[0x16];
  v8 = a1[0x15];
  v9 = a1[0x14];
  v30 = _mm_xor_ps(v30, (__m128)xmmword_A965C0);
  v30.m128_f32[0] = v6 * v30.m128_f32[0] + a2[7];
  v10 = a2[4];
  v11 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(v9, _mm_shuffle_ps(v30, v30, 0)), _mm_mul_ps(v8, _mm_shuffle_ps(v30, v30, 0x55))),
          _mm_mul_ps(v7, _mm_shuffle_ps(v30, v30, 0xAA)));
  v32 = _mm_mul_ps(v11, v11);
  v31 = v11;
  if ( v10 * v10 * v32.m128_f32[0] < v32.m128_f32[2] + v32.m128_f32[1] )
  {
    v12 = a1[0x11];
    v13 = fabs(v31.m128_f32[2]);
    v14 = fabs(v31.m128_f32[1]);
    v31 = 0;
    v15 = v13 + v14;
    v16 = v30.m128_f32[0] * a1[0x11].m128_f32[3];
    v31.m128_f32[0] = v16 + 0.0;
    *(float *)&v26 = v16;
    v17 = _mm_sub_ps(v30, _mm_mul_ps(_mm_shuffle_ps((__m128)v26, (__m128)v26, 0), v12));
    v30 = v17;
    v27 = v17.m128_f32[2] * a1[0x13].m128_f32[1];
    v18 = (v17.m128_f32[1] * a1[0x12].m128_f32[1] - v27) * a1[0x12].m128_f32[3];
    v19 = (v17.m128_f32[2] * a1[0x13].m128_f32[2] - v27) * a1[0x12].m128_f32[3];
    v20 = v19 * v19 + v18 * v18;
    v21 = v31.m128_f32[0] * a2[4];
    if ( v20 > v21 * v21 )
    {
      v22 = sqrt(v21 * v21 / v20);
      v18 = v18 * v22;
      v19 = v19 * v22;
    }
    v23 = a1[0x13];
    v31.m128_f32[1] = v18;
    v31.m128_f32[2] = v19;
    *(float *)&v28 = v18;
    v24 = (__m128)v28;
    *(float *)&v29 = v19;
    v30 = _mm_sub_ps(
            _mm_sub_ps(v17, _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), a1[0x12])),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v29, (__m128)v29, 0), v23));
    v25 = v30.m128_f32[0] * a1[0x11].m128_f32[3];
    if ( *(float *)&SrcStr > v25 )
      v25 = *(float *)&SrcStr;
    v31.m128_f32[0] = v15 * a2[8] + v25 + v31.m128_f32[0];
  }
  sub_94FA50(a1, &v31, a3, a4);
  return v31.m128_f32[0];
}
