int __usercall sub_921A40@<eax>(int a1@<ebx>, __m128 *a2, char *a3, __m128 *a4, float *a5, int a6, int a7, int a8)
{
  char v8; // al
  __m128 *v10; // eax
  __int8 v11; // cl
  char *v12; // ebx
  float *v13; // edi
  __m128 *v14; // edx
  __m128 *v15; // esi
  __m128 *v16; // ecx
  __m128 v17; // xmm4
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  double v20; // st7
  double v21; // st6
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  double v27; // st7
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm1
  __m128 v32; // xmm4
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  __m128 v35; // xmm1
  char v36; // al
  __m128 v37; // xmm4
  __m128 *v38; // ecx
  __m128 v39; // xmm0
  __m128 v40; // xmm0
  double v41; // st7
  double v42; // st6
  __m128 v43; // xmm1
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __m128 v46; // xmm1
  double v47; // st7
  __m128 v48; // xmm1
  __m128 v49; // xmm0
  __m128 v50; // xmm2
  __m128 *v51; // eax
  __m128 *v52; // ecx
  __m128 v53; // xmm4
  __m128 v54; // xmm0
  double v55; // st7
  double v56; // st7
  __m128 v57; // xmm1
  __m128 v58; // xmm0
  __m128 v59; // xmm1
  __m128 v60; // xmm1
  char v61; // al
  __m128 v62; // xmm1
  __m128 v63; // xmm0
  __m128 v64; // xmm1
  __m128 v65; // xmm1
  __m128 v66; // xmm1
  __m128 v67; // xmm3
  __m128 v68; // xmm1
  char v69; // al
  __m128 v70; // xmm0
  __m128 *v71; // ecx
  __m128 v72; // xmm0
  __m128 v73; // xmm0
  double v74; // st7
  double v75; // st6
  long double v76; // st5
  long double v77; // st4
  long double v78; // st4
  __m128 v79; // xmm1
  __m128 v80; // xmm0
  __m128 v81; // xmm1
  __m128 v82; // xmm3
  __m128 v83; // xmm1
  __m128 v84; // xmm1
  __m128 v85; // xmm0
  __m128 v86; // xmm1
  __m128 v87; // xmm3
  __m128 v88; // xmm1
  __m128 v89; // xmm1
  __m128 v90; // xmm0
  __m128 v91; // xmm1
  __m128 *v92; // ecx
  __m128 v93; // xmm0
  __m128 v94; // xmm0
  double v95; // st7
  double v96; // st6
  double v97; // st5
  long double v98; // st5
  __m128 v99; // xmm1
  __m128 v100; // xmm0
  __m128 v101; // xmm1
  __m128 v102; // xmm3
  __m128 v103; // xmm1
  __m128 v104; // xmm1
  __m128 v105; // xmm0
  __m128 v106; // xmm1
  __m128 v107; // xmm3
  __m128 v108; // xmm1
  double v109; // st7
  char v110; // al
  __m128 *v111; // ecx
  __m128 v112; // xmm0
  long double v113; // st7
  long double v114; // st6
  long double v115; // st5
  __m128 v116; // xmm1
  __m128 v117; // xmm0
  __m128 v118; // xmm1
  __m128 *v119; // ecx
  __m128 v120; // xmm3
  __m128 v121; // xmm0
  double v122; // st7
  double v123; // st6
  double v124; // st7
  __m128 v125; // xmm1
  double v126; // st7
  __m128 v127; // xmm4
  char v128; // al
  __m128 *v129; // ecx
  __m128 v130; // xmm0
  double v131; // st7
  float v132; // eax
  __m128 v133; // xmm1
  __m128 v134; // xmm0
  __m128 v135; // xmm1
  __m128 v136; // xmm2
  double v137; // st7
  __m128 v138; // xmm3
  double v139; // st6
  __m128 v140; // xmm0
  double v141; // st7
  __m128 v142; // xmm4
  double v143; // st7
  double v144; // st6
  __m128 v145; // xmm2
  __m128 v146; // xmm0
  double v147; // st7
  __m128 v148; // xmm1
  __m128 v149; // xmm0
  __m128 v150; // xmm1
  __m128 v151; // xmm1
  __m128 *v152; // ecx
  __m128 v153; // xmm0
  long double v154; // st7
  long double v155; // st6
  long double v156; // rt2
  __m128 v157; // xmm1
  __m128 v158; // xmm0
  __m128 v159; // xmm1
  __m128 v160; // xmm3
  __m128 v161; // xmm1
  __m128 v162; // xmm4
  __m128 v163; // xmm0
  double v164; // st7
  double v165; // st6
  double v166; // st6
  __m128 v167; // xmm1
  __m128 v168; // xmm0
  __m128 v169; // xmm1
  __m128 v170; // xmm1
  double v171; // st7
  double v172; // st7
  __m128 v173; // xmm1
  __m128 v174; // xmm0
  __m128 v175; // xmm1
  __m128 v176; // xmm3
  __m128 v177; // xmm1
  __m128 v178; // xmm0
  double v179; // st7
  __m128 v180; // xmm1
  __m128 v181; // xmm0
  __m128 v182; // xmm1
  __m128 v183; // xmm3
  __m128 v184; // xmm1
  char *v185; // eax
  int v186; // ebx
  __m128 *v187; // eax
  char *v188; // ecx
  __m128 *v189; // esi
  __m128 *v190; // edi
  __m128 *v191; // eax
  char v192; // dl
  __m128 v193; // xmm3
  int v194; // ecx
  __int32 v195; // edx
  unsigned int *v196; // ecx
  __m128 v197; // xmm0
  __int32 v198; // ecx
  __int8 v199; // cl
  __m128 v200; // xmm3
  unsigned int *v201; // ecx
  __m128 v202; // xmm0
  __int32 v203; // ecx
  __int8 v204; // cl
  __m128 v205; // xmm6
  __m128 v206; // xmm1
  __m128 v207; // xmm0
  double v208; // st7
  __m128 v209; // xmm6
  __m128 v210; // xmm1
  __m128 v211; // xmm0
  double v212; // st7
  __m128 v213; // xmm6
  __m128 v214; // xmm1
  __m128 v215; // xmm0
  double v216; // st7
  __m128 v217; // xmm0
  __m128 v218; // xmm0
  double v219; // st7
  __m128 v220; // xmm0
  double v221; // st7
  float *v222; // edi
  int v223; // ebx
  char *v224; // esi
  char v225; // cl
  int v226; // edx
  char v227; // cl
  __m128 *v228; // [esp+14h] [ebp-FCh]
  float v229; // [esp+18h] [ebp-F8h]
  float v230; // [esp+18h] [ebp-F8h]
  float v231; // [esp+18h] [ebp-F8h]
  float v232; // [esp+1Ch] [ebp-F4h]
  unsigned int v233; // [esp+1Ch] [ebp-F4h]
  float v234; // [esp+1Ch] [ebp-F4h]
  unsigned int v235; // [esp+1Ch] [ebp-F4h]
  float v236; // [esp+1Ch] [ebp-F4h]
  unsigned int v237; // [esp+1Ch] [ebp-F4h]
  unsigned int v238; // [esp+1Ch] [ebp-F4h]
  float v239; // [esp+1Ch] [ebp-F4h]
  unsigned int v240; // [esp+1Ch] [ebp-F4h]
  unsigned int v241; // [esp+1Ch] [ebp-F4h]
  unsigned int v242; // [esp+1Ch] [ebp-F4h]
  unsigned int v243; // [esp+1Ch] [ebp-F4h]
  unsigned int v244; // [esp+1Ch] [ebp-F4h]
  unsigned int v245; // [esp+1Ch] [ebp-F4h]
  unsigned int v246; // [esp+1Ch] [ebp-F4h]
  float v247; // [esp+20h] [ebp-F0h]
  __m128 *v248; // [esp+20h] [ebp-F0h]
  __m128 *v249; // [esp+20h] [ebp-F0h]
  float v250; // [esp+20h] [ebp-F0h]
  unsigned int v251; // [esp+20h] [ebp-F0h]
  __m128 *v252; // [esp+20h] [ebp-F0h]
  float v253; // [esp+20h] [ebp-F0h]
  __m128 *v254; // [esp+20h] [ebp-F0h]
  __m128 *v255; // [esp+20h] [ebp-F0h]
  __m128 *v256; // [esp+20h] [ebp-F0h]
  float v257; // [esp+24h] [ebp-ECh]
  float v258; // [esp+24h] [ebp-ECh]
  float v259; // [esp+24h] [ebp-ECh]
  unsigned int v260; // [esp+24h] [ebp-ECh]
  float v261; // [esp+24h] [ebp-ECh]
  __m128 *v262; // [esp+24h] [ebp-ECh]
  unsigned int v263; // [esp+24h] [ebp-ECh]
  float v264; // [esp+28h] [ebp-E8h]
  float v265; // [esp+28h] [ebp-E8h]
  __m128 *v266; // [esp+28h] [ebp-E8h]
  float v267; // [esp+28h] [ebp-E8h]
  __m128 *v268; // [esp+28h] [ebp-E8h]
  __m128 *v269; // [esp+2Ch] [ebp-E4h]
  int v270; // [esp+30h] [ebp-E0h]
  unsigned __int64 v271; // [esp+38h] [ebp-D8h]
  float v272; // [esp+40h] [ebp-D0h]
  float v273; // [esp+44h] [ebp-CCh]
  float v274; // [esp+68h] [ebp-A8h]
  float v275; // [esp+88h] [ebp-88h]
  float v276; // [esp+90h] [ebp-80h]
  __int32 v277; // [esp+A4h] [ebp-6Ch]
  float v278; // [esp+C8h] [ebp-48h]
  float v279; // [esp+D0h] [ebp-40h]
  int savedregs; // [esp+110h] [ebp+0h] BYREF

  if ( !unk_BA84F8 ) /*0x921a4c*/
  {
    v8 = sub_9246E0(a1, 0); /*0x921a5a*/
    unk_BA84F8 = v8; /*0x921a64*/
    if ( !v8 ) /*0x921a69*/
      return 0; /*0x921a73*/
  }
  v270 = 0; /*0x921a7f*/
  if ( a2[0xF].m128_i32[3] > 0 ) /*0x921a87*/
  {
LABEL_5:
    v10 = a4; /*0x921a90*/
    while ( 1 ) /*0x921a9f*/
    {
      while ( 1 ) /*0x921a9c*/
      {
        while ( !v10->m128_i8[0] ) /*0x921a9c*/
        {
          do /*0x921acc*/
          {
            v10[1] = _mm_add_ps(v10[1], a2[1]); /*0x921abb*/
            v11 = v10[8].m128_i8[0]; /*0x921abf*/
            v10 += 8; /*0x921ac5*/
          }
          while ( !v11 ); /*0x921acc*/
        }
        if ( v10->m128_i8[0] != 1 ) /*0x921a9f*/
          break; /*0x921a9f*/
        v10 += 8; /*0x921aa7*/
      }
      if ( v10->m128_i8[0] == 2 ) /*0x921aa2*/
        break; /*0x921aa2*/
      __debugbreak(); /*0x921aa4*/
    }
    v12 = a3; /*0x921ad6*/
    v13 = a5; /*0x921ad9*/
    v271 = *(unsigned __int64 *)((char *)a2->m128_u64 + 4); /*0x921adc*/
    while ( 2 ) /*0x921ae4*/
    {
      v14 = *((__m128 **)v12 + 3); /*0x921ae4*/
      v15 = *((__m128 **)v12 + 1); /*0x921aea*/
      v269 = v14; /*0x921aed*/
      v228 = *((__m128 **)v12 + 4); /*0x921af1*/
      v12 += 0x18; /*0x921af5*/
LABEL_15:
      v16 = v15 + 5; /*0x921b00*/
LABEL_16:
      switch ( *v12 ) /*0x921b0f*/
      {
        case 0: /*0x921b0f*/
          goto LABEL_104;
        case 1: /*0x921b0f*/
          continue;
        case 2: /*0x921b0f*/
          v52 = v228 + 1; /*0x922034*/
          v249 = v228 + 2; /*0x92203a*/
          do /*0x922144*/
          {
            v53 = *v15; /*0x922055*/
            v54 = _mm_add_ps( /*0x92206f*/
                    _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(*v249, v15[2])),
                    _mm_mul_ps(_mm_sub_ps(v14[1], *v52), *v15));
            v55 = v15->m128_f32[3] * a2->m128_f32[1] /*0x9220a3*/
                - (float)(_mm_shuffle_ps(v54, v54, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v54, v54, 0x55).m128_f32[0] + v54.m128_f32[0]))
                * a2->m128_f32[2];
            if ( v55 > *(float *)&SrcStr ) /*0x9220b0*/
            {
              v56 = v55 * v15[1].m128_f32[3]; /*0x9220b6*/
              *(float *)&v233 = v56; /*0x9220c1*/
              v57 = (__m128)v233; /*0x9220c5*/
              v58 = _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0), v14[3]); /*0x9220d2*/
              v59 = _mm_mul_ps(_mm_shuffle_ps(v57, v57, 0), v228[3]); /*0x9220e1*/
              v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0xFF), v53)); /*0x9220ff*/
              *v52 = _mm_sub_ps(*v52, _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0xFF), v53)); /*0x922109*/
              v60 = _mm_mul_ps(v59, v15[2]); /*0x922117*/
              v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v58, v15[1])); /*0x922121*/
              *v249 = _mm_add_ps(*v249, v60); /*0x92212b*/
              *v13 = v56 + *v13; /*0x922130*/
            }
            v61 = v12[4]; /*0x922136*/
            v12 += 4; /*0x922139*/
            v15 += 3; /*0x92213c*/
            ++v13; /*0x92213f*/
          }
          while ( v61 == 2 ); /*0x922144*/
          goto LABEL_15; /*0x922144*/
        case 3: /*0x921b0f*/
          v17 = *v15; /*0x921b2d*/
          v18 = _mm_add_ps( /*0x921b47*/
                  _mm_add_ps(_mm_mul_ps(v14[2], v16[0xFFFFFFFC]), _mm_mul_ps(v228[2], v16[0xFFFFFFFD])),
                  _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), *v15));
          v279 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x921b67*/
               + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
          v19 = _mm_add_ps( /*0x921b99*/
                  _mm_add_ps(_mm_mul_ps(v14[2], v16[0xFFFFFFFF]), _mm_mul_ps(v228[2], *v16)),
                  _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), v16[0xFFFFFFFE]));
          v20 = v16[0xFFFFFFFB].m128_f32[3] * a2->m128_f32[1] - v279 * a2->m128_f32[2]; /*0x921bca*/
          v21 = v16[0xFFFFFFFE].m128_f32[3] * a2->m128_f32[1] /*0x921bd9*/
              - (float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]))
              * a2->m128_f32[2];
          v264 = v21 * *((float *)v12 + 1) + v16[0xFFFFFFFD].m128_f32[3] * v20; /*0x921be9*/
          v229 = v16->m128_f32[3] * v21 + v20 * *((float *)v12 + 1); /*0x921bf9*/
          v247 = v20 * v16[0xFFFFFFFC].m128_f32[3]; /*0x921c02*/
          v257 = v21 * v16[0xFFFFFFFF].m128_f32[3]; /*0x921c09*/
          if ( v264 <= (double)*(float *)&SrcStr ) /*0x921c1c*/
          {
            if ( v257 <= (double)*(float *)&SrcStr ) /*0x921cec*/
            {
LABEL_21:
              if ( v247 > (double)*(float *)&SrcStr ) /*0x921d01*/
              {
                v28 = (__m128)LODWORD(v247); /*0x921d1a*/
                v29 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v14[3]); /*0x921d2e*/
                v30 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v228[3]); /*0x921d3d*/
                v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xFF), v17)); /*0x921d5b*/
                v228[1] = _mm_sub_ps(v228[1], _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xFF), v17)); /*0x921d66*/
                v31 = _mm_mul_ps(v30, v16[0xFFFFFFFD]); /*0x921d79*/
                v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v29, v16[0xFFFFFFFC])); /*0x921d83*/
                v228[2] = _mm_add_ps(v228[2], v31); /*0x921d8e*/
                *v13 = v247 + *v13; /*0x921d94*/
              }
              goto LABEL_25; /*0x921d96*/
            }
            v27 = v257; /*0x921d9f*/
            v26 = (__m128)LODWORD(v257); /*0x921da7*/
          }
          else
          {
            if ( v229 <= (double)*(float *)&SrcStr ) /*0x921c31*/
              goto LABEL_21; /*0x921c31*/
            v22 = (__m128)LODWORD(v264); /*0x921c4a*/
            v23 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v14[3]); /*0x921c5e*/
            v24 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v228[3]); /*0x921c6d*/
            v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0xFF), v17)); /*0x921c8b*/
            v228[1] = _mm_sub_ps(v228[1], _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0xFF), v17)); /*0x921c96*/
            v25 = _mm_mul_ps(v24, v16[0xFFFFFFFD]); /*0x921ca9*/
            v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v23, v16[0xFFFFFFFC])); /*0x921cb3*/
            v228[2] = _mm_add_ps(v228[2], v25); /*0x921cbe*/
            v26 = (__m128)LODWORD(v229); /*0x921ccc*/
            *v13 = v264 + *v13; /*0x921cd2*/
            v27 = v229; /*0x921cd4*/
          }
          v32 = v16[0xFFFFFFFE]; /*0x921db1*/
          v33 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v14[3]); /*0x921dc0*/
          v34 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v228[3]); /*0x921dcf*/
          v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xFF), v32)); /*0x921ded*/
          v228[1] = _mm_sub_ps(v228[1], _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xFF), v32)); /*0x921df8*/
          v35 = _mm_mul_ps(v34, *v16); /*0x921e0a*/
          v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v33, v16[0xFFFFFFFF])); /*0x921e14*/
          v228[2] = _mm_add_ps(v228[2], v35); /*0x921e1f*/
          v13[1] = v27 + v13[1]; /*0x921e26*/
