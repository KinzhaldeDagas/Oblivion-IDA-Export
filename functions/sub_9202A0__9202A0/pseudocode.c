int __cdecl sub_9202A0(int a1, float *a2, int a3, float *a4)
{
  float *v4; // edx
  __m128 *v6; // edi
  __m128 *v7; // ebx
  __m128 *v8; // esi
  int result; // eax
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm5
  __m128 v14; // xmm0
  double v15; // st7
  double v16; // st6
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  __m128 *v21; // eax
  double v22; // st7
  __m128 v23; // xmm0
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm1
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm3
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  float v35; // xmm5_4
  float v36; // xmm6_4
  __m128 v37; // xmm0
  double v38; // st7
  double v39; // st6
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm1
  __m128 v43; // xmm1
  double v44; // st7
  __m128 v45; // xmm3
  __m128 v46; // xmm0
  double v47; // st7
  double v48; // st7
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  __m128 v51; // xmm1
  char v52; // al
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  __m128 v55; // xmm1
  __m128 v56; // xmm0
  __m128 v57; // xmm3
  __m128 v58; // xmm1
  __m128 v59; // xmm1
  char v60; // al
  __m128 v61; // xmm3
  __m128 v62; // xmm1
  __m128 v63; // xmm0
  __m128 v64; // xmm0
  __m128 v65; // xmm0
  double v66; // st7
  double v67; // st6
  long double v68; // st5
  long double v69; // st4
  long double v70; // st4
  __m128 v71; // xmm0
  __m128 v72; // xmm1
  __m128 v73; // xmm2
  __m128 v74; // xmm1
  __m128 v75; // xmm0
  __m128 v76; // xmm3
  __m128 v77; // xmm1
  __m128 v78; // xmm1
  __m128 v79; // xmm1
  double v80; // st7
  __m128 v81; // xmm1
  __m128 v82; // xmm0
  float v83; // xmm4_4
  float v84; // xmm5_4
  __m128 v85; // xmm0
  double v86; // st7
  double v87; // st6
  double v88; // st5
  long double v89; // st5
  double v90; // rt1
  __m128 v91; // xmm0
  __m128 v92; // xmm1
  __m128 v93; // xmm2
  __m128 v94; // xmm1
  double v95; // st6
  __m128 v96; // xmm0
  __m128 v97; // xmm3
  __m128 v98; // xmm1
  __m128 v99; // xmm1
  __m128 v100; // xmm0
  long double v101; // st7
  long double v102; // st6
  long double v103; // st5
  __m128 v104; // xmm1
  __m128 v105; // xmm2
  __m128 v106; // xmm3
  __m128 v107; // xmm0
  double v108; // st7
  double v109; // st6
  double v110; // st7
  __m128 v111; // xmm1
  double v112; // st7
  double v113; // st7
  __m128 v114; // xmm1
  char v115; // al
  double v116; // st7
  __m128 v117; // xmm0
  double v118; // st6
  float v119; // eax
  __m128 v120; // xmm1
  __m128 v121; // xmm2
  double v122; // st7
  __m128 v123; // xmm3
  __m128 v124; // xmm0
  double v125; // st7
  __m128 v126; // xmm1
  double v127; // st7
  __m128 v128; // xmm2
  __m128 v129; // xmm0
  double v130; // st7
  __m128 v131; // xmm0
  __m128 v132; // xmm1
  __m128 v133; // xmm1
  __m128 v134; // xmm0
  long double v135; // st7
  long double v136; // st6
  long double v137; // st5
  __m128 v138; // xmm0
  __m128 v139; // xmm1
  __m128 v140; // xmm2
  __m128 v141; // xmm1
  __m128 v142; // xmm3
  __m128 v143; // xmm0
  double v144; // st7
  double v145; // st6
  double v146; // st6
  float *v147; // ecx
  __m128 v148; // xmm0
  __m128 v149; // xmm1
  __m128 v150; // xmm1
  double v151; // st7
  double v152; // st7
  __m128 v153; // xmm0
  __m128 v154; // xmm1
  __m128 v155; // xmm2
  __m128 v156; // xmm1
  char v157; // cl
  float *v158; // eax
  double v159; // st7
  __m128 v160; // xmm0
  double v161; // st6
  __m128 v162; // xmm0
  __m128 v163; // xmm1
  __m128 v164; // xmm2
  __m128 v165; // xmm1
  bool v166; // zf
  float v167; // [esp+14h] [ebp-9Ch]
  float v168; // [esp+14h] [ebp-9Ch]
  unsigned int v169; // [esp+14h] [ebp-9Ch]
  float v170; // [esp+14h] [ebp-9Ch]
  unsigned int v171; // [esp+14h] [ebp-9Ch]
  unsigned int v172; // [esp+14h] [ebp-9Ch]
  float v173; // [esp+14h] [ebp-9Ch]
  unsigned int v174; // [esp+14h] [ebp-9Ch]
  unsigned int v175; // [esp+14h] [ebp-9Ch]
  unsigned int v176; // [esp+14h] [ebp-9Ch]
  float v177; // [esp+14h] [ebp-9Ch]
  unsigned int v178; // [esp+14h] [ebp-9Ch]
  unsigned int v179; // [esp+14h] [ebp-9Ch]
  unsigned int v180; // [esp+14h] [ebp-9Ch]
  unsigned int v181; // [esp+14h] [ebp-9Ch]
  unsigned int v182; // [esp+14h] [ebp-9Ch]
  unsigned int v183; // [esp+14h] [ebp-9Ch]
  unsigned int v184; // [esp+14h] [ebp-9Ch]
  __m128 *v185; // [esp+18h] [ebp-98h]
  float v186; // [esp+18h] [ebp-98h]
  float v187; // [esp+18h] [ebp-98h]
  unsigned int v188; // [esp+18h] [ebp-98h]
  float v189; // [esp+18h] [ebp-98h]
  float v190; // [esp+18h] [ebp-98h]
  float v191; // [esp+18h] [ebp-98h]
  float *v192; // [esp+1Ch] [ebp-94h]
  float v193; // [esp+1Ch] [ebp-94h]
  float v194; // [esp+1Ch] [ebp-94h]
  float *v195; // [esp+20h] [ebp-90h]
  float v196; // [esp+20h] [ebp-90h]
  float v197; // [esp+24h] [ebp-8Ch]
  float v198; // [esp+24h] [ebp-8Ch]
  float v199; // [esp+24h] [ebp-8Ch]
  float v200; // [esp+24h] [ebp-8Ch]
  float v201; // [esp+2Ch] [ebp-84h]
  int v202; // [esp+30h] [ebp-80h]
  float v203; // [esp+34h] [ebp-7Ch]
  int v204; // [esp+38h] [ebp-78h]
  float v205; // [esp+40h] [ebp-70h]
  float v206; // [esp+44h] [ebp-6Ch]
  float v207; // [esp+88h] [ebp-28h]
  float v208; // [esp+ACh] [ebp-4h]

  v204 = *(_DWORD *)(a1 + 8); /*0x9202b6*/
  v4 = a4; /*0x9202ba*/
  v202 = *(_DWORD *)(a1 + 4); /*0x9202be*/
  v192 = a4; /*0x9202c6*/
  while ( 2 ) /*0x9202d0*/
  {
    v6 = *((__m128 **)a2 + 3); /*0x9202d0*/
    v7 = *((__m128 **)a2 + 4); /*0x9202d3*/
    v8 = *((__m128 **)a2 + 1); /*0x9202d6*/
    a2 += 6; /*0x9202d9*/
LABEL_3:
    v195 = a2; /*0x9202dc*/
LABEL_4:
    v185 = v8 + 4; /*0x9202e0*/
LABEL_5:
    result = *(char *)a2; /*0x9202f0*/
    switch ( *(_BYTE *)a2 ) /*0x9202fc*/
    {
      case 0: /*0x9202fc*/
        return result;
      case 1: /*0x9202fc*/
        continue;
      case 2: /*0x9202fc*/
        do /*0x920936*/
        {
          v45 = *v8; /*0x920835*/
          v46 = _mm_add_ps( /*0x920865*/
                  _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                  _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v47 = v8->m128_f32[3] * *(float *)(a1 + 4) /*0x920893*/
              - (float)(_mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]))
              * *(float *)(a1 + 8);
          if ( v47 > *(float *)&SrcStr ) /*0x9208a0*/
          {
            v48 = v47 * v8[1].m128_f32[3]; /*0x9208a6*/
            *(float *)&v169 = v48; /*0x9208ad*/
            v49 = _mm_mul_ps(_mm_shuffle_ps((__m128)v169, (__m128)v169, 0), v6[3]); /*0x9208be*/
            v50 = _mm_mul_ps(_mm_shuffle_ps((__m128)v169, (__m128)v169, 0), v7[3]); /*0x9208cf*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xFF), v45)); /*0x9208ed*/
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xFF), v45)); /*0x9208f8*/
            v51 = _mm_mul_ps(v50, v8[2]); /*0x920900*/
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v49, v8[1])); /*0x920911*/
            v7[2] = _mm_add_ps(v7[2], v51); /*0x92091c*/
            *v4 = v48 + *v4; /*0x920922*/
          }
          v52 = *((_BYTE *)a2++ + 4); /*0x920928*/
          v8 += 3; /*0x92092e*/
          ++v4; /*0x920931*/
        }
        while ( v52 == 2 ); /*0x920936*/
        v192 = v4; /*0x92093c*/
        goto LABEL_3; /*0x920940*/
      case 3: /*0x9202fc*/
        v10 = *v8; /*0x92030f*/
        v11 = _mm_sub_ps(v6[1], v7[1]); /*0x92031a*/
        v12 = _mm_add_ps( /*0x920340*/
                _mm_add_ps(_mm_mul_ps(v6[2], v185[0xFFFFFFFD]), _mm_mul_ps(v7[2], v185[0xFFFFFFFE])),
                _mm_mul_ps(v11, *v8));
        v207 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x920360*/
             + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
        v13 = v185[0xFFFFFFFF]; /*0x92036c*/
        v14 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], *v185), _mm_mul_ps(v7[2], v185[1])), _mm_mul_ps(v11, v13)); /*0x920382*/
        v15 = v185[0xFFFFFFFC].m128_f32[3] * *(float *)(a1 + 4) - v207 * *(float *)(a1 + 8); /*0x9203be*/
        v16 = v185[0xFFFFFFFF].m128_f32[3] * *(float *)(a1 + 4) /*0x9203d4*/
            - (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]))
            * *(float *)(a1 + 8);
        v193 = v15 * v185[0xFFFFFFFE].m128_f32[3] + v16 * a2[1]; /*0x9203e2*/
        v196 = v16 * v185[1].m128_f32[3] + v15 * a2[1]; /*0x9203f2*/
        v197 = v15 * v185[0xFFFFFFFD].m128_f32[3]; /*0x9203fb*/
        v167 = v16 * v185->m128_f32[3]; /*0x920402*/
        if ( v193 <= (double)*(float *)&SrcStr ) /*0x920415*/
        {
          if ( v167 > (double)*(float *)&SrcStr ) /*0x920529*/
          {
            v22 = v167; /*0x9205d4*/
            v21 = v185; /*0x9205f0*/
            v30 = _mm_shuffle_ps((__m128)LODWORD(v167), (__m128)LODWORD(v167), 0); /*0x9205fa*/
            v23 = _mm_mul_ps(v30, v6[3]); /*0x920602*/
            v25 = _mm_mul_ps(v30, v7[3]); /*0x92060c*/
            v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0xFF), v13); /*0x920623*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xFF), v13)); /*0x920626*/
            goto LABEL_13; /*0x920626*/
          }
        }
        else if ( v196 > (double)*(float *)&SrcStr ) /*0x92042a*/
        {
          v17 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v193), (__m128)LODWORD(v193), 0), v6[3]); /*0x920451*/
          v18 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v193), (__m128)LODWORD(v193), 0), v7[3]); /*0x920462*/
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xFF), v10)); /*0x920480*/
          v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0xFF), v10)); /*0x92048b*/
          v19 = _mm_mul_ps(v18, v185[0xFFFFFFFE]); /*0x920493*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v17, v185[0xFFFFFFFD])); /*0x9204a8*/
          v7[2] = _mm_add_ps(v7[2], v19); /*0x9204b3*/
          v20 = (__m128)LODWORD(v196); /*0x9204c0*/
          v21 = v185; /*0x9204c9*/
          *v4 = v193 + *v4; /*0x9204cd*/
          v22 = v196; /*0x9204d3*/
          v23 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v6[3]); /*0x9204de*/
          v24 = v185[0xFFFFFFFF]; /*0x9204ef*/
          v25 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v7[3]); /*0x9204f3*/
          v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0xFF), v24); /*0x920500*/
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xFF), v24)); /*0x920511*/
LABEL_13:
          v7[1] = _mm_sub_ps(v7[1], v26); /*0x92062a*/
          v31 = _mm_mul_ps(v25, v21[1]); /*0x920639*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v23, *v21)); /*0x920649*/
          v7[2] = _mm_add_ps(v7[2], v31); /*0x920654*/
          v4[1] = v22 + v4[1]; /*0x92065b*/
          goto LABEL_14; /*0x92065b*/
        }
        if ( v197 > (double)*(float *)&SrcStr ) /*0x92053e*/
        {
          v27 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v197), (__m128)LODWORD(v197), 0), v6[3]); /*0x920565*/
          v28 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v197), (__m128)LODWORD(v197), 0), v7[3]); /*0x920576*/
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xFF), v10)); /*0x920594*/
          v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0xFF), v10)); /*0x92059f*/
          v29 = _mm_mul_ps(v28, v185[0xFFFFFFFE]); /*0x9205a7*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v27, v185[0xFFFFFFFD])); /*0x9205b8*/
          v7[2] = _mm_add_ps(v7[2], v29); /*0x9205c3*/
          *v4 = v197 + *v4; /*0x9205c9*/
        }
