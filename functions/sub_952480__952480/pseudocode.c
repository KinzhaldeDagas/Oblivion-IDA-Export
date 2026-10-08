signed int __thiscall sub_952480(_DWORD **this, __m128 *a2, _DWORD *a3)
{
  int v4; // edi
  __m128 *v5; // eax
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float v10; // xmm3_4
  __m128 v11; // xmm0
  __m128 *v12; // eax
  double v13; // st7
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  float v22; // xmm2_4
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 *v27; // esi
  __m128 v28; // xmm3
  int v30; // edx
  long double v31; // st7
  int v32; // ecx
  long double v33; // st6
  int v34; // edi
  double v35; // st7
  __int32 v36; // edx
  __m128 v37; // xmm1
  __m128 v38; // xmm0
  float v39; // xmm2_4
  __m128 v40; // xmm3
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 *v44; // esi
  __m128 v45; // xmm1
  __m128 v46; // xmm3
  __m128 v47; // xmm0
  char v48; // [esp+13h] [ebp-3Dh] BYREF
  float v49; // [esp+14h] [ebp-3Ch]
  float v50; // [esp+18h] [ebp-38h]
  float v51; // [esp+1Ch] [ebp-34h]
  float v52; // [esp+20h] [ebp-30h]
  float v53; // [esp+24h] [ebp-2Ch]
  float v54; // [esp+28h] [ebp-28h]
  float v55; // [esp+2Ch] [ebp-24h]
  __m128 v56; // [esp+30h] [ebp-20h] BYREF
  __m128 v57; // [esp+40h] [ebp-10h] BYREF

  v4 = 0xFFFFFFFF; /*0x952493*/
  switch ( **(this + 0x1B) ) /*0x9524a2*/
  {
    case 0: /*0x9524a2*/
      goto LABEL_14;
    case 1: /*0x9524a2*/
      goto LABEL_11;
    case 2: /*0x9524a2*/
      goto LABEL_8;
    case 3: /*0x9524a2*/
      goto LABEL_5;
    case 4: /*0x9524a2*/
      goto LABEL_2;
    default:
      JUMPOUT(0x9529C6); /*0x9529c6*/
  }
  while ( 1 ) /*0x9524a9*/
  {
LABEL_2:
    v5 = (__m128 *)*(this + 0x1A); /*0x9524a9*/
    v6 = _mm_sub_ps(*v5, v5[1]); /*0x9524b7*/
    v7 = _mm_sub_ps(v5[1], v5[2]); /*0x9524be*/
    v8 = _mm_sub_ps( /*0x9524e3*/
           _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
           _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
    v9 = _mm_mul_ps(v8, v8); /*0x9524e9*/
    v57 = v8; /*0x9524fa*/
    v10 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]); /*0x952506*/
    v11 = _mm_mul_ps(_mm_sub_ps(v5[3], *v5), v8); /*0x952514*/
    v49 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x952531*/
        + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
    v50 = v10; /*0x952541*/
    if ( v10 * *((float *)this + 0x14) < v49 * v49 ) /*0x952553*/
    {
      *a3 = 0; /*0x9529b5*/
      return 0; /*0x9529c3*/
    }
    if ( v4 >= 3 ) /*0x95255c*/
    {
LABEL_27:
      *a3 = 3; /*0x95299b*/
      return 1; /*0x9529af*/
    }
    --**(this + 0x1B); /*0x952565*/
LABEL_5:
    v12 = (__m128 *)*(this + 0x1A); /*0x952567*/
    v13 = *(float *)&SrcStr; /*0x95256a*/
    v14 = _mm_sub_ps(*v12, v12[1]); /*0x95257b*/
    v15 = _mm_sub_ps(v12[1], v12[2]); /*0x952582*/
    v16 = _mm_sub_ps( /*0x9525a7*/
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v15, v15, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v15, v15, 0xC9)));
    v17 = _mm_mul_ps(v16, v16); /*0x9525ad*/
    v51 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x9525ca*/
        + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    v57 = v16; /*0x9525d4*/
    if ( v51 == v13 ) /*0x9525de*/
      break; /*0x9525de*/
    v21 = _mm_mul_ps(v16, v16); /*0x9526bd*/
    v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]; /*0x9526c7*/
    v23 = _mm_shuffle_ps(v21, v21, 0xAA); /*0x9526ce*/
    v24 = v23; /*0x9526d2*/
    v24.m128_f32[0] = v23.m128_f32[0] + v22; /*0x9526d5*/
    v56 = v24; /*0x9526d9*/
    v56.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22); /*0x9526e2*/
    v54 = 3.0; /*0x9526f5*/
    v55 = 0.5; /*0x952707*/
    v25 = (__m128)0x3F000000u; /*0x95270f*/
    v25.m128_f32[0] = (float)(0.5 * v56.m128_f32[0]) /*0x952719*/
                    * (float)(3.0 - (float)((float)((float)(v23.m128_f32[0] + v22) * v56.m128_f32[0]) * v56.m128_f32[0]));
    v4 = 3; /*0x95272e*/
    v57 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v16); /*0x952733*/
    if ( sub_9523F0((int)this, &v57) == 1 ) /*0x952740*/
    {
      v26 = v57; /*0x952746*/
      a2[2].m128_i32[0] = 0; /*0x95274b*/
      *a2 = v26; /*0x952752*/
      sub_8D1700( /*0x95276b*/
        (__m128 *)&unk_BA7A40,
        (__m128 *)*(this + 0x1A),
        (__m128 *)*(this + 0x1A) + 1,
        (__m128 *)*(this + 0x1A) + 2,
        (int)&v56);
      v27 = (__m128 *)*(this + 0x18); /*0x952778*/
      v28 = v27[2]; /*0x95277f*/
      v55 = v56.m128_f32[2]; /*0x952797*/
      a2[1] = _mm_add_ps( /*0x9527cf*/
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps((__m128)v56.m128_u32[0], (__m128)v56.m128_u32[0], 0), *v27),
                  _mm_mul_ps(_mm_shuffle_ps((__m128)v56.m128_u32[1], (__m128)v56.m128_u32[1], 0), v27[1])),
                _mm_mul_ps(_mm_shuffle_ps((__m128)v56.m128_u32[2], (__m128)v56.m128_u32[2], 0), v28));
      a2[2].m128_i32[1] = 0x3F000000; /*0x9527d3*/
