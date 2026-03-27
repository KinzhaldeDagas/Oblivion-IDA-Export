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

  v5 = a5[1];
  v6 = (char *)v5 + 1;
  v7 = (unsigned int)a5[2] & 0x3FFFFFFF;
  if ( v7 < (int)v5 + 1 )
  {
    v8 = 2 * v7;
    if ( (int)v6 >= v8 )
      v8 = (int)v5 + 1;
    sub_8A6E40(a5, v8, 0x10);
  }
  v9 = (char *)*a5;
  a5[1] = v6;
  v10 = *a1;
  v11 = (__m128 *)&v9[0x10 * (_DWORD)v5];
  v25.m128_f32[0] = a2->m128_f32[0] - *a3;
  v25.m128_f32[1] = a2->m128_f32[1] - a3[1];
  v25.m128_f32[2] = a2->m128_f32[2] - a3[2];
  v25.m128_f32[3] = a2->m128_f32[3] - a3[3];
  v12 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v25, v25, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v25, v25, 0xC9)));
  *v11 = v12;
  v25.m128_f32[0] = *a4 - *a3;
  v25.m128_f32[1] = a4[1] - a3[1];
  v25.m128_f32[2] = a4[2] - a3[2];
  v25.m128_f32[3] = a4[3] - a3[3];
  v13 = _mm_mul_ps(v12, v25);
  v24 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  if ( v24 > (double)flt_A372CC )
    *v11 = _mm_xor_ps(v12, (__m128)xmmword_A965C0);
  v14 = _mm_mul_ps(*v11, *v11);
  v24 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  if ( v24 <= (double)flt_A79DB4 )
  {
    v22 = (char *)a5[1] + 0xFFFFFFFF;
    result = (unsigned int)a5[2] & 0x3FFFFFFF;
    if ( result < (int)v22 )
    {
      v23 = (char *)(2 * result);
      if ( (int)v22 >= (int)v23 )
        v23 = (char *)a5[1] + 0xFFFFFFFF;
      result = sub_8A6E40(a5, (int)v23, 0x10);
    }
    a5[1] = v22;
  }
  else
  {
    v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0];
    v16 = _mm_shuffle_ps(v14, v14, 0xAA);
    v17 = v16;
    v17.m128_f32[0] = v16.m128_f32[0] + v15;
    v25 = v17;
    v25.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15);
    v24 = 0.5;
    v18 = (__m128)0x3F000000u;
    v18.m128_f32[0] = (float)(0.5 * v25.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v25.m128_f32[0]) * v25.m128_f32[0]));
    v19 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), *v11);
    *v11 = v19;
    v20 = _mm_mul_ps(v19, *a2);
    v24 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
    v11->m128_f32[3] = -v24;
    return (int)&v24;
  }
  return result;
}
