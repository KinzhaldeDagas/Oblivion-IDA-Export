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

  v4 = a2;
  if ( this )
    v5 = *(this + 2);
  else
    v5 = 0;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v9 = a3[3];
  v10 = v5 + 1;
  for ( i = 2; i > 0; --i )
  {
    *(__m128 *)((char *)v10 + (char *)&v47 - (char *)&v5[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0x55), v7),
                                                                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0), v6)),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0xAA), v8),
                                                                   v9));
    ++v10;
  }
  sub_8D1CD0(a2, &v47, &v48, &v49);
  v36 = a2->m128_f32[3] + v5->m128_f32[3];
  v50 = _mm_sub_ps(*a2, v49);
  v12 = _mm_mul_ps(v50, v50);
  v13 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  v45.m128_f32[0] = v13;
  v14 = v36;
  v46 = v12;
  v43 = v36;
  v37 = v36 * v36;
  if ( v37 <= (double)v13 )
    return 0;
  if ( v13 <= 0.0 )
  {
    v21 = v14;
    v38 = 0.0;
    v46 = _mm_sub_ps(v48, v47);
    v39 = fabs(v46.m128_f32[0]);
    v22 = 0;
    v45 = a4[1];
    v23 = 1;
    v24 = 2;
    v40 = fabs(v46.m128_f32[1]);
    v44 = v40;
    v41 = fabs(v46.m128_f32[2]);
    if ( v39 > (double)v44 )
    {
      v39 = v44;
      v23 = 0;
      v22 = 1;
    }
    if ( v39 > (double)v41 )
    {
      v24 = v22;
      v22 = 2;
    }
    v25 = *(float *)&dword_A46C30;
    v45.m128_f32[v22] = 0.0;
    v45.m128_f32[3] = 0.0;
    v26 = v25;
    v27 = flt_A3D65C;
    v45.m128_f32[v23] = v46.m128_f32[v24];
    v45.m128_f32[v24] = -v46.m128_f32[v23];
    v4 = a2;
    v28 = a4[1].m128_f32[3];
    v29 = _mm_mul_ps(v45, v45);
    v29.m128_f32[0] = _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]);
    v30 = 1.0 / fsqrt(v29.m128_f32[0]);
    v31 = v26 - (float)((float)(v29.m128_f32[0] * v30) * v30);
    v32 = 0;
    v32.m128_f32[0] = (float)(v27 * v30) * v31;
    a4[1] = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v45);
    a4[1].m128_f32[3] = v28;
  }
  else
  {
    v38 = sqrt(v13);
    v16 = a4[1].m128_f32[3];
    v17 = _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]);
    v18 = 1.0 / fsqrt(v17);
    v19 = *(float *)&dword_A46C30 - (float)((float)(v17 * v18) * v18);
    v20 = 0;
    v20.m128_f32[0] = (float)(flt_A3D65C * v18) * v19;
    a4[1] = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v50);
    a4[1].m128_f32[3] = v16;
    v21 = v43;
  }
  v33 = 0;
  v42 = v5->m128_f32[3] - v38;
  v33.m128_f32[0] = v42;
  v34 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), a4[1]);
  v35 = *v4;
  a4[1].m128_f32[3] = v38 - v21;
  *a4 = _mm_add_ps(v34, v35);
  return 1;
}