LABEL_20:
      *a3 = 0; /*0x9527da*/
      return 1; /*0x9527ee*/
    }
  }
  if ( v4 >= 2 ) /*0x9525e7*/
  {
    v30 = 0; /*0x952808*/
    a2[2].m128_i32[0] = 0; /*0x95280a*/
    v56 = _mm_sub_ps(*(__m128 *)*(this + 0x1A), *((__m128 *)*(this + 0x1A) + 1)); /*0x95281a*/
    v31 = fabs(v56.m128_f32[0]); /*0x952823*/
    v32 = 1; /*0x952825*/
    v33 = fabs(v56.m128_f32[1]); /*0x95282e*/
    v34 = 2; /*0x952830*/
    v55 = v33; /*0x952835*/
    v54 = fabs(v56.m128_f32[2]); /*0x95283f*/
    if ( v33 < v31 ) /*0x95284a*/
    {
      v32 = 0; /*0x95284e*/
      v31 = v55; /*0x952850*/
      v30 = 1; /*0x952854*/
    }
    if ( v54 < v31 ) /*0x952866*/
    {
      v34 = v30; /*0x952868*/
      v30 = 2; /*0x95286a*/
    }
    v35 = v56.m128_f32[v32]; /*0x95286f*/
    a2->m128_i32[v30] = 0; /*0x952873*/
    v36 = v56.m128_i32[v34]; /*0x95287a*/
    a2->m128_i32[3] = 0; /*0x952880*/
    a2->m128_i32[v32] = v36; /*0x952887*/
    a2->m128_f32[v34] = -v35; /*0x95288a*/
    v37 = *a2; /*0x95288d*/
    v38 = _mm_mul_ps(v37, v37); /*0x952893*/
    v39 = _mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0]; /*0x95289d*/
    v40 = _mm_shuffle_ps(v38, v38, 0xAA); /*0x9528a4*/
    v41 = v40; /*0x9528a8*/
    v41.m128_f32[0] = v40.m128_f32[0] + v39; /*0x9528ab*/
    v56 = v41; /*0x9528af*/
    v56.m128_f32[0] = 1.0 / fsqrt(v40.m128_f32[0] + v39); /*0x9528b8*/
    v55 = 0.5; /*0x9528dd*/
    v42 = (__m128)0x3F000000u; /*0x9528e5*/
    v42.m128_f32[0] = (float)(0.5 * v56.m128_f32[0]) /*0x9528ef*/
                    * (float)(3.0 - (float)((float)((float)(v40.m128_f32[0] + v39) * v56.m128_f32[0]) * v56.m128_f32[0]));
    *a2 = _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v37); /*0x9528fd*/
    v43 = _mm_and_ps(*(__m128 *)*(this + 0x1A), (__m128)xmmword_A372D0); /*0x95290d*/
    v55 = _mm_shuffle_ps(v43, v43, 0xAA).m128_f32[0] /*0x95292d*/
        + (float)(_mm_shuffle_ps(v43, v43, 0x55).m128_f32[0] + v43.m128_f32[0]);
    v49 = v55; /*0x952939*/
    v44 = (__m128 *)*(this + 0x18); /*0x952941*/
    v45 = v44[1]; /*0x952944*/
    v46 = (__m128)xmmword_A6DFE0; /*0x95294e*/
    v55 = v49 / (v55 + v49 + flt_AA3384); /*0x95295c*/
    v47 = _mm_shuffle_ps((__m128)LODWORD(v55), (__m128)LODWORD(v55), 0); /*0x952966*/
    a2[1] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v46, v47), *v44), _mm_mul_ps(v47, v45)); /*0x95297c*/
    a2[2].m128_i32[1] = 0x3F000000; /*0x952980*/
    *a3 = 0; /*0x952987*/
    return 1; /*0x95298d*/
  }
  else
  {
    --**(this + 0x1B); /*0x9525f0*/
    while ( 1 ) /*0x9525fc*/
    {
LABEL_8:
      v18 = _mm_sub_ps(*(__m128 *)*(this + 0x1A), *((__m128 *)*(this + 0x1A) + 1)); /*0x9525f2*/
      v19 = _mm_mul_ps(v18, v18); /*0x9525ff*/
      v52 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x95261c*/
          + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
      if ( v52 > (double)*((float *)this + 0x14) ) /*0x95262c*/
      {
        v4 = 2; /*0x9526ab*/
        sub_952190((__m128 **)this); /*0x9526b0*/
        goto LABEL_5; /*0x9526b5*/
      }
      if ( v4 >= 1 ) /*0x952631*/
        break; /*0x952631*/
      --**(this + 0x1B); /*0x95263a*/
LABEL_11:
      while ( 1 ) /*0x952642*/
      {
        v20 = _mm_mul_ps(*(__m128 *)*(this + 0x1A), *(__m128 *)*(this + 0x1A)); /*0x952642*/
        v53 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x95265f*/
            + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
        if ( v53 > (double)*((float *)this + 0x14) ) /*0x95266f*/
          break; /*0x95266f*/
        if ( v4 >= 0 ) /*0x952673*/
          goto LABEL_27; /*0x952673*/
        --**(this + 0x1B); /*0x95267c*/
LABEL_14:
        if ( *sub_951EE0((__m128 *)this, &v48, (int)a2) ) /*0x95268b*/
          goto LABEL_20; /*0x95268e*/
        v4 = 0; /*0x952694*/
      }
      v4 = 1; /*0x95269a*/
      sub_952050((int)this); /*0x95269f*/
    }
    *a3 = 3; /*0x9527f4*/
    return 1; /*0x9527fa*/
  }
}
