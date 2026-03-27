int __usercall sub_921A40@<eax>(
        int a1@<ebx>,
        __m128 *a2,
        char *a3,
        __m128 *a4,
        float *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  char v13; // al
  __m128 *v15; // eax
  __int8 v16; // cl
  char *v17; // ebx
  float *v18; // edi
  __m128 *v19; // edx
  __m128 *v20; // esi
  __m128 *v21; // ecx
  __m128 v22; // xmm4
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  double v25; // st7
  double v26; // st6
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __m128 v30; // xmm1
  __m128 v31; // xmm1
  double v32; // st7
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm1
  __m128 v37; // xmm4
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm1
  char v41; // al
  __m128 v42; // xmm4
  __m128 *v43; // ecx
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  double v46; // st7
  double v47; // st6
  __m128 v48; // xmm1
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  __m128 v51; // xmm1
  double v52; // st7
  __m128 v53; // xmm1
  __m128 v54; // xmm0
  __m128 v55; // xmm2
  __m128 *v56; // eax
  __m128 *v57; // ecx
  __m128 v58; // xmm4
  __m128 v59; // xmm0
  double v60; // st7
  double v61; // st7
  __m128 v62; // xmm1
  __m128 v63; // xmm0
  __m128 v64; // xmm1
  __m128 v65; // xmm1
  char v66; // al
  __m128 v67; // xmm1
  __m128 v68; // xmm0
  __m128 v69; // xmm1
  __m128 v70; // xmm1
  __m128 v71; // xmm1
  __m128 v72; // xmm3
  __m128 v73; // xmm1
  char v74; // al
  __m128 v75; // xmm0
  __m128 *v76; // ecx
  __m128 v77; // xmm0
  __m128 v78; // xmm0
  double v79; // st7
  double v80; // st6
  long double v81; // st5
  long double v82; // st4
  long double v83; // st4
  __m128 v84; // xmm1
  __m128 v85; // xmm0
  __m128 v86; // xmm1
  __m128 v87; // xmm3
  __m128 v88; // xmm1
  __m128 v89; // xmm1
  __m128 v90; // xmm0
  __m128 v91; // xmm1
  __m128 v92; // xmm3
  __m128 v93; // xmm1
  __m128 v94; // xmm1
  __m128 v95; // xmm0
  __m128 v96; // xmm1
  __m128 *v97; // ecx
  __m128 v98; // xmm0
  __m128 v99; // xmm0
  double v100; // st7
  double v101; // st6
  double v102; // st5
  long double v103; // st5
  __m128 v104; // xmm1
  __m128 v105; // xmm0
  __m128 v106; // xmm1
  __m128 v107; // xmm3
  __m128 v108; // xmm1
  __m128 v109; // xmm1
  __m128 v110; // xmm0
  __m128 v111; // xmm1
  __m128 v112; // xmm3
  __m128 v113; // xmm1
  double v114; // st7
  char v115; // al
  __m128 *v116; // ecx
  __m128 v117; // xmm0
  long double v118; // st7
  long double v119; // st6
  long double v120; // st5
  __m128 v121; // xmm1
  __m128 v122; // xmm0
  __m128 v123; // xmm1
  __m128 *v124; // ecx
  __m128 v125; // xmm3
  __m128 v126; // xmm0
  double v127; // st7
  double v128; // st6
  double v129; // st7
  __m128 v130; // xmm1
  double v131; // st7
  __m128 v132; // xmm4
  char v133; // al
  __m128 *v134; // ecx
  __m128 v135; // xmm0
  double v136; // st7
  float v137; // eax
  __m128 v138; // xmm1
  __m128 v139; // xmm0
  __m128 v140; // xmm1
  __m128 v141; // xmm2
  double v142; // st7
  __m128 v143; // xmm3
  double v144; // st6
  __m128 v145; // xmm0
  double v146; // st7
  __m128 v147; // xmm4
  double v148; // st7
  double v149; // st6
  __m128 v150; // xmm2
  __m128 v151; // xmm0
  double v152; // st7
  __m128 v153; // xmm1
  __m128 v154; // xmm0
  __m128 v155; // xmm1
  __m128 v156; // xmm1
  __m128 *v157; // ecx
  __m128 v158; // xmm0
  long double v159; // st7
  long double v160; // st6
  long double v161; // rt2
  __m128 v162; // xmm1
  __m128 v163; // xmm0
  __m128 v164; // xmm1
  __m128 v165; // xmm3
  __m128 v166; // xmm1
  __m128 v167; // xmm4
  __m128 v168; // xmm0
  double v169; // st7
  double v170; // st6
  double v171; // st6
  __m128 v172; // xmm1
  __m128 v173; // xmm0
  __m128 v174; // xmm1
  __m128 v175; // xmm1
  double v176; // st7
  double v177; // st7
  __m128 v178; // xmm1
  __m128 v179; // xmm0
  __m128 v180; // xmm1
  __m128 v181; // xmm3
  __m128 v182; // xmm1
  __m128 v183; // xmm0
  double v184; // st7
  __m128 v185; // xmm1
  __m128 v186; // xmm0
  __m128 v187; // xmm1
  __m128 v188; // xmm3
  __m128 v189; // xmm1
  char *v190; // eax
  int v191; // ebx
  __m128 *v192; // eax
  char *v193; // ecx
  __m128 *v194; // esi
  __m128 *v195; // edi
  __m128 *v196; // eax
  char v197; // dl
  __m128 v198; // xmm3
  int v199; // ecx
  __int32 v200; // edx
  unsigned int *v201; // ecx
  __m128 v202; // xmm0
  __int32 v203; // ecx
  __int8 v204; // cl
  __m128 v205; // xmm3
  unsigned int *v206; // ecx
  __m128 v207; // xmm0
  __int32 v208; // ecx
  __int8 v209; // cl
  __m128 v210; // xmm6
  __m128 v211; // xmm1
  __m128 v212; // xmm0
  double v213; // st7
  __m128 v214; // xmm6
  __m128 v215; // xmm1
  __m128 v216; // xmm0
  double v217; // st7
  __m128 v218; // xmm6
  __m128 v219; // xmm1
  __m128 v220; // xmm0
  double v221; // st7
  __m128 v222; // xmm0
  __m128 v223; // xmm0
  double v224; // st7
  __m128 v225; // xmm0
  double v226; // st7
  float *v227; // edi
  char *v228; // esi
  char v229; // cl
  int v230; // edx
  char v231; // cl
  __m128 *v232; // [esp+14h] [ebp-FCh]
  float v233; // [esp+18h] [ebp-F8h]
  float v234; // [esp+18h] [ebp-F8h]
  float v235; // [esp+18h] [ebp-F8h]
  float v236; // [esp+1Ch] [ebp-F4h]
  unsigned int v237; // [esp+1Ch] [ebp-F4h]
  float v238; // [esp+1Ch] [ebp-F4h]
  unsigned int v239; // [esp+1Ch] [ebp-F4h]
  float v240; // [esp+1Ch] [ebp-F4h]
  unsigned int v241; // [esp+1Ch] [ebp-F4h]
  unsigned int v242; // [esp+1Ch] [ebp-F4h]
  float v243; // [esp+1Ch] [ebp-F4h]
  unsigned int v244; // [esp+1Ch] [ebp-F4h]
  unsigned int v245; // [esp+1Ch] [ebp-F4h]
  unsigned int v246; // [esp+1Ch] [ebp-F4h]
  unsigned int v247; // [esp+1Ch] [ebp-F4h]
  unsigned int v248; // [esp+1Ch] [ebp-F4h]
  unsigned int v249; // [esp+1Ch] [ebp-F4h]
  unsigned int v250; // [esp+1Ch] [ebp-F4h]
  float v251; // [esp+20h] [ebp-F0h]
  __m128 *v252; // [esp+20h] [ebp-F0h]
  __m128 *v253; // [esp+20h] [ebp-F0h]
  float v254; // [esp+20h] [ebp-F0h]
  unsigned int v255; // [esp+20h] [ebp-F0h]
  __m128 *v256; // [esp+20h] [ebp-F0h]
  float v257; // [esp+20h] [ebp-F0h]
  __m128 *v258; // [esp+20h] [ebp-F0h]
  __m128 *v259; // [esp+20h] [ebp-F0h]
  __m128 *v260; // [esp+20h] [ebp-F0h]
  float v261; // [esp+24h] [ebp-ECh]
  float v262; // [esp+24h] [ebp-ECh]
  float v263; // [esp+24h] [ebp-ECh]
  unsigned int v264; // [esp+24h] [ebp-ECh]
  float v265; // [esp+24h] [ebp-ECh]
  __m128 *v266; // [esp+24h] [ebp-ECh]
  unsigned int v267; // [esp+24h] [ebp-ECh]
  float v268; // [esp+28h] [ebp-E8h]
  float v269; // [esp+28h] [ebp-E8h]
  __m128 *v270; // [esp+28h] [ebp-E8h]
  float v271; // [esp+28h] [ebp-E8h]
  __m128 *v272; // [esp+28h] [ebp-E8h]
  __m128 *v273; // [esp+2Ch] [ebp-E4h]
  int v274; // [esp+30h] [ebp-E0h]
  unsigned __int64 v275; // [esp+38h] [ebp-D8h]
  float v276; // [esp+40h] [ebp-D0h]
  float v277; // [esp+44h] [ebp-CCh]
  float v278; // [esp+68h] [ebp-A8h]
  float v279; // [esp+88h] [ebp-88h]
  float v280; // [esp+90h] [ebp-80h]
  __int32 v281; // [esp+A4h] [ebp-6Ch]
  float v282; // [esp+C8h] [ebp-48h]
  float v283; // [esp+D0h] [ebp-40h]

  if ( !byte_BA84F8 )
  {
    v13 = sub_9246E0(a1, 0);
    byte_BA84F8 = v13;
    if ( !v13 )
      return 0;
  }
  v274 = 0;
  if ( a2[0xF].m128_i32[3] > 0 )
  {
LABEL_5:
    v15 = a4;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( !v15->m128_i8[0] )
        {
          do
          {
            v15[1] = _mm_add_ps(v15[1], a2[1]);
            v16 = v15[8].m128_i8[0];
            v15 += 8;
          }
          while ( !v16 );
        }
        if ( v15->m128_i8[0] != 1 )
          break;
        v15 += 8;
      }
      if ( v15->m128_i8[0] == 2 )
        break;
      __debugbreak();
    }
    v17 = a3;
    v18 = a5;
    v275 = *(unsigned __int64 *)((char *)a2->m128_u64 + 4);
    while ( 2 )
    {
      v19 = *((__m128 **)v17 + 3);
      v20 = *((__m128 **)v17 + 1);
      v273 = v19;
      v232 = *((__m128 **)v17 + 4);
      v17 += 0x18;
LABEL_15:
      v21 = v20 + 5;
LABEL_16:
      switch ( *v17 )
      {
        case 0:
          goto LABEL_104;
        case 1:
          continue;
        case 2:
          v57 = v232 + 1;
          v253 = v232 + 2;
          do
          {
            v58 = *v20;
            v59 = _mm_add_ps(
                    _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(*v253, v20[2])),
                    _mm_mul_ps(_mm_sub_ps(v19[1], *v57), *v20));
            v60 = v20->m128_f32[3] * a2->m128_f32[1]
                - (float)(_mm_shuffle_ps(v59, v59, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v59, v59, 0x55).m128_f32[0] + v59.m128_f32[0]))
                * a2->m128_f32[2];
            if ( v60 > *(float *)&SrcStr )
            {
              v61 = v60 * v20[1].m128_f32[3];
              *(float *)&v237 = v61;
              v62 = (__m128)v237;
              v63 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v19[3]);
              v64 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v232[3]);
              v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v63, v63, 0xFF), v58));
              *v57 = _mm_sub_ps(*v57, _mm_mul_ps(_mm_shuffle_ps(v64, v64, 0xFF), v58));
              v65 = _mm_mul_ps(v64, v20[2]);
              v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v63, v20[1]));
              *v253 = _mm_add_ps(*v253, v65);
              *v18 = v61 + *v18;
            }
            v66 = v17[4];
            v17 += 4;
            v20 += 3;
            ++v18;
          }
          while ( v66 == 2 );
          goto LABEL_15;
        case 3:
          v22 = *v20;
          v23 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(v19[2], v21[0xFFFFFFFC]), _mm_mul_ps(v232[2], v21[0xFFFFFFFD])),
                  _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), *v20));
          v283 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
          v24 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(v19[2], v21[0xFFFFFFFF]), _mm_mul_ps(v232[2], *v21)),
                  _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), v21[0xFFFFFFFE]));
          v25 = v21[0xFFFFFFFB].m128_f32[3] * a2->m128_f32[1] - v283 * a2->m128_f32[2];
          v26 = v21[0xFFFFFFFE].m128_f32[3] * a2->m128_f32[1]
              - (float)(_mm_shuffle_ps(v24, v24, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v24, v24, 0x55).m128_f32[0] + v24.m128_f32[0]))
              * a2->m128_f32[2];
          v268 = v26 * *((float *)v17 + 1) + v21[0xFFFFFFFD].m128_f32[3] * v25;
          v233 = v21->m128_f32[3] * v26 + v25 * *((float *)v17 + 1);
          v251 = v25 * v21[0xFFFFFFFC].m128_f32[3];
          v261 = v26 * v21[0xFFFFFFFF].m128_f32[3];
          if ( v268 <= (double)*(float *)&SrcStr )
          {
            if ( v261 <= (double)*(float *)&SrcStr )
            {
LABEL_21:
              if ( v251 > (double)*(float *)&SrcStr )
              {
                v33 = (__m128)LODWORD(v251);
                v34 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v19[3]);
                v35 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v232[3]);
                v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xFF), v22));
                v232[1] = _mm_sub_ps(v232[1], _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xFF), v22));
                v36 = _mm_mul_ps(v35, v21[0xFFFFFFFD]);
                v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v34, v21[0xFFFFFFFC]));
                v232[2] = _mm_add_ps(v232[2], v36);
                *v18 = v251 + *v18;
              }
              goto LABEL_25;
            }
            v32 = v261;
            v31 = (__m128)LODWORD(v261);
          }
          else
          {
            if ( v233 <= (double)*(float *)&SrcStr )
              goto LABEL_21;
            v27 = (__m128)LODWORD(v268);
            v28 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v19[3]);
            v29 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v232[3]);
            v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0xFF), v22));
            v232[1] = _mm_sub_ps(v232[1], _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xFF), v22));
            v30 = _mm_mul_ps(v29, v21[0xFFFFFFFD]);
            v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v28, v21[0xFFFFFFFC]));
            v232[2] = _mm_add_ps(v232[2], v30);
            v31 = (__m128)LODWORD(v233);
            *v18 = v268 + *v18;
            v32 = v233;
          }
          v37 = v21[0xFFFFFFFE];
          v38 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v19[3]);
          v39 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v232[3]);
          v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0xFF), v37));
          v232[1] = _mm_sub_ps(v232[1], _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xFF), v37));
          v40 = _mm_mul_ps(v39, *v21);
          v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v38, v21[0xFFFFFFFF]));
          v232[2] = _mm_add_ps(v232[2], v40);
          v18[1] = v32 + v18[1];
