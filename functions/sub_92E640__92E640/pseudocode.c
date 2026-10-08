int __cdecl sub_92E640(__m128 *a1, __m128 *a2, float *a3, float *a4, const void **a5)
{
  const void *v5; // esi
  const void *v6; // ebx
  signed int v7; // eax
  int v8; // eax
  char *v9; // eax
  __m128 v10; // xmm0
  __m128 *v11; // esi
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  float v15; // xmm1_4
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  int result; // eax
  char *v22; // esi
  char *v23; // eax
  float v24; // [esp+Ch] [ebp-14h] BYREF
  __m128 v25; // [esp+10h] [ebp-10h]

  v5 = a5[1]; /*0x92e64f*/
  v6 = (char *)v5 + 1; /*0x92e655*/
  v7 = (unsigned int)a5[2] & 0x3FFFFFFF; /*0x92e658*/
  if ( v7 < (int)v5 + 1 ) /*0x92e65f*/
  {
    v8 = 2 * v7; /*0x92e661*/
    if ( (int)v6 >= v8 ) /*0x92e665*/
      v8 = (int)v5 + 1; /*0x92e667*/
    sub_8A6E40(a5, v8, 0x10); /*0x92e66d*/
  }
  v9 = (char *)*a5; /*0x92e675*/
  a5[1] = v6; /*0x92e67a*/
  v10 = *a1; /*0x92e682*/
  v11 = (__m128 *)&v9[0x10 * (_DWORD)v5]; /*0x92e688*/
  v25.m128_f32[0] = a2->m128_f32[0] - *a3; /*0x92e699*/
  v25.m128_f32[1] = a2->m128_f32[1] - a3[1]; /*0x92e6a3*/
  v25.m128_f32[2] = a2->m128_f32[2] - a3[2]; /*0x92e6ad*/
  v25.m128_f32[3] = a2->m128_f32[3] - a3[3]; /*0x92e6b7*/
  v12 = _mm_sub_ps( /*0x92e6db*/
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v25, v25, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v25, v25, 0xC9)));
  *v11 = v12; /*0x92e6de*/
  v25.m128_f32[0] = *a4 - *a3; /*0x92e6e8*/
  v25.m128_f32[1] = a4[1] - a3[1]; /*0x92e6f2*/
  v25.m128_f32[2] = a4[2] - a3[2]; /*0x92e6fc*/
  v25.m128_f32[3] = a4[3] - a3[3]; /*0x92e70a*/
  v13 = _mm_mul_ps(v12, v25); /*0x92e713*/
  v24 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x92e72c*/
      + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  if ( v24 > (double)flt_A372CC ) /*0x92e73f*/
    *v11 = _mm_xor_ps(v12, (__m128)xmmword_A965C0); /*0x92e74b*/
  v14 = _mm_mul_ps(*v11, *v11); /*0x92e751*/
  v24 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x92e76e*/
      + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  if ( v24 <= (double)flt_A79DB4 ) /*0x92e781*/
  {
    v22 = (char *)a5[1] + 0xFFFFFFFF; /*0x92e831*/
    result = (unsigned int)a5[2] & 0x3FFFFFFF; /*0x92e832*/
    if ( result < (int)v22 ) /*0x92e839*/
    {
      v23 = (char *)(2 * result); /*0x92e83b*/
      if ( (int)v22 >= (int)v23 ) /*0x92e83f*/
        v23 = (char *)a5[1] + 0xFFFFFFFF; /*0x92e841*/
      result = sub_8A6E40(a5, (int)v23, 0x10); /*0x92e847*/
    }
    a5[1] = v22; /*0x92e84f*/
  }
  else
  {
    v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x92e78e*/
    v16 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x92e795*/
    v17 = v16; /*0x92e799*/
    v17.m128_f32[0] = v16.m128_f32[0] + v15; /*0x92e79c*/
    v25 = v17; /*0x92e7a0*/
    v25.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15); /*0x92e7a9*/
    v24 = 0.5; /*0x92e7ce*/
    v18 = (__m128)0x3F000000u; /*0x92e7d6*/
    v18.m128_f32[0] = (float)(0.5 * v25.m128_f32[0]) /*0x92e7e3*/
                    * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v25.m128_f32[0]) * v25.m128_f32[0]));
    v19 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), *v11); /*0x92e7f1*/
    *v11 = v19; /*0x92e7f4*/
    v20 = _mm_mul_ps(v19, *a2); /*0x92e7fa*/
    v24 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x92e817*/
        + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
    v11->m128_f32[3] = -v24; /*0x92e821*/
    return (int)&v24; /*0x92e80f*/
  }
  return result; /*0x92e824*/
}
