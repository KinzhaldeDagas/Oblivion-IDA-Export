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

  v7 = a5; /*0x91fb2c*/
  v8 = (__m128 *)&v49; /*0x91fb35*/
  v9 = (__m128 *)&v53; /*0x91fb39*/
  v43 = 2; /*0x91fb40*/
  do /*0x91fc6f*/
  {
    v10 = v7[4]; /*0x91fb53*/
    v11 = *a1; /*0x91fb57*/
    v9[1].m128_i32[0] = v7[3].m128_i32[3]; /*0x91fb5a*/
    v12 = v7->m128_i8[0xC]; /*0x91fb5d*/
    v13 = _mm_sub_ps(v11, v10); /*0x91fb62*/
    v14 = v7[1]; /*0x91fb65*/
    v9[0xFFFFFFFD] = v13; /*0x91fb69*/
    v8[0xFFFFFFFF] = v14; /*0x91fb6d*/
    if ( v12 ) /*0x91fb71*/
    {
      v15 = v7[3].m128_i32[0]; /*0x91fb77*/
      v16 = v7[3].m128_i32[1]; /*0x91fb7a*/
      *v8 = v7[2]; /*0x91fb7d*/
      v9[0xFFFFFFFE] = 0; /*0x91fb83*/
      v9[0xFFFFFFFF] = 0; /*0x91fb87*/
      *v9 = 0; /*0x91fb8b*/
      v9[0xFFFFFFFE].m128_i32[0] = v15; /*0x91fb8e*/
      v17 = v7[3].m128_i32[2]; /*0x91fb91*/
      v9[0xFFFFFFFF].m128_i32[1] = v16; /*0x91fb94*/
      v9->m128_i32[2] = v17; /*0x91fb97*/
    }
    else
    {
      v18 = v7[7]; /*0x91fb9f*/
      v19 = v7[5]; /*0x91fba7*/
      v20 = v7[6]; /*0x91fbab*/
      v21 = _mm_shuffle_ps(v18, v18, 0x44); /*0x91fbb5*/
      v22 = _mm_shuffle_ps(v19, v20, 0x44); /*0x91fbdf*/
      *v8 = _mm_add_ps( /*0x91fc01*/
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v22, v21, 0x88), _mm_shuffle_ps(v7[2], v7[2], 0)),
                _mm_mul_ps(_mm_shuffle_ps(v22, v21, 0xDD), _mm_shuffle_ps(v7[2], v7[2], 0x55))),
              _mm_mul_ps(
                _mm_shuffle_ps(_mm_shuffle_ps(v19, v20, 0xEE), _mm_shuffle_ps(v18, v18, 0xEE), 0x88),
                _mm_shuffle_ps(v7[2], v7[2], 0xAA)));
      v23 = v7[3]; /*0x91fc04*/
      v51[0] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19); /*0x91fc12*/
      v51[1] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0x55), v20); /*0x91fc25*/
      v51[2] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xAA), v7[7]); /*0x91fc48*/
      sub_8D2B10(&v9[0xFFFFFFFE], v51, (int *)&v7[5]); /*0x91fc50*/
      sub_8D2830((int)&v9[0xFFFFFFFE]); /*0x91fc58*/
    }
    v7 = a6; /*0x91fc61*/
    v9 += 5; /*0x91fc64*/
    v8 += 2; /*0x91fc67*/
    --v43; /*0x91fc6b*/
  }
  while ( v43 ); /*0x91fc6f*/
  v24 = fabs(a1[1].m128_f32[0]); /*0x91fc7c*/
  v25 = 0; /*0x91fc7e*/
  v26 = fabs(a1[1].m128_f32[1]); /*0x91fc83*/
  v45 = a1[1]; /*0x91fc85*/
  v27 = 1; /*0x91fc91*/
  v28 = 2; /*0x91fc98*/
  v42 = fabs(a1[1].m128_f32[2]); /*0x91fc9d*/
  if ( v26 < v24 ) /*0x91fca8*/
  {
    v27 = 0; /*0x91fcac*/
    v44 = v26; /*0x91fc8a*/
    v24 = v44; /*0x91fcae*/
    v25 = 1; /*0x91fcb2*/
  }
  if ( v42 < v24 ) /*0x91fcc4*/
  {
    v28 = v25; /*0x91fcc6*/
    v25 = 2; /*0x91fcc8*/
  }
  v46[0].m128_i32[v25] = 0; /*0x91fccd*/
  v46[0].m128_i32[3] = 0; /*0x91fcd5*/
  v46[0].m128_i32[v27] = a1[1].m128_i32[v28]; /*0x91fcef*/
  v46[0].m128_f32[v28] = -a1[1].m128_f32[v27]; /*0x91fd01*/
  v29 = _mm_mul_ps(v46[0], v46[0]); /*0x91fd0d*/
  v30 = _mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]; /*0x91fd17*/
  v31 = _mm_shuffle_ps(v29, v29, 0xAA); /*0x91fd1e*/
  v32 = v31; /*0x91fd22*/
  v32.m128_f32[0] = v31.m128_f32[0] + v30; /*0x91fd2b*/
  v47 = v32; /*0x91fd2f*/
  v47.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0] + v30); /*0x91fd38*/
  v33 = (__m128)0x3F000000u; /*0x91fd57*/
  v33.m128_f32[0] = (float)(0.5 * v47.m128_f32[0]) /*0x91fd61*/
                  * (float)(3.0 - (float)((float)((float)(v31.m128_f32[0] + v30) * v47.m128_f32[0]) * v47.m128_f32[0]));
  v34 = a1[1]; /*0x91fd6f*/
  v46[0] = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v46[0]); /*0x91fd88*/
  v46[1] = _mm_sub_ps( /*0x91fdbd*/
             _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v46[0], v46[0], 0xD2)),
             _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v46[0], v46[0], 0xC9)));
  sub_94F6B0(v52, v54, &v45, v55); /*0x91fdc2*/
  v35 = sub_94FC90(v55, a2, &v48, v50); /*0x91fde0*/
  v36 = v48; /*0x91fde8*/
  *a7 = v35; /*0x91fdf0*/
  result = a5; /*0x91fdf2*/
  a5[1] = v36; /*0x91fdf8*/
  *(__m128 *)(*(_DWORD *)(a3 + 0x50) + 0xD0) = v36; /*0x91fdff*/
  *(__int128 *)(*(_DWORD *)(a3 + 0x50) + 0xE0) = v49; /*0x91fe11*/
  v38 = v50[0]; /*0x91fe18*/
  a6[1] = v50[0]; /*0x91fe29*/
  *(__m128 *)(*(_DWORD *)(a4 + 0x50) + 0xD0) = v38; /*0x91fe30*/
  *(__m128 *)(*(_DWORD *)(a4 + 0x50) + 0xE0) = v50[1]; /*0x91fe42*/
  v39 = (__m128 *)&v49; /*0x91fe49*/
  v40 = 2; /*0x91fe4d*/
  do /*0x91fe96*/
  {
    v41 = *v39; /*0x91fe57*/
    if ( !result->m128_i8[0xC] ) /*0x91fe52*/
      v41 = _mm_add_ps( /*0x91fe89*/
              _mm_add_ps(
                _mm_mul_ps(result[5], _mm_shuffle_ps(v41, v41, 0)),
                _mm_mul_ps(result[6], _mm_shuffle_ps(v41, v41, 0x55))),
              _mm_mul_ps(result[7], _mm_shuffle_ps(v41, v41, 0xAA)));
    v39 += 2; /*0x91fe8c*/
    --v40; /*0x91fe8f*/
    result[2] = v41; /*0x91fe90*/
    result = a6; /*0x91fe94*/
  }
  while ( v40 ); /*0x91fe96*/
  return result; /*0x91fe98*/
}