LABEL_25:
          v41 = v17[8];
          v17 += 8;
          v20 += 6;
          v21 += 6;
          v18 += 2;
          if ( v41 == 3 )
          {
            v42 = *v20;
            v43 = v232 + 1;
            v44 = _mm_add_ps(
                    _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(v232[2], v20[2])),
                    _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), *v20));
            v252 = v232 + 2;
            v278 = _mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]);
            v45 = _mm_add_ps(
                    _mm_add_ps(_mm_mul_ps(v19[2], v20[4]), _mm_mul_ps(v232[2], v20[5])),
                    _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), v20[3]));
            v46 = v20->m128_f32[3] * a2->m128_f32[1] - v278 * a2->m128_f32[2];
            v47 = v20[3].m128_f32[3] * a2->m128_f32[1]
                - (float)(_mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]))
                * a2->m128_f32[2];
            v262 = v47 * *((float *)v17 + 1) + v20[2].m128_f32[3] * v46;
            v269 = v46 * *((float *)v17 + 1) + v20[5].m128_f32[3] * v47;
            v234 = v46 * v20[1].m128_f32[3];
            v236 = v47 * v20[4].m128_f32[3];
            if ( v262 <= (double)*(float *)&SrcStr )
            {
              if ( v236 <= (double)*(float *)&SrcStr )
                goto LABEL_35;
              v52 = v236;
              v53 = (__m128)LODWORD(v236);
              v54 = _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v19[3]);
              v55 = v232[3];
              v56 = v20 + 3;