LABEL_14:
        a2 += 2; /*0x92065e*/
        v185 += 6; /*0x920668*/
        v4 += 2; /*0x92066e*/
        v8 += 6; /*0x920671*/
        v192 = v4; /*0x920676*/
        v195 = a2; /*0x92067a*/
        if ( *(_BYTE *)a2 == 3 ) /*0x92067e*/
        {
          v32 = *v8; /*0x92068f*/
          v33 = _mm_sub_ps(v6[1], v7[1]); /*0x92069a*/
          v34 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])), _mm_mul_ps(v33, *v8)); /*0x9206c0*/
          v35 = _mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]; /*0x9206cd*/
          v36 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0]; /*0x9206d1*/
          v37 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[4]), _mm_mul_ps(v7[2], v8[5])), _mm_mul_ps(v33, v8[3])); /*0x9206f7*/
          v38 = v8->m128_f32[3] * *(float *)(a1 + 4) - (float)(v36 + v35) * *(float *)(a1 + 8); /*0x920730*/
          v39 = v8[3].m128_f32[3] * *(float *)(a1 + 4) /*0x92073f*/
              - (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]))
              * *(float *)(a1 + 8);
          v168 = v38 * v8[2].m128_f32[3] + v39 * a2[1]; /*0x92074d*/
          v198 = v39 * v8[5].m128_f32[3] + v38 * a2[1]; /*0x92075d*/
          v186 = v38 * v8[1].m128_f32[3]; /*0x920766*/
          v194 = v39 * v8[4].m128_f32[3]; /*0x92076d*/
          if ( v168 <= (double)*(float *)&SrcStr ) /*0x920780*/
          {
            if ( v194 <= (double)*(float *)&SrcStr ) /*0x920954*/
              goto LABEL_23; /*0x920954*/
            v44 = v194; /*0x920a01*/
            v43 = (__m128)LODWORD(v194); /*0x920a09*/
LABEL_26:
            v56 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v6[3]); /*0x920a0f*/
            v57 = v8[3]; /*0x920a2b*/
            v58 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v7[3]); /*0x920a2f*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0xFF), v57)); /*0x920a4d*/
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0xFF), v57)); /*0x920a58*/
            v59 = _mm_mul_ps(v58, v8[5]); /*0x920a60*/
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v56, v8[4])); /*0x920a71*/
            v7[2] = _mm_add_ps(v7[2], v59); /*0x920a7c*/
            v4[1] = v44 + v4[1]; /*0x920a83*/
          }
          else
          {
            if ( v198 > (double)*(float *)&SrcStr ) /*0x920795*/
            {
              v40 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v168), (__m128)LODWORD(v168), 0), v6[3]); /*0x9207bc*/
              v41 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v168), (__m128)LODWORD(v168), 0), v7[3]); /*0x9207cd*/
              v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0xFF), v32)); /*0x9207eb*/
              v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v41, v41, 0xFF), v32)); /*0x9207f6*/
              v42 = _mm_mul_ps(v41, v8[2]); /*0x9207fe*/
              v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v40, v8[1])); /*0x92080f*/
              v7[2] = _mm_add_ps(v7[2], v42); /*0x92081a*/
              v43 = (__m128)LODWORD(v198); /*0x920824*/
              *v4 = v168 + *v4; /*0x92082a*/
              v44 = v198; /*0x92082c*/
              goto LABEL_26; /*0x920830*/
            }
