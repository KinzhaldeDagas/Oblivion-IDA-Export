void __cdecl sub_8D0290(__m128 *a1, float a2, __m128 *a3, float a4, __m128 *a5)
{
  __m128 v5; // xmm6
  __m128 v6; // xmm3
  __m128 *v7; // edi
  __m128 v8; // xmm5
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  bool v12; // c0
  __m128 v13; // xmm4
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  float v16; // xmm7_4
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // st7
  double v24; // st7
  __m128 v25; // xmm4
  double v26; // st6
  __m128 v27; // xmm3
  __m128 v28; // xmm0
  bool v29; // pf
  double v30; // st6
  double v31; // st6
  int v32; // ecx
  int v33; // esi
  long double v34; // st5
  int v35; // edi
  long double v36; // st4
  __int32 v37; // eax
  double v38; // st5
  __m128 v39; // xmm3
  __m128 v40; // xmm0
  float v41; // xmm5_4
  __m128 v42; // xmm6
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  __m128 v45; // xmm3
  double v46; // st7
  __m128 v47; // xmm5
  __m128 v48; // xmm3
  __int32 v49; // eax
  __m128 v50; // xmm0
  __m128 *v51; // ecx
  int v52; // esi
  int v53; // eax
  double v54; // st7
  double v55; // st6
  double i; // st5
  __m128 v57; // xmm4
  __m128 v58; // xmm4
  double v59; // st3
  __m128 v60; // xmm0
  long double v61; // st3
  __m128 v62; // xmm4
  __m128 v63; // xmm0
  float v64; // xmm5_4
  __m128 v65; // xmm6
  __m128 v66; // xmm0
  __m128 v67; // xmm0
  __m128 v68; // xmm4
  int v69; // [esp+8h] [ebp-6Ch]
  float v70; // [esp+Ch] [ebp-68h]
  float v71; // [esp+Ch] [ebp-68h]
  float v72; // [esp+Ch] [ebp-68h]
  float v73; // [esp+Ch] [ebp-68h]
  float v74; // [esp+Ch] [ebp-68h]
  float v75; // [esp+10h] [ebp-64h]
  float v76; // [esp+14h] [ebp-60h]
  float v77; // [esp+14h] [ebp-60h]
  float v78; // [esp+14h] [ebp-60h]
  float v79; // [esp+14h] [ebp-60h]
  unsigned int v80; // [esp+14h] [ebp-60h]
  float v81; // [esp+18h] [ebp-5Ch]
  float v82; // [esp+1Ch] [ebp-58h]
  float v83; // [esp+20h] [ebp-54h]
  float v84; // [esp+24h] [ebp-50h]
  float v85; // [esp+24h] [ebp-50h]
  float v86; // [esp+24h] [ebp-50h]
  float v87; // [esp+28h] [ebp-4Ch]
  unsigned int v88; // [esp+28h] [ebp-4Ch]
  unsigned int v89; // [esp+28h] [ebp-4Ch]
  unsigned int v90; // [esp+28h] [ebp-4Ch]
  unsigned int v91; // [esp+28h] [ebp-4Ch]
  float v92; // [esp+2Ch] [ebp-48h]
  unsigned int v93; // [esp+30h] [ebp-44h]
  float v94; // [esp+30h] [ebp-44h]
  __m128 v95; // [esp+34h] [ebp-40h]
  __m128 v96; // [esp+44h] [ebp-30h]
  __m128 v97; // [esp+54h] [ebp-20h]
  __m128 v98; // [esp+64h] [ebp-10h]

  v5 = a1[1];
  v6 = *a1;
  v7 = a3;
  v8 = *a3;
  v9 = _mm_sub_ps(v5, *a1);
  v10 = _mm_sub_ps(a3[1], *a3);
  v11 = _mm_mul_ps(v9, v10);
  v84 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v12 = v84 < (double)*(float *)&SrcStr;
  v95 = v9;
  v75 = v84;
  if ( v12 )
  {
    v9 = _mm_xor_ps(v9, (__m128)xmmword_A965C0);
    v75 = -v84;
    v95 = v9;
    v13 = v5;
    v98 = v6;
  }
  else
  {
    v13 = v6;
    v98 = v5;
  }
  v14 = _mm_sub_ps(v8, v13);
  v15 = _mm_mul_ps(v9, v14);
  v16 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
  v17 = _mm_mul_ps(v10, v14);
  v87 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v18 = _mm_mul_ps(v9, v9);
  v82 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v19 = _mm_mul_ps(v10, v10);
  v81 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
  v97 = v13;
  v85 = v81 * v82;
  v70 = v75 * v75;
  v83 = fabs(v85 - v70);
  v20 = v81 * v16 - v87 * v75;
  v76 = v20;
  if ( v83 * v83 <= v20 * v83 )
    goto LABEL_9;
  if ( v76 <= (double)*(float *)&SrcStr )
  {
    v21 = *(float *)&SrcStr;
    v69 = 2;
    goto LABEL_10;
  }
  if ( (fabs(v85) + v70) * flt_A99EFC >= v83 )
  {
LABEL_9:
    v21 = fConstant_1;
    v69 = 1;
  }
  else
  {
    v69 = 0;
    v21 = v76 / v83;
  }
LABEL_10:
  v22 = v75 * v21 - v87;
  v71 = v22;
  if ( v22 < v81 )
  {
    if ( v71 > (double)*(float *)&SrcStr )
    {
      v72 = v71 / v81;
      goto LABEL_20;
    }
    v72 = 0.0;
    v69 = 8;
  }
  else
  {
    v72 = 1.0;
    v69 = 4;
  }
  v23 = v72 * v75 + v16;
  v77 = v23;
  if ( v23 > *(float *)&SrcStr )
  {
    if ( v77 < (double)v82 )
    {
      v21 = v77 / v82;
    }
    else
    {
      v21 = fConstant_1;
      v69 |= 1u;
    }
  }
  else
  {
    v21 = *(float *)&SrcStr;
    v69 |= 2u;
  }
LABEL_20:
  *(float *)&v93 = v21;
  v24 = a2 + a4;
  v25 = _mm_add_ps(v13, _mm_mul_ps(_mm_shuffle_ps((__m128)v93, (__m128)v93, 0), v9));
  v94 = v24;
  v26 = v24 + a5[1].m128_f32[3];
  v27 = _mm_sub_ps(v25, _mm_add_ps(v8, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v72), (__m128)LODWORD(v72), 0), v10)));
  v28 = _mm_mul_ps(v27, v27);
  v78 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
  a5[1] = v27;
  v73 = fConstant_1 / sqrt(v78);
  v29 = v78 >= v26 * v26;
  v30 = v78;
  if ( v29 )
  {
    a5[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v73), (__m128)LODWORD(v73), 0), a5[1]);
    a5[1].m128_f32[3] = v30 * v73 - v24;
  }
  else
  {
    if ( v30 >= flt_A99EF4 )
    {
      v31 = v78 * v73;
      v39 = a5[1];
      v44 = (__m128)LODWORD(v73);
    }
    else
    {
      v31 = *(float *)&SrcStr;
      v32 = 0;
      v33 = 1;
      v34 = fabs(v95.m128_f32[0]);
      v35 = 2;
      v36 = fabs(v95.m128_f32[1]);
      v74 = fabs(v95.m128_f32[2]);
      if ( v36 < v34 )
      {
        v33 = 0;
        v79 = v36;
        v34 = v79;
        v32 = 1;
      }
      if ( v74 < v34 )
      {
        v35 = v32;
        v32 = 2;
      }
      v37 = v95.m128_i32[v35];
      v38 = v95.m128_f32[v33];
      a5[1].m128_i32[v32] = 0;
      a5[1].m128_i32[3] = 0;
      a5[1].m128_i32[v33] = v37;
      a5[1].m128_f32[v35] = -v38;
      v39 = a5[1];
      v7 = a3;
      v40 = _mm_mul_ps(v39, v39);
      v41 = _mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0];
      v42 = _mm_shuffle_ps(v40, v40, 0xAA);
      v43 = v42;
      v43.m128_f32[0] = v42.m128_f32[0] + v41;
      v96 = v43;
      v96.m128_f32[0] = 1.0 / fsqrt(v42.m128_f32[0] + v41);
      v44 = (__m128)0x3F000000u;
      v44.m128_f32[0] = (float)(0.5 * v96.m128_f32[0])
                      * (float)(3.0
                              - (float)((float)((float)(v42.m128_f32[0] + v41) * v96.m128_f32[0]) * v96.m128_f32[0]));
    }
    a5[1] = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v39);
    v45 = a5[1];
    *(float *)&v80 = a4 - v31;
    a5[1].m128_f32[3] = v31 - v24;
    *a5 = _mm_add_ps(v25, _mm_mul_ps(_mm_shuffle_ps((__m128)v80, (__m128)v80, 0), v45));
    if ( v85 * flt_A3D9A4 >= v83 )
    {
      v46 = fConstant_1 / v85;
      v95.m128_u64[0] = v97.m128_u64[0];
      v47 = (__m128)xmmword_A965C0;
      v95.m128_u64[1] = v97.m128_u64[1];
      v48 = v95;
      v96.m128_u64[0] = v7->m128_u64[0];
      v49 = v7->m128_i32[3];
      v96.m128_i32[2] = v7->m128_i32[2];
      v96.m128_i32[3] = v49;
      v50 = v96;
      v51 = a5 + 2;
      v52 = 0;
      v53 = 0xA;
      v86 = v81 * v46;
      v54 = v46 * v82;
      v55 = -v87;
      for ( i = v16; ; i = v82 - i - v75 )
      {
        if ( (v53 & v69) != 0 )
          goto LABEL_48;
        if ( v55 <= *(float *)&SrcStr )
        {
          if ( i <= *(float *)&SrcStr )
            goto LABEL_43;
          if ( i > v82 )
            goto LABEL_48;
          *(float *)&v90 = v86 * i;
          v57 = (__m128)v90;
        }
        else
        {
          if ( v55 > v81 )
            goto LABEL_48;
          if ( i <= *(float *)&SrcStr )
            goto LABEL_37;
          if ( i > v82 )
            goto LABEL_48;
          if ( i * i * v86 >= v55 * v55 * v54 )
          {
LABEL_37:
            *(float *)&v89 = v55 * v54;
            v50 = _mm_add_ps(v50, _mm_mul_ps(_mm_shuffle_ps((__m128)v89, (__m128)v89, 0), v10));
            goto LABEL_43;
          }
          *(float *)&v88 = v86 * i;
          v57 = (__m128)v88;
        }
        v48 = _mm_add_ps(v48, _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0), v9));