LABEL_38:
              v71 = _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v55);
              v72 = _mm_mul_ps(_mm_shuffle_ps(v71, v71, 0xFF), *v56);
              v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0xFF), *v56));
              *v43 = _mm_sub_ps(*v43, v72);
              v73 = _mm_mul_ps(v71, v56[2]);
              v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v54, v56[1]));
              *v252 = _mm_add_ps(*v252, v73);
              v18[1] = v52 + v18[1];
            }
            else
            {
              if ( v269 > (double)*(float *)&SrcStr )
              {
                v48 = (__m128)LODWORD(v262);
                v49 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v19[3]);
                v50 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v232[3]);
                v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xFF), v42));
                *v43 = _mm_sub_ps(*v43, _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0xFF), v42));
                v51 = _mm_mul_ps(v50, v20[2]);
                v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v49, v20[1]));
                *v252 = _mm_add_ps(*v252, v51);
                *v18 = v262 + *v18;
                v52 = v269;
                v53 = (__m128)LODWORD(v269);
                v54 = _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v19[3]);
                v55 = v232[3];
                v56 = v20 + 3;
                goto LABEL_38;
              }
LABEL_35:
              if ( v234 > (double)*(float *)&SrcStr )
              {
                v67 = (__m128)LODWORD(v234);
                v68 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v19[3]);
                v69 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v232[3]);
                v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0xFF), v42));
                *v43 = _mm_sub_ps(*v43, _mm_mul_ps(_mm_shuffle_ps(v69, v69, 0xFF), v42));
                v70 = _mm_mul_ps(v69, v20[2]);
                v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v68, v20[1]));
                *v252 = _mm_add_ps(*v252, v70);
                *v18 = v234 + *v18;
              }
            }
            v74 = v17[8];
            v17 += 8;
            v20 += 6;
            v18 += 2;
            if ( v74 == 8 )
            {
LABEL_40:
              v75 = _mm_add_ps(
                      _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(v232[2], v20[2])),
                      _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), *v20));
              v76 = v232 + 2;
              v270 = v232 + 1;
              v282 = _mm_shuffle_ps(v75, v75, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v75, v75, 0x55).m128_f32[0] + v75.m128_f32[0]);
              v77 = _mm_add_ps(
                      _mm_add_ps(_mm_mul_ps(v19[2], v20[4]), _mm_mul_ps(v232[2], v20[5])),
                      _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), v20[3]));
              v279 = _mm_shuffle_ps(v77, v77, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v77, v77, 0x55).m128_f32[0] + v77.m128_f32[0]);
              v78 = _mm_add_ps(_mm_mul_ps(v19[2], v20[6]), _mm_mul_ps(v232[2], v20[7]));
              v254 = (v20[7].m128_f32[3] * a2->m128_f32[3]
                    - (float)(_mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0]))
                    * a2->m128_f32[2])
                   * v20[6].m128_f32[3];
              v263 = v20->m128_f32[3] * a2->m128_f32[3] - v282 * a2->m128_f32[2];
              v238 = v20[3].m128_f32[3] * a2->m128_f32[3] - v279 * a2->m128_f32[2];
              v79 = v263 * v20[2].m128_f32[3] + v238 * *((float *)v17 + 2);
              v80 = v238 * v20[5].m128_f32[3] + v263 * *((float *)v17 + 2);
              v81 = v254;
              v82 = v81 * v81 + v80 * v80 + v79 * v79;
              if ( v82 > *((float *)v17 + 3) * *((float *)v17 + 3) )
              {
                v83 = *((float *)v17 + 3) / sqrt(v82);
                v79 = v79 * v83;
                v80 = v80 * v83;
                v81 = v81 * v83;
                v20->m128_f32[3] = v83 * v20->m128_f32[3];
                v20[3].m128_f32[3] = v83 * v20[3].m128_f32[3];
                v20[7].m128_f32[3] = v83 * v20[7].m128_f32[3];
              }
              *(float *)&v255 = v81 * *((float *)v17 + 5);
              *(float *)&v239 = v79;
              v84 = (__m128)v239;
              v85 = _mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), v19[3]);
              v86 = _mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), v232[3]);
              v87 = _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0xFF), *v20);
              v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v85, v85, 0xFF), *v20));
              *v270 = _mm_sub_ps(*v270, v87);
              v88 = _mm_mul_ps(v86, v20[2]);
              v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v85, v20[1]));
              *v76 = _mm_add_ps(*v76, v88);
              *v18 = v79 + *v18;
              *(float *)&v264 = v80;
              v89 = (__m128)v264;
              v90 = _mm_mul_ps(_mm_shuffle_ps(v89, v89, 0), v19[3]);
              v91 = _mm_mul_ps(_mm_shuffle_ps(v89, v89, 0), v232[3]);
              v92 = _mm_mul_ps(_mm_shuffle_ps(v91, v91, 0xFF), v20[3]);
              v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v90, v90, 0xFF), v20[3]));
              *v270 = _mm_sub_ps(*v270, v92);
              v93 = _mm_mul_ps(v91, v20[5]);
              v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v90, v20[4]));
              *v76 = _mm_add_ps(*v76, v93);
              v18[1] = v80 + v18[1];
              v94 = (__m128)v255;
              v95 = _mm_mul_ps(_mm_shuffle_ps(v94, v94, 0), v19[3]);
              v96 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v94, v94, 0), v232[3]), v20[7]);
              v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v95, v20[6]));
              *v76 = _mm_add_ps(*v76, v96);
              v17 += 0x18;
              v20 += 8;
              v18[2] = *(float *)&v255 + v18[2];
              v18 += 3;
              if ( *v17 == 1 )
                continue;
            }
            goto LABEL_15;
          }
          goto LABEL_16;
        case 4:
          v134 = v232 + 2;
          while ( 1 )
          {
            v135 = _mm_add_ps(_mm_mul_ps(v19[2], *v20), _mm_mul_ps(*v134, v20[1]));
            v136 = v20[1].m128_f32[3] + *((float *)v17 + 3);
            v257 = (v136 * *((float *)v17 + 4)
                  - (float)(_mm_shuffle_ps(v135, v135, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v135, v135, 0x55).m128_f32[0] + v135.m128_f32[0]))
                  * *((float *)v17 + 5))
                 * v20->m128_f32[3];
            if ( v257 > (double)*((float *)v17 + 1) )
              break;
            if ( v257 < (double)*((float *)v17 + 2) )
            {
              if ( *((_DWORD *)v17 + 6) )
                v136 = v136 * (*((float *)v17 + 2) / v257);
              v137 = *((float *)v17 + 2);
              goto LABEL_70;
            }