LABEL_25:
          v36 = v12[8]; /*0x921e29*/
          v12 += 8; /*0x921e2c*/
          v15 += 6; /*0x921e2f*/
          v16 += 6; /*0x921e32*/
          v13 += 2; /*0x921e35*/
          if ( v36 == 3 ) /*0x921e3a*/
          {
            v37 = *v15; /*0x921e57*/
            v38 = v228 + 1; /*0x921e68*/
            v39 = _mm_add_ps( /*0x921e77*/
                    _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(v228[2], v15[2])),
                    _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), *v15));
            v248 = v228 + 2; /*0x921e90*/
            v274 = _mm_shuffle_ps(v39, v39, 0xAA).m128_f32[0] /*0x921e98*/
                 + (float)(_mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0]);
            v40 = _mm_add_ps( /*0x921ec9*/
                    _mm_add_ps(_mm_mul_ps(v14[2], v15[4]), _mm_mul_ps(v228[2], v15[5])),
                    _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), v15[3]));
            v41 = v15->m128_f32[3] * a2->m128_f32[1] - v274 * a2->m128_f32[2]; /*0x921efa*/
            v42 = v15[3].m128_f32[3] * a2->m128_f32[1] /*0x921f0c*/
                - (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]))
                * a2->m128_f32[2];
            v258 = v42 * *((float *)v12 + 1) + v15[2].m128_f32[3] * v41; /*0x921f1c*/
            v265 = v41 * *((float *)v12 + 1) + v15[5].m128_f32[3] * v42; /*0x921f2e*/
            v230 = v41 * v15[1].m128_f32[3]; /*0x921f37*/
            v232 = v42 * v15[4].m128_f32[3]; /*0x921f3e*/
            if ( v258 <= (double)*(float *)&SrcStr ) /*0x921f51*/
            {
              if ( v232 <= (double)*(float *)&SrcStr ) /*0x92215e*/
                goto LABEL_35; /*0x92215e*/
              v47 = v232; /*0x922203*/
              v48 = (__m128)LODWORD(v232); /*0x922219*/
              v49 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v14[3]); /*0x92222d*/
              v50 = v228[3]; /*0x922230*/
              v51 = v15 + 3; /*0x922234*/