LABEL_43:
        v58 = _mm_sub_ps(v48, v50);
        v59 = v94 + v51[1].m128_f32[3];
        v60 = _mm_mul_ps(v58, v58);
        v92 = _mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]);
        if ( v92 < v59 * v59 )
        {
          v51[1] = v58;
          v61 = sqrt(v92);
          if ( v92 <= (double)flt_A99EF4 )
          {
            v51[1] = a5[1];
          }
          else
          {
            v62 = v51[1];
            v63 = _mm_mul_ps(v62, v62);
            v64 = _mm_shuffle_ps(v63, v63, 0x55).m128_f32[0] + v63.m128_f32[0];
            v65 = _mm_shuffle_ps(v63, v63, 0xAA);
            v66 = v65;
            v66.m128_f32[0] = v65.m128_f32[0] + v64;
            v96 = v66;
            v96.m128_f32[0] = 1.0 / fsqrt(v65.m128_f32[0] + v64);
            v67 = (__m128)0x3F000000u;
            v67.m128_f32[0] = (float)(0.5 * v96.m128_f32[0])
                            * (float)(3.0
                                    - (float)((float)((float)(v65.m128_f32[0] + v64) * v96.m128_f32[0]) * v96.m128_f32[0]));
            v51[1] = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v62);
          }
          v68 = v51[1];
          *(float *)&v91 = a4 - v61;
          v51[1].m128_f32[3] = v61 - v94;
          *v51 = _mm_add_ps(v48, _mm_mul_ps(_mm_shuffle_ps((__m128)v91, (__m128)v91, 0), v68));
          v47 = (__m128)xmmword_A965C0;
        }
LABEL_48:
        if ( v52 == 1 )
          return;
        v48 = v98;
        v50 = v7[1];
        v51 += 2;
        v9 = _mm_xor_ps(v9, v47);
        v10 = _mm_xor_ps(v10, v47);
        v55 = v81 - v55 - v75;
        ++v52;
        v53 = 5;
      }
    }
  }
}