LABEL_71:
            v20[1].m128_f32[3] = v136;
            v138 = (__m128)LODWORD(v257);
            v139 = _mm_mul_ps(_mm_shuffle_ps(v138, v138, 0), v19[3]);
            v140 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v138, v138, 0), v232[3]), v20[1]);
            v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v139, *v20));
            *v134 = _mm_add_ps(*v134, v140);
            v17 += 0x1C;
            v20 += 2;
            *v18 = v257 + *v18;
            ++v18;
            if ( *v17 != 4 )
              goto LABEL_15;
          }
          if ( *((_DWORD *)v17 + 6) )
            v136 = v136 * (*((float *)v17 + 1) / v257);
          v137 = *((float *)v17 + 1);
LABEL_70:
          v257 = v137;
          goto LABEL_71;
        case 5:
          do
          {
            v183 = _mm_add_ps(
                     _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(v232[2], v20[2])),
                     _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), *v20));
            v184 = v20->m128_f32[3] + *((float *)v17 + 3);
            v235 = (v184 * *((float *)v17 + 4)
                  - (float)(_mm_shuffle_ps(v183, v183, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v183, v183, 0x55).m128_f32[0] + v183.m128_f32[0]))
                  * *((float *)v17 + 5))
                 * v20[1].m128_f32[3];
            if ( v235 <= (double)*((float *)v17 + 1) )
            {
              if ( v235 < (double)*((float *)v17 + 2) )
              {
                if ( *((_DWORD *)v17 + 6) )
                  v184 = v184 * (*((float *)v17 + 2) / v235);
                v235 = *((float *)v17 + 2);
              }
            }
            else
            {
              if ( *((_DWORD *)v17 + 6) )
                v184 = v184 * (*((float *)v17 + 1) / v235);
              v235 = *((float *)v17 + 1);
            }
            v20->m128_f32[3] = v184;
            v185 = (__m128)LODWORD(v235);
            v186 = _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0), v273[3]);
            v187 = _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0), v232[3]);
            v188 = _mm_mul_ps(_mm_shuffle_ps(v187, v187, 0xFF), *v20);
            v273[1] = _mm_add_ps(v273[1], _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xFF), *v20));
            v232[1] = _mm_sub_ps(v232[1], v188);
            v189 = _mm_mul_ps(v187, v20[2]);
            v273[2] = _mm_add_ps(v273[2], _mm_mul_ps(v186, v20[1]));
            v232[2] = _mm_add_ps(v232[2], v189);
            *v18 = v235 + *v18;
            v190 = sub_8F0EE0((char *)v20, 1);
            v19 = v273;
            v17 += 0x1C;
            v20 = (__m128 *)v190;
            ++v18;
          }
          while ( *v17 == 5 );
          goto LABEL_15;
        case 6:
          v157 = v232 + 1;
          v260 = v232 + 2;
          do
          {
            v276 = *((float *)v17 + 1);
            v158 = _mm_add_ps(
                     _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(*v260, v20[2])),
                     _mm_mul_ps(_mm_sub_ps(v19[1], *v157), *v20));
            v159 = (v20->m128_f32[3] * a2->m128_f32[1]
                  - (float)(_mm_shuffle_ps(v158, v158, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v158, v158, 0x55).m128_f32[0] + v158.m128_f32[0]))
                  * a2->m128_f32[2])
                 * v20[1].m128_f32[3];
            v160 = fabs(v159);
            if ( v160 > v276 )
            {
              v161 = v276 / v160;
              v159 = v159 * v161;
              v20->m128_f32[3] = v161 * v20->m128_f32[3];
            }
            *(float *)&v248 = v159;
            v162 = (__m128)v248;
            v163 = _mm_mul_ps(_mm_shuffle_ps(v162, v162, 0), v19[3]);
            v164 = _mm_mul_ps(_mm_shuffle_ps(v162, v162, 0), v232[3]);
            v165 = _mm_mul_ps(_mm_shuffle_ps(v164, v164, 0xFF), *v20);
            v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v163, v163, 0xFF), *v20));
            *v157 = _mm_sub_ps(*v157, v165);
            v166 = _mm_mul_ps(v164, v20[2]);
            v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v163, v20[1]));
            *v260 = _mm_add_ps(*v260, v166);
            v17 += 8;
            v20 += 3;
            *v18 = v159 + *v18;
            ++v18;
          }
          while ( *v17 == 6 );
          goto LABEL_15;
        case 7:
          v97 = v232 + 1;
          v98 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(v232[2], v20[2])),
                  _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), *v20));
          v256 = v232 + 2;
          v280 = _mm_shuffle_ps(v98, v98, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v98, v98, 0x55).m128_f32[0] + v98.m128_f32[0]);
          v99 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(v19[2], v20[4]), _mm_mul_ps(v232[2], v20[5])),
                  _mm_mul_ps(_mm_sub_ps(v19[1], v232[1]), v20[3]));
          v240 = v20->m128_f32[3] * a2->m128_f32[3] - v280 * a2->m128_f32[2];
          v265 = v20[3].m128_f32[3] * a2->m128_f32[3]
               - (float)(_mm_shuffle_ps(v99, v99, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v99, v99, 0x55).m128_f32[0] + v99.m128_f32[0]))
               * a2->m128_f32[2];
          v271 = *((float *)v17 + 3) * *((float *)v17 + 3);
          v100 = v20[2].m128_f32[3] * v240 + v265 * *((float *)v17 + 2);
          v101 = v240 * *((float *)v17 + 2) + v20[5].m128_f32[3] * v265;
          v102 = v100 * v100 + v101 * v101;
          if ( v102 > v271 )
          {
            v103 = sqrt(v271 / v102);
            v100 = v100 * v103;
            v101 = v101 * v103;
            v20->m128_f32[3] = v103 * v20->m128_f32[3];
            v20[3].m128_f32[3] = v103 * v20[3].m128_f32[3];
          }
          *(float *)&v241 = v100;
          v104 = (__m128)v241;
          v105 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0), v19[3]);
          v106 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0), v232[3]);
          v107 = _mm_mul_ps(_mm_shuffle_ps(v106, v106, 0xFF), *v20);
          v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v105, v105, 0xFF), *v20));
          *v97 = _mm_sub_ps(*v97, v107);
          v108 = _mm_mul_ps(v106, v20[2]);
          v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v105, v20[1]));
          *v256 = _mm_add_ps(*v256, v108);
          v266 = v20 + 3;
          *v18 = v100 + *v18;
          *(float *)&v242 = v101;
          v20 += 6;
          v109 = (__m128)v242;
          v110 = _mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v19[3]);
          v111 = _mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v232[3]);
          v112 = _mm_mul_ps(_mm_shuffle_ps(v111, v111, 0xFF), *v266);
          v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v110, v110, 0xFF), *v266));
          *v97 = _mm_sub_ps(*v97, v112);
          v113 = _mm_mul_ps(v111, v266[2]);
          v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v110, v266[1]));
          *v256 = _mm_add_ps(*v256, v113);
          v114 = v101 + v18[1];
          v18 += 2;
          v18[0xFFFFFFFF] = v114;
          v115 = v17[0x14];
          v17 += 0x14;
          if ( v115 == 1 )
            continue;
          goto LABEL_15;
        case 8:
          goto LABEL_40;
        case 9:
          v116 = v232 + 2;
          do
          {
            v117 = _mm_add_ps(_mm_mul_ps(v19[2], *v20), _mm_mul_ps(*v116, v20[1]));
            v277 = *((float *)v17 + 1);
            v118 = (v20[1].m128_f32[3] * a2->m128_f32[3]
                  - (float)(_mm_shuffle_ps(v117, v117, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v117, v117, 0x55).m128_f32[0] + v117.m128_f32[0]))
                  * a2->m128_f32[2])
                 * v20->m128_f32[3];
            v119 = fabs(v118);
            if ( v119 > v277 )
            {
              v120 = v277 / v119;
              v118 = v118 * v120;
              v20[1].m128_f32[3] = v120 * v20[1].m128_f32[3];
            }
            *(float *)&v267 = v118;
            v121 = (__m128)v267;
            v122 = _mm_mul_ps(_mm_shuffle_ps(v121, v121, 0), v19[3]);
            v123 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v121, v121, 0), v232[3]), v20[1]);
            v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v122, *v20));
            *v116 = _mm_add_ps(*v116, v123);
            v17 += 8;
            v20 += 2;
            *v18 = v118 + *v18;
            ++v18;
          }
          while ( *v17 == 9 );
          goto LABEL_15;
        case 0xA:
          v124 = v232 + 2;
          while ( 1 )
          {
            v125 = v20[1];
            v126 = _mm_add_ps(_mm_mul_ps(v19[2], *v20), _mm_mul_ps(*v124, v125));
            v127 = (float)(_mm_shuffle_ps(v126, v126, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v126, v126, 0x55).m128_f32[0] + v126.m128_f32[0]))
                 * a2->m128_f32[2];
            v128 = (v20[1].m128_f32[3] - *((float *)v17 + 1)) * *((float *)v17 + 3) - v127;
            if ( v128 > *(float *)&SrcStr )
              break;
            v131 = (v20[1].m128_f32[3] - *((float *)v17 + 2)) * *((float *)v17 + 3) - v127;
            if ( v131 < *(float *)&SrcStr )
            {
              v129 = v131 * v20->m128_f32[3];
              *(float *)&v245 = v129;
              v130 = (__m128)v245;
              goto LABEL_58;
            }