LABEL_38:
              v66 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v50); /*0x922238*/
              v67 = _mm_mul_ps(_mm_shuffle_ps(v66, v66, 0xFF), *v51); /*0x922253*/
              v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xFF), *v51)); /*0x92225d*/
              *v38 = _mm_sub_ps(*v38, v67); /*0x922267*/
              v68 = _mm_mul_ps(v66, v51[2]); /*0x922279*/
              v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v49, v51[1])); /*0x922283*/
              *v248 = _mm_add_ps(*v248, v68); /*0x92228d*/
              v13[1] = v47 + v13[1]; /*0x922293*/
            }
            else
            {
              if ( v265 > (double)*(float *)&SrcStr ) /*0x921f66*/
              {
                v43 = (__m128)LODWORD(v258); /*0x921f7c*/
                v44 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v14[3]); /*0x921f90*/
                v45 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v228[3]); /*0x921f9a*/
                v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0xFF), v37)); /*0x921fb8*/
                *v38 = _mm_sub_ps(*v38, _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0xFF), v37)); /*0x921fc2*/
                v46 = _mm_mul_ps(v45, v15[2]); /*0x921fd0*/
                v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v44, v15[1])); /*0x921fe2*/
                *v248 = _mm_add_ps(*v248, v46); /*0x921fec*/
                *v13 = v258 + *v13; /*0x921ffc*/
                v47 = v265; /*0x922002*/
                v48 = (__m128)LODWORD(v265); /*0x92200d*/
                v49 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v14[3]); /*0x922021*/
                v50 = v228[3]; /*0x922024*/
                v51 = v15 + 3; /*0x922027*/
                goto LABEL_38; /*0x92202b*/
              }
