__m128 *__cdecl sub_91FB20(__m128 *a1, float *a2, int a3, int a4, __m128 *a5, __m128 *a6, float *a7)
{
  __m128 *v7; // eax
  __m128 *v8; // ebx
  __m128 *v9; // esi
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __int8 v12; // cl
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __int32 v15; // edx
  __int32 v16; // ecx
  __int32 v17; // edx
  __m128 v18; // xmm2
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __m128 v21; // xmm3
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  long double v24; // st7
  int v25; // ecx
  long double v26; // st6
  int v27; // edx
  int v28; // esi
  __m128 v29; // xmm0
  float v30; // xmm1_4
  __m128 v31; // xmm3
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  double v35; // st7
  __m128 v36; // xmm0
  __m128 *result; // eax
  __m128 v38; // xmm0
  __m128 *v39; // ecx
  int v40; // edx
  __m128 v41; // xmm0
  float v42; // [esp+18h] [ebp-2C8h]
  int v43; // [esp+1Ch] [ebp-2C4h]
  float v44; // [esp+1Ch] [ebp-2C4h]
  __m128 v45; // [esp+20h] [ebp-2C0h] BYREF
  __m128 v46[2]; // [esp+30h] [ebp-2B0h]
  __m128 v47; // [esp+50h] [ebp-290h]
  __m128 v48; // [esp+60h] [ebp-280h] BYREF
  __int128 v49; // [esp+70h] [ebp-270h] BYREF
  __m128 v50[2]; // [esp+80h] [ebp-260h] BYREF
  __m128 v51[3]; // [esp+A0h] [ebp-240h] BYREF
  __m128 v52[3]; // [esp+D0h] [ebp-210h] BYREF
  char v53; // [esp+100h] [ebp-1E0h] BYREF
  __m128 v54[5]; // [esp+120h] [ebp-1C0h] BYREF
  __m128 v55[23]; // [esp+170h] [ebp-170h] BYREF

  v7 = a5;
  v8 = (__m128 *)&v49;
  v9 = (__m128 *)&v53;
  v43 = 2;
  do
  {
    v10 = v7[4];
    v11 = *a1;
    v9[1].m128_i32[0] = v7[3].m128_i32[3];
    v12 = v7->m128_i8[0xC];
    v13 = _mm_sub_ps(v11, v10);
    v14 = v7[1];
    v9[0xFFFFFFFD] = v13;
    v8[0xFFFFFFFF] = v14;
    if ( v12 )
    {
      v15 = v7[3].m128_i32[0];
      v16 = v7[3].m128_i32[1];
      *v8 = v7[2];
      v9[0xFFFFFFFE] = 0;
      v9[0xFFFFFFFF] = 0;
      *v9 = 0;
      v9[0xFFFFFFFE].m128_i32[0] = v15;
      v17 = v7[3].m128_i32[2];
      v9[0xFFFFFFFF].m128_i32[1] = v16;
      v9->m128_i32[2] = v17;
    }
    else
    {
      v18 = v7[7];
      v19 = v7[5];
      v20 = v7[6];
      v21 = _mm_shuffle_ps(v18, v18, 0x44);
      v22 = _mm_shuffle_ps(v19, v20, 0x44);
      *v8 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v22, v21, 0x88), _mm_shuffle_ps(v7[2], v7[2], 0)),
                _mm_mul_ps(_mm_shuffle_ps(v22, v21, 0xDD), _mm_shuffle_ps(v7[2], v7[2], 0x55))),
              _mm_mul_ps(
                _mm_shuffle_ps(_mm_shuffle_ps(v19, v20, 0xEE), _mm_shuffle_ps(v18, v18, 0xEE), 0x88),
                _mm_shuffle_ps(v7[2], v7[2], 0xAA)));
      v23 = v7[3];
      v51[0] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19);
      v51[1] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0x55), v20);
      v51[2] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xAA), v7[7]);
      sub_8D2B10(&v9[0xFFFFFFFE], v51, (int *)&v7[5]);
      sub_8D2830((int)&v9[0xFFFFFFFE]);
    }
    v7 = a6;
    v9 += 5;
    v8 += 2;
    --v43;
  }
  while ( v43 );
  v24 = fabs(a1[1].m128_f32[0]);
  v25 = 0;
  v26 = fabs(a1[1].m128_f32[1]);
  v45 = a1[1];
  v27 = 1;
  v28 = 2;
  v42 = fabs(a1[1].m128_f32[2]);
  if ( v26 < v24 )
  {
    v27 = 0;
    v44 = v26;
    v24 = v44;
    v25 = 1;
  }
  if ( v42 < v24 )
  {
    v28 = v25;
    v25 = 2;
  }
  v46[0].m128_i32[v25] = 0;
  v46[0].m128_i32[3] = 0;
  v46[0].m128_i32[v27] = a1[1].m128_i32[v28];
  v46[0].m128_f32[v28] = -a1[1].m128_f32[v27];
  v29 = _mm_mul_ps(v46[0], v46[0]);
  v30 = _mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0];
  v31 = _mm_shuffle_ps(v29, v29, 0xAA);
  v32 = v31;
  v32.m128_f32[0] = v31.m128_f32[0] + v30;
  v47 = v32;
  v47.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0] + v30);
  v33 = (__m128)0x3F000000u;
  v33.m128_f32[0] = (float)(0.5 * v47.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v31.m128_f32[0] + v30) * v47.m128_f32[0]) * v47.m128_f32[0]));
  v34 = a1[1];
  v46[0] = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v46[0]);
  v46[1] = _mm_sub_ps(
             _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v46[0], v46[0], 0xD2)),
             _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v46[0], v46[0], 0xC9)));
  sub_94F6B0(v52, v54, &v45, v55);
  v35 = sub_94FC90(v55, a2, &v48, v50);
  v36 = v48;
  *a7 = v35;
  result = a5;
  a5[1] = v36;
  *(__m128 *)(*(_DWORD *)(a3 + 0x50) + 0xD0) = v36;
  *(__int128 *)(*(_DWORD *)(a3 + 0x50) + 0xE0) = v49;
  v38 = v50[0];
  a6[1] = v50[0];
  *(__m128 *)(*(_DWORD *)(a4 + 0x50) + 0xD0) = v38;
  *(__m128 *)(*(_DWORD *)(a4 + 0x50) + 0xE0) = v50[1];
  v39 = (__m128 *)&v49;
  v40 = 2;
  do
  {
    v41 = *v39;
    if ( !result->m128_i8[0xC] )
      v41 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(result[5], _mm_shuffle_ps(v41, v41, 0)),
                _mm_mul_ps(result[6], _mm_shuffle_ps(v41, v41, 0x55))),
              _mm_mul_ps(result[7], _mm_shuffle_ps(v41, v41, 0xAA)));
    v39 += 2;
    --v40;
    result[2] = v41;
    result = a6;
  }
  while ( v40 );
  return result;
}