LABEL_59:
            v133 = v17[0x10];
            v17 += 0x10;
            v20 += 2;
            ++v18;
            if ( v133 != 0xA )
              goto LABEL_15;
          }
          v243 = v128;
          v129 = v243 * v20->m128_f32[3];
          *(float *)&v244 = v129;
          v130 = (__m128)v244;
LABEL_58:
          v132 = v232[3];
          v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v130, v130, 0), v19[3]), *v20));
          *v124 = _mm_add_ps(*v124, _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v130, v130, 0), v132), v125));
          *v18 = v129 + *v18;
          goto LABEL_59;
        case 0xB:
          do
          {
            v167 = *v20;
            v168 = _mm_add_ps(
                     _mm_add_ps(_mm_mul_ps(v273[2], v20[1]), _mm_mul_ps(v232[2], v20[2])),
                     _mm_mul_ps(_mm_sub_ps(v273[1], v232[1]), *v20));
            v169 = (float)(_mm_shuffle_ps(v168, v168, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v168, v168, 0x55).m128_f32[0] + v168.m128_f32[0]))
                 * a2->m128_f32[2];
            v170 = (v20->m128_f32[3] - *((float *)v17 + 1)) * a2->m128_f32[1] - v169;
            if ( v170 > *(float *)&SrcStr )
            {
              v171 = v170 * v20[1].m128_f32[3];
              *(float *)&v249 = v171;
              v172 = (__m128)v249;
              v173 = _mm_mul_ps(_mm_shuffle_ps(v172, v172, 0), v273[3]);
              v174 = _mm_mul_ps(_mm_shuffle_ps(v172, v172, 0), v232[3]);
              v273[1] = _mm_add_ps(v273[1], _mm_mul_ps(_mm_shuffle_ps(v173, v173, 0xFF), v167));
              v232[1] = _mm_sub_ps(v232[1], _mm_mul_ps(_mm_shuffle_ps(v174, v174, 0xFF), v167));
              v175 = _mm_mul_ps(v174, v20[2]);
              v273[2] = _mm_add_ps(v273[2], _mm_mul_ps(v173, v20[1]));
              v232[2] = _mm_add_ps(v232[2], v175);
              *v18 = v171 + *v18;
            }
            v176 = (v20->m128_f32[3] - *((float *)v17 + 2)) * a2->m128_f32[1] - v169;
            if ( v176 < *(float *)&SrcStr )
            {
              v177 = v176 * v20[1].m128_f32[3];
              *(float *)&v250 = v177;
              v178 = (__m128)v250;
              v179 = _mm_mul_ps(_mm_shuffle_ps(v178, v178, 0), v273[3]);
              v180 = _mm_mul_ps(_mm_shuffle_ps(v178, v178, 0), v232[3]);
              v181 = _mm_mul_ps(_mm_shuffle_ps(v180, v180, 0xFF), *v20);
              v273[1] = _mm_add_ps(v273[1], _mm_mul_ps(_mm_shuffle_ps(v179, v179, 0xFF), *v20));
              v232[1] = _mm_sub_ps(v232[1], v181);
              v182 = _mm_mul_ps(v180, v20[2]);
              v273[2] = _mm_add_ps(v273[2], _mm_mul_ps(v179, v20[1]));
              v232[2] = _mm_add_ps(v232[2], v182);
              *v18 = v177 + *v18;
            }
            v17 += 0xC;
            v20 = (__m128 *)sub_8F0EE0((char *)v20, 1);
            ++v18;
          }
          while ( *v17 == 0xB );
          v19 = v273;
          goto LABEL_15;
        case 0xC:
          v258 = v232 + 2;
          do
          {
            v141 = *v20;
            v142 = v20->m128_f32[3];
            v143 = v20[1];
            v144 = v20[1].m128_f32[3];
            v145 = _mm_add_ps(_mm_mul_ps(v19[2], *v20), _mm_mul_ps(*v258, v143));
            v17 += 4;
            v20 += 2;
            ++v18;
            v146 = v142
                 * (v144 * a2->m128_f32[1]
                  - (float)(_mm_shuffle_ps(v145, v145, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v145, v145, 0x55).m128_f32[0] + v145.m128_f32[0]))
                  * a2->m128_f32[2]);
            *(float *)&v246 = v146;
            v147 = v232[3];
            v19[2] = _mm_add_ps(
                       v19[2],
                       _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v246, (__m128)v246, 0), v19[3]), v141));
            *v258 = _mm_add_ps(*v258, _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v246, (__m128)v246, 0), v147), v143));
            v18[0xFFFFFFFF] = v146 + v18[0xFFFFFFFF];
          }
          while ( *v17 == 0xC );
          goto LABEL_15;
        case 0xD:
          v272 = v232 + 1;
          v259 = v232 + 2;
          do
          {
            v148 = v20[1].m128_f32[3];
            v149 = v20->m128_f32[3];
            v150 = *v20;
            v151 = _mm_add_ps(
                     _mm_add_ps(_mm_mul_ps(v19[2], v20[1]), _mm_mul_ps(*v259, v20[2])),
                     _mm_mul_ps(_mm_sub_ps(v19[1], *v272), *v20));
            v17 += 4;
            v20 += 3;
            ++v18;
            v152 = v148
                 * (v149 * a2->m128_f32[1]
                  - (float)(_mm_shuffle_ps(v151, v151, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v151, v151, 0x55).m128_f32[0] + v151.m128_f32[0]))
                  * a2->m128_f32[2]);
            *(float *)&v247 = v152;
            v153 = (__m128)v247;
            v154 = _mm_mul_ps(_mm_shuffle_ps(v153, v153, 0), v19[3]);
            v155 = _mm_mul_ps(_mm_shuffle_ps(v153, v153, 0), v232[3]);
            v19[1] = _mm_add_ps(v19[1], _mm_mul_ps(_mm_shuffle_ps(v154, v154, 0xFF), v150));
            *v272 = _mm_sub_ps(*v272, _mm_mul_ps(_mm_shuffle_ps(v155, v155, 0xFF), v150));
            v156 = _mm_mul_ps(v155, v20[0xFFFFFFFF]);
            v19[2] = _mm_add_ps(v19[2], _mm_mul_ps(v154, v20[0xFFFFFFFE]));
            *v259 = _mm_add_ps(*v259, v156);
            v18[0xFFFFFFFF] = v152 + v18[0xFFFFFFFF];
          }
          while ( *v17 == 0xD );
          goto LABEL_15;
        case 0xE:
          (*((void (__cdecl **)(__m128 *, char *))v17 + 1))(v20, v17 + 8);
          v19 = v273;
          v17 += (unsigned __int8)v17[1];
          goto LABEL_15;
        case 0xF:
          v275 = *(unsigned __int64 *)((char *)a2->m128_u64 + 4);
          *(unsigned __int64 *)((char *)a2->m128_u64 + 4) = *(_QWORD *)(v17 + 4);
          v17 += 0xC;
          goto LABEL_15;
        case 0x10:
          *(unsigned __int64 *)((char *)a2->m128_u64 + 4) = v275;
          v17 += 4;
          goto LABEL_15;
        default:
          __debugbreak();
