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

  v5 = a1[1]; /*0x8d029c*/
  v6 = *a1; /*0x8d02a0*/
  v7 = a3; /*0x8d02a6*/
  v8 = *a3; /*0x8d02a9*/
  v9 = _mm_sub_ps(v5, *a1); /*0x8d02b3*/
  v10 = _mm_sub_ps(a3[1], *a3); /*0x8d02b6*/
  v11 = _mm_mul_ps(v9, v10); /*0x8d02bc*/
  v84 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x8d02d9*/
      + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v12 = v84 < (double)*(float *)&SrcStr; /*0x8d02e1*/
  v95 = v9; /*0x8d02eb*/
  v75 = v84; /*0x8d02f0*/
  if ( v12 ) /*0x8d02f9*/
  {
    v9 = _mm_xor_ps(v9, (__m128)xmmword_A965C0); /*0x8d0308*/
    v75 = -v84; /*0x8d030b*/
    v95 = v9; /*0x8d030f*/
    v13 = v5; /*0x8d0314*/
    v98 = v6; /*0x8d0317*/
  }
  else
  {
    v13 = v6; /*0x8d031e*/
    v98 = v5; /*0x8d0321*/
  }
  v14 = _mm_sub_ps(v8, v13); /*0x8d0329*/
  v15 = _mm_mul_ps(v9, v14); /*0x8d032f*/
  v16 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x8d0344*/
      + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
  v17 = _mm_mul_ps(v10, v14); /*0x8d034b*/
  v87 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8d0368*/
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v18 = _mm_mul_ps(v9, v9); /*0x8d036f*/
  v82 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x8d0390*/
      + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v19 = _mm_mul_ps(v10, v10); /*0x8d0397*/
  v81 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x8d03b8*/
      + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
  v97 = v13; /*0x8d03c6*/
  v85 = v81 * v82; /*0x8d03cb*/
  v70 = v75 * v75; /*0x8d03d7*/
  v83 = fabs(v85 - v70); /*0x8d03e5*/
  v20 = v81 * v16 - v87 * v75; /*0x8d03f9*/
  v76 = v20; /*0x8d03fb*/
  if ( v83 * v83 <= v20 * v83 ) /*0x8d0412*/
    goto LABEL_9; /*0x8d0412*/
  if ( v76 <= (double)*(float *)&SrcStr ) /*0x8d0423*/
  {
    v21 = *(float *)&SrcStr; /*0x8d0425*/
    v69 = 2; /*0x8d042b*/
    goto LABEL_10; /*0x8d0433*/
  }
  if ( (fabs(v85) + v70) * flt_A99EFC >= v83 ) /*0x8d044e*/
  {
LABEL_9:
    v21 = fConstant_1; /*0x8d045e*/
    v69 = 1; /*0x8d0464*/
  }
  else
  {
    v69 = 0; /*0x8d0454*/
    v21 = v76 / v83; /*0x8d0458*/
  }
LABEL_10:
  v22 = v75 * v21 - v87; /*0x8d046c*/
  v71 = v22; /*0x8d0476*/
  if ( v22 < v81 ) /*0x8d0483*/
  {
    if ( v71 > (double)*(float *)&SrcStr ) /*0x8d04a6*/
    {
      v72 = v71 / v81; /*0x8d051e*/
      goto LABEL_20; /*0x8d051e*/
    }
    v72 = 0.0; /*0x8d04a8*/
    v69 = 8; /*0x8d04b0*/
  }
  else
  {
    v72 = 1.0; /*0x8d0485*/
    v69 = 4; /*0x8d048d*/
  }
  v23 = v72 * v75 + v16; /*0x8d04c2*/
  v77 = v23; /*0x8d04c6*/
  if ( v23 > *(float *)&SrcStr ) /*0x8d04d5*/
  {
    if ( v77 < (double)v82 ) /*0x8d04f7*/
    {
      v21 = v77 / v82; /*0x8d0510*/
    }
    else
    {
      v21 = fConstant_1; /*0x8d04fd*/
      v69 |= 1u; /*0x8d0506*/
    }
  }
  else
  {
    v21 = *(float *)&SrcStr; /*0x8d04db*/
    v69 |= 2u; /*0x8d04e4*/
  }
