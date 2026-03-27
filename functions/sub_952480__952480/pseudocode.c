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

  v4 = 0xFFFFFFFF;
  switch ( **(this + 0x1B) )
  {
    case 0:
      goto LABEL_14;
    case 1:
      goto LABEL_11;
    case 2:
      goto LABEL_8;
    case 3:
      goto LABEL_5;
    case 4:
      goto LABEL_2;
    default:
      JUMPOUT(0x9529C6);
  }
  while ( 1 )
  {
LABEL_2:
    v5 = (__m128 *)*(this + 0x1A);
    v6 = _mm_sub_ps(*v5, v5[1]);
    v7 = _mm_sub_ps(v5[1], v5[2]);
    v8 = _mm_sub_ps(
           _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
           _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0xD2), _mm_shuffle_ps(v7, v7, 0xC9)));
    v9 = _mm_mul_ps(v8, v8);
    v57 = v8;
    v10 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
    v11 = _mm_mul_ps(_mm_sub_ps(v5[3], *v5), v8);
    v49 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
    v50 = v10;
    if ( v10 * *((float *)this + 0x14) < v49 * v49 )
    {
      *a3 = 0;
      return 0;
    }
    if ( v4 >= 3 )
    {
LABEL_27:
      *a3 = 3;
      return 1;
    }
    --**(this + 0x1B);
LABEL_5:
    v12 = (__m128 *)*(this + 0x1A);
    v13 = *(float *)&SrcStr;
    v14 = _mm_sub_ps(*v12, v12[1]);
    v15 = _mm_sub_ps(v12[1], v12[2]);
    v16 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v15, v15, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v15, v15, 0xC9)));
    v17 = _mm_mul_ps(v16, v16);
    v51 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    v57 = v16;
    if ( v51 == v13 )
      break;
    v21 = _mm_mul_ps(v16, v16);
    v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0];
    v23 = _mm_shuffle_ps(v21, v21, 0xAA);
    v24 = v23;
    v24.m128_f32[0] = v23.m128_f32[0] + v22;
    v56 = v24;
    v56.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22);
    v54 = 3.0;
    v55 = 0.5;
    v25 = (__m128)0x3F000000u;
    v25.m128_f32[0] = (float)(0.5 * v56.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v23.m128_f32[0] + v22) * v56.m128_f32[0]) * v56.m128_f32[0]));
    v4 = 3;
    v57 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v16);
    if ( sub_9523F0((int)this, &v57) == 1 )
    {
      v26 = v57;
      a2[2].m128_i32[0] = 0;
      *a2 = v26;
      sub_8D1700(
        (__m128 *)&stru_BA7A40,
        (__m128 *)*(this + 0x1A),
        (__m128 *)*(this + 0x1A) + 1,
        (__m128 *)*(this + 0x1A) + 2,
        (int)&v56);
      v27 = (__m128 *)*(this + 0x18);
      v28 = v27[2];
      v55 = v56.m128_f32[2];
      a2[1] = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps((__m128)v56.m128_u32[0], (__m128)v56.m128_u32[0], 0), *v27),
                  _mm_mul_ps(_mm_shuffle_ps((__m128)v56.m128_u32[1], (__m128)v56.m128_u32[1], 0), v27[1])),
                _mm_mul_ps(_mm_shuffle_ps((__m128)v56.m128_u32[2], (__m128)v56.m128_u32[2], 0), v28));
      a2[2].m128_i32[1] = 0x3F000000;
LABEL_20:
      *a3 = 0;
      return 1;
    }
  }
  if ( v4 >= 2 )
  {
    v30 = 0;
    a2[2].m128_i32[0] = 0;
    v56 = _mm_sub_ps(*(__m128 *)*(this + 0x1A), *((__m128 *)*(this + 0x1A) + 1));
    v31 = fabs(v56.m128_f32[0]);
    v32 = 1;
    v33 = fabs(v56.m128_f32[1]);
    v34 = 2;
    v55 = v33;
    v54 = fabs(v56.m128_f32[2]);
    if ( v33 < v31 )
    {
      v32 = 0;
      v31 = v55;
      v30 = 1;
    }
    if ( v54 < v31 )
    {
      v34 = v30;
      v30 = 2;
    }
    v35 = v56.m128_f32[v32];
    a2->m128_i32[v30] = 0;
    v36 = v56.m128_i32[v34];
    a2->m128_i32[3] = 0;
    a2->m128_i32[v32] = v36;
    a2->m128_f32[v34] = -v35;
    v37 = *a2;
    v38 = _mm_mul_ps(v37, v37);
    v39 = _mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0];
    v40 = _mm_shuffle_ps(v38, v38, 0xAA);
    v41 = v40;
    v41.m128_f32[0] = v40.m128_f32[0] + v39;
    v56 = v41;
    v56.m128_f32[0] = 1.0 / fsqrt(v40.m128_f32[0] + v39);
    v55 = 0.5;
    v42 = (__m128)0x3F000000u;
    v42.m128_f32[0] = (float)(0.5 * v56.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v40.m128_f32[0] + v39) * v56.m128_f32[0]) * v56.m128_f32[0]));
    *a2 = _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v37);
    v43 = _mm_and_ps(*(__m128 *)*(this + 0x1A), (__m128)xmmword_A372D0);
    v55 = _mm_shuffle_ps(v43, v43, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v43, v43, 0x55).m128_f32[0] + v43.m128_f32[0]);
    v49 = v55;
    v44 = (__m128 *)*(this + 0x18);
    v45 = v44[1];
    v46 = (__m128)xmmword_A6DFE0;
    v55 = v49 / (v55 + v49 + flt_AA3384);
    v47 = _mm_shuffle_ps((__m128)LODWORD(v55), (__m128)LODWORD(v55), 0);
    a2[1] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v46, v47), *v44), _mm_mul_ps(v47, v45));
    a2[2].m128_i32[1] = 0x3F000000;
    *a3 = 0;
    return 1;
  }
  else
  {
    --**(this + 0x1B);
    while ( 1 )
    {
LABEL_8:
      v18 = _mm_sub_ps(*(__m128 *)*(this + 0x1A), *((__m128 *)*(this + 0x1A) + 1));
      v19 = _mm_mul_ps(v18, v18);
      v52 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
      if ( v52 > (double)*((float *)this + 0x14) )
      {
        v4 = 2;
        sub_952190((__m128 **)this);
        goto LABEL_5;
      }
      if ( v4 >= 1 )
        break;
      --**(this + 0x1B);
LABEL_11:
      while ( 1 )
      {
        v20 = _mm_mul_ps(*(__m128 *)*(this + 0x1A), *(__m128 *)*(this + 0x1A));
        v53 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
        if ( v53 > (double)*((float *)this + 0x14) )
          break;
        if ( v4 >= 0 )
          goto LABEL_27;
        --**(this + 0x1B);
LABEL_14:
        if ( *sub_951EE0((__m128 *)this, &v48, (int)a2) )
          goto LABEL_20;
        v4 = 0;
      }
      v4 = 1;
      sub_952050((int)this);
    }
    *a3 = 3;
    return 1;
  }
}