LABEL_104:
          v191 = v274;
          v192 = a4;
          if ( !v274 )
          {
LABEL_105:
            while ( v192->m128_i8[0] )
            {
              if ( v192->m128_i8[0] == 1 )
              {
                v192 += 8;
              }
              else if ( v192->m128_i8[0] == 2 )
              {
                goto LABEL_108;
              }
            }
            while ( 1 )
            {
              v192[5] = 0;
              v192[4] = 0;
              v198 = v192[2];
              v199 = 2 * v192->m128_i32[2];
              v200 = a2[v199 + 3].m128_i32[1];
              v201 = &a2[v199 + 3].m128_u32[1];
              v202 = _mm_add_ps(
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)(unsigned int)v200, (__m128)(unsigned int)v200, 0),
                         _mm_and_ps(v192[1], (__m128)xmmword_A372D0)),
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)v201[1], (__m128)v201[1], 0),
                         _mm_and_ps(v198, (__m128)xmmword_A372D0)));
              if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[0], 0), v202))
                  & 7) == 0 )
              {
                if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)v201[3], (__m128)v201[3], 0), v202)) & 7) == 0 )
                {
                  v203 = v192->m128_i32[1];
                  if ( v203 )
                    v192->m128_i32[1] = v203 - 1;
                  v192[2] = 0;
                  v192[1] = 0;
                  goto LABEL_120;
                }
                v192[2] = _mm_mul_ps(_mm_shuffle_ps((__m128)v201[2], (__m128)v201[2], 0), v198);
                v192[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v201[2], (__m128)v201[2], 0), v192[1]);
              }
              v192->m128_i32[1] = v201[4];
              v192[5] = _mm_add_ps(v192[5], v192[2]);
              v192[4] = _mm_add_ps(v192[4], v192[1]);
