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

  v204 = *(_DWORD *)(a1 + 8);
  v4 = a4;
  v202 = *(_DWORD *)(a1 + 4);
  v192 = a4;
  while ( 2 )
  {
    v6 = *((__m128 **)a2 + 3);
    v7 = *((__m128 **)a2 + 4);
    v8 = *((__m128 **)a2 + 1);
    a2 += 6;
LABEL_3:
    v195 = a2;
LABEL_4:
    v185 = v8 + 4;
LABEL_5:
    result = *(char *)a2;
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        return result;
      case 1:
        continue;
      case 2:
        do
        {
          v45 = *v8;
          v46 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                  _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v47 = v8->m128_f32[3] * *(float *)(a1 + 4)
              - (float)(_mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]))
              * *(float *)(a1 + 8);
          if ( v47 > *(float *)&SrcStr )
          {
            v48 = v47 * v8[1].m128_f32[3];
            *(float *)&v169 = v48;
            v49 = _mm_mul_ps(_mm_shuffle_ps((__m128)v169, (__m128)v169, 0), v6[3]);
            v50 = _mm_mul_ps(_mm_shuffle_ps((__m128)v169, (__m128)v169, 0), v7[3]);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xFF), v45));
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xFF), v45));
            v51 = _mm_mul_ps(v50, v8[2]);
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v49, v8[1]));
            v7[2] = _mm_add_ps(v7[2], v51);
            *v4 = v48 + *v4;
          }
          v52 = *((_BYTE *)a2++ + 4);
          v8 += 3;
          ++v4;
        }
        while ( v52 == 2 );
        v192 = v4;
        goto LABEL_3;
      case 3:
        v10 = *v8;
        v11 = _mm_sub_ps(v6[1], v7[1]);
        v12 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(v6[2], v185[0xFFFFFFFD]), _mm_mul_ps(v7[2], v185[0xFFFFFFFE])),
                _mm_mul_ps(v11, *v8));
        v207 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
        v13 = v185[0xFFFFFFFF];
        v14 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], *v185), _mm_mul_ps(v7[2], v185[1])), _mm_mul_ps(v11, v13));
        v15 = v185[0xFFFFFFFC].m128_f32[3] * *(float *)(a1 + 4) - v207 * *(float *)(a1 + 8);
        v16 = v185[0xFFFFFFFF].m128_f32[3] * *(float *)(a1 + 4)
            - (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]))
            * *(float *)(a1 + 8);
        v193 = v15 * v185[0xFFFFFFFE].m128_f32[3] + v16 * a2[1];
        v196 = v16 * v185[1].m128_f32[3] + v15 * a2[1];
        v197 = v15 * v185[0xFFFFFFFD].m128_f32[3];
        v167 = v16 * v185->m128_f32[3];
        if ( v193 <= (double)*(float *)&SrcStr )
        {
          if ( v167 > (double)*(float *)&SrcStr )
          {
            v22 = v167;
            v21 = v185;
            v30 = _mm_shuffle_ps((__m128)LODWORD(v167), (__m128)LODWORD(v167), 0);
            v23 = _mm_mul_ps(v30, v6[3]);
            v25 = _mm_mul_ps(v30, v7[3]);
            v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0xFF), v13);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xFF), v13));
            goto LABEL_13;
          }
        }
        else if ( v196 > (double)*(float *)&SrcStr )
        {
          v17 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v193), (__m128)LODWORD(v193), 0), v6[3]);
          v18 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v193), (__m128)LODWORD(v193), 0), v7[3]);
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xFF), v10));
          v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0xFF), v10));
          v19 = _mm_mul_ps(v18, v185[0xFFFFFFFE]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v17, v185[0xFFFFFFFD]));
          v7[2] = _mm_add_ps(v7[2], v19);
          v20 = (__m128)LODWORD(v196);
          v21 = v185;
          *v4 = v193 + *v4;
          v22 = v196;
          v23 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v6[3]);
          v24 = v185[0xFFFFFFFF];
          v25 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v7[3]);
          v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0xFF), v24);
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xFF), v24));
LABEL_13:
          v7[1] = _mm_sub_ps(v7[1], v26);
          v31 = _mm_mul_ps(v25, v21[1]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v23, *v21));
          v7[2] = _mm_add_ps(v7[2], v31);
          v4[1] = v22 + v4[1];
          goto LABEL_14;
        }
        if ( v197 > (double)*(float *)&SrcStr )
        {
          v27 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v197), (__m128)LODWORD(v197), 0), v6[3]);
          v28 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v197), (__m128)LODWORD(v197), 0), v7[3]);
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xFF), v10));
          v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0xFF), v10));
          v29 = _mm_mul_ps(v28, v185[0xFFFFFFFE]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v27, v185[0xFFFFFFFD]));
          v7[2] = _mm_add_ps(v7[2], v29);
          *v4 = v197 + *v4;
        }