LABEL_35:
              if ( v230 > (double)*(float *)&SrcStr ) /*0x922173*/
              {
                v62 = (__m128)LODWORD(v230); /*0x922189*/
                v63 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v14[3]); /*0x92219a*/
                v64 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v228[3]); /*0x9221a9*/
                v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v63, v63, 0xFF), v37)); /*0x9221c7*/
                *v38 = _mm_sub_ps(*v38, _mm_mul_ps(_mm_shuffle_ps(v64, v64, 0xFF), v37)); /*0x9221d1*/
                v65 = _mm_mul_ps(v64, v15[2]); /*0x9221df*/
                v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v63, v15[1])); /*0x9221e9*/
                *v248 = _mm_add_ps(*v248, v65); /*0x9221f3*/
                *v13 = v230 + *v13; /*0x9221f8*/
              }
            }
            v69 = v12[8]; /*0x922296*/
            v12 += 8; /*0x922299*/
            v15 += 6; /*0x92229c*/
            v13 += 2; /*0x92229f*/
            if ( v69 == 8 ) /*0x9222a4*/
            {
LABEL_40:
              v70 = _mm_add_ps( /*0x9222aa*/
                      _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(v228[2], v15[2])),
                      _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), *v15));
              v71 = v228 + 2; /*0x9222e4*/
              v266 = v228 + 1; /*0x9222fd*/
              v278 = _mm_shuffle_ps(v70, v70, 0xAA).m128_f32[0] /*0x922308*/
                   + (float)(_mm_shuffle_ps(v70, v70, 0x55).m128_f32[0] + v70.m128_f32[0]);
              v72 = _mm_add_ps( /*0x922339*/
                      _mm_add_ps(_mm_mul_ps(v14[2], v15[4]), _mm_mul_ps(v228[2], v15[5])),
                      _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), v15[3]));
              v275 = _mm_shuffle_ps(v72, v72, 0xAA).m128_f32[0] /*0x922359*/
                   + (float)(_mm_shuffle_ps(v72, v72, 0x55).m128_f32[0] + v72.m128_f32[0]);
              v73 = _mm_add_ps(_mm_mul_ps(v14[2], v15[6]), _mm_mul_ps(v228[2], v15[7])); /*0x922372*/
              v250 = (v15[7].m128_f32[3] * a2->m128_f32[3] /*0x9223aa*/
                    - (float)(_mm_shuffle_ps(v73, v73, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v73, v73, 0x55).m128_f32[0] + v73.m128_f32[0]))
                    * a2->m128_f32[2])
                   * v15[6].m128_f32[3];
              v259 = v15->m128_f32[3] * a2->m128_f32[3] - v278 * a2->m128_f32[2]; /*0x9223c2*/
              v234 = v15[3].m128_f32[3] * a2->m128_f32[3] - v275 * a2->m128_f32[2]; /*0x9223df*/
              v74 = v259 * v15[2].m128_f32[3] + v234 * *((float *)v12 + 2); /*0x9223f1*/
              v75 = v234 * v15[5].m128_f32[3] + v259 * *((float *)v12 + 2); /*0x922401*/
              v76 = v250; /*0x922403*/
              v77 = v76 * v76 + v75 * v75 + v74 * v74; /*0x922415*/
              if ( v77 > *((float *)v12 + 3) * *((float *)v12 + 3) ) /*0x922428*/
              {
                v78 = *((float *)v12 + 3) / sqrt(v77); /*0x92242c*/
                v74 = v74 * v78; /*0x922431*/
                v75 = v75 * v78; /*0x922435*/
                v76 = v76 * v78; /*0x92243b*/
                v15->m128_f32[3] = v78 * v15->m128_f32[3]; /*0x922442*/
                v15[3].m128_f32[3] = v78 * v15[3].m128_f32[3]; /*0x92244a*/
                v15[7].m128_f32[3] = v78 * v15[7].m128_f32[3]; /*0x922450*/
              }
              *(float *)&v251 = v76 * *((float *)v12 + 5); /*0x922465*/
              *(float *)&v235 = v74; /*0x922472*/
              v79 = (__m128)v235; /*0x922476*/
              v80 = _mm_mul_ps(_mm_shuffle_ps(v79, v79, 0), v14[3]); /*0x922485*/
              v81 = _mm_mul_ps(_mm_shuffle_ps(v79, v79, 0), v228[3]); /*0x922493*/
              v82 = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0xFF), *v15); /*0x9224a7*/
              v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xFF), *v15)); /*0x9224b1*/
              *v266 = _mm_sub_ps(*v266, v82); /*0x9224bb*/
              v83 = _mm_mul_ps(v81, v15[2]); /*0x9224c9*/
              v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v80, v15[1])); /*0x9224d3*/
              *v71 = _mm_add_ps(*v71, v83); /*0x9224dd*/
              *v13 = v74 + *v13; /*0x9224ed*/
              *(float *)&v260 = v75; /*0x9224f3*/
              v84 = (__m128)v260; /*0x9224f7*/
              v85 = _mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), v14[3]); /*0x922504*/
              v86 = _mm_mul_ps(_mm_shuffle_ps(v84, v84, 0), v228[3]); /*0x922519*/
              v87 = _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0xFF), v15[3]); /*0x92252d*/
              v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v85, v85, 0xFF), v15[3])); /*0x922537*/
              *v266 = _mm_sub_ps(*v266, v87); /*0x922541*/
              v88 = _mm_mul_ps(v86, v15[5]); /*0x922553*/
              v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v85, v15[4])); /*0x92255d*/
              *v71 = _mm_add_ps(*v71, v88); /*0x922567*/
              v13[1] = v75 + v13[1]; /*0x922571*/
              v89 = (__m128)v251; /*0x922583*/
              v90 = _mm_mul_ps(_mm_shuffle_ps(v89, v89, 0), v14[3]); /*0x922597*/
              v91 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v89, v89, 0), v228[3]), v15[7]); /*0x9225af*/
              v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v90, v15[6])); /*0x9225b9*/
              *v71 = _mm_add_ps(*v71, v91); /*0x9225c3*/
              v12 += 0x18; /*0x9225c9*/
              v15 += 8; /*0x9225cc*/
              v13[2] = *(float *)&v251 + v13[2]; /*0x9225d2*/
              v13 += 3; /*0x9225d7*/
              if ( *v12 == 1 ) /*0x9225dc*/
                continue; /*0x9225dc*/
            }
            goto LABEL_15; /*0x9225dc*/
          }
          goto LABEL_16; /*0x921e3a*/
        case 4: /*0x921b0f*/
          v129 = v228 + 2; /*0x922a44*/
          while ( 1 ) /*0x922a67*/
          {
            v130 = _mm_add_ps(_mm_mul_ps(v14[2], *v15), _mm_mul_ps(*v129, v15[1])); /*0x922a67*/
            v131 = v15[1].m128_f32[3] + *((float *)v12 + 3); /*0x922a8b*/
            v253 = (v131 * *((float *)v12 + 4) /*0x922aa4*/
                  - (float)(_mm_shuffle_ps(v130, v130, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v130, v130, 0x55).m128_f32[0] + v130.m128_f32[0]))
                  * *((float *)v12 + 5))
                 * v15->m128_f32[3];
            if ( v253 > (double)*((float *)v12 + 1) ) /*0x922ab6*/
              break; /*0x922ab6*/
            if ( v253 < (double)*((float *)v12 + 2) ) /*0x922ad9*/
            {
              if ( *((_DWORD *)v12 + 6) ) /*0x922adb*/
                v131 = v131 * (*((float *)v12 + 2) / v253); /*0x922ae9*/
              v132 = *((float *)v12 + 2); /*0x922aeb*/
              goto LABEL_70; /*0x922aeb*/
            }
LABEL_71:
            v15[1].m128_f32[3] = v131; /*0x922af2*/
            v133 = (__m128)LODWORD(v253); /*0x922b08*/
            v134 = _mm_mul_ps(_mm_shuffle_ps(v133, v133, 0), v14[3]); /*0x922b1c*/
            v135 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v133, v133, 0), v228[3]), v15[1]); /*0x922b33*/
            v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v134, *v15)); /*0x922b3d*/
            *v129 = _mm_add_ps(*v129, v135); /*0x922b47*/
            v12 += 0x1C; /*0x922b4c*/
            v15 += 2; /*0x922b4f*/
            *v13 = v253 + *v13; /*0x922b52*/
            ++v13; /*0x922b56*/
            if ( *v12 != 4 ) /*0x922b5b*/
              goto LABEL_15; /*0x922b5b*/
          }
          if ( *((_DWORD *)v12 + 6) ) /*0x922ab8*/
            v131 = v131 * (*((float *)v12 + 1) / v253); /*0x922ac6*/
          v132 = *((float *)v12 + 1); /*0x922ac8*/