LABEL_20:
  *(float *)&v93 = v21; /*0x8d0522*/
  v24 = a2 + a4; /*0x8d0533*/
  v25 = _mm_add_ps(v13, _mm_mul_ps(_mm_shuffle_ps((__m128)v93, (__m128)v93, 0), v9)); /*0x8d0543*/
  v94 = v24; /*0x8d0550*/
  v26 = v24 + a5[1].m128_f32[3]; /*0x8d0559*/
  v27 = _mm_sub_ps(v25, _mm_add_ps(v8, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v72), (__m128)LODWORD(v72), 0), v10))); /*0x8d0569*/
  v28 = _mm_mul_ps(v27, v27); /*0x8d056f*/
  v78 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] /*0x8d058c*/
      + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
  a5[1] = v27; /*0x8d0596*/
  v73 = fConstant_1 / sqrt(v78); /*0x8d05a0*/
  v29 = v78 >= v26 * v26; /*0x8d05b2*/
  v30 = v78; /*0x8d05b5*/
  if ( v29 ) /*0x8d05b9*/
  {
    a5[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v73), (__m128)LODWORD(v73), 0), a5[1]); /*0x8d09e9*/
    a5[1].m128_f32[3] = v30 * v73 - v24; /*0x8d09ed*/
  }
  else
  {
    if ( v30 >= flt_A99EF4 ) /*0x8d05ca*/
    {
      v31 = v78 * v73; /*0x8d06b5*/
      v39 = a5[1]; /*0x8d06b9*/
      v44 = (__m128)LODWORD(v73); /*0x8d06c1*/
    }
    else
    {
      v31 = *(float *)&SrcStr; /*0x8d05d0*/
      v32 = 0; /*0x8d05d6*/
      v33 = 1; /*0x8d05dc*/
      v34 = fabs(v95.m128_f32[0]); /*0x8d05e1*/
      v35 = 2; /*0x8d05e3*/
      v36 = fabs(v95.m128_f32[1]); /*0x8d05ec*/
      v74 = fabs(v95.m128_f32[2]); /*0x8d05f8*/
      if ( v36 < v34 ) /*0x8d0603*/
      {
        v33 = 0; /*0x8d0607*/
        v79 = v36; /*0x8d05ee*/
        v34 = v79; /*0x8d0609*/
        v32 = 1; /*0x8d060d*/
      }
      if ( v74 < v34 ) /*0x8d061f*/
      {
        v35 = v32; /*0x8d0621*/
        v32 = 2; /*0x8d0623*/
      }
      v37 = v95.m128_i32[v35]; /*0x8d0628*/
      v38 = v95.m128_f32[v33]; /*0x8d062c*/
      a5[1].m128_i32[v32] = 0; /*0x8d0630*/
      a5[1].m128_i32[3] = 0; /*0x8d0636*/
      a5[1].m128_i32[v33] = v37; /*0x8d0639*/
      a5[1].m128_f32[v35] = -v38; /*0x8d063d*/
      v39 = a5[1]; /*0x8d0641*/
      v7 = a3; /*0x8d0645*/
      v40 = _mm_mul_ps(v39, v39); /*0x8d064b*/
      v41 = _mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]; /*0x8d0655*/
      v42 = _mm_shuffle_ps(v40, v40, 0xAA); /*0x8d065c*/
      v43 = v42; /*0x8d0660*/
      v43.m128_f32[0] = v42.m128_f32[0] + v41; /*0x8d0663*/
      v96 = v43; /*0x8d0667*/
      v96.m128_f32[0] = 1.0 / fsqrt(v42.m128_f32[0] + v41); /*0x8d0670*/
      v44 = (__m128)0x3F000000u; /*0x8d069d*/
      v44.m128_f32[0] = (float)(0.5 * v96.m128_f32[0]) /*0x8d06a7*/
                      * (float)(3.0
                              - (float)((float)((float)(v42.m128_f32[0] + v41) * v96.m128_f32[0]) * v96.m128_f32[0]));
    }
    a5[1] = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v39); /*0x8d06d6*/
    v45 = a5[1]; /*0x8d06da*/
    *(float *)&v80 = a4 - v31; /*0x8d06de*/
    a5[1].m128_f32[3] = v31 - v24; /*0x8d06f4*/
    *a5 = _mm_add_ps(v25, _mm_mul_ps(_mm_shuffle_ps((__m128)v80, (__m128)v80, 0), v45)); /*0x8d06fa*/
    if ( v85 * flt_A3D9A4 >= v83 ) /*0x8d0712*/
    {
      v46 = fConstant_1 / v85; /*0x8d0722*/
      v95.m128_u64[0] = v97.m128_u64[0]; /*0x8d0726*/
      v47 = (__m128)xmmword_A965C0; /*0x8d072e*/
      v95.m128_u64[1] = v97.m128_u64[1]; /*0x8d073d*/
      v48 = v95; /*0x8d0749*/
      v96.m128_u64[0] = v7->m128_u64[0]; /*0x8d0752*/
      v49 = v7->m128_i32[3]; /*0x8d0760*/
      v96.m128_i32[2] = v7->m128_i32[2]; /*0x8d0763*/
      v96.m128_i32[3] = v49; /*0x8d0767*/
      v50 = v96; /*0x8d076b*/
      v51 = a5 + 2; /*0x8d0770*/
      v52 = 0; /*0x8d0773*/
      v53 = 0xA; /*0x8d0775*/
      v86 = v81 * v46; /*0x8d0780*/
      v54 = v46 * v82; /*0x8d0784*/
      v55 = -v87; /*0x8d078c*/
      for ( i = v16; ; i = v82 - i - v75 ) /*0x8d078e*/
      {
        if ( (v53 & v69) != 0 ) /*0x8d0798*/
          goto LABEL_48; /*0x8d0798*/
        if ( v55 <= *(float *)&SrcStr ) /*0x8d07ab*/
        {
          if ( i <= *(float *)&SrcStr ) /*0x8d084c*/
            goto LABEL_43; /*0x8d084c*/
          if ( i > v82 ) /*0x8d0857*/
            goto LABEL_48; /*0x8d0857*/
          *(float *)&v90 = v86 * i; /*0x8d0863*/
          v57 = (__m128)v90; /*0x8d0867*/
        }
        else
        {
          if ( v55 > v81 ) /*0x8d07bc*/
            goto LABEL_48; /*0x8d07bc*/
          if ( i <= *(float *)&SrcStr ) /*0x8d07cd*/
            goto LABEL_37; /*0x8d07cd*/
          if ( i > v82 ) /*0x8d07d8*/
            goto LABEL_48; /*0x8d07d8*/
          if ( i * i * v86 >= v55 * v55 * v54 ) /*0x8d07f3*/
          {
LABEL_37:
            *(float *)&v89 = v55 * v54; /*0x8d080b*/
            v50 = _mm_add_ps(v50, _mm_mul_ps(_mm_shuffle_ps((__m128)v89, (__m128)v89, 0), v10)); /*0x8d081f*/
            goto LABEL_43; /*0x8d0822*/
          }
          *(float *)&v88 = v86 * i; /*0x8d07fb*/
          v57 = (__m128)v88; /*0x8d07ff*/
        }
        v48 = _mm_add_ps(v48, _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0), v9)); /*0x8d0877*/