LABEL_14:
        a2 += 2;
        v185 += 6;
        v4 += 2;
        v8 += 6;
        v192 = v4;
        v195 = a2;
        if ( *(_BYTE *)a2 == 3 )
        {
          v32 = *v8;
          v33 = _mm_sub_ps(v6[1], v7[1]);
          v34 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])), _mm_mul_ps(v33, *v8));
          v35 = _mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0];
          v36 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0];
          v37 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[4]), _mm_mul_ps(v7[2], v8[5])), _mm_mul_ps(v33, v8[3]));
          v38 = v8->m128_f32[3] * *(float *)(a1 + 4) - (float)(v36 + v35) * *(float *)(a1 + 8);
          v39 = v8[3].m128_f32[3] * *(float *)(a1 + 4)
              - (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]))
              * *(float *)(a1 + 8);
          v168 = v38 * v8[2].m128_f32[3] + v39 * a2[1];
          v198 = v39 * v8[5].m128_f32[3] + v38 * a2[1];
          v186 = v38 * v8[1].m128_f32[3];
          v194 = v39 * v8[4].m128_f32[3];
          if ( v168 <= (double)*(float *)&SrcStr )
          {
            if ( v194 <= (double)*(float *)&SrcStr )
              goto LABEL_23;
            v44 = v194;
            v43 = (__m128)LODWORD(v194);
LABEL_26:
            v56 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v6[3]);
            v57 = v8[3];
            v58 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v7[3]);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0xFF), v57));
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0xFF), v57));
            v59 = _mm_mul_ps(v58, v8[5]);
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v56, v8[4]));
            v7[2] = _mm_add_ps(v7[2], v59);
            v4[1] = v44 + v4[1];
          }
          else
          {
            if ( v198 > (double)*(float *)&SrcStr )
            {
              v40 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v168), (__m128)LODWORD(v168), 0), v6[3]);
              v41 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v168), (__m128)LODWORD(v168), 0), v7[3]);
              v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0xFF), v32));
              v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v41, v41, 0xFF), v32));
              v42 = _mm_mul_ps(v41, v8[2]);
              v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v40, v8[1]));
              v7[2] = _mm_add_ps(v7[2], v42);
              v43 = (__m128)LODWORD(v198);
              *v4 = v168 + *v4;
              v44 = v198;
              goto LABEL_26;
            }
