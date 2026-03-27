__m128 __thiscall sub_94DB40(__m128 *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  long double v6; // st7
  __m128 *v7; // edi
  long double v8; // st6
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  double v12; // st7
  float v13; // edx
  __m128 v14; // xmm0
  float v15; // xmm1_4
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm0
  int v23; // edx
  __m128 result; // xmm0
  int v25; // ecx
  __m128 v26; // xmm1
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  float v29; // [esp+0h] [ebp-64h]
  float v30; // [esp+18h] [ebp-4Ch]
  float v31; // [esp+18h] [ebp-4Ch]
  float v32; // [esp+1Ch] [ebp-48h]
  unsigned int v33; // [esp+1Ch] [ebp-48h]
  unsigned int v34; // [esp+1Ch] [ebp-48h]
  unsigned int v35; // [esp+1Ch] [ebp-48h]
  unsigned int v36; // [esp+20h] [ebp-44h]
  float v37; // [esp+20h] [ebp-44h]
  unsigned int v38; // [esp+20h] [ebp-44h]
  unsigned int v39; // [esp+20h] [ebp-44h]
  __m128 v40; // [esp+24h] [ebp-40h] BYREF
  __m128 v41; // [esp+34h] [ebp-30h] BYREF
  __m128 v42; // [esp+44h] [ebp-20h] BYREF
  __m128 v43; // [esp+54h] [ebp-10h]

  v3 = *((_DWORD *)this + 0x20);
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
  if ( v4 < v3 )
  {
    v5 = 2 * v4;
    if ( v3 >= v5 )
      v5 = *((_DWORD *)this + 0x20);
    sub_8A6E40((const void **)a2, v5, 0x10);
  }
  *(_DWORD *)(a2 + 4) = v3;
  v6 = fabs(*((float *)this + 0x1C));
  v7 = this + 7;
  v8 = fabs(*((float *)this + 0x1D));
  v9 = 0;
  v10 = 1;
  v32 = fabs(*((float *)this + 0x1E));
  if ( v8 < v6 )
  {
    v10 = 0;
    v30 = v8;
    v6 = v30;
    v9 = 1;
  }
  if ( v32 >= v6 )
  {
    v11 = 2;
  }
  else
  {
    v11 = v9;
    v9 = 2;
  }
  v40.m128_i32[v9] = 0;
  v40.m128_i32[3] = 0;
  v40.m128_i32[v10] = v7->m128_i32[v11];
  v12 = v7->m128_f32[v10];
  v13 = *((float *)this + 0x21);
  v40.m128_f32[v11] = -v12;
  v14 = _mm_mul_ps(v40, v40);
  v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0];
  v16 = _mm_shuffle_ps(v14, v14, 0xAA);
  v17 = v16;
  v17.m128_f32[0] = v16.m128_f32[0] + v15;
  v43 = v17;
  v43.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15);
  v18 = (__m128)0x3F000000u;
  v18.m128_f32[0] = (float)(0.5 * v43.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v43.m128_f32[0]) * v43.m128_f32[0]));
  v40 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v40);
  sub_8B1B00(&v41, &v40, v13);
  v29 = flt_A46B14 / (double)*((int *)this + 0x20);
  sub_8B1B00(&v42, this + 7, v29);
  v19 = *v7;
  v43 = v41;
  v43.m128_i32[3] = 0;
  v20 = _mm_mul_ps(v43, v19);
  *(float *)&v36 = v41.m128_f32[3] * v41.m128_f32[3] + v41.m128_f32[3] * v41.m128_f32[3] - fConstant_1;
  v21 = (__m128)v36;
  v37 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  *(float *)&v38 = v37 + v37;
  v22 = (__m128)v38;
  *(float *)&v39 = v41.m128_f32[3] + v41.m128_f32[3];
  v23 = 0;
  result = _mm_add_ps(
             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v19), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v43)),
             _mm_mul_ps(
               _mm_shuffle_ps((__m128)v39, (__m128)v39, 0),
               _mm_sub_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(v19, v19, 0xD2)),
                 _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(v19, v19, 0xC9)))));
  if ( *((int *)this + 0x20) > 0 )
  {
    v25 = 0;
    do
    {
      *(__m128 *)(*(_DWORD *)a2 + v25) = *(this + 6);
      *(__m128 *)(v25 + *(_DWORD *)a2) = _mm_add_ps(
                                           *(__m128 *)(*(_DWORD *)a2 + v25),
                                           _mm_mul_ps(
                                             _mm_shuffle_ps(
                                               (__m128)*((unsigned int *)this + 0x22),
                                               (__m128)*((unsigned int *)this + 0x22),
                                               0),
                                             result));
      v43 = v42;
      v43.m128_i32[3] = 0;
      v26 = _mm_mul_ps(v43, result);
      *(float *)&v33 = v42.m128_f32[3] * v42.m128_f32[3] + v42.m128_f32[3] * v42.m128_f32[3] - fConstant_1;
      v27 = (__m128)v33;
      v31 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
      *(float *)&v34 = v31 + v31;
      v28 = (__m128)v34;
      *(float *)&v35 = v42.m128_f32[3] + v42.m128_f32[3];
      ++v23;
      v25 += 0x10;
      result = _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), result),
                   _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v43)),
                 _mm_mul_ps(
                   _mm_shuffle_ps((__m128)v35, (__m128)v35, 0),
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(result, result, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(result, result, 0xC9)))));
    }
    while ( v23 < *((_DWORD *)this + 0x20) );
  }
  return result;
}