LABEL_70:
          v253 = v132; /*0x922aee*/
          goto LABEL_71; /*0x922aee*/
        case 5: /*0x921b0f*/
          do /*0x9231ad*/
          {
            v178 = _mm_add_ps( /*0x92304f*/
                     _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(v228[2], v15[2])),
                     _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), *v15));
            v179 = v15->m128_f32[3] + *((float *)v12 + 3); /*0x9230a1*/
            v231 = (v179 * *((float *)v12 + 4) /*0x9230b7*/
                  - (float)(_mm_shuffle_ps(v178, v178, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v178, v178, 0x55).m128_f32[0] + v178.m128_f32[0]))
                  * *((float *)v12 + 5))
                 * v15[1].m128_f32[3];
            if ( v231 <= (double)*((float *)v12 + 1) ) /*0x9230c9*/
            {
              if ( v231 < (double)*((float *)v12 + 2) ) /*0x9230f0*/
              {
                if ( *((_DWORD *)v12 + 6) ) /*0x9230f2*/
                  v179 = v179 * (*((float *)v12 + 2) / v231); /*0x923100*/
                v231 = *((float *)v12 + 2); /*0x923105*/
              }
            }
            else
            {
              if ( *((_DWORD *)v12 + 6) ) /*0x9230cb*/
                v179 = v179 * (*((float *)v12 + 1) / v231); /*0x9230d9*/
              v231 = *((float *)v12 + 1); /*0x9230de*/
            }
            v15->m128_f32[3] = v179; /*0x92310d*/
            v180 = (__m128)LODWORD(v231); /*0x923127*/
            v181 = _mm_mul_ps(_mm_shuffle_ps(v180, v180, 0), v269[3]); /*0x923134*/
            v182 = _mm_mul_ps(_mm_shuffle_ps(v180, v180, 0), v228[3]); /*0x92313f*/
            v183 = _mm_mul_ps(_mm_shuffle_ps(v182, v182, 0xFF), *v15); /*0x923153*/
            v269[1] = _mm_add_ps(v269[1], _mm_mul_ps(_mm_shuffle_ps(v181, v181, 0xFF), *v15)); /*0x92315d*/
            v228[1] = _mm_sub_ps(v228[1], v183); /*0x923168*/
            v184 = _mm_mul_ps(v182, v15[2]); /*0x923177*/
            v269[2] = _mm_add_ps(v269[2], _mm_mul_ps(v181, v15[1])); /*0x923181*/
            v228[2] = _mm_add_ps(v228[2], v184); /*0x92318c*/
            *v13 = v231 + *v13; /*0x923196*/
            v185 = sub_8F0EE0((char *)v15, 1); /*0x923198*/
            v14 = v269; /*0x92319d*/
            v12 += 0x1C; /*0x9231a1*/
            v15 = (__m128 *)v185; /*0x9231a4*/
            ++v13; /*0x9231a8*/
          }
          while ( *v12 == 5 ); /*0x9231ad*/
          goto LABEL_15; /*0x9231ad*/
        case 6: /*0x921b0f*/
          v152 = v228 + 1; /*0x922d6f*/
          v256 = v228 + 2; /*0x922d75*/
          do /*0x922e94*/
          {
            v272 = *((float *)v12 + 1); /*0x922da5*/
            v153 = _mm_add_ps( /*0x922db6*/
                     _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(*v256, v15[2])),
                     _mm_mul_ps(_mm_sub_ps(v14[1], *v152), *v15));
            v154 = (v15->m128_f32[3] * a2->m128_f32[1] /*0x922de6*/
                  - (float)(_mm_shuffle_ps(v153, v153, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v153, v153, 0x55).m128_f32[0] + v153.m128_f32[0]))
                  * a2->m128_f32[2])
                 * v15[1].m128_f32[3];
            v155 = fabs(v154); /*0x922deb*/
            if ( v155 > v272 ) /*0x922df6*/
            {
              v156 = v272 / v155; /*0x922dfc*/
              v154 = v154 * v156; /*0x922e00*/
              v15->m128_f32[3] = v156 * v15->m128_f32[3]; /*0x922e05*/
            }
            *(float *)&v244 = v154; /*0x922e10*/
            v157 = (__m128)v244; /*0x922e14*/
            v158 = _mm_mul_ps(_mm_shuffle_ps(v157, v157, 0), v14[3]); /*0x922e28*/
            v159 = _mm_mul_ps(_mm_shuffle_ps(v157, v157, 0), v228[3]); /*0x922e36*/
            v160 = _mm_mul_ps(_mm_shuffle_ps(v159, v159, 0xFF), *v15); /*0x922e4a*/
            v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v158, v158, 0xFF), *v15)); /*0x922e54*/
            *v152 = _mm_sub_ps(*v152, v160); /*0x922e5e*/
            v161 = _mm_mul_ps(v159, v15[2]); /*0x922e6c*/
            v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v158, v15[1])); /*0x922e76*/
            *v256 = _mm_add_ps(*v256, v161); /*0x922e80*/
            v12 += 8; /*0x922e85*/
            v15 += 3; /*0x922e88*/
            *v13 = v154 + *v13; /*0x922e8b*/
            ++v13; /*0x922e8f*/
          }
          while ( *v12 == 6 ); /*0x922e94*/
          goto LABEL_15; /*0x922e94*/
        case 7: /*0x921b0f*/
          v92 = v228 + 1; /*0x922612*/
          v93 = _mm_add_ps( /*0x92261e*/
                  _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(v228[2], v15[2])),
                  _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), *v15));
          v252 = v228 + 2; /*0x922637*/
          v276 = _mm_shuffle_ps(v93, v93, 0xAA).m128_f32[0] /*0x922642*/
               + (float)(_mm_shuffle_ps(v93, v93, 0x55).m128_f32[0] + v93.m128_f32[0]);
          v94 = _mm_add_ps( /*0x922673*/
                  _mm_add_ps(_mm_mul_ps(v14[2], v15[4]), _mm_mul_ps(v228[2], v15[5])),
                  _mm_mul_ps(_mm_sub_ps(v14[1], v228[1]), v15[3]));
          v236 = v15->m128_f32[3] * a2->m128_f32[3] - v276 * a2->m128_f32[2]; /*0x9226a6*/
          v261 = v15[3].m128_f32[3] * a2->m128_f32[3] /*0x9226b9*/
               - (float)(_mm_shuffle_ps(v94, v94, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v94, v94, 0x55).m128_f32[0] + v94.m128_f32[0]))
               * a2->m128_f32[2];
          v267 = *((float *)v12 + 3) * *((float *)v12 + 3); /*0x9226c4*/
          v95 = v15[2].m128_f32[3] * v236 + v261 * *((float *)v12 + 2); /*0x9226d8*/
          v96 = v236 * *((float *)v12 + 2) + v15[5].m128_f32[3] * v261; /*0x9226ea*/
          v97 = v95 * v95 + v96 * v96; /*0x9226f4*/
          if ( v97 > v267 ) /*0x9226ff*/
          {
            v98 = sqrt(v267 / v97); /*0x922705*/
            v95 = v95 * v98; /*0x922709*/
            v96 = v96 * v98; /*0x92270d*/
            v15->m128_f32[3] = v98 * v15->m128_f32[3]; /*0x922714*/
            v15[3].m128_f32[3] = v98 * v15[3].m128_f32[3]; /*0x92271a*/
          }
          *(float *)&v237 = v95; /*0x92272a*/
          v99 = (__m128)v237; /*0x92272e*/
          v100 = _mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v14[3]); /*0x922741*/
          v101 = _mm_mul_ps(_mm_shuffle_ps(v99, v99, 0), v228[3]); /*0x92274f*/
          v102 = _mm_mul_ps(_mm_shuffle_ps(v101, v101, 0xFF), *v15); /*0x922763*/
          v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v100, v100, 0xFF), *v15)); /*0x92276d*/
          *v92 = _mm_sub_ps(*v92, v102); /*0x922777*/
          v103 = _mm_mul_ps(v101, v15[2]); /*0x922785*/
          v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v100, v15[1])); /*0x92278f*/
          *v252 = _mm_add_ps(*v252, v103); /*0x9227a1*/
          v262 = v15 + 3; /*0x9227a9*/
          *v13 = v95 + *v13; /*0x9227b1*/
          *(float *)&v238 = v96; /*0x9227b7*/
          v15 += 6; /*0x9227bb*/
          v104 = (__m128)v238; /*0x9227be*/
          v105 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0), v14[3]); /*0x9227cb*/
          v106 = _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0), v228[3]); /*0x9227dc*/
          v107 = _mm_mul_ps(_mm_shuffle_ps(v106, v106, 0xFF), *v262); /*0x9227f0*/
          v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v105, v105, 0xFF), *v262)); /*0x9227fa*/
          *v92 = _mm_sub_ps(*v92, v107); /*0x922804*/
          v108 = _mm_mul_ps(v106, v262[2]); /*0x922816*/
          v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v105, v262[1])); /*0x922820*/
          *v252 = _mm_add_ps(*v252, v108); /*0x92282a*/
          v109 = v96 + v13[1]; /*0x92282d*/
          v13 += 2; /*0x922830*/
          v13[0xFFFFFFFF] = v109; /*0x922833*/
          v110 = v12[0x14]; /*0x922836*/
          v12 += 0x14; /*0x922839*/
          if ( v110 == 1 ) /*0x92283e*/
            continue; /*0x92283e*/
          goto LABEL_15; /*0x92283e*/
        case 8: /*0x921b0f*/
          goto LABEL_40;
        case 9: /*0x921b0f*/
          v111 = v228 + 2; /*0x92285e*/
          do /*0x922934*/
          {
            v112 = _mm_add_ps(_mm_mul_ps(v14[2], *v15), _mm_mul_ps(*v111, v15[1])); /*0x92287b*/
            v273 = *((float *)v12 + 1); /*0x92287e*/
            v113 = (v15[1].m128_f32[3] * a2->m128_f32[3] /*0x9228b8*/
                  - (float)(_mm_shuffle_ps(v112, v112, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v112, v112, 0x55).m128_f32[0] + v112.m128_f32[0]))
                  * a2->m128_f32[2])
                 * v15->m128_f32[3];
            v114 = fabs(v113); /*0x9228bd*/
            if ( v114 > v273 ) /*0x9228c8*/
            {
              v115 = v273 / v114; /*0x9228ce*/
              v113 = v113 * v115; /*0x9228d0*/
              v15[1].m128_f32[3] = v115 * v15[1].m128_f32[3]; /*0x9228d5*/
            }
            *(float *)&v263 = v113; /*0x9228e0*/
            v116 = (__m128)v263; /*0x9228e4*/
            v117 = _mm_mul_ps(_mm_shuffle_ps(v116, v116, 0), v14[3]); /*0x9228f5*/
            v118 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v116, v116, 0), v228[3]), v15[1]); /*0x92290c*/
            v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v117, *v15)); /*0x922916*/
            *v111 = _mm_add_ps(*v111, v118); /*0x922920*/
            v12 += 8; /*0x922925*/
            v15 += 2; /*0x922928*/
            *v13 = v113 + *v13; /*0x92292b*/
            ++v13; /*0x92292f*/
          }
          while ( *v12 == 9 ); /*0x922934*/
          goto LABEL_15; /*0x922934*/
        case 0xA: /*0x921b0f*/
          v119 = v228 + 2; /*0x922943*/
          while ( 1 ) /*0x922950*/
          {
            v120 = v15[1]; /*0x922950*/
            v121 = _mm_add_ps(_mm_mul_ps(v14[2], *v15), _mm_mul_ps(*v119, v120)); /*0x92295a*/
            v122 = (float)(_mm_shuffle_ps(v121, v121, 0xAA).m128_f32[0] /*0x922988*/
                         + (float)(_mm_shuffle_ps(v121, v121, 0x55).m128_f32[0] + v121.m128_f32[0]))
                 * a2->m128_f32[2];
            v123 = (v15[1].m128_f32[3] - *((float *)v12 + 1)) * *((float *)v12 + 3) - v122; /*0x922994*/
            if ( v123 > *(float *)&SrcStr ) /*0x9229a5*/
              break; /*0x9229a5*/
            v126 = (v15[1].m128_f32[3] - *((float *)v12 + 2)) * *((float *)v12 + 3) - v122; /*0x9229c5*/
            if ( v126 < *(float *)&SrcStr ) /*0x9229d2*/
            {
              v124 = v126 * v15->m128_f32[3]; /*0x9229d4*/
              *(float *)&v241 = v124; /*0x9229d7*/
              v125 = (__m128)v241; /*0x9229db*/
              goto LABEL_58; /*0x9229db*/
            }
LABEL_59:
            v128 = v12[0x10]; /*0x922a20*/
            v12 += 0x10; /*0x922a23*/
            v15 += 2; /*0x922a26*/
            ++v13; /*0x922a29*/
            if ( v128 != 0xA ) /*0x922a2e*/
              goto LABEL_15; /*0x922a2e*/
          }
          v239 = v123; /*0x922996*/
          v124 = v239 * v15->m128_f32[3]; /*0x9229ad*/
          *(float *)&v240 = v124; /*0x9229b0*/
          v125 = (__m128)v240; /*0x9229b4*/