LABEL_23:
            if ( v186 > (double)*(float *)&SrcStr )
            {
              v53 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v186), (__m128)LODWORD(v186), 0), v6[3]);
              v54 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v186), (__m128)LODWORD(v186), 0), v7[3]);
              v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0xFF), v32));
              v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0xFF), v32));
              v55 = _mm_mul_ps(v54, v8[2]);
              v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v53, v8[1]));
              v7[2] = _mm_add_ps(v7[2], v55);
              *v4 = v186 + *v4;
            }
          }
          v60 = *((_BYTE *)a2 + 8);
          a2 += 2;
          v4 += 2;
          v8 += 6;
          v192 = v4;
          v195 = a2;
          if ( v60 == 8 )
          {
LABEL_28:
            v61 = v6[2];
            v62 = _mm_sub_ps(v6[1], v7[1]);
            v63 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v61, v8[1]), _mm_mul_ps(v7[2], v8[2])), _mm_mul_ps(v62, *v8));
            v205 = _mm_shuffle_ps(v63, v63, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v63, v63, 0x55).m128_f32[0] + v63.m128_f32[0]);
            v64 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v61, v8[4]), _mm_mul_ps(v7[2], v8[5])), _mm_mul_ps(v62, v8[3]));
            v206 = _mm_shuffle_ps(v64, v64, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v64, v64, 0x55).m128_f32[0] + v64.m128_f32[0]);
            v65 = _mm_add_ps(_mm_mul_ps(v61, v8[6]), _mm_mul_ps(v7[2], v8[7]));
            v187 = (v8[7].m128_f32[3] * *(float *)(a1 + 0xC)
                  - (float)(_mm_shuffle_ps(v65, v65, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v65, v65, 0x55).m128_f32[0] + v65.m128_f32[0]))
                  * *(float *)(a1 + 8))
                 * v8[6].m128_f32[3];
            v199 = *(float *)(a1 + 0xC) * v8->m128_f32[3] - v205 * *(float *)(a1 + 8);
            v170 = v8[3].m128_f32[3] * *(float *)(a1 + 0xC) - v206 * *(float *)(a1 + 8);
            v66 = v199 * v8[2].m128_f32[3] + v170 * a2[2];
            v67 = v170 * v8[5].m128_f32[3] + v199 * a2[2];
            v68 = v187;
            v69 = v68 * v68 + v67 * v67 + v66 * v66;
            if ( v69 > a2[3] * a2[3] )
            {
              v70 = a2[3] / sqrt(v69);
              v66 = v66 * v70;
              v67 = v67 * v70;
              v68 = v68 * v70;
              v8->m128_f32[3] = v70 * v8->m128_f32[3];
              v8[3].m128_f32[3] = v70 * v8[3].m128_f32[3];
              v8[7].m128_f32[3] = v70 * v8[7].m128_f32[3];
            }
            *(float *)&v188 = v68 * a2[5];
            *(float *)&v171 = v66;
            v71 = _mm_mul_ps(_mm_shuffle_ps((__m128)v171, (__m128)v171, 0), v6[3]);
            v72 = _mm_mul_ps(_mm_shuffle_ps((__m128)v171, (__m128)v171, 0), v7[3]);
            v73 = _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0xFF), *v8);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v71, v71, 0xFF), *v8));
            v7[1] = _mm_sub_ps(v7[1], v73);
            v74 = _mm_mul_ps(v72, v8[2]);
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v71, v8[1]));
            v7[2] = _mm_add_ps(v7[2], v74);
            *v4 = v66 + *v4;
            *(float *)&v172 = v67;
            v75 = _mm_mul_ps(_mm_shuffle_ps((__m128)v172, (__m128)v172, 0), v6[3]);
            v76 = v8[3];
            v77 = _mm_mul_ps(_mm_shuffle_ps((__m128)v172, (__m128)v172, 0), v7[3]);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v75, v75, 0xFF), v76));
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0xFF), v76));
            v78 = _mm_mul_ps(v77, v8[5]);
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v75, v8[4]));
            v7[2] = _mm_add_ps(v7[2], v78);
            v4[1] = v67 + v4[1];
            v79 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v188, (__m128)v188, 0), v7[3]), v8[7]);
            v6[2] = _mm_add_ps(
                      v6[2],
                      _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v188, (__m128)v188, 0), v6[3]), v8[6]));
            v7[2] = _mm_add_ps(v7[2], v79);
            v80 = *(float *)&v188 + v4[2];
            a2 += 6;
            v4 += 3;
            v4[0xFFFFFFFF] = v80;
            v8 += 8;
            v192 = v4;
            v195 = a2;
            if ( *(_BYTE *)a2 == 1 )
              continue;
          }
          goto LABEL_4;
        }
        goto LABEL_5;
      case 4:
        goto LABEL_46;
      case 5:
        do
        {
          v159 = a2[3] + v8->m128_f32[3];
          v160 = _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v161 = (v159 * a2[4]
                - (float)(_mm_shuffle_ps(v160, v160, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v160, v160, 0x55).m128_f32[0] + v160.m128_f32[0]))
                * a2[5])
               * v8[1].m128_f32[3];
          v191 = v161;
          if ( v161 <= a2[1] )
          {
            if ( v191 < (double)a2[2] )
            {
              if ( *((_DWORD *)a2 + 6) )
                v159 = v159 * (a2[2] / v191);
              v191 = a2[2];
            }
          }
          else
          {
            if ( *((_DWORD *)a2 + 6) )
              v159 = v159 * (a2[1] / v191);
            v191 = a2[1];
          }
          v8->m128_f32[3] = v159;
          v208 = v191;
          v162 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v208), (__m128)LODWORD(v208), 0), v6[3]);
          v163 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v208), (__m128)LODWORD(v208), 0), v7[3]);
          v164 = _mm_mul_ps(_mm_shuffle_ps(v163, v163, 0xFF), *v8);
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v162, v162, 0xFF), *v8));
          v7[1] = _mm_sub_ps(v7[1], v164);
          v165 = _mm_mul_ps(v163, v8[2]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v162, v8[1]));
          v7[2] = _mm_add_ps(v7[2], v165);
          *v192 = v191 + *v192;
          v8 = (__m128 *)sub_8F0EE0((char *)v8, 1);
          ++v192;
          v166 = *((_BYTE *)v195 + 0x1C) == 5;
          v195 += 7;
          a2 = v195;
        }
        while ( v166 );
        v4 = v192;
        goto LABEL_4;
      case 6:
        do
        {
          v134 = _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v201 = a2[1];
          v135 = (v8->m128_f32[3] * *(float *)(a1 + 4)
                - (float)(_mm_shuffle_ps(v134, v134, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v134, v134, 0x55).m128_f32[0] + v134.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8[1].m128_f32[3];
          v136 = fabs(v135);
          if ( v136 > v201 )
          {
            v137 = v201 / v136;
            v135 = v135 * v137;
            v8->m128_f32[3] = v137 * v8->m128_f32[3];
          }
          *(float *)&v182 = v135;
          v138 = _mm_mul_ps(_mm_shuffle_ps((__m128)v182, (__m128)v182, 0), v6[3]);
          v139 = _mm_mul_ps(_mm_shuffle_ps((__m128)v182, (__m128)v182, 0), v7[3]);
          v140 = _mm_mul_ps(_mm_shuffle_ps(v139, v139, 0xFF), *v8);
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v138, v138, 0xFF), *v8));
          v7[1] = _mm_sub_ps(v7[1], v140);
          v141 = _mm_mul_ps(v139, v8[2]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v138, v8[1]));
          v7[2] = _mm_add_ps(v7[2], v141);
          a2 += 2;
          v8 += 3;
          *v4 = v135 + *v4;
          ++v4;
        }
        while ( *(_BYTE *)a2 == 6 );
        v192 = v4;
        goto LABEL_3;
      case 7:
        v81 = _mm_sub_ps(v6[1], v7[1]);
        v82 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])), _mm_mul_ps(v81, *v8));
        v83 = _mm_shuffle_ps(v82, v82, 0x55).m128_f32[0] + v82.m128_f32[0];
        v84 = _mm_shuffle_ps(v82, v82, 0xAA).m128_f32[0];
        v85 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v6[2], v8[4]), _mm_mul_ps(v7[2], v8[5])), _mm_mul_ps(v81, v8[3]));
        v200 = *(float *)(a1 + 0xC) * v8->m128_f32[3] - (float)(v84 + v83) * *(float *)(a1 + 8);
        v173 = v8[3].m128_f32[3] * *(float *)(a1 + 0xC)
             - (float)(_mm_shuffle_ps(v85, v85, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v85, v85, 0x55).m128_f32[0] + v85.m128_f32[0]))
             * *(float *)(a1 + 8);
        v189 = a2[3] * a2[3];
        v86 = v200 * v8[2].m128_f32[3] + v173 * a2[2];
        v87 = v173 * v8[5].m128_f32[3] + v200 * a2[2];
        v88 = v86 * v86 + v87 * v87;
        if ( v88 > v189 )
        {
          v89 = sqrt(v189 / v88);
          v86 = v86 * v89;
          v87 = v87 * v89;
          v8->m128_f32[3] = v89 * v8->m128_f32[3];
          v8[3].m128_f32[3] = v89 * v8[3].m128_f32[3];
        }
        *(float *)&v174 = v86;
        a2 += 5;
        v90 = v87;
        v91 = _mm_mul_ps(_mm_shuffle_ps((__m128)v174, (__m128)v174, 0), v6[3]);
        v92 = _mm_mul_ps(_mm_shuffle_ps((__m128)v174, (__m128)v174, 0), v7[3]);
        v93 = _mm_mul_ps(_mm_shuffle_ps(v92, v92, 0xFF), *v8);
        v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v91, v91, 0xFF), *v8));
        v7[1] = _mm_sub_ps(v7[1], v93);
        v94 = _mm_mul_ps(v92, v8[2]);
        v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v91, v8[1]));
        v7[2] = _mm_add_ps(v7[2], v94);
        v95 = v86 + *v4;
        v4 += 2;
        v8 += 6;
        v4[0xFFFFFFFE] = v95;
        v192 = v4;
        *(float *)&v175 = v90;
        v195 = a2;
        v96 = _mm_mul_ps(_mm_shuffle_ps((__m128)v175, (__m128)v175, 0), v6[3]);
        v97 = v8[0xFFFFFFFD];
        v98 = _mm_mul_ps(_mm_shuffle_ps((__m128)v175, (__m128)v175, 0), v7[3]);
        v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v96, v96, 0xFF), v97));
        v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v98, v98, 0xFF), v97));
        v99 = _mm_mul_ps(v98, v8[0xFFFFFFFF]);
        v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v96, v8[0xFFFFFFFE]));
        v7[2] = _mm_add_ps(v7[2], v99);
        v4[0xFFFFFFFF] = v90 + v4[0xFFFFFFFF];
        if ( *(_BYTE *)a2 == 1 )
          continue;
        goto LABEL_4;
      case 8:
        goto LABEL_28;
      case 9:
        do
        {
          v100 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v8[1]));
          v203 = a2[1];
          v101 = (v8[1].m128_f32[3] * *(float *)(a1 + 0xC)
                - (float)(_mm_shuffle_ps(v100, v100, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v100, v100, 0x55).m128_f32[0] + v100.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8->m128_f32[3];
          v102 = fabs(v101);
          if ( v102 > v203 )
          {
            v103 = v203 / v102;
            v101 = v101 * v103;
            v8[1].m128_f32[3] = v103 * v8[1].m128_f32[3];
          }
          *(float *)&v176 = v101;
          v104 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v176, (__m128)v176, 0), v7[3]), v8[1]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v176, (__m128)v176, 0), v6[3]), *v8));
          v7[2] = _mm_add_ps(v7[2], v104);
          a2 += 2;
          v8 += 2;
          *v4 = v101 + *v4;
          ++v4;
        }
        while ( *(_BYTE *)a2 == 9 );
        v192 = v4;
        goto LABEL_3;
      case 0xA:
        do
        {
          v105 = v8[1];
          v106 = *v8;
          v107 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v105));
          v108 = (float)(_mm_shuffle_ps(v107, v107, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v107, v107, 0x55).m128_f32[0] + v107.m128_f32[0]))
               * *(float *)(a1 + 8);
          v109 = (v8[1].m128_f32[3] - a2[1]) * a2[3] - v108;
          if ( v109 <= *(float *)&SrcStr )
          {
            v112 = (v8[1].m128_f32[3] - a2[2]) * a2[3] - v108;
            if ( v112 < *(float *)&SrcStr )
            {
              v113 = v112 * v8->m128_f32[3];
              *(float *)&v179 = v113;
              v114 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v179, (__m128)v179, 0), v7[3]), v105);
              v6[2] = _mm_add_ps(
                        v6[2],
                        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v179, (__m128)v179, 0), v6[3]), v106));
              v7[2] = _mm_add_ps(v7[2], v114);
              *v4 = v113 + *v4;
            }
          }
          else
          {
            v177 = v109;
            v110 = v177 * v8->m128_f32[3];
            *(float *)&v178 = v110;
            v111 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v178, (__m128)v178, 0), v7[3]), v105);
            v6[2] = _mm_add_ps(
                      v6[2],
                      _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v178, (__m128)v178, 0), v6[3]), v106));
            v7[2] = _mm_add_ps(v7[2], v111);
            *v4 = v110 + *v4;
          }
          v115 = *((_BYTE *)a2 + 0x10);
          a2 += 4;
          v8 += 2;
          ++v4;
        }
        while ( v115 == 0xA );
        v192 = v4;
        goto LABEL_3;
      case 0xB:
        do
        {
          v142 = *v8;
          v143 = _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          v144 = (float)(_mm_shuffle_ps(v143, v143, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v143, v143, 0x55).m128_f32[0] + v143.m128_f32[0]))
               * *(float *)(a1 + 8);
          v145 = (v8->m128_f32[3] - v195[1]) * *(float *)(a1 + 4) - v144;
          if ( v145 <= *(float *)&SrcStr )
          {
            v147 = v192;
          }
          else
          {
            v146 = v145 * v8[1].m128_f32[3];
            v147 = v192;
            *(float *)&v183 = v146;
            v148 = _mm_mul_ps(_mm_shuffle_ps((__m128)v183, (__m128)v183, 0), v6[3]);
            v149 = _mm_mul_ps(_mm_shuffle_ps((__m128)v183, (__m128)v183, 0), v7[3]);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v148, v148, 0xFF), v142));
            v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v149, v149, 0xFF), v142));
            v150 = _mm_mul_ps(v149, v8[2]);
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v148, v8[1]));
            v7[2] = _mm_add_ps(v7[2], v150);
            *v192 = v146 + *v192;
          }
          v151 = (v8->m128_f32[3] - v195[2]) * *(float *)(a1 + 4) - v144;
          if ( v151 < *(float *)&SrcStr )
          {
            v152 = v151 * v8[1].m128_f32[3];
            *(float *)&v184 = v152;
            v153 = _mm_mul_ps(_mm_shuffle_ps((__m128)v184, (__m128)v184, 0), v6[3]);
            v154 = _mm_mul_ps(_mm_shuffle_ps((__m128)v184, (__m128)v184, 0), v7[3]);
            v155 = _mm_mul_ps(_mm_shuffle_ps(v154, v154, 0xFF), *v8);
            v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v153, v153, 0xFF), *v8));
            v7[1] = _mm_sub_ps(v7[1], v155);
            v156 = _mm_mul_ps(v154, v8[2]);
            v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v153, v8[1]));
            v7[2] = _mm_add_ps(v7[2], v156);
            *v147 = v152 + *v147;
          }
          v8 = (__m128 *)sub_8F0EE0((char *)v8, 1);
          ++v192;
          v157 = *((_BYTE *)v195 + 0xC);
          v158 = v195 + 3;
          v195 += 3;
        }
        while ( v157 == 0xB );
        v4 = v192;
        a2 = v158;
        goto LABEL_4;
      case 0xC:
        do
        {
          v121 = v8[1];
          v122 = v8[1].m128_f32[3];
          v123 = *v8;
          v124 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v121));
          ++a2;
          v8 += 2;
          ++v4;
          v125 = (v122 * *(float *)(a1 + 4)
                - (float)(_mm_shuffle_ps(v124, v124, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v124, v124, 0x55).m128_f32[0] + v124.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8[0xFFFFFFFE].m128_f32[3];
          *(float *)&v180 = v125;
          v126 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v180, (__m128)v180, 0), v7[3]), v121);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v180, (__m128)v180, 0), v6[3]), v123));
          v7[2] = _mm_add_ps(v7[2], v126);
          v4[0xFFFFFFFF] = v125 + v4[0xFFFFFFFF];
        }
        while ( *(_BYTE *)a2 == 0xC );
        v192 = v4;
        goto LABEL_3;
      case 0xD:
        do
        {
          v127 = v8->m128_f32[3];
          v128 = *v8;
          v129 = _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(v6[2], v8[1]), _mm_mul_ps(v7[2], v8[2])),
                   _mm_mul_ps(_mm_sub_ps(v6[1], v7[1]), *v8));
          ++a2;
          v8 += 3;
          ++v4;
          v130 = (v127 * *(float *)(a1 + 4)
                - (float)(_mm_shuffle_ps(v129, v129, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v129, v129, 0x55).m128_f32[0] + v129.m128_f32[0]))
                * *(float *)(a1 + 8))
               * v8[0xFFFFFFFE].m128_f32[3];
          *(float *)&v181 = v130;
          v131 = _mm_mul_ps(_mm_shuffle_ps((__m128)v181, (__m128)v181, 0), v6[3]);
          v132 = _mm_mul_ps(_mm_shuffle_ps((__m128)v181, (__m128)v181, 0), v7[3]);
          v6[1] = _mm_add_ps(v6[1], _mm_mul_ps(_mm_shuffle_ps(v131, v131, 0xFF), v128));
          v7[1] = _mm_sub_ps(v7[1], _mm_mul_ps(_mm_shuffle_ps(v132, v132, 0xFF), v128));
          v133 = _mm_mul_ps(v132, v8[0xFFFFFFFF]);
          v6[2] = _mm_add_ps(v6[2], _mm_mul_ps(v131, v8[0xFFFFFFFE]));
          v7[2] = _mm_add_ps(v7[2], v133);
          v4[0xFFFFFFFF] = v130 + v4[0xFFFFFFFF];
        }
        while ( *(_BYTE *)a2 == 0xD );
        v192 = v4;
        goto LABEL_3;
      case 0xE:
        (*((void (__cdecl **)(__m128 *, float *))v195 + 1))(v8, v195 + 2);
        v4 = v192;
        v195 = (float *)((char *)v195 + *((unsigned __int8 *)v195 + 1));
        a2 = v195;
        goto LABEL_4;
      case 0xF:
        v204 = *(_DWORD *)(a1 + 8);
        v202 = *(_DWORD *)(a1 + 4);
        *(float *)(a1 + 8) = a2[2];
        *(float *)(a1 + 4) = a2[1];
        v4 = v192;
        a2 += 3;
        goto LABEL_3;
      case 0x10:
        *(_DWORD *)(a1 + 4) = v202;
        *(_DWORD *)(a1 + 8) = v204;
        v4 = v192;
        ++a2;
        goto LABEL_3;
      default:
        __debugbreak();
        return result;
    }
  }