LABEL_23:
            if ( v186 > (double)*(float *)&SrcStr ) /*0x920969*/
            {
              v53 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v186), (__m128)LODWORD(v186), 0), v6[3]); /*0x920992*/
              v54 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v186), (__m128)LODWORD(v186), 0), v7[3]); /*0x9209a3*/
              v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0xFF), v32)); /*0x9209c1*/
              v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0xFF), v32)); /*0x9209cc*/
              v55 = _mm_mul_ps(v54, v8[2]); /*0x9209d4*/
              v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v53, v8[1])); /*0x9209e5*/
              v7[2] = _mm_add_ps(v7[2], v55); /*0x9209f0*/
              *v4 = v186 + *v4; /*0x9209f6*/
            }
          }
          v60 = *((_BYTE *)a2 + 8); /*0x920a86*/
          a2 += 2; /*0x920a89*/
          v4 += 2; /*0x920a8c*/
          v8 += 6; /*0x920a8f*/
          v192 = v4; /*0x920a94*/
          v195 = a2; /*0x920a98*/
          if ( v60 == 8 ) /*0x920a9c*/
          {
LABEL_28:
            v61 = v6[2]; /*0x920aa2*/
            v62 = _mm_sub_ps(v6[1], v7[1]); /*0x920ab5*/
            v63 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v61, v8[1]), _mm_mul_ps(v7[2], v8[2])), _mm_mul_ps(v62, *v8)); /*0x920adb*/
            v205 = _mm_shuffle_ps(v63, v63, 0xAA).m128_f32[0] /*0x920b0d*/
                 + (float)(_mm_shuffle_ps(v63, v63, 0x55).m128_f32[0] + v63.m128_f32[0]);
            v64 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v61, v8[4]), _mm_mul_ps(v7[2], v8[5])), _mm_mul_ps(v62, v8[3])); /*0x920b1d*/
            v206 = _mm_shuffle_ps(v64, v64, 0xAA).m128_f32[0] /*0x920b48*/
                 + (float)(_mm_shuffle_ps(v64, v64, 0x55).m128_f32[0] + v64.m128_f32[0]);
            v65 = _mm_add_ps(_mm_mul_ps(v61, v8[6]), _mm_mul_ps(v7[2], v8[7])); /*0x920b4f*/
            v187 = (v8[7].m128_f32[3] * *(float *)(a1 + 0xC) /*0x920b88*/
                  - (float)(_mm_shuffle_ps(v65, v65, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v65, v65, 0x55).m128_f32[0] + v65.m128_f32[0]))
                  * *(float *)(a1 + 8))
                 * v8[6].m128_f32[3];
            v199 = *(float *)(a1 + 0xC) * v8->m128_f32[3] - v205 * *(float *)(a1 + 8); /*0x920b9b*/
            v170 = v8[3].m128_f32[3] * *(float *)(a1 + 0xC) - v206 * *(float *)(a1 + 8); /*0x920bb5*/
            v66 = v199 * v8[2].m128_f32[3] + v170 * a2[2]; /*0x920bc7*/
            v67 = v170 * v8[5].m128_f32[3] + v199 * a2[2]; /*0x920bd7*/
            v68 = v187; /*0x920bd9*/
            v69 = v68 * v68 + v67 * v67 + v66 * v66; /*0x920beb*/
            if ( v69 > a2[3] * a2[3] ) /*0x920bfe*/
            {
              v70 = a2[3] / sqrt(v69); /*0x920c02*/
              v66 = v66 * v70; /*0x920c07*/
              v67 = v67 * v70; /*0x920c0b*/
              v68 = v68 * v70; /*0x920c11*/
              v8->m128_f32[3] = v70 * v8->m128_f32[3]; /*0x920c18*/
              v8[3].m128_f32[3] = v70 * v8[3].m128_f32[3]; /*0x920c20*/
              v8[7].m128_f32[3] = v70 * v8[7].m128_f32[3]; /*0x920c26*/
            }
            *(float *)&v188 = v68 * a2[5]; /*0x920c34*/
            *(float *)&v171 = v66; /*0x920c3e*/
            v71 = _mm_mul_ps(_mm_shuffle_ps((__m128)v171, (__m128)v171, 0), v6[3]); /*0x920c51*/
            v72 = _mm_mul_ps(_mm_shuffle_ps((__m128)v171, (__m128)v171, 0), v7[3]); /*0x920c65*/
            v73 = _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0xFF), *v8); /*0x920c79*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v71, v71, 0xFF), *v8)); /*0x920c83*/
            v7[1] = _mm_sub_ps(v7[1], v73); /*0x920c8e*/
            v74 = _mm_mul_ps(v72, v8[2]); /*0x920c96*/
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v71, v8[1])); /*0x920ca7*/
            v7[2] = _mm_add_ps(v7[2], v74); /*0x920cb2*/
            *v4 = v66 + *v4; /*0x920cb8*/
            *(float *)&v172 = v67; /*0x920cbe*/
            v75 = _mm_mul_ps(_mm_shuffle_ps((__m128)v172, (__m128)v172, 0), v6[3]); /*0x920ccf*/
            v76 = v8[3]; /*0x920ce0*/
            v77 = _mm_mul_ps(_mm_shuffle_ps((__m128)v172, (__m128)v172, 0), v7[3]); /*0x920ce4*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v75, v75, 0xFF), v76)); /*0x920d02*/
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0xFF), v76)); /*0x920d0d*/
            v78 = _mm_mul_ps(v77, v8[5]); /*0x920d15*/
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v75, v8[4])); /*0x920d26*/
            v7[2] = _mm_add_ps(v7[2], v78); /*0x920d31*/
            v4[1] = v67 + v4[1]; /*0x920d42*/
            v79 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v188, (__m128)v188, 0), v7[3]), v8[7]); /*0x920d6d*/
            v6[2] = _mm_add_ps( /*0x920d7d*/
                      v6[2],
                      _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v188, (__m128)v188, 0), v6[3]), v8[6]));
            v7[2] = _mm_add_ps(v7[2], v79); /*0x920d88*/
            v80 = *(float *)&v188 + v4[2]; /*0x920d8c*/
            a2 += 6; /*0x920d8f*/
            v4 += 3; /*0x920d92*/
            v4[0xFFFFFFFF] = v80; /*0x920d95*/
            v8 += 8; /*0x920d9a*/
            v192 = v4; /*0x920da2*/
            v195 = a2; /*0x920da6*/
            if ( *(_BYTE *)a2 == 1 ) /*0x920daa*/
              continue; /*0x920daa*/
          }
          goto LABEL_4; /*0x920daa*/
        }
        goto LABEL_5; /*0x92067e*/
      case 4: /*0x9202fc*/
        goto LABEL_46;
      case 5: /*0x9202fc*/
        do /*0x92196d*/
        {
          v159 = a2[3] + v8->m128_f32[3]; /*0x921800*/
          v160 = _mm_add_ps( /*0x921838*/
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v161 = (v159 * a2[4] /*0x921868*/
                - (float)(_mm_shuffle_ps(v160, v160, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v160, v160, 0x55).m128_f32[0] + v160.m128_f32[0]))
                * a2[5])
               * v8[1].m128_f32[3];
          v191 = v161; /*0x92186b*/
          if ( v161 <= a2[1] ) /*0x921877*/
          {
            if ( v191 < (double)a2[2] ) /*0x92189e*/
            {
              if ( *((_DWORD *)a2 + 6) ) /*0x9218a0*/
                v159 = v159 * (a2[2] / v191); /*0x9218ae*/
              v191 = a2[2]; /*0x9218b3*/
            }
          }
          else
          {
            if ( *((_DWORD *)a2 + 6) ) /*0x921879*/
              v159 = v159 * (a2[1] / v191); /*0x921887*/
            v191 = a2[1]; /*0x92188c*/
          }
          v8->m128_f32[3] = v159; /*0x9218bb*/
          v208 = v191; /*0x9218ca*/
          v162 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v208), (__m128)LODWORD(v208), 0), v6[3]); /*0x9218e1*/
          v163 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v208), (__m128)LODWORD(v208), 0), v7[3]); /*0x9218f5*/
          v164 = _mm_mul_ps(_mm_shuffle_ps(v163, v163, 0xFF), *v8); /*0x921906*/
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v162, v162, 0xFF), *v8)); /*0x921913*/
          v7[1] = _mm_sub_ps(v7[1], v164); /*0x92191e*/
          v165 = _mm_mul_ps(v163, v8[2]); /*0x921926*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v162, v8[1])); /*0x921937*/
          v7[2] = _mm_add_ps(v7[2], v165); /*0x921942*/
          *v192 = v191 + *v192; /*0x92194c*/
          v8 = (__m128 *)sub_8F0EE0((char *)v8, 1); /*0x921953*/
          ++v192; /*0x921955*/
          v166 = *((_BYTE *)v195 + 0x1C) == 5; /*0x921964*/
          v195 += 7; /*0x921967*/
          a2 = v195; /*0x92196b*/
        }
        while ( v166 ); /*0x92196d*/
        v4 = v192; /*0x921973*/
        goto LABEL_4; /*0x921977*/
      case 6: /*0x9202fc*/
        do /*0x92160e*/
        {
          v134 = _mm_add_ps( /*0x9214f2*/
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v201 = a2[1]; /*0x921528*/
          v135 = (v8->m128_f32[3] * *(float *)(a1 + 4) /*0x92155f*/
                - (float)(_mm_shuffle_ps(v134, v134, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v134, v134, 0x55).m128_f32[0] + v134.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8[1].m128_f32[3];
          v136 = fabs(v135); /*0x921564*/
          if ( v136 > v201 ) /*0x92156f*/
          {
            v137 = v201 / v136; /*0x921575*/
            v135 = v135 * v137; /*0x921577*/
            v8->m128_f32[3] = v137 * v8->m128_f32[3]; /*0x92157c*/
          }
          *(float *)&v182 = v135; /*0x921587*/
          v138 = _mm_mul_ps(_mm_shuffle_ps((__m128)v182, (__m128)v182, 0), v6[3]); /*0x921598*/
          v139 = _mm_mul_ps(_mm_shuffle_ps((__m128)v182, (__m128)v182, 0), v7[3]); /*0x9215ac*/
          v140 = _mm_mul_ps(_mm_shuffle_ps(v139, v139, 0xFF), *v8); /*0x9215bd*/
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v138, v138, 0xFF), *v8)); /*0x9215ca*/
          v7[1] = _mm_sub_ps(v7[1], v140); /*0x9215d5*/
          v141 = _mm_mul_ps(v139, v8[2]); /*0x9215dd*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v138, v8[1])); /*0x9215ee*/
          v7[2] = _mm_add_ps(v7[2], v141); /*0x9215f9*/
          a2 += 2; /*0x9215ff*/
          v8 += 3; /*0x921602*/
          *v4 = v135 + *v4; /*0x921605*/
          ++v4; /*0x921609*/
        }
        while ( *(_BYTE *)a2 == 6 ); /*0x92160e*/
        v192 = v4; /*0x921614*/
        goto LABEL_3; /*0x921618*/
      case 7: /*0x9202fc*/
        v81 = _mm_sub_ps(v6[1], v7[1]); /*0x920dc5*/
        v82 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])), _mm_mul_ps(v81, *v8)); /*0x920deb*/
        v83 = _mm_shuffle_ps(v82, v82, 0x55).m128_f32[0] + v82.m128_f32[0]; /*0x920df8*/
        v84 = _mm_shuffle_ps(v82, v82, 0xAA).m128_f32[0]; /*0x920dfc*/
        v85 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[4]), _mm_mul_ps(v7[2], v8[5])), _mm_mul_ps(v81, v8[3])); /*0x920e1f*/
        v200 = *(float *)(a1 + 0xC) * v8->m128_f32[3] - (float)(v84 + v83) * *(float *)(a1 + 8); /*0x920e5a*/
        v173 = v8[3].m128_f32[3] * *(float *)(a1 + 0xC) /*0x920e6d*/
             - (float)(_mm_shuffle_ps(v85, v85, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v85, v85, 0x55).m128_f32[0] + v85.m128_f32[0]))
             * *(float *)(a1 + 8);
        v189 = a2[3] * a2[3]; /*0x920e78*/
        v86 = v200 * v8[2].m128_f32[3] + v173 * a2[2]; /*0x920e8c*/
        v87 = v173 * v8[5].m128_f32[3] + v200 * a2[2]; /*0x920e9c*/
        v88 = v86 * v86 + v87 * v87; /*0x920ea6*/
        if ( v88 > v189 ) /*0x920eb1*/
        {
          v89 = sqrt(v189 / v88); /*0x920eb7*/
          v86 = v86 * v89; /*0x920ebb*/
          v87 = v87 * v89; /*0x920ebf*/
          v8->m128_f32[3] = v89 * v8->m128_f32[3]; /*0x920ec6*/
          v8[3].m128_f32[3] = v89 * v8[3].m128_f32[3]; /*0x920ecc*/
        }
        *(float *)&v174 = v86; /*0x920ed9*/
        a2 += 5; /*0x920edd*/
        v90 = v87; /*0x920ee6*/
        v91 = _mm_mul_ps(_mm_shuffle_ps((__m128)v174, (__m128)v174, 0), v6[3]); /*0x920eef*/
        v92 = _mm_mul_ps(_mm_shuffle_ps((__m128)v174, (__m128)v174, 0), v7[3]); /*0x920f03*/
        v93 = _mm_mul_ps(_mm_shuffle_ps(v92, v92, 0xFF), *v8); /*0x920f17*/
        v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v91, v91, 0xFF), *v8)); /*0x920f21*/
        v7[1] = _mm_sub_ps(v7[1], v93); /*0x920f2c*/
        v94 = _mm_mul_ps(v92, v8[2]); /*0x920f34*/
        v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v91, v8[1])); /*0x920f45*/
        v7[2] = _mm_add_ps(v7[2], v94); /*0x920f50*/
        v95 = v86 + *v4; /*0x920f54*/
        v4 += 2; /*0x920f56*/
        v8 += 6; /*0x920f59*/
        v4[0xFFFFFFFE] = v95; /*0x920f5c*/
        v192 = v4; /*0x920f63*/
        *(float *)&v175 = v90; /*0x920f67*/
        v195 = a2; /*0x920f6b*/
        v96 = _mm_mul_ps(_mm_shuffle_ps((__m128)v175, (__m128)v175, 0), v6[3]); /*0x920f7c*/
        v97 = v8[0xFFFFFFFD]; /*0x920f8d*/
        v98 = _mm_mul_ps(_mm_shuffle_ps((__m128)v175, (__m128)v175, 0), v7[3]); /*0x920f91*/
        v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v96, v96, 0xFF), v97)); /*0x920faf*/
        v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v98, v98, 0xFF), v97)); /*0x920fba*/
        v99 = _mm_mul_ps(v98, v8[0xFFFFFFFF]); /*0x920fc2*/
        v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v96, v8[0xFFFFFFFE])); /*0x920fd3*/
        v7[2] = _mm_add_ps(v7[2], v99); /*0x920fde*/
        v4[0xFFFFFFFF] = v90 + v4[0xFFFFFFFF]; /*0x920fe5*/
        if ( *(_BYTE *)a2 == 1 ) /*0x920fec*/
          continue; /*0x920fec*/
        goto LABEL_4; /*0x920fec*/
      case 8: /*0x9202fc*/
        goto LABEL_28;
      case 9: /*0x9202fc*/
        do /*0x9210d3*/
        {
          v100 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v8[1])); /*0x921000*/
          v203 = a2[1]; /*0x921021*/
          v101 = (v8[1].m128_f32[3] * *(float *)(a1 + 0xC) /*0x921052*/
                - (float)(_mm_shuffle_ps(v100, v100, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v100, v100, 0x55).m128_f32[0] + v100.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8->m128_f32[3];
          v102 = fabs(v101); /*0x921057*/
          if ( v102 > v203 ) /*0x921062*/
          {
            v103 = v203 / v102; /*0x921068*/
            v101 = v101 * v103; /*0x92106a*/
            v8[1].m128_f32[3] = v103 * v8[1].m128_f32[3]; /*0x92106f*/
          }
          *(float *)&v176 = v101; /*0x92107a*/
          v104 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v176, (__m128)v176, 0), v7[3]), v8[1]); /*0x9210a4*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v176, (__m128)v176, 0), v6[3]), *v8)); /*0x9210b3*/
          v7[2] = _mm_add_ps(v7[2], v104); /*0x9210be*/
          a2 += 2; /*0x9210c4*/
          v8 += 2; /*0x9210c7*/
          *v4 = v101 + *v4; /*0x9210ca*/
          ++v4; /*0x9210ce*/
        }
        while ( *(_BYTE *)a2 == 9 ); /*0x9210d3*/
        v192 = v4; /*0x9210d9*/
        goto LABEL_3; /*0x9210dd*/
      case 0xA: /*0x9202fc*/
        do /*0x92120b*/
        {
          v105 = v8[1]; /*0x9210e2*/
          v106 = *v8; /*0x9210ea*/
          v107 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v105)); /*0x9210fa*/
          v108 = (float)(_mm_shuffle_ps(v107, v107, 0xAA).m128_f32[0] /*0x921122*/
                       + (float)(_mm_shuffle_ps(v107, v107, 0x55).m128_f32[0] + v107.m128_f32[0]))
               * *(float *)(a1 + 8);
          v109 = (v8[1].m128_f32[3] - a2[1]) * a2[3] - v108; /*0x92112e*/
          if ( v109 <= *(float *)&SrcStr ) /*0x92113f*/
          {
            v112 = (v8[1].m128_f32[3] - a2[2]) * a2[3] - v108; /*0x92119e*/
            if ( v112 < *(float *)&SrcStr ) /*0x9211ab*/
            {
              v113 = v112 * v8->m128_f32[3]; /*0x9211ad*/
              *(float *)&v179 = v113; /*0x9211b4*/
              v114 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v179, (__m128)v179, 0), v7[3]), v105); /*0x9211d6*/
              v6[2] = _mm_add_ps( /*0x9211e6*/
                        v6[2],
                        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v179, (__m128)v179, 0), v6[3]), v106));
              v7[2] = _mm_add_ps(v7[2], v114); /*0x9211f1*/
              *v4 = v113 + *v4; /*0x9211f7*/
            }
          }
          else
          {
            v177 = v109; /*0x921130*/
            v110 = v177 * v8->m128_f32[3]; /*0x92114b*/
            *(float *)&v178 = v110; /*0x92114e*/
            v111 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v178, (__m128)v178, 0), v7[3]), v105); /*0x921170*/
            v6[2] = _mm_add_ps( /*0x921180*/
                      v6[2],
                      _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v178, (__m128)v178, 0), v6[3]), v106));
            v7[2] = _mm_add_ps(v7[2], v111); /*0x92118b*/
            *v4 = v110 + *v4; /*0x921191*/
          }
          v115 = *((_BYTE *)a2 + 0x10); /*0x9211fd*/
          a2 += 4; /*0x921200*/
          v8 += 2; /*0x921203*/
          ++v4; /*0x921206*/
        }
        while ( v115 == 0xA ); /*0x92120b*/
        v192 = v4; /*0x921211*/
        goto LABEL_3; /*0x921215*/
      case 0xB: /*0x9202fc*/
        do /*0x9217ee*/
        {
          v142 = *v8; /*0x921620*/
          v143 = _mm_add_ps( /*0x921654*/
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v144 = (float)(_mm_shuffle_ps(v143, v143, 0xAA).m128_f32[0] /*0x92167f*/
                       + (float)(_mm_shuffle_ps(v143, v143, 0x55).m128_f32[0] + v143.m128_f32[0]))
               * *(float *)(a1 + 8);
          v145 = (v8->m128_f32[3] - v195[1]) * *(float *)(a1 + 4) - v144; /*0x92168b*/
          if ( v145 <= *(float *)&SrcStr ) /*0x921698*/
          {
            v147 = v192; /*0x921722*/
          }
          else
          {
            v146 = v145 * v8[1].m128_f32[3]; /*0x92169e*/
            v147 = v192; /*0x9216a5*/
            *(float *)&v183 = v146; /*0x9216a9*/
            v148 = _mm_mul_ps(_mm_shuffle_ps((__m128)v183, (__m128)v183, 0), v6[3]); /*0x9216ba*/
            v149 = _mm_mul_ps(_mm_shuffle_ps((__m128)v183, (__m128)v183, 0), v7[3]); /*0x9216cb*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v148, v148, 0xFF), v142)); /*0x9216e9*/
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v149, v149, 0xFF), v142)); /*0x9216f4*/
            v150 = _mm_mul_ps(v149, v8[2]); /*0x9216fc*/
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v148, v8[1])); /*0x92170d*/
            v7[2] = _mm_add_ps(v7[2], v150); /*0x921718*/
            *v192 = v146 + *v192; /*0x92171e*/
          }
          v151 = (v8->m128_f32[3] - v195[2]) * *(float *)(a1 + 4) - v144; /*0x921735*/
          if ( v151 < *(float *)&SrcStr ) /*0x921742*/
          {
            v152 = v151 * v8[1].m128_f32[3]; /*0x921748*/
            *(float *)&v184 = v152; /*0x92174f*/
            v153 = _mm_mul_ps(_mm_shuffle_ps((__m128)v184, (__m128)v184, 0), v6[3]); /*0x921760*/
            v154 = _mm_mul_ps(_mm_shuffle_ps((__m128)v184, (__m128)v184, 0), v7[3]); /*0x921774*/
            v155 = _mm_mul_ps(_mm_shuffle_ps(v154, v154, 0xFF), *v8); /*0x921785*/
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v153, v153, 0xFF), *v8)); /*0x921792*/
            v7[1] = _mm_sub_ps(v7[1], v155); /*0x92179d*/
            v156 = _mm_mul_ps(v154, v8[2]); /*0x9217a5*/
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v153, v8[1])); /*0x9217b6*/
            v7[2] = _mm_add_ps(v7[2], v156); /*0x9217c1*/
            *v147 = v152 + *v147; /*0x9217c7*/
          }
          v8 = (__m128 *)sub_8F0EE0((char *)v8, 1); /*0x9217d6*/
          ++v192; /*0x9217d8*/
          v157 = *((_BYTE *)v195 + 0xC); /*0x9217e1*/
          v158 = v195 + 3; /*0x9217e4*/
          v195 += 3; /*0x9217ea*/
        }
        while ( v157 == 0xB ); /*0x9217ee*/
        v4 = v192; /*0x9217f4*/
        a2 = v158; /*0x9217f8*/
        goto LABEL_4; /*0x9217fa*/
      case 0xC: /*0x9202fc*/
        do /*0x9213dc*/
        {
          v121 = v8[1]; /*0x921330*/
          v122 = v8[1].m128_f32[3]; /*0x921334*/
          v123 = *v8; /*0x92133b*/
          v124 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v121)); /*0x92134b*/
          ++a2; /*0x921379*/
          v8 += 2; /*0x921383*/
          ++v4; /*0x921389*/
          v125 = (v122 * *(float *)(a1 + 4) /*0x92138e*/
                - (float)(_mm_shuffle_ps(v124, v124, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v124, v124, 0x55).m128_f32[0] + v124.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8[0xFFFFFFFE].m128_f32[3];
          *(float *)&v180 = v125; /*0x921391*/
          v126 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v180, (__m128)v180, 0), v7[3]), v121); /*0x9213b3*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v180, (__m128)v180, 0), v6[3]), v123)); /*0x9213c3*/
          v7[2] = _mm_add_ps(v7[2], v126); /*0x9213ce*/
          v4[0xFFFFFFFF] = v125 + v4[0xFFFFFFFF]; /*0x9213d5*/
        }
        while ( *(_BYTE *)a2 == 0xC ); /*0x9213dc*/
        v192 = v4; /*0x9213e2*/
        goto LABEL_3; /*0x9213e6*/
      case 0xD: /*0x9202fc*/
        do /*0x9214e3*/
        {
          v127 = v8->m128_f32[3]; /*0x9213f0*/
          v128 = *v8; /*0x9213fb*/
          v129 = _mm_add_ps( /*0x921420*/
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          ++a2; /*0x921455*/
          v8 += 3; /*0x92145b*/
          ++v4; /*0x92145e*/
          v130 = (v127 * *(float *)(a1 + 4) /*0x921463*/
                - (float)(_mm_shuffle_ps(v129, v129, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v129, v129, 0x55).m128_f32[0] + v129.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8[0xFFFFFFFE].m128_f32[3];
          *(float *)&v181 = v130; /*0x921466*/
          v131 = _mm_mul_ps(_mm_shuffle_ps((__m128)v181, (__m128)v181, 0), v6[3]); /*0x921477*/
          v132 = _mm_mul_ps(_mm_shuffle_ps((__m128)v181, (__m128)v181, 0), v7[3]); /*0x921488*/
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v131, v131, 0xFF), v128)); /*0x9214a6*/
          v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v132, v132, 0xFF), v128)); /*0x9214b1*/
          v133 = _mm_mul_ps(v132, v8[0xFFFFFFFF]); /*0x9214b9*/
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v131, v8[0xFFFFFFFE])); /*0x9214ca*/
          v7[2] = _mm_add_ps(v7[2], v133); /*0x9214d5*/
          v4[0xFFFFFFFF] = v130 + v4[0xFFFFFFFF]; /*0x9214dc*/
        }
        while ( *(_BYTE *)a2 == 0xD ); /*0x9214e3*/
        v192 = v4; /*0x9214e9*/
        goto LABEL_3; /*0x9214ed*/
      case 0xE: /*0x9202fc*/
        (*((void (__cdecl **)(__m128 *, float *))v195 + 1))(v8, v195 + 2); /*0x9219cb*/
        v4 = v192; /*0x9219db*/
        v195 = (float *)((char *)v195 + *((unsigned __int8 *)v195 + 1)); /*0x9219df*/
        a2 = v195; /*0x9219e3*/
        goto LABEL_4; /*0x9219e5*/
      case 0xF: /*0x9202fc*/
        v204 = *(_DWORD *)(a1 + 8); /*0x921982*/
        v202 = *(_DWORD *)(a1 + 4); /*0x921989*/
        *(float *)(a1 + 8) = a2[2]; /*0x921990*/
        *(float *)(a1 + 4) = a2[1]; /*0x921996*/
        v4 = v192; /*0x921999*/
        a2 += 3; /*0x92199d*/
        goto LABEL_3; /*0x9219a0*/
      case 0x10: /*0x9202fc*/
        *(_DWORD *)(a1 + 4) = v202; /*0x9219ac*/
        *(_DWORD *)(a1 + 8) = v204; /*0x9219b3*/
        v4 = v192; /*0x9219b6*/
        ++a2; /*0x9219ba*/
        goto LABEL_3; /*0x9219bd*/
      default:
        __debugbreak(); /*0x9219ea*/
        return result;
    }
  }