LABEL_58:
          v127 = v228[3]; /*0x9229e1*/
          v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v125, v125, 0), v14[3]), *v15)); /*0x922a01*/
          *v119 = _mm_add_ps(*v119, _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v125, v125, 0), v127), v120)); /*0x922a15*/
          *v13 = v124 + *v13; /*0x922a1a*/
          goto LABEL_59; /*0x922a1a*/
        case 0xB: /*0x921b0f*/
          do /*0x923040*/
          {
            v162 = *v15; /*0x922ea0*/
            v163 = _mm_add_ps( /*0x922ed2*/
                     _mm_add_ps(_mm_mul_ps(v269[2], v15[1]), _mm_mul_ps(v228[2], v15[2])),
                     _mm_mul_ps(_mm_sub_ps(v269[1], v228[1]), *v15));
            v164 = (float)(_mm_shuffle_ps(v163, v163, 0xAA).m128_f32[0] /*0x922efa*/
                         + (float)(_mm_shuffle_ps(v163, v163, 0x55).m128_f32[0] + v163.m128_f32[0]))
                 * a2->m128_f32[2];
            v165 = (v15->m128_f32[3] - *((float *)v12 + 1)) * a2->m128_f32[1] - v164; /*0x922f06*/
            if ( v165 > *(float *)&SrcStr ) /*0x922f13*/
            {
              v166 = v165 * v15[1].m128_f32[3]; /*0x922f15*/
              *(float *)&v245 = v166; /*0x922f1c*/
              v167 = (__m128)v245; /*0x922f20*/
              v168 = _mm_mul_ps(_mm_shuffle_ps(v167, v167, 0), v269[3]); /*0x922f2d*/
              v169 = _mm_mul_ps(_mm_shuffle_ps(v167, v167, 0), v228[3]); /*0x922f38*/
              v269[1] = _mm_add_ps(v269[1], _mm_mul_ps(_mm_shuffle_ps(v168, v168, 0xFF), v162)); /*0x922f56*/
              v228[1] = _mm_sub_ps(v228[1], _mm_mul_ps(_mm_shuffle_ps(v169, v169, 0xFF), v162)); /*0x922f61*/
              v170 = _mm_mul_ps(v169, v15[2]); /*0x922f70*/
              v269[2] = _mm_add_ps(v269[2], _mm_mul_ps(v168, v15[1])); /*0x922f7a*/
              v228[2] = _mm_add_ps(v228[2], v170); /*0x922f85*/
              *v13 = v166 + *v13; /*0x922f8b*/
            }
            v171 = (v15->m128_f32[3] - *((float *)v12 + 2)) * a2->m128_f32[1] - v164; /*0x922f9d*/
            if ( v171 < *(float *)&SrcStr ) /*0x922faa*/
            {
              v172 = v171 * v15[1].m128_f32[3]; /*0x922fac*/
              *(float *)&v246 = v172; /*0x922fb6*/
              v173 = (__m128)v246; /*0x922fba*/
              v174 = _mm_mul_ps(_mm_shuffle_ps(v173, v173, 0), v269[3]); /*0x922fc7*/
              v175 = _mm_mul_ps(_mm_shuffle_ps(v173, v173, 0), v228[3]); /*0x922fd2*/
              v176 = _mm_mul_ps(_mm_shuffle_ps(v175, v175, 0xFF), *v15); /*0x922fe6*/
              v269[1] = _mm_add_ps(v269[1], _mm_mul_ps(_mm_shuffle_ps(v174, v174, 0xFF), *v15)); /*0x922ff0*/
              v228[1] = _mm_sub_ps(v228[1], v176); /*0x922ffb*/
              v177 = _mm_mul_ps(v175, v15[2]); /*0x92300a*/
              v269[2] = _mm_add_ps(v269[2], _mm_mul_ps(v174, v15[1])); /*0x923014*/
              v228[2] = _mm_add_ps(v228[2], v177); /*0x92301f*/
              *v13 = v172 + *v13; /*0x923025*/
            }
            v12 += 0xC; /*0x923034*/
            v15 = (__m128 *)sub_8F0EE0((char *)v15, 1); /*0x923037*/
            ++v13; /*0x92303b*/
          }
          while ( *v12 == 0xB ); /*0x923040*/
          v14 = v269; /*0x923046*/
          goto LABEL_15; /*0x92304a*/
        case 0xC: /*0x921b0f*/
          v254 = v228 + 2; /*0x922b77*/
          do /*0x922c2c*/
          {
            v136 = *v15; /*0x922b80*/
            v137 = v15->m128_f32[3]; /*0x922b83*/
            v138 = v15[1]; /*0x922b86*/
            v139 = v15[1].m128_f32[3]; /*0x922b8a*/
            v140 = _mm_add_ps(_mm_mul_ps(v14[2], *v15), _mm_mul_ps(*v254, v138)); /*0x922b9e*/
            v12 += 4; /*0x922bd3*/
            v15 += 2; /*0x922bdd*/
            ++v13; /*0x922be0*/
            v141 = v137 /*0x922be5*/
                 * (v139 * a2->m128_f32[1]
                  - (float)(_mm_shuffle_ps(v140, v140, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v140, v140, 0x55).m128_f32[0] + v140.m128_f32[0]))
                  * a2->m128_f32[2]);
            *(float *)&v242 = v141; /*0x922be7*/
            v142 = v228[3]; /*0x922bfb*/
            v14[2] = _mm_add_ps( /*0x922c0b*/
                       v14[2],
                       _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v242, (__m128)v242, 0), v14[3]), v136));
            *v254 = _mm_add_ps(*v254, _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v242, (__m128)v242, 0), v142), v138)); /*0x922c1e*/
            v13[0xFFFFFFFF] = v141 + v13[0xFFFFFFFF]; /*0x922c24*/
          }
          while ( *v12 == 0xC ); /*0x922c2c*/
          goto LABEL_15; /*0x922c2c*/
        case 0xD: /*0x921b0f*/
          v268 = v228 + 1; /*0x922c41*/
          v255 = v228 + 2; /*0x922c53*/
          do /*0x922d59*/
          {
            v143 = v15[1].m128_f32[3]; /*0x922c64*/
            v144 = v15->m128_f32[3]; /*0x922c6b*/
            v145 = *v15; /*0x922c8a*/
            v146 = _mm_add_ps( /*0x922c96*/
                     _mm_add_ps(_mm_mul_ps(v14[2], v15[1]), _mm_mul_ps(*v255, v15[2])),
                     _mm_mul_ps(_mm_sub_ps(v14[1], *v268), *v15));
            v12 += 4; /*0x922ccb*/
            v15 += 3; /*0x922cd5*/
            ++v13; /*0x922cd8*/
            v147 = v143 /*0x922cdd*/
                 * (v144 * a2->m128_f32[1]
                  - (float)(_mm_shuffle_ps(v146, v146, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v146, v146, 0x55).m128_f32[0] + v146.m128_f32[0]))
                  * a2->m128_f32[2]);
            *(float *)&v243 = v147; /*0x922cdf*/
            v148 = (__m128)v243; /*0x922ce3*/
            v149 = _mm_mul_ps(_mm_shuffle_ps(v148, v148, 0), v14[3]); /*0x922cf0*/
            v150 = _mm_mul_ps(_mm_shuffle_ps(v148, v148, 0), v228[3]); /*0x922cfe*/
            v14[1] = _mm_add_ps(v14[1], _mm_mul_ps(_mm_shuffle_ps(v149, v149, 0xFF), v145)); /*0x922d1b*/
            *v268 = _mm_sub_ps(*v268, _mm_mul_ps(_mm_shuffle_ps(v150, v150, 0xFF), v145)); /*0x922d24*/
            v151 = _mm_mul_ps(v150, v15[0xFFFFFFFF]); /*0x922d35*/
            v14[2] = _mm_add_ps(v14[2], _mm_mul_ps(v149, v15[0xFFFFFFFE])); /*0x922d3e*/
            *v255 = _mm_add_ps(*v255, v151); /*0x922d4b*/
            v13[0xFFFFFFFF] = v147 + v13[0xFFFFFFFF]; /*0x922d51*/
          }
          while ( *v12 == 0xD ); /*0x922d59*/
          goto LABEL_15; /*0x922d59*/
        case 0xE: /*0x921b0f*/
          (*((void (__cdecl **)(__m128 *, char *))v12 + 1))(v15, v12 + 8); /*0x9231fb*/
          v14 = v269; /*0x923202*/
          v12 += (unsigned __int8)v12[1]; /*0x923209*/
          goto LABEL_15; /*0x92320b*/
        case 0xF: /*0x921b0f*/
          v271 = *(unsigned __int64 *)((char *)a2->m128_u64 + 4); /*0x9231c5*/
          *(unsigned __int64 *)((char *)a2->m128_u64 + 4) = *(_QWORD *)(v12 + 4); /*0x9231d2*/
          v12 += 0xC; /*0x9231d5*/
          goto LABEL_15; /*0x9231d8*/
        case 0x10: /*0x921b0f*/
          *(unsigned __int64 *)((char *)a2->m128_u64 + 4) = v271; /*0x9231e4*/
          v12 += 4; /*0x9231ee*/
          goto LABEL_15; /*0x9231f1*/
        default:
          __debugbreak(); /*0x923210*/
