char __thiscall sub_8B6DC0(__m128 **this, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 *v4; // edi
  __m128 *v5; // ebx
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 *v10; // eax
  int i; // ecx
  __m128 v12; // xmm0
  float v13; // xmm2_4
  double v14; // st5
  double v16; // st7
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  __m128 v20; // xmm0
  double v21; // st7
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  double v28; // st6
  __m128 v29; // xmm0
  float v30; // xmm1_4
  float v31; // xmm3_4
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  __m128 v35; // xmm0
  float v36; // [esp+18h] [ebp-88h]
  float v37; // [esp+18h] [ebp-88h]
  float v38; // [esp+18h] [ebp-88h]
  float v39; // [esp+1Ch] [ebp-84h]
  float v40; // [esp+20h] [ebp-80h]
  float v41; // [esp+20h] [ebp-80h]
  float v42; // [esp+24h] [ebp-7Ch]
  double v43; // [esp+28h] [ebp-78h]
  float v44; // [esp+28h] [ebp-78h]
  __m128 v45; // [esp+30h] [ebp-70h]
  __m128 v46; // [esp+40h] [ebp-60h]
  __m128 v47; // [esp+50h] [ebp-50h] BYREF
  __m128 v48; // [esp+60h] [ebp-40h] BYREF
  __m128 v49; // [esp+70h] [ebp-30h] BYREF
  __m128 v50; // [esp+80h] [ebp-20h]

  v4 = a2; /*0x8b6de5*/
  if ( this ) /*0x8b6dec*/
    v5 = *(this + 2); /*0x8b6dee*/
  else
    v5 = 0; /*0x8b6df3*/
  v6 = *a3; /*0x8b6df5*/
  v7 = a3[1]; /*0x8b6df8*/
  v8 = a3[2]; /*0x8b6dfc*/
  v9 = a3[3]; /*0x8b6e00*/
  v10 = v5 + 1; /*0x8b6e04*/
  for ( i = 2; i > 0; --i ) /*0x8b6e0b*/
  {
    *(__m128 *)((char *)v10 + (char *)&v47 - (char *)&v5[1]) = _mm_add_ps( /*0x8b6e3c*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0x55), v7),
                                                                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0), v6)),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0xAA), v8),
                                                                   v9));
    ++v10; /*0x8b6e43*/
  }
  sub_8D1CD0(a2, &v47, &v48, &v49); /*0x8b6e5a*/
  v36 = a2->m128_f32[3] + v5->m128_f32[3]; /*0x8b6e73*/
  v50 = _mm_sub_ps(*a2, v49); /*0x8b6e77*/
  v12 = _mm_mul_ps(v50, v50); /*0x8b6e7f*/
  v13 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x8b6e94*/
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  v45.m128_f32[0] = v13; /*0x8b6e98*/
  v14 = v36; /*0x8b6ea7*/
  v46 = v12; /*0x8b6eab*/
  v43 = v36; /*0x8b6eb0*/
  v37 = v36 * v36; /*0x8b6eb8*/
  if ( v37 <= (double)v13 ) /*0x8b6ec7*/
    return 0; /*0x8b6ecb*/
  if ( v13 <= 0.0 ) /*0x8b6ef3*/
  {
    v21 = v14; /*0x8b6f95*/
    v38 = 0.0; /*0x8b6f97*/
    v46 = _mm_sub_ps(v48, v47); /*0x8b6f9e*/
    v39 = fabs(v46.m128_f32[0]); /*0x8b6fad*/
    v22 = 0; /*0x8b6fb1*/
    v45 = a4[1]; /*0x8b6fb7*/
    v23 = 1; /*0x8b6fc0*/
    v24 = 2; /*0x8b6fc9*/
    v40 = fabs(v46.m128_f32[1]); /*0x8b6fd0*/
    v44 = v40; /*0x8b6fd8*/
    v41 = fabs(v46.m128_f32[2]); /*0x8b6fe2*/
    if ( v39 > (double)v44 ) /*0x8b6ffd*/
    {
      v39 = v44; /*0x8b6fff*/
      v23 = 0; /*0x8b7003*/
      v22 = 1; /*0x8b7005*/
    }
    if ( v39 > (double)v41 ) /*0x8b701d*/
    {
      v24 = v22; /*0x8b701f*/
      v22 = 2; /*0x8b7021*/
    }
    v25 = *(float *)&dword_A46C30; /*0x8b7026*/
    v45.m128_f32[v22] = 0.0; /*0x8b702e*/
    v45.m128_f32[3] = 0.0; /*0x8b7032*/
    v26 = v25; /*0x8b703d*/
    v27 = kHeadBodyNormalMatchRadius; /*0x8b7041*/
    v45.m128_f32[v23] = v46.m128_f32[v24]; /*0x8b7049*/
    v45.m128_f32[v24] = -v46.m128_f32[v23]; /*0x8b7053*/
    v4 = a2; /*0x8b705f*/
    v28 = a4[1].m128_f32[3]; /*0x8b706a*/
    v29 = _mm_mul_ps(v45, v45); /*0x8b706e*/
    v29.m128_f32[0] = _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0] /*0x8b7080*/
                    + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]);
    v30 = 1.0 / fsqrt(v29.m128_f32[0]); /*0x8b7087*/
    v31 = v26 - (float)((float)(v29.m128_f32[0] * v30) * v30); /*0x8b7093*/
    v32 = 0; /*0x8b7097*/
    v32.m128_f32[0] = (float)(v27 * v30) * v31; /*0x8b70a2*/
    a4[1] = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v45); /*0x8b70ad*/
    a4[1].m128_f32[3] = v28; /*0x8b70b1*/
  }
  else
  {
    v38 = sqrt(v13); /*0x8b6f02*/
    v16 = a4[1].m128_f32[3]; /*0x8b6f29*/
    v17 = _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0] /*0x8b6f35*/
        + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]);
    v18 = 1.0 / fsqrt(v17); /*0x8b6f3c*/
    v19 = *(float *)&dword_A46C30 - (float)((float)(v17 * v18) * v18); /*0x8b6f57*/
    v20 = 0; /*0x8b6f5b*/
    v20.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v18) * v19; /*0x8b6f66*/
    a4[1] = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v50); /*0x8b6f79*/
    a4[1].m128_f32[3] = v16; /*0x8b6f7d*/
    v21 = v43; /*0x8b6f80*/
  }
  v33 = 0; /*0x8b70c2*/
  v42 = v5->m128_f32[3] - v38; /*0x8b70c9*/
  v33.m128_f32[0] = v42; /*0x8b70d3*/
  v34 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), a4[1]); /*0x8b70e4*/
  v35 = *v4; /*0x8b70e7*/
  a4[1].m128_f32[3] = v38 - v21; /*0x8b70ea*/
  *a4 = _mm_add_ps(v34, v35); /*0x8b70f1*/
  return 1; /*0x8b6ed1*/
}
