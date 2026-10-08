__m128 *__cdecl sub_94F6B0(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 *v4; // edx
  double v5; // st7
  __m128 *result; // eax
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 *v10; // esi
  int v11; // ebx
  double v12; // st7
  double v13; // st7
  double v14; // st7
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 *v18; // esi
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  double v22; // st7
  double v23; // st7
  double v24; // st7
  bool v25; // zf
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __m128 v28; // xmm6
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm5
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  __m128 v35; // xmm5
  __m128 v36; // xmm2
  __m128 v37; // xmm5
  __m128 v38; // xmm0
  float v39; // xmm7_4
  __m128 v40; // xmm3
  __m128 v41; // xmm0
  __m128 v42; // xmm4
  __m128 v43; // xmm2
  __m128 v44; // xmm0
  __m128 v45; // xmm3
  __m128 v46; // xmm1
  char v47[4]; // [esp+4h] [ebp-60h] BYREF
  int v48; // [esp+8h] [ebp-5Ch]
  int v49; // [esp+Ch] [ebp-58h]
  int v50; // [esp+10h] [ebp-54h]
  __m128 v51; // [esp+14h] [ebp-50h]
  __m128 v52; // [esp+24h] [ebp-40h]
  __m128 v53; // [esp+34h] [ebp-30h]
  __m128 v54; // [esp+44h] [ebp-20h]
  __m128 v55; // [esp+54h] [ebp-10h]

  v4 = a1; /*0x94f6bc*/
  v5 = a1[4].m128_f32[0] + a2[4].m128_f32[0]; /*0x94f6c5*/
  a4[0x11] = 0; /*0x94f6cb*/
  a4[0x12] = 0; /*0x94f6d2*/
  a4[0x13] = 0; /*0x94f6d9*/
  a4[0x11].m128_f32[0] = v5; /*0x94f6e0*/
  a4[0x12].m128_f32[1] = v5; /*0x94f6e6*/
  a4[0x13].m128_f32[2] = v5; /*0x94f6ee*/
  a4[0xE] = *a3; /*0x94f6fb*/
  a4[0xF] = a3[1]; /*0x94f708*/
  a4[0x10] = a3[2]; /*0x94f715*/
  result = a4; /*0x94f71c*/
  v48 = -(int)a4; /*0x94f71e*/
  v50 = 2; /*0x94f722*/
  do /*0x94f900*/
  {
    *result = _mm_sub_ps( /*0x94f75b*/
                _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xC9), _mm_shuffle_ps(*a3, *a3, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xD2), _mm_shuffle_ps(*a3, *a3, 0xC9)));
    result[1] = _mm_sub_ps( /*0x94f78a*/
                  _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xC9), _mm_shuffle_ps(a3[1], a3[1], 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xD2), _mm_shuffle_ps(a3[1], a3[1], 0xC9)));
    result[2] = _mm_sub_ps( /*0x94f7ba*/
                  _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xC9), _mm_shuffle_ps(a3[2], a3[2], 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(*v4, *v4, 0xD2), _mm_shuffle_ps(a3[2], a3[2], 0xC9)));
    v7 = v4[1]; /*0x94f7be*/
    v8 = v4[2]; /*0x94f7c2*/
    v9 = v4[3]; /*0x94f7c6*/
    v10 = result; /*0x94f7ca*/
    v11 = 3; /*0x94f7cc*/
    do /*0x94f809*/
    {
      v10[3] = _mm_add_ps( /*0x94f801*/
                 _mm_add_ps(
                   _mm_mul_ps(v7, _mm_shuffle_ps(*v10, *v10, 0)),
                   _mm_mul_ps(v8, _mm_shuffle_ps(*v10, *v10, 0x55))),
                 _mm_mul_ps(v9, _mm_shuffle_ps(*v10, *v10, 0xAA)));
      ++v10; /*0x94f805*/
      --v11; /*0x94f808*/
    }
    while ( v11 ); /*0x94f809*/
    v12 = result[1].m128_f32[0]; /*0x94f80e*/
    result[1].m128_i32[0] = result->m128_i32[1]; /*0x94f811*/
    result->m128_f32[1] = v12; /*0x94f814*/
    v13 = result[2].m128_f32[0]; /*0x94f81a*/
    result[2].m128_i32[0] = result->m128_i32[2]; /*0x94f81d*/
    result->m128_f32[2] = v13; /*0x94f820*/
    v14 = result[2].m128_f32[1]; /*0x94f826*/
    result[2].m128_i32[1] = result[1].m128_i32[2]; /*0x94f829*/
    result[1].m128_f32[2] = v14; /*0x94f82c*/
    v15 = *result; /*0x94f82f*/
    v16 = result[1]; /*0x94f832*/
    v17 = result[2]; /*0x94f836*/
    v18 = result + 3; /*0x94f83a*/
    v49 = 3; /*0x94f83d*/
    do /*0x94f88d*/
    {
      *(__m128 *)&v47[v48 + (_DWORD)v18] = _mm_add_ps( /*0x94f87d*/
                                             _mm_add_ps(
                                               _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0)),
                                               _mm_mul_ps(v16, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                             _mm_mul_ps(v17, _mm_shuffle_ps(*v18, *v18, 0xAA)));
      ++v18; /*0x94f885*/
      --v49; /*0x94f889*/
    }
    while ( v49 ); /*0x94f88d*/
    v19 = v54; /*0x94f89e*/
    a4[0x11] = _mm_add_ps(a4[0x11], v53); /*0x94f8a3*/
    v20 = _mm_add_ps(a4[0x12], v19); /*0x94f8b1*/
    v21 = v55; /*0x94f8b4*/
    a4[0x12] = v20; /*0x94f8b9*/
    a4[0x13] = _mm_add_ps(a4[0x13], v21); /*0x94f8ca*/
    v22 = v4[4].m128_f32[0]; /*0x94f8d1*/
    result[6].m128_f32[0] = v4[4].m128_f32[0]; /*0x94f8d4*/
    v23 = v22 + flt_AA2F0C; /*0x94f8db*/
    v4 = a2; /*0x94f8e1*/
    v48 -= 0x70; /*0x94f8e7*/
    v24 = fConstant_1 / v23; /*0x94f8eb*/
    result += 7; /*0x94f8f5*/
    v25 = v50-- == 1; /*0x94f8f8*/
    result[0xFFFFFFFF].m128_f32[1] = v24; /*0x94f8fd*/
  }
  while ( !v25 ); /*0x94f900*/
  v26 = a4[0x13]; /*0x94f906*/
  v27 = a4[0x12]; /*0x94f90d*/
  v28 = v27; /*0x94f914*/
  v29 = v26; /*0x94f91b*/
  v30 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xD2), _mm_shuffle_ps(v26, v26, 0xC9)); /*0x94f930*/
  v31 = _mm_shuffle_ps(v26, v26, 0xD2); /*0x94f936*/
  v32 = _mm_shuffle_ps(v27, v27, 0xC9); /*0x94f948*/
  v33 = a4[0x11]; /*0x94f94b*/
  v34 = _mm_shuffle_ps(v33, v33, 0xD2); /*0x94f955*/
  v35 = _mm_mul_ps(v32, v31); /*0x94f959*/
  v36 = _mm_shuffle_ps(v33, v33, 0xC9); /*0x94f95f*/
  v37 = _mm_sub_ps(v35, v30); /*0x94f967*/
  v38 = _mm_mul_ps(v33, v37); /*0x94f96a*/
  v51 = _mm_shuffle_ps(v28, v28, 0xC9); /*0x94f96d*/
  v52 = _mm_shuffle_ps(v28, v28, 0xD2); /*0x94f97d*/
  v39 = _mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0] /*0x94f989*/
      + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0]);
  v40 = _mm_shuffle_ps(v29, v29, 0xC9); /*0x94f9a2*/
  v50 = 0x3F800000; /*0x94f9a9*/
  v41 = (__m128)0x3F800000u; /*0x94f9b1*/
  v41.m128_f32[0] = 1.0 / (float)(v39 + 1.6940659e-21); /*0x94f9b7*/
  v42 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), v36); /*0x94f9bf*/
  v43 = _mm_mul_ps(v36, v52); /*0x94f9c2*/
  v44 = _mm_shuffle_ps(v41, v41, 0); /*0x94f9c7*/
  v45 = _mm_mul_ps(v40, v34); /*0x94f9cb*/
  v46 = _mm_mul_ps(v34, v51); /*0x94f9ce*/
  a4[0x14] = _mm_mul_ps(v44, v37); /*0x94f9df*/
  a4[0x15] = _mm_mul_ps(v44, _mm_sub_ps(v45, v42)); /*0x94f9e9*/
  a4[0x16] = _mm_mul_ps(v44, _mm_sub_ps(v43, v46)); /*0x94f9f6*/
  a4[0x11].m128_f32[3] = fConstant_1 / (a4[0x11].m128_f32[0] + flt_AA2F0C); /*0x94fa12*/
  a4[0x12].m128_f32[3] = fConstant_1 /*0x94fa3e*/
                       / (a4[0x13].m128_f32[2] * a4[0x12].m128_f32[1]
                        - a4[0x13].m128_f32[1] * a4[0x12].m128_f32[2]
                        + flt_AA2F0C);
  return result; /*0x94fa44*/
}