LABEL_43:
        v58 = _mm_sub_ps(v48, v50); /*0x8d087a*/
        v59 = v94 + v51[1].m128_f32[3]; /*0x8d0886*/
        v60 = _mm_mul_ps(v58, v58); /*0x8d088c*/
        v92 = _mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0] /*0x8d08ad*/
            + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]);
        if ( v92 < v59 * v59 ) /*0x8d08be*/
        {
          v51[1] = v58; /*0x8d08c8*/
          v61 = sqrt(v92); /*0x8d08cc*/
          if ( v92 <= (double)flt_A99EF4 ) /*0x8d08dd*/
          {
            v51[1] = a5[1]; /*0x8d095a*/
          }
          else
          {
            v62 = v51[1]; /*0x8d08df*/
            v63 = _mm_mul_ps(v62, v62); /*0x8d08e6*/
            v64 = _mm_shuffle_ps(v63, v63, 0x55).m128_f32[0] + v63.m128_f32[0]; /*0x8d08f0*/
            v65 = _mm_shuffle_ps(v63, v63, 0xAA); /*0x8d08f7*/
            v66 = v65; /*0x8d08fb*/
            v66.m128_f32[0] = v65.m128_f32[0] + v64; /*0x8d08fe*/
            v96 = v66; /*0x8d0902*/
            v96.m128_f32[0] = 1.0 / fsqrt(v65.m128_f32[0] + v64); /*0x8d090b*/
            v67 = (__m128)0x3F000000u; /*0x8d0938*/
            v67.m128_f32[0] = (float)(0.5 * v96.m128_f32[0]) /*0x8d0942*/
                            * (float)(3.0
                                    - (float)((float)((float)(v65.m128_f32[0] + v64) * v96.m128_f32[0]) * v96.m128_f32[0]));
            v51[1] = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v62); /*0x8d0950*/
          }
          v68 = v51[1]; /*0x8d0961*/
          *(float *)&v91 = a4 - v61; /*0x8d0967*/
          v51[1].m128_f32[3] = v61 - v94; /*0x8d0980*/
          *v51 = _mm_add_ps(v48, _mm_mul_ps(_mm_shuffle_ps((__m128)v91, (__m128)v91, 0), v68)); /*0x8d0983*/
          v47 = (__m128)xmmword_A965C0; /*0x8d0986*/
        }
LABEL_48:
        if ( v52 == 1 ) /*0x8d0992*/
          return; /*0x8d0992*/
        v48 = v98; /*0x8d0998*/
        v50 = v7[1]; /*0x8d099d*/
        v51 += 2; /*0x8d09a5*/
        v9 = _mm_xor_ps(v9, v47); /*0x8d09a8*/
        v10 = _mm_xor_ps(v10, v47); /*0x8d09af*/
        v55 = v81 - v55 - v75; /*0x8d09b2*/
        ++v52; /*0x8d09b4*/
        v53 = 5; /*0x8d09b9*/
      }
    }
  }
}