LABEL_120:
              v204 = v192[8].m128_i8[0];
              v192 += 8;
              if ( v204 )
                goto LABEL_105;
            }
          }
LABEL_122:
          while ( v192->m128_i8[0] )
          {
            if ( v192->m128_i8[0] == 1 )
            {
              v192 += 8;
            }
            else if ( v192->m128_i8[0] == 2 )
            {
LABEL_108:
              v193 = a3;
              while ( 2 )
              {
                v194 = *((__m128 **)v193 + 3);
                v195 = *((__m128 **)v193 + 4);
                v196 = *((__m128 **)v193 + 1);
                v193 += 0x18;
LABEL_110:
                v197 = v193[2];
LABEL_111:
                switch ( v197 )
                {
                  case 0:
                    goto LABEL_146;
                  case 1:
                    continue;
                  case 2:
                    v193 += (unsigned __int8)v193[1];
                    goto LABEL_110;
                  case 3:
                    do
                    {
                      v223 = _mm_add_ps(
                               _mm_add_ps(_mm_mul_ps(v194[2], v196[1]), _mm_mul_ps(v195[2], v196[2])),
                               _mm_mul_ps(_mm_sub_ps(v194[1], v195[1]), *v196));
                      v224 = v196->m128_f32[3]
                           - (float)(_mm_shuffle_ps(v223, v223, 0xAA).m128_f32[0]
                                   + (float)(_mm_shuffle_ps(v223, v223, 0x55).m128_f32[0] + v223.m128_f32[0]));
                      v196 += 3;
                      v196[0xFFFFFFFD].m128_f32[3] = v224;
                      v193 += (unsigned __int8)v193[1];
                    }
                    while ( v193[2] == 3 );
                    goto LABEL_110;
                  case 4:
                    do
                    {
                      v225 = _mm_add_ps(_mm_mul_ps(v194[2], *v196), _mm_mul_ps(v195[2], v196[1]));
                      v226 = v196[1].m128_f32[3]
                           - (float)(_mm_shuffle_ps(v225, v225, 0xAA).m128_f32[0]
                                   + (float)(_mm_shuffle_ps(v225, v225, 0x55).m128_f32[0] + v225.m128_f32[0]));
                      v196 += 2;
                      v196[0xFFFFFFFF].m128_f32[3] = v226;
                      v193 += (unsigned __int8)v193[1];
                    }
                    while ( v193[2] == 4 );
                    goto LABEL_110;
                  case 5:
                    v210 = _mm_sub_ps(v194[1], v195[1]);
                    v211 = _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(v194[2], v196[4]), _mm_mul_ps(v195[2], v196[5])),
                             _mm_mul_ps(v210, v196[3]));
                    v212 = _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(v194[2], v196[1]), _mm_mul_ps(v195[2], v196[2])),
                             _mm_mul_ps(v210, *v196));
                    v213 = v196->m128_f32[3]
                         - (float)(_mm_shuffle_ps(v212, v212, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v212, v212, 0x55).m128_f32[0] + v212.m128_f32[0]));
                    v196 += 6;
                    v196[0xFFFFFFFA].m128_f32[3] = v213;
                    v196[0xFFFFFFFD].m128_f32[3] = v196[0xFFFFFFFD].m128_f32[3]
                                                 - (float)(_mm_shuffle_ps(v211, v211, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v211, v211, 0x55).m128_f32[0]
                                                                 + v211.m128_f32[0]));
                    v193 += (unsigned __int8)v193[1];
                    v197 = v193[2];
                    if ( v197 != 5 )
                      goto LABEL_111;
                    v214 = _mm_sub_ps(v194[1], v195[1]);
                    v215 = _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(v194[2], v196[4]), _mm_mul_ps(v195[2], v196[5])),
                             _mm_mul_ps(v214, v196[3]));
                    v216 = _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(v194[2], v196[1]), _mm_mul_ps(v195[2], v196[2])),
                             _mm_mul_ps(v214, *v196));
                    v217 = v196->m128_f32[3]
                         - (float)(_mm_shuffle_ps(v216, v216, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v216, v216, 0x55).m128_f32[0] + v216.m128_f32[0]));
                    v196 += 6;
                    v196[0xFFFFFFFA].m128_f32[3] = v217;
                    v196[0xFFFFFFFD].m128_f32[3] = v196[0xFFFFFFFD].m128_f32[3]
                                                 - (float)(_mm_shuffle_ps(v215, v215, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v215, v215, 0x55).m128_f32[0]
                                                                 + v215.m128_f32[0]));
                    v193 += (unsigned __int8)v193[1];
                    if ( v193[2] == 6 )
                      goto LABEL_138;
                    goto LABEL_110;
                  case 6:
