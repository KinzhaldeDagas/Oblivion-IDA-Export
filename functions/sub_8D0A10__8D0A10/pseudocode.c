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

  v6 = *a3; /*0x8d0a30*/
  v31 = _mm_sub_ps(a1[1], *a1); /*0x8d0a38*/
  v32 = _mm_sub_ps(a3[1], v6); /*0x8d0a4b*/
  v7 = a2 + a4; /*0x8d0a58*/
  v8 = sub_8D1A30(a1, &v31, a3, &v32, &v33); /*0x8d0a5b*/
  if ( v35 > (a5 + v7) * (a5 + v7) ) /*0x8d0a76*/
    return 1; /*0x8d0a84*/
  v10 = sqrt(v35); /*0x8d0a8b*/
  if ( !v8 ) /*0x8d0a8d*/
  {
    v12 = _mm_sub_ps( /*0x8d0ae7*/
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v32, v32, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v32, v32, 0xC9)));
    v13 = _mm_mul_ps(v12, v12); /*0x8d0aed*/
    if ( (float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x8d0b1d*/
               + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0])) > (double)flt_A99EF4 )
    {
      v14 = _mm_mul_ps(v12, v34); /*0x8d0b27*/
      if ( (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x8d0b57*/
                 + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0])) < (double)*(float *)&SrcStr )
        v12 = _mm_xor_ps(v12, (__m128)xmmword_A965C0); /*0x8d0b60*/
      v11 = a6; /*0x8d0b63*/
      a6[1] = v12; /*0x8d0b66*/
      goto LABEL_15; /*0x8d0b6a*/
    }
    goto LABEL_10; /*0x8d0b1d*/
  }
  if ( v35 <= (double)*(float *)&SrcStr ) /*0x8d0a9e*/
  {
LABEL_10:
    v11 = a6; /*0x8d0b6f*/
    v15 = fabs(v31.m128_f32[0]); /*0x8d0b76*/
    v16 = 0; /*0x8d0b78*/
    v17 = fabs(v31.m128_f32[1]); /*0x8d0b7e*/
    v18 = 1; /*0x8d0b80*/
    v19 = 2; /*0x8d0b8d*/
    v29 = fabs(v31.m128_f32[2]); /*0x8d0b94*/
    if ( v17 < v15 ) /*0x8d0b9f*/
    {
      v18 = 0; /*0x8d0ba3*/
      v28 = v17; /*0x8d0b85*/
      v15 = v28; /*0x8d0ba5*/
      v16 = 1; /*0x8d0ba9*/
    }
    if ( v29 < v15 ) /*0x8d0bbb*/
    {
      v19 = v16; /*0x8d0bbd*/
      v16 = 2; /*0x8d0bbf*/
    }
    a6[1].m128_i32[v16] = 0; /*0x8d0bc4*/
    v20 = v18; /*0x8d0bd3*/
    v21 = v31.m128_i32[v19]; /*0x8d0bda*/
    a6[1].m128_i32[3] = 0; /*0x8d0bde*/
    a6[1].m128_i32[v20] = v21; /*0x8d0be5*/
    a6[1].m128_f32[v19] = -v31.m128_f32[v20]; /*0x8d0bef*/
    goto LABEL_15; /*0x8d0bef*/
  }
  v11 = a6; /*0x8d0aa4*/
  a6[1] = v34; /*0x8d0aac*/
LABEL_15:
  v22 = v11[1]; /*0x8d0bf3*/
  v23 = _mm_mul_ps(v22, v22); /*0x8d0bff*/
  v24 = _mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]; /*0x8d0c09*/
  v25 = _mm_shuffle_ps(v23, v23, 0xAA); /*0x8d0c10*/
  v26 = v25; /*0x8d0c14*/
  v26.m128_f32[0] = v25.m128_f32[0] + v24; /*0x8d0c17*/
  v32 = v26; /*0x8d0c1b*/
  v32.m128_f32[0] = 1.0 / fsqrt(v25.m128_f32[0] + v24); /*0x8d0c24*/
  v27 = (__m128)0x3F000000u; /*0x8d0c51*/
  *(float *)&v30 = a4 - v10; /*0x8d0c57*/
  v27.m128_f32[0] = (float)(0.5 * v32.m128_f32[0]) /*0x8d0c5f*/
                  * (float)(3.0 - (float)((float)((float)(v25.m128_f32[0] + v24) * v32.m128_f32[0]) * v32.m128_f32[0]));
  v11[1] = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v22); /*0x8d0c75*/
  *v11 = _mm_add_ps(v33, _mm_mul_ps(_mm_shuffle_ps((__m128)v30, (__m128)v30, 0), v11[1])); /*0x8d0c8f*/
  v11[1].m128_f32[3] = v10 - v7; /*0x8d0c92*/
  return 0; /*0x8d0a81*/
}