LABEL_104:
          v186 = v270; /*0x923211*/
          v187 = a4; /*0x92321a*/
          if ( !v270 ) /*0x92321d*/
          {
LABEL_105:
            while ( v187->m128_i8[0] ) /*0x923229*/
            {
              if ( v187->m128_i8[0] == 1 ) /*0x92322c*/
              {
                v187 += 8; /*0x923256*/
              }
              else if ( v187->m128_i8[0] == 2 ) /*0x92322f*/
              {
                goto LABEL_108; /*0x92322f*/
              }
            }
            while ( 1 ) /*0x923260*/
            {
              v187[5] = 0; /*0x923260*/
              v187[4] = 0; /*0x923264*/
              v193 = v187[2]; /*0x923272*/
              v194 = 2 * v187->m128_i32[2]; /*0x92327a*/
              v195 = a2[v194 + 3].m128_i32[1]; /*0x92327d*/
              v196 = &a2[v194 + 3].m128_u32[1]; /*0x923284*/
              v197 = _mm_add_ps( /*0x9232c8*/
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)(unsigned int)v195, (__m128)(unsigned int)v195, 0),
                         _mm_and_ps(v187[1], (__m128)xmmword_A372D0)),
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)v196[1], (__m128)v196[1], 0),
                         _mm_and_ps(v193, (__m128)xmmword_A372D0)));
              if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[0], 0), v197)) /*0x9232d9*/
                  & 7) == 0 )
              {
                if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)v196[3], (__m128)v196[3], 0), v197)) & 7) == 0 ) /*0x9232fc*/
                {
                  v198 = v187->m128_i32[1]; /*0x9232fe*/
                  if ( v198 ) /*0x923303*/
                    v187->m128_i32[1] = v198 - 1; /*0x923306*/
                  v187[2] = 0; /*0x923309*/
                  v187[1] = 0; /*0x92330d*/
                  goto LABEL_120; /*0x923311*/
                }
                v187[2] = _mm_mul_ps(_mm_shuffle_ps((__m128)v196[2], (__m128)v196[2], 0), v193); /*0x92332d*/
                v187[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v196[2], (__m128)v196[2], 0), v187[1]); /*0x92334f*/
              }
              v187->m128_i32[1] = v196[4]; /*0x923356*/
              v187[5] = _mm_add_ps(v187[5], v187[2]); /*0x923364*/
              v187[4] = _mm_add_ps(v187[4], v187[1]); /*0x923373*/
LABEL_120:
              v199 = v187[8].m128_i8[0]; /*0x923377*/
              v187 += 8; /*0x92337d*/
              if ( v199 ) /*0x923384*/
                goto LABEL_105; /*0x923384*/
            }
          }
LABEL_122:
          while ( v187->m128_i8[0] ) /*0x923396*/
          {
            if ( v187->m128_i8[0] == 1 ) /*0x923399*/
            {
              v187 += 8; /*0x9233a3*/
            }
            else if ( v187->m128_i8[0] == 2 ) /*0x92339c*/
            {
LABEL_108:
              v188 = a3; /*0x923231*/
              while ( 2 ) /*0x923234*/
              {
                v189 = *((__m128 **)v188 + 3); /*0x923234*/
                v190 = *((__m128 **)v188 + 4); /*0x923237*/
                v191 = *((__m128 **)v188 + 1); /*0x92323a*/
                v188 += 0x18; /*0x92323d*/
LABEL_110:
                v192 = v188[2]; /*0x923240*/
LABEL_111:
                switch ( v192 ) /*0x92324f*/
                {
                  case 0: /*0x92324f*/
                    goto LABEL_146;
                  case 1: /*0x92324f*/
                    continue;
                  case 2: /*0x92324f*/
                    v188 += (unsigned __int8)v188[1]; /*0x92384f*/
                    goto LABEL_110; /*0x923851*/
                  case 3: /*0x92324f*/
                    do /*0x9237ea*/
                    {
                      v218 = _mm_add_ps( /*0x923782*/
                               _mm_add_ps(_mm_mul_ps(v189[2], v191[1]), _mm_mul_ps(v190[2], v191[2])),
                               _mm_mul_ps(_mm_sub_ps(v189[1], v190[1]), *v191));
                      v219 = v191->m128_f32[3] /*0x9237d3*/
                           - (float)(_mm_shuffle_ps(v218, v218, 0xAA).m128_f32[0]
                                   + (float)(_mm_shuffle_ps(v218, v218, 0x55).m128_f32[0] + v218.m128_f32[0]));
                      v191 += 3; /*0x9237da*/
                      v191[0xFFFFFFFD].m128_f32[3] = v219; /*0x9237dd*/
                      v188 += (unsigned __int8)v188[1]; /*0x9237e4*/
                    }
                    while ( v188[2] == 3 ); /*0x9237ea*/
                    goto LABEL_110; /*0x9237ea*/
                  case 4: /*0x92324f*/
                    do /*0x923844*/
                    {
                      v220 = _mm_add_ps(_mm_mul_ps(v189[2], *v191), _mm_mul_ps(v190[2], v191[1])); /*0x9237f1*/
                      v221 = v191[1].m128_f32[3] /*0x92382d*/
                           - (float)(_mm_shuffle_ps(v220, v220, 0xAA).m128_f32[0]
                                   + (float)(_mm_shuffle_ps(v220, v220, 0x55).m128_f32[0] + v220.m128_f32[0]));
                      v191 += 2; /*0x923834*/
                      v191[0xFFFFFFFF].m128_f32[3] = v221; /*0x923837*/
                      v188 += (unsigned __int8)v188[1]; /*0x92383e*/
                    }
                    while ( v188[2] == 4 ); /*0x923844*/
                    goto LABEL_110; /*0x923844*/
                  case 5: /*0x92324f*/
                    v205 = _mm_sub_ps(v189[1], v190[1]); /*0x923515*/
                    v206 = _mm_add_ps( /*0x923532*/
                             _mm_add_ps(_mm_mul_ps(v189[2], v191[4]), _mm_mul_ps(v190[2], v191[5])),
                             _mm_mul_ps(v205, v191[3]));
                    v207 = _mm_add_ps( /*0x923551*/
                             _mm_add_ps(_mm_mul_ps(v189[2], v191[1]), _mm_mul_ps(v190[2], v191[2])),
                             _mm_mul_ps(v205, *v191));
                    v208 = v191->m128_f32[3] /*0x923578*/
                         - (float)(_mm_shuffle_ps(v207, v207, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v207, v207, 0x55).m128_f32[0] + v207.m128_f32[0]));
                    v191 += 6; /*0x923586*/
                    v191[0xFFFFFFFA].m128_f32[3] = v208; /*0x923589*/
                    v191[0xFFFFFFFD].m128_f32[3] = v191[0xFFFFFFFD].m128_f32[3] /*0x92359a*/
                                                 - (float)(_mm_shuffle_ps(v206, v206, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v206, v206, 0x55).m128_f32[0]
                                                                 + v206.m128_f32[0]));
                    v188 += (unsigned __int8)v188[1]; /*0x9235a1*/
                    v192 = v188[2]; /*0x9235a3*/
                    if ( v192 != 5 ) /*0x9235a9*/
                      goto LABEL_111; /*0x9235a9*/
                    v209 = _mm_sub_ps(v189[1], v190[1]); /*0x9235da*/
                    v210 = _mm_add_ps( /*0x9235f7*/
                             _mm_add_ps(_mm_mul_ps(v189[2], v191[4]), _mm_mul_ps(v190[2], v191[5])),
                             _mm_mul_ps(v209, v191[3]));
                    v211 = _mm_add_ps( /*0x923616*/
                             _mm_add_ps(_mm_mul_ps(v189[2], v191[1]), _mm_mul_ps(v190[2], v191[2])),
                             _mm_mul_ps(v209, *v191));
                    v212 = v191->m128_f32[3] /*0x92363d*/
                         - (float)(_mm_shuffle_ps(v211, v211, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v211, v211, 0x55).m128_f32[0] + v211.m128_f32[0]));
                    v191 += 6; /*0x92364b*/
                    v191[0xFFFFFFFA].m128_f32[3] = v212; /*0x92364e*/
                    v191[0xFFFFFFFD].m128_f32[3] = v191[0xFFFFFFFD].m128_f32[3] /*0x92365f*/
                                                 - (float)(_mm_shuffle_ps(v210, v210, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v210, v210, 0x55).m128_f32[0]
                                                                 + v210.m128_f32[0]));
                    v188 += (unsigned __int8)v188[1]; /*0x923666*/
                    if ( v188[2] == 6 ) /*0x92366c*/
                      goto LABEL_138; /*0x92366c*/
                    goto LABEL_110; /*0x92366c*/
                  case 6: /*0x92324f*/