LABEL_46:
  while ( 1 )
  {
    v116 = a2[3] + v8[1].m128_f32[3];
    v117 = _mm_add_ps(_mm_mul_ps(v6[2], *v8), _mm_mul_ps(v7[2], v8[1]));
    v118 = (v116 * a2[4]
          - (float)(_mm_shuffle_ps(v117, v117, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v117, v117, 0x55).m128_f32[0] + v117.m128_f32[0]))
          * a2[5])
         * v8->m128_f32[3];
    v190 = v118;
    if ( v118 > a2[1] )
      break;
    if ( v190 < (double)a2[2] )
    {
      if ( *((_DWORD *)a2 + 6) )
        v116 = v116 * (a2[2] / v190);
      v119 = a2[2];
      goto LABEL_54;
    }
LABEL_55:
    v8[1].m128_f32[3] = v116;
    v120 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v190), (__m128)LODWORD(v190), 0), v7[3]), v8[1]);
    v6[2] = _mm_add_ps(
              v6[2],
              _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v190), (__m128)LODWORD(v190), 0), v6[3]), *v8));
    v7[2] = _mm_add_ps(v7[2], v120);
    a2 += 7;
    v8 += 2;
    *v4 = v190 + *v4;
    ++v4;
    if ( *(_BYTE *)a2 != 4 )
    {
      v192 = v4;
      goto LABEL_3;
    }
  }
  if ( *((_DWORD *)a2 + 6) )
    v116 = v116 * (a2[1] / v190);
  v119 = a2[1];
LABEL_54:
  v190 = v119;
  goto LABEL_55;
}