LABEL_138:
                    v218 = _mm_sub_ps(v194[1], v195[1]);
                    v219 = _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(v194[2], v196[4]), _mm_mul_ps(v195[2], v196[5])),
                             _mm_mul_ps(v218, v196[3]));
                    v220 = _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(v194[2], v196[1]), _mm_mul_ps(v195[2], v196[2])),
                             _mm_mul_ps(v218, *v196));
                    v221 = v196->m128_f32[3]
                         - (float)(_mm_shuffle_ps(v220, v220, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v220, v220, 0x55).m128_f32[0] + v220.m128_f32[0]));
                    v196 += 8;
                    v196[0xFFFFFFF8].m128_f32[3] = v221;
                    v196[0xFFFFFFFB].m128_f32[3] = v196[0xFFFFFFFB].m128_f32[3]
                                                 - (float)(_mm_shuffle_ps(v219, v219, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v219, v219, 0x55).m128_f32[0]
                                                                 + v219.m128_f32[0]));
                    v222 = _mm_add_ps(_mm_mul_ps(v194[2], v196[0xFFFFFFFE]), _mm_mul_ps(v195[2], v196[0xFFFFFFFF]));
                    v196[0xFFFFFFFF].m128_f32[3] = v196[0xFFFFFFFF].m128_f32[3]
                                                 - (float)(_mm_shuffle_ps(v222, v222, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v222, v222, 0x55).m128_f32[0]
                                                                 + v222.m128_f32[0]));
                    v193 += (unsigned __int8)v193[1];
                    if ( *v193 == 1 )
                      continue;
                    goto LABEL_110;
                  default:
                    __debugbreak();
LABEL_146:
                    ++v274;
                    if ( v191 + 1 >= a2[0xF].m128_i32[3] )
                      goto LABEL_147;
                    goto LABEL_5;
                }
              }
            }
          }
          break;
      }
      break;
    }
    while ( 1 )
    {
      v205 = v192[2];
      v206 = &a2[2 * v192->m128_i32[2] + 3].m128_u32[1];
      v281 = a2[2 * v192->m128_i32[2] + 3].m128_i32[2];
      v207 = _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps((__m128)*v206, (__m128)*v206, 0), _mm_and_ps(v192[1], (__m128)xmmword_A372D0)),
               _mm_mul_ps(
                 _mm_shuffle_ps((__m128)(unsigned int)v281, (__m128)(unsigned int)v281, 0),
                 _mm_and_ps(v205, (__m128)xmmword_A372D0)));
      if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[0], 0), v207)) & 7) == 0 )
      {
        if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)v206[3], (__m128)v206[3], 0), v207)) & 7) == 0 )
        {
          v208 = v192->m128_i32[1];
          if ( v208 )
            v192->m128_i32[1] = v208 - 1;
          v192[2] = 0;
          v192[1] = 0;
          goto LABEL_134;
        }
        v192[2] = _mm_mul_ps(_mm_shuffle_ps((__m128)v206[2], (__m128)v206[2], 0), v205);
        v192[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v206[2], (__m128)v206[2], 0), v192[1]);
      }
      v192->m128_i32[1] = v206[4];
      v192[5] = _mm_add_ps(v192[5], v192[2]);
      v192[4] = _mm_add_ps(v192[4], v192[1]);
LABEL_134:
      v209 = v192[8].m128_i8[0];
      v192 += 8;
      if ( v209 )
        goto LABEL_122;
    }
  }
LABEL_147:
  v227 = a5;
  v228 = a3 + 0x18;
  if ( !*((_DWORD *)a3 + 2) && *v228 > 1 )
  {
    do
    {
      v229 = v228[2];
      if ( v229 >= 3 )
      {
        ++v227;
        if ( v229 >= 5 )
        {
          ++v227;
          if ( v229 == 6 )
            ++v227;
        }
      }
      v230 = (unsigned __int8)v228[1];
      v231 = v228[v230];
      v228 += v230;
    }
    while ( v231 > 1 );
  }
  return def_9238D3(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
