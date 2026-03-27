int __cdecl sub_8D0A10(__m128 *a1, float a2, __m128 *a3, float a4, float a5, __m128 *a6)
{
  __m128 v6; // xmm0
  double v7; // st7
  signed int v8; // ecx
  long double v10; // st6
  __m128 *v11; // ecx
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  long double v15; // st5
  int v16; // edx
  long double v17; // st4
  int v18; // esi
  int v19; // edi
  int v20; // edx
  __int32 v21; // esi
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  float v24; // xmm2_4
  __m128 v25; // xmm3
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  float v28; // [esp+0h] [ebp-58h]
  float v29; // [esp+4h] [ebp-54h]
  unsigned int v30; // [esp+4h] [ebp-54h]
  __m128 v31; // [esp+8h] [ebp-50h] BYREF
  __m128 v32; // [esp+18h] [ebp-40h] BYREF
  __m128 v33; // [esp+28h] [ebp-30h] BYREF
  __m128 v34; // [esp+38h] [ebp-20h]
  float v35; // [esp+48h] [ebp-10h]

  v6 = *a3;
  v31 = _mm_sub_ps(a1[1], *a1);
  v32 = _mm_sub_ps(a3[1], v6);
  v7 = a2 + a4;
  v8 = sub_8D1A30(a1, &v31, a3, &v32, &v33);
  if ( v35 > (a5 + v7) * (a5 + v7) )
    return 1;
  v10 = sqrt(v35);
  if ( !v8 )
  {
    v12 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v32, v32, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v32, v32, 0xC9)));
    v13 = _mm_mul_ps(v12, v12);
    if ( (float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0])) > (double)flt_A99EF4 )
    {
      v14 = _mm_mul_ps(v12, v34);
      if ( (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0])) < (double)*(float *)&SrcStr )
        v12 = _mm_xor_ps(v12, (__m128)xmmword_A965C0);
      v11 = a6;
      a6[1] = v12;
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  if ( v35 <= (double)*(float *)&SrcStr )
  {
LABEL_10:
    v11 = a6;
    v15 = fabs(v31.m128_f32[0]);
    v16 = 0;
    v17 = fabs(v31.m128_f32[1]);
    v18 = 1;
    v19 = 2;
    v29 = fabs(v31.m128_f32[2]);
    if ( v17 < v15 )
    {
      v18 = 0;
      v28 = v17;
      v15 = v28;
      v16 = 1;
    }
    if ( v29 < v15 )
    {
      v19 = v16;
      v16 = 2;
    }
    a6[1].m128_i32[v16] = 0;
    v20 = v18;
    v21 = v31.m128_i32[v19];
    a6[1].m128_i32[3] = 0;
    a6[1].m128_i32[v20] = v21;
    a6[1].m128_f32[v19] = -v31.m128_f32[v20];
    goto LABEL_15;
  }
  v11 = a6;
  a6[1] = v34;
LABEL_15:
  v22 = v11[1];
  v23 = _mm_mul_ps(v22, v22);
  v24 = _mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0];
  v25 = _mm_shuffle_ps(v23, v23, 0xAA);
  v26 = v25;
  v26.m128_f32[0] = v25.m128_f32[0] + v24;
  v32 = v26;
  v32.m128_f32[0] = 1.0 / fsqrt(v25.m128_f32[0] + v24);
  v27 = (__m128)0x3F000000u;
  *(float *)&v30 = a4 - v10;
  v27.m128_f32[0] = (float)(0.5 * v32.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v25.m128_f32[0] + v24) * v32.m128_f32[0]) * v32.m128_f32[0]));
  v11[1] = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v22);
  *v11 = _mm_add_ps(v33, _mm_mul_ps(_mm_shuffle_ps((__m128)v30, (__m128)v30, 0), v11[1]));
  v11[1].m128_f32[3] = v10 - v7;
  return 0;
}