LABEL_138:
                    v213 = _mm_sub_ps(v189[1], v190[1]); /*0x923672*/
                    v214 = _mm_add_ps( /*0x9236ba*/
                             _mm_add_ps(_mm_mul_ps(v189[2], v191[4]), _mm_mul_ps(v190[2], v191[5])),
                             _mm_mul_ps(v213, v191[3]));
                    v215 = _mm_add_ps( /*0x9236d9*/
                             _mm_add_ps(_mm_mul_ps(v189[2], v191[1]), _mm_mul_ps(v190[2], v191[2])),
                             _mm_mul_ps(v213, *v191));
                    v216 = v191->m128_f32[3] /*0x923700*/
                         - (float)(_mm_shuffle_ps(v215, v215, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v215, v215, 0x55).m128_f32[0] + v215.m128_f32[0]));
                    v191 += 8; /*0x92370e*/
                    v191[0xFFFFFFF8].m128_f32[3] = v216; /*0x923713*/
                    v191[0xFFFFFFFB].m128_f32[3] = v191[0xFFFFFFFB].m128_f32[3] /*0x92372b*/
                                                 - (float)(_mm_shuffle_ps(v214, v214, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v214, v214, 0x55).m128_f32[0]
                                                                 + v214.m128_f32[0]));
                    v217 = _mm_add_ps(_mm_mul_ps(v189[2], v191[0xFFFFFFFE]), _mm_mul_ps(v190[2], v191[0xFFFFFFFF])); /*0x923744*/
                    v191[0xFFFFFFFF].m128_f32[3] = v191[0xFFFFFFFF].m128_f32[3] /*0x92376b*/
                                                 - (float)(_mm_shuffle_ps(v217, v217, 0xAA).m128_f32[0]
                                                         + (float)(_mm_shuffle_ps(v217, v217, 0x55).m128_f32[0]
                                                                 + v217.m128_f32[0]));
                    v188 += (unsigned __int8)v188[1]; /*0x923772*/
                    if ( *v188 == 1 ) /*0x923777*/
                      continue; /*0x923777*/
                    goto LABEL_110; /*0x923777*/
                  default:
                    __debugbreak(); /*0x923856*/
LABEL_146:
                    ++v270; /*0x923857*/
                    if ( v186 + 1 >= a2[0xF].m128_i32[3] ) /*0x923867*/
                      goto LABEL_147; /*0x923867*/
                    goto LABEL_5; /*0x923867*/
                }
              }
            }
          }
          break; /*0x923867*/
      }
      break;
    }
    while ( 1 ) /*0x9233ba*/
    {
      v200 = v187[2]; /*0x9233ba*/
      v201 = &a2[2 * v187->m128_i32[2] + 3].m128_u32[1]; /*0x9233c5*/
      v277 = a2[2 * v187->m128_i32[2] + 3].m128_i32[2]; /*0x9233f4*/
      v202 = _mm_add_ps( /*0x923420*/
               _mm_mul_ps(_mm_shuffle_ps((__m128)*v201, (__m128)*v201, 0), _mm_and_ps(v187[1], (__m128)xmmword_A372D0)),
               _mm_mul_ps(
                 _mm_shuffle_ps((__m128)(unsigned int)v277, (__m128)(unsigned int)v277, 0),
                 _mm_and_ps(v200, (__m128)xmmword_A372D0)));
      if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)a2->m128_u32[0], (__m128)a2->m128_u32[0], 0), v202)) & 7) == 0 ) /*0x923431*/
      {
        if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)v201[3], (__m128)v201[3], 0), v202)) & 7) == 0 ) /*0x923454*/
        {
          v203 = v187->m128_i32[1]; /*0x923456*/
          if ( v203 ) /*0x92345b*/
            v187->m128_i32[1] = v203 - 1; /*0x92345e*/
          v187[2] = 0; /*0x923464*/
          v187[1] = 0; /*0x923468*/
          goto LABEL_134; /*0x92346c*/
        }
        v187[2] = _mm_mul_ps(_mm_shuffle_ps((__m128)v201[2], (__m128)v201[2], 0), v200); /*0x923488*/
        v187[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v201[2], (__m128)v201[2], 0), v187[1]); /*0x9234aa*/
      }
      v187->m128_i32[1] = v201[4]; /*0x9234b1*/
      v187[5] = _mm_add_ps(v187[5], v187[2]); /*0x9234bf*/
      v187[4] = _mm_add_ps(v187[4], v187[1]); /*0x9234ce*/
LABEL_134:
      v204 = v187[8].m128_i8[0]; /*0x9234d2*/
      v187 += 8; /*0x9234d8*/
      if ( v204 ) /*0x9234df*/
        goto LABEL_122; /*0x9234df*/
    }
  }
LABEL_147:
  v222 = a5; /*0x92386d*/
  v223 = *((_DWORD *)a3 + 2); /*0x923873*/
  v224 = a3 + 0x18; /*0x92387c*/
  if ( !v223 && *v224 > 1 ) /*0x92388a*/
  {
    do /*0x9238b7*/
    {
      v225 = v224[2]; /*0x923890*/
      if ( v225 >= 3 ) /*0x923896*/
      {
        ++v222; /*0x923898*/
        if ( v225 >= 5 ) /*0x92389e*/
        {
          ++v222; /*0x9238a0*/
          if ( v225 == 6 ) /*0x9238a6*/
            ++v222; /*0x9238a8*/
        }
      }
      v226 = (unsigned __int8)v224[1]; /*0x9238ab*/
      v227 = v224[v226]; /*0x9238af*/
      v224 += v226; /*0x9238b2*/
    }
    while ( v227 > 1 ); /*0x9238b7*/
  }
  return def_9238D3( /*0x921a6d*/
           *((char **)a3 + 1),
           v223,
           (int)&savedregs,
           v222,
           v224,
           (int)a2,
           (int)a3,
           (int)a4,
           (int)a5,
           a6,
           a7,
           a8);
}
