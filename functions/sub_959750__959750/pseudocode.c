__m128 *__cdecl sub_959750(int *a1, int *a2, __m128 *a3, __m128 *a4, __int128 *a5, __m128 *a6)
{
  __int32 v6; // edx
  double v7; // st7
  float v8; // xmm6_4
  int v9; // ecx
  int v10; // edx
  long double v11; // st6
  int v12; // edi
  long double v13; // st5
  double v14; // st6
  __int32 v15; // eax
  __m128 v16; // xmm0
  float v17; // xmm1_4
  float v18; // xmm3_4
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm2
  __m128 v24; // xmm0
  float v25; // xmm5_4
  __m128 v26; // xmm7
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  double v31; // st7
  __int128 v32; // xmm1
  __m128 v34; // xmm1
  __int32 *v35; // [esp+18h] [ebp-E8h]
  float v36; // [esp+18h] [ebp-E8h]
  float v37; // [esp+1Ch] [ebp-E4h]
  unsigned int v38; // [esp+1Ch] [ebp-E4h]
  __m128 v39; // [esp+20h] [ebp-E0h] BYREF
  __m128 v40; // [esp+30h] [ebp-D0h]
  __int128 v41; // [esp+40h] [ebp-C0h]
  __m128 v42; // [esp+50h] [ebp-B0h]
  __m128 v43; // [esp+60h] [ebp-A0h] BYREF
  __int128 v44; // [esp+70h] [ebp-90h]
  __m128 v45; // [esp+80h] [ebp-80h]
  __m128 v46; // [esp+90h] [ebp-70h]
  __m128 v47; // [esp+A0h] [ebp-60h]
  __int128 v48; // [esp+B0h] [ebp-50h]
  __m128 v49; // [esp+C0h] [ebp-40h] BYREF
  __m128 v50; // [esp+D0h] [ebp-30h] BYREF
  __m128 v51; // [esp+E0h] [ebp-20h] BYREF
  __m128 v52; // [esp+F0h] [ebp-10h] BYREF

  v42.m128_i32[3] = 0xFF7FFFFF; /*0x959765*/
  v35 = (__int32 *)xmmword_B2F090; /*0x95976d*/
  do /*0x959848*/
  {
    v6 = v35[1]; /*0x95977b*/
    v39.m128_i32[0] = *v35; /*0x95977e*/
    *(unsigned __int64 *)((char *)v39.m128_u64 + 4) = __PAIR64__(v35[2], v6); /*0x959785*/
    v39.m128_i32[3] = v35[3]; /*0x95979d*/
    sub_959630(a1, &v43, a3, a2, &v39); /*0x9597a1*/
    if ( v45.m128_f32[3] > (double)v42.m128_f32[3] ) /*0x9597b9*/
    {
      v40 = v43; /*0x9597c0*/
      v41 = v44; /*0x9597ca*/
      v42 = v45; /*0x9597d7*/
    }
    v39 = _mm_xor_ps(v39, (__m128)xmmword_A965C0); /*0x9597f8*/
    sub_959630(a1, &v43, a3, a2, &v39); /*0x9597fd*/
    if ( v45.m128_f32[3] > (double)v42.m128_f32[3] ) /*0x959815*/
    {
      v40 = v43; /*0x95981c*/
      v41 = v44; /*0x959826*/
      v42 = v45; /*0x959833*/
    }
    v35 += 4; /*0x959844*/
  }
  while ( (int)v35 < (int)dword_B2F0C0 ); /*0x959848*/
  v7 = fConstant_1; /*0x95984e*/
  v8 = 3.0; /*0x95985c*/
  v48 = 0x40400000u; /*0x959870*/
  v47 = (__m128)0x3F000000u; /*0x959878*/
  while ( 1 ) /*0x959890*/
  {
    v7 = v7 * flt_A65520; /*0x959890*/
    v9 = 0; /*0x959896*/
    v10 = 1; /*0x95989c*/
    v11 = fabs(v42.m128_f32[0]); /*0x9598a1*/
    v12 = 2; /*0x9598a3*/
    v13 = fabs(v42.m128_f32[1]); /*0x9598ac*/
    v37 = fabs(v42.m128_f32[2]); /*0x9598b8*/
    if ( v13 < v11 ) /*0x9598c3*/
    {
      v10 = 0; /*0x9598c7*/
      v36 = v13; /*0x9598ae*/
      v11 = v36; /*0x9598c9*/
      v9 = 1; /*0x9598cd*/
    }
    if ( v37 < v11 ) /*0x9598df*/
    {
      v12 = v9; /*0x9598e1*/
      v9 = 2; /*0x9598e3*/
    }
    v14 = v42.m128_f32[v10]; /*0x9598e8*/
    v15 = v42.m128_i32[v12]; /*0x9598ec*/
    v39.m128_i32[v9] = 0; /*0x9598f0*/
    v39.m128_i32[3] = 0; /*0x9598fa*/
    v39.m128_i32[v10] = v15; /*0x959902*/
    v39.m128_f32[v12] = -v14; /*0x959906*/
    *(float *)&v38 = v7; /*0x959912*/
    v16 = _mm_mul_ps(v39, v39); /*0x959916*/
    v16.m128_f32[0] = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x95992e*/
                    + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
    v17 = 1.0 / fsqrt(v16.m128_f32[0]); /*0x959947*/
    v18 = v8 - (float)((float)(v16.m128_f32[0] * v17) * v17); /*0x95995a*/
    v19 = v47; /*0x95995e*/
    v19.m128_f32[0] = (float)(v47.m128_f32[0] * v17) * v18; /*0x95996a*/
    v20 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v39); /*0x959978*/
    v21 = _mm_mul_ps(_mm_shuffle_ps((__m128)v38, (__m128)v38, 0), v20); /*0x95999e*/
    v22 = _mm_mul_ps( /*0x9599c2*/
            _mm_shuffle_ps((__m128)v38, (__m128)v38, 0),
            _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xC9), _mm_shuffle_ps(v20, v20, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xD2), _mm_shuffle_ps(v20, v20, 0xC9))));
    v23 = _mm_add_ps(v42, v21); /*0x9599c8*/
    v24 = _mm_mul_ps(v23, v23); /*0x9599ce*/
    v25 = _mm_shuffle_ps(v24, v24, 0x55).m128_f32[0] + v24.m128_f32[0]; /*0x9599d8*/
    v26 = _mm_shuffle_ps(v24, v24, 0xAA); /*0x9599df*/
    v27 = v26; /*0x9599e3*/
    v27.m128_f32[0] = v26.m128_f32[0] + v25; /*0x9599e6*/
    v46 = v27; /*0x9599ea*/
    v46.m128_f32[0] = 1.0 / fsqrt(v26.m128_f32[0] + v25); /*0x9599f6*/
    v28 = v47; /*0x959a13*/
    v28.m128_f32[0] = (float)(v47.m128_f32[0] * v46.m128_f32[0]) /*0x959a1f*/
                    * (float)(v8 - (float)((float)((float)(v26.m128_f32[0] + v25) * v46.m128_f32[0]) * v46.m128_f32[0]));
    v29 = _mm_shuffle_ps(v28, v28, 0); /*0x959a23*/
    v39 = v21; /*0x959a2d*/
    v50 = _mm_mul_ps(v29, v23); /*0x959a32*/
    v52 = _mm_mul_ps(v29, _mm_sub_ps(v42, v21)); /*0x959a4d*/
    v51 = _mm_mul_ps(v29, _mm_add_ps(v42, v22)); /*0x959a70*/
    v49 = _mm_mul_ps(v29, _mm_sub_ps(v42, v22)); /*0x959a78*/
    sub_959630(a1, &v43, a3, a2, &v50); /*0x959a80*/
    if ( v45.m128_f32[3] > (double)v42.m128_f32[3] /*0x959b31*/
      || (sub_959630(a1, &v43, a3, a2, &v52), v45.m128_f32[3] > (double)v42.m128_f32[3])
      || (sub_959630(a1, &v43, a3, a2, &v51), v45.m128_f32[3] > (double)v42.m128_f32[3])
      || (sub_959630(a1, &v43, a3, a2, &v49), v45.m128_f32[3] > (double)v42.m128_f32[3]) )
    {
      v40 = v43; /*0x959ac5*/
      v41 = v44; /*0x959acf*/
      v42 = v45; /*0x959adc*/
    }
    else
    {
      v7 = v7 * kHeadBodyNormalMatchRadius; /*0x959b33*/
    }
    if ( v7 <= flt_A37080 ) /*0x959b44*/
      break; /*0x959b44*/
    v8 = *(float *)&v48; /*0x959882*/
  }
  v30 = v40; /*0x959b4f*/
  v31 = v42.m128_f32[3]; /*0x959b54*/
  v32 = v41; /*0x959b5b*/
  *a4 = v40; /*0x959b60*/
  *a5 = v32; /*0x959b63*/
  v34 = v42; /*0x959b69*/
  a6[2].m128_f32[0] = v31; /*0x959b6e*/
  *a6 = v34; /*0x959b73*/
  a6[1] = v30; /*0x959b76*/
  a6[2].m128_i32[1] = 0x3F000000; /*0x959b7a*/
  return a6; /*0x959b71*/
}