LABEL_46:
  while ( 1 ) /*0x921227*/
  {
    v116 = a2[3] + v8[1].m128_f32[3]; /*0x921227*/
    v117 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v8[1])); /*0x921243*/
    v118 = (v116 * a2[4] /*0x92126d*/
          - (float)(_mm_shuffle_ps(v117, v117, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v117, v117, 0x55).m128_f32[0] + v117.m128_f32[0]))
          * a2[5])
         * v8->m128_f32[3];
    v190 = v118; /*0x921270*/
    if ( v118 > a2[1] ) /*0x92127c*/
      break; /*0x92127c*/
    if ( v190 < (double)a2[2] ) /*0x92129f*/
    {
      if ( *((_DWORD *)a2 + 6) ) /*0x9212a1*/
        v116 = v116 * (a2[2] / v190); /*0x9212af*/
      v119 = a2[2]; /*0x9212b1*/
      goto LABEL_54; /*0x9212b1*/
    }
LABEL_55:
    v8[1].m128_f32[3] = v116; /*0x9212b8*/
    v120 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v190), (__m128)LODWORD(v190), 0), v7[3]), v8[1]); /*0x9212f1*/
    v6[2] = _mm_add_ps( /*0x921300*/
              v6[2],
              _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v190), (__m128)LODWORD(v190), 0), v6[3]), *v8));
    v7[2] = _mm_add_ps(v7[2], v120); /*0x92130b*/
    a2 += 7; /*0x921311*/
    v8 += 2; /*0x921314*/
    *v4 = v190 + *v4; /*0x921317*/
    ++v4; /*0x92131b*/
    if ( *(_BYTE *)a2 != 4 ) /*0x921320*/
    {
      v192 = v4; /*0x921326*/
      goto LABEL_3; /*0x92132a*/
    }
  }
  if ( *((_DWORD *)a2 + 6) ) /*0x92127e*/
    v116 = v116 * (a2[1] / v190); /*0x92128c*/
  v119 = a2[1]; /*0x92128e*/
LABEL_54:
  v190 = v119; /*0x9212b4*/
  goto LABEL_55; /*0x9212b4*/
}
