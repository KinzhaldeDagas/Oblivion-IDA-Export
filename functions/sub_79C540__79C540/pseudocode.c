//
//
// [2026-10-03 material ownership] Verified entry writes guide+28=current indexed vertex counter, guide+2C=2; outer loop is engine bladeCount+2C, inner loop visits guide vertex vector with 0x38-byte stride and emits two vertices per point. Diffuse writers receive guide map byte+18. Thus guide shared range length is spinePoints*2*bladeCount. Fallout BuildBladeVertices 0x8282D938 and RT4.1 FrondEngine.cpp:449 corroborate semantics. Existing decompiler EDI parameter remains unresolved and is not treated as an extra source-level argument.
OB_CIndexedGeometry_010201A0 *__userpurge OB_CFrondEngine_BuildBladeVertices_010201A0@<eax>(
        OB_CIndexedGeometry_010201A0 **this@<ecx>,
        int a2@<edi>,
        OB_stVector16_010201A0 *a3)
{
  OB_CIndexedGeometry_010201A0 *v3; // eax
  double v4; // st7
  double v5; // st7
  bool v6; // zf
  double v7; // st7
  unsigned int v8; // eax
  bool v9; // cf
  void *begin; // eax
  char *v11; // esi
  unsigned int v12; // esi
  double v13; // st7
  unsigned int v14; // esi
  void *v15; // eax
  float *v16; // eax
  float *v17; // edi
  float *v18; // eax
  float v19; // edx
  float v20; // eax
  float v21; // ecx
  float *v22; // eax
  float *v23; // eax
  float *v24; // ecx
  unsigned int *v25; // ecx
  int v26; // edi
  float *v27; // eax
  double v28; // st7
  double v29; // st7
  void *v30; // eax
  float *v31; // eax
  double v32; // st7
  float *v33; // eax
  float *v34; // eax
  double v35; // st7
  double v36; // st7
  void *v37; // eax
  float *v38; // eax
  double v39; // st7
  float *v40; // eax
  unsigned int v41; // edi
  double v42; // st7
  float *v43; // eax
  double v44; // st7
  void *v45; // eax
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  double v49; // st7
  float *v50; // eax
  double v51; // st7
  unsigned int *v52; // ecx
  float *v53; // eax
  double v54; // st6
  double v55; // st6
  void *v56; // eax
  char *v57; // eax
  double v58; // st6
  float *v59; // eax
  double v60; // st6
  float *v61; // eax
  double v62; // st7
  float *v63; // eax
  double v64; // st7
  double v65; // st7
  float *v66; // eax
  double v67; // st7
  float *v68; // eax
  double v69; // st7
  double v70; // st7
  __int16 end_low; // dx
  OB_CIndexedGeometry_010201A0 *v72; // ecx
  OB_CIndexedGeometry_010201A0 *v73; // ecx
  double v74; // st6
  double v75; // st7
  double v76; // st5
  void *v77; // eax
  _BYTE *v78; // eax
  OB_CIndexedGeometry_010201A0 **v79; // ecx
  __int16 v80; // ax
  OB_CIndexedGeometry_010201A0 *v81; // ecx
  double v82; // st6
  double v83; // st7
  double v84; // st5
  void *v85; // eax
  _BYTE *v86; // eax
  unsigned int v87; // eax
  int v88; // esi
  int v89; // edi
  const float *v90; // eax
  const float *v91; // ecx
  float *end; // ecx
  float *v93; // eax
  const float *v94; // eax
  float *v95; // edi
  int v96; // edi
  double v97; // st7
  float *v98; // eax
  OB_CIndexedGeometry_010201A0 *v99; // ecx
  double v100; // st7
  float *v101; // eax
  OB_CIndexedGeometry_010201A0 *v102; // ecx
  OB_CIndexedGeometry_010201A0 *v103; // eax
  OB_stVectorFloatIterator_010201A0 _FFFFFFFC; // [esp-4h] [ebp-1B0h]
  OB_stVectorFloatIterator_010201A0 _FFFFFFFCa; // [esp-4h] [ebp-1B0h]
  __int16 angleDegrees; // [esp+4h] [ebp-1A8h]
  __int16 angleDegreesa; // [esp+4h] [ebp-1A8h]
  float v108; // [esp+1Ch] [ebp-190h]
  float v109; // [esp+1Ch] [ebp-190h]
  float *v110; // [esp+1Ch] [ebp-190h]
  float v111; // [esp+1Ch] [ebp-190h]
  float *v112; // [esp+1Ch] [ebp-190h]
  float v113; // [esp+1Ch] [ebp-190h]
  float v114; // [esp+1Ch] [ebp-190h]
  float v115; // [esp+1Ch] [ebp-190h]
  float v116; // [esp+1Ch] [ebp-190h]
  float v117; // [esp+1Ch] [ebp-190h]
  float v118; // [esp+1Ch] [ebp-190h]
  float v119; // [esp+1Ch] [ebp-190h]
  float v120; // [esp+1Ch] [ebp-190h]
  float v121; // [esp+1Ch] [ebp-190h]
  float v122; // [esp+1Ch] [ebp-190h]
  float v123; // [esp+1Ch] [ebp-190h]
  float v124; // [esp+1Ch] [ebp-190h]
  float v125; // [esp+1Ch] [ebp-190h]
  float v126; // [esp+1Ch] [ebp-190h]
  float v127; // [esp+1Ch] [ebp-190h]
  float v128; // [esp+1Ch] [ebp-190h]
  float v129; // [esp+1Ch] [ebp-190h]
  float v130; // [esp+1Ch] [ebp-190h]
  float v131; // [esp+1Ch] [ebp-190h]
  float v132; // [esp+1Ch] [ebp-190h]
  float v133; // [esp+1Ch] [ebp-190h]
  float v134; // [esp+1Ch] [ebp-190h]
  float v135; // [esp+1Ch] [ebp-190h]
  float v136; // [esp+1Ch] [ebp-190h]
  unsigned int v137; // [esp+1Ch] [ebp-190h]
  unsigned int v138; // [esp+1Ch] [ebp-190h]
  float v139; // [esp+20h] [ebp-18Ch]
  float v140; // [esp+20h] [ebp-18Ch]
  float v141; // [esp+20h] [ebp-18Ch]
  float v142; // [esp+20h] [ebp-18Ch]
  float v143; // [esp+20h] [ebp-18Ch]
  float v144; // [esp+20h] [ebp-18Ch]
  float v145; // [esp+20h] [ebp-18Ch]
  float v146; // [esp+20h] [ebp-18Ch]
  float v147; // [esp+20h] [ebp-18Ch]
  float v148; // [esp+20h] [ebp-18Ch]
  float v149; // [esp+20h] [ebp-18Ch]
  float v150; // [esp+20h] [ebp-18Ch]
  float v151; // [esp+20h] [ebp-18Ch]
  float v152; // [esp+20h] [ebp-18Ch]
  float v153; // [esp+20h] [ebp-18Ch]
  float v154; // [esp+20h] [ebp-18Ch]
  float v155; // [esp+20h] [ebp-18Ch]
  float v156; // [esp+20h] [ebp-18Ch]
  float v157; // [esp+20h] [ebp-18Ch]
  float v158; // [esp+20h] [ebp-18Ch]
  float v159; // [esp+20h] [ebp-18Ch]
  float v160; // [esp+20h] [ebp-18Ch]
  _BYTE *v161; // [esp+20h] [ebp-18Ch]
  float v162; // [esp+20h] [ebp-18Ch]
  _BYTE *v163; // [esp+20h] [ebp-18Ch]
  const float *VertexCoord_010201A0; // [esp+20h] [ebp-18Ch]
  float v165; // [esp+20h] [ebp-18Ch]
  const float *v166; // [esp+20h] [ebp-18Ch]
  float v167; // [esp+20h] [ebp-18Ch]
  unsigned int v168; // [esp+20h] [ebp-18Ch]
  float v169; // [esp+24h] [ebp-188h]
  float v170; // [esp+24h] [ebp-188h]
  float v171; // [esp+24h] [ebp-188h]
  float v172; // [esp+24h] [ebp-188h]
  float v173; // [esp+24h] [ebp-188h]
  float v174; // [esp+24h] [ebp-188h]
  float v175; // [esp+24h] [ebp-188h]
  float v176; // [esp+24h] [ebp-188h]
  float v177; // [esp+24h] [ebp-188h]
  float v178; // [esp+24h] [ebp-188h]
  float v179; // [esp+24h] [ebp-188h]
  float v180; // [esp+24h] [ebp-188h]
  float v181; // [esp+24h] [ebp-188h]
  float v182; // [esp+24h] [ebp-188h]
  float v183; // [esp+24h] [ebp-188h]
  float v184; // [esp+24h] [ebp-188h]
  int v185; // [esp+24h] [ebp-188h]
  float v186; // [esp+24h] [ebp-188h]
  float v187; // [esp+24h] [ebp-188h]
  float v188; // [esp+24h] [ebp-188h]
  float v189; // [esp+24h] [ebp-188h]
  int v190; // [esp+24h] [ebp-188h]
  float v191; // [esp+24h] [ebp-188h]
  float v192; // [esp+24h] [ebp-188h]
  float v193; // [esp+24h] [ebp-188h]
  float v194; // [esp+24h] [ebp-188h]
  float v195; // [esp+28h] [ebp-184h] BYREF
  OB_CIndexedGeometry_010201A0 **v196; // [esp+2Ch] [ebp-180h]
  void *Src; // [esp+30h] [ebp-17Ch]
  unsigned int v198; // [esp+34h] [ebp-178h]
  float normal; // [esp+38h] [ebp-174h] BYREF
  float v200; // [esp+3Ch] [ebp-170h]
  float v201; // [esp+40h] [ebp-16Ch]
  float value; // [esp+44h] [ebp-168h] BYREF
  float binormal; // [esp+48h] [ebp-164h] BYREF
  float v204; // [esp+4Ch] [ebp-160h]
  float v205; // [esp+50h] [ebp-15Ch]
  float tangent; // [esp+54h] [ebp-158h] BYREF
  float v207; // [esp+58h] [ebp-154h]
  float v208; // [esp+5Ch] [ebp-150h]
  OB_stVector4_010201A0 v209; // [esp+60h] [ebp-14Ch] BYREF
  OB_stVectorFloat_010201A0 v210; // [esp+70h] [ebp-13Ch] BYREF
  float v211; // [esp+80h] [ebp-12Ch] BYREF
  float v212; // [esp+84h] [ebp-128h]
  float v213; // [esp+88h] [ebp-124h]
  float coord; // [esp+8Ch] [ebp-120h] BYREF
  float v215; // [esp+90h] [ebp-11Ch]
  float v216; // [esp+94h] [ebp-118h]
  int v217; // [esp+98h] [ebp-114h]
  float v218; // [esp+9Ch] [ebp-110h]
  float v219; // [esp+A0h] [ebp-10Ch]
  OB_stVectorFloat_010201A0 v220; // [esp+A4h] [ebp-108h] BYREF
  double v221; // [esp+B4h] [ebp-F8h]
  int currentVertexWriteCounter; // [esp+C0h] [ebp-ECh]
  float diffuseST[2]; // [esp+C4h] [ebp-E8h] BYREF
  float rgba; // [esp+CCh] [ebp-E0h] BYREF
  float v225; // [esp+D0h] [ebp-DCh]
  float v226; // [esp+D4h] [ebp-D8h]
  float v227; // [esp+D8h] [ebp-D4h]
  float v228; // [esp+DCh] [ebp-D0h]
  float v229; // [esp+E0h] [ebp-CCh]
  float v230; // [esp+E4h] [ebp-C8h]
  float v231; // [esp+E8h] [ebp-C4h]
  float v232; // [esp+ECh] [ebp-C0h]
  float v233; // [esp+F0h] [ebp-BCh]
  float v234; // [esp+F4h] [ebp-B8h]
  float v235; // [esp+F8h] [ebp-B4h]
  float v236; // [esp+FCh] [ebp-B0h]
  float v237; // [esp+100h] [ebp-ACh]
  float v238; // [esp+104h] [ebp-A8h]
  float v239; // [esp+108h] [ebp-A4h]
  float v240; // [esp+10Ch] [ebp-A0h]
  float v241; // [esp+110h] [ebp-9Ch]
  float v242; // [esp+114h] [ebp-98h]
  float v243; // [esp+118h] [ebp-94h]
  float v244; // [esp+11Ch] [ebp-90h]
  float v245; // [esp+120h] [ebp-8Ch]
  float v246; // [esp+124h] [ebp-88h]
  float v247; // [esp+128h] [ebp-84h]
  float v248; // [esp+12Ch] [ebp-80h]
  float v249; // [esp+130h] [ebp-7Ch]
  float v250; // [esp+134h] [ebp-78h]
  float v251; // [esp+138h] [ebp-74h]
  float v252; // [esp+13Ch] [ebp-70h]
  float v253; // [esp+140h] [ebp-6Ch]
  float v254; // [esp+144h] [ebp-68h]
  float v255; // [esp+148h] [ebp-64h]
  float v256; // [esp+14Ch] [ebp-60h]
  float v257; // [esp+150h] [ebp-5Ch]
  float v258; // [esp+154h] [ebp-58h]
  float v259[2]; // [esp+158h] [ebp-54h] BYREF
  float v260[2]; // [esp+160h] [ebp-4Ch] BYREF
  OB_stRotTransform_010201A0 v261; // [esp+168h] [ebp-44h] BYREF
  OB_stVectorFloatIterator_010201A0 result; // [esp+18Ch] [ebp-20h] BYREF
  OB_stVectorFloatIterator_010201A0 v263; // [esp+194h] [ebp-18h] BYREF
  unsigned int v264; // [esp+1A8h] [ebp-4h]

  v196 = this; /*0x79c572*/
  v3 = *this; /*0x79c576*/
  if ( *this ) /*0x79c576*/
  {
    if ( *(this + 1) ) /*0x79c580*/
    {
      v4 = (double)(int)*(this + 0xB); /*0x79c58d*/
      if ( (int)*(this + 0xB) < 0 ) /*0x79c592*/
        v4 = v4 + flt_A2FC78; /*0x79c594*/
      v5 = dbl_A3F418 / v4; /*0x79c59a*/
      v3 = (OB_CIndexedGeometry_010201A0 *)v3->currentVertexWriteCounter; /*0x79c5a7*/
      a3[2].end = v3; /*0x79c5aa*/
      a3[2].capacityEnd = (void *)2; /*0x79c5ad*/
      v6 = *(this + 0xB) == 0; /*0x79c5b4*/
      v217 = 0; /*0x79c5b8*/
      v240 = v5; /*0x79c5c3*/
      if ( !v6 ) /*0x79c5ca*/
      {
        while ( 1 ) /*0x79c5df*/
        {
          currentVertexWriteCounter = (*v196)->currentVertexWriteCounter; /*0x79c5df*/
          memset(&v209.begin, 0, 0xC); /*0x79c5e8*/
          v205 = 0.0; /*0x79c5f6*/
          v264 = 0; /*0x79c5fa*/
          v204 = 0.0; /*0x79c601*/
          *(float *)&v198 = 0.0; /*0x79c605*/
          binormal = 0.0; /*0x79c609*/
          if ( OB_stVector_SFrondVertex_Size_010201A0(a3) ) /*0x79c60d*/
          {
            v7 = (double)v217; /*0x79c621*/
            if ( v217 < 0 ) /*0x79c62a*/
              v7 = v7 + flt_A2FC78; /*0x79c62c*/
            v221 = v7 * v240; /*0x79c639*/
            do /*0x79d59d*/
            {
              v8 = OB_stVector_SFrondVertex_Size_010201A0(a3); /*0x79c642*/
              v9 = v198 < v8 - 1; /*0x79c64e*/
              begin = a3->begin; /*0x79c650*/
              if ( v9 ) /*0x79c653*/
              {
                if ( !begin || v198 >= ((char *)a3->end - (char *)begin) / 0x38 ) /*0x79c673*/
                  _invalid_parameter_noinfo((int)a3, a2, v198); /*0x79c675*/
                v11 = (char *)a3->begin + 0x38 * v198 + 0xC; /*0x79c68a*/
              }
              else
              {
                v12 = v198 - 1; /*0x79c690*/
                if ( !begin || v12 >= ((char *)a3->end - (char *)begin) / 0x38 ) /*0x79c6b1*/
                  _invalid_parameter_noinfo((int)a3, a2, v12); /*0x79c6b3*/
                v11 = (char *)a3->begin + 0x38 * v12 + 0xC; /*0x79c6c4*/
              }
              v13 = *(float *)&a3[1].capacityEnd + v221; /*0x79c6d0*/
              qmemcpy(&v261, v11, sizeof(v261)); /*0x79c6de*/
              v108 = v13; /*0x79c6e0*/
              OB_stRotTransform_RotateXDegrees_010201A0(&v261, v108); /*0x79c6f3*/
              v109 = v261.m[0] * 0.0 + v261.m[3] + v261.m[6] * 0.0; /*0x79c722*/
              v139 = v261.m[1] * 0.0 + v261.m[4] + v261.m[7] * 0.0; /*0x79c741*/
              v195 = 0.0 * v261.m[8] + v261.m[2] * 0.0 + v261.m[5]; /*0x79c760*/
              tangent = v109; /*0x79c768*/
              v207 = v139; /*0x79c770*/
              v208 = v195; /*0x79c778*/
              OB_CBranch_childVectorPush_010201A0(&v209.allocatorState, (int *)&tangent); /*0x79c77c*/
              v14 = v198; /*0x79c783*/
              v201 = 0.0; /*0x79c789*/
              v15 = a3->begin; /*0x79c78d*/
              v200 = 0.0; /*0x79c790*/
              normal = 0.0; /*0x79c794*/
              if ( *(float *)&v198 == 0.0 ) /*0x79c798*/
              {
                if ( !v15 || !(((char *)a3->end - (char *)v15) / 0x38) ) /*0x79c7b8*/
                  _invalid_parameter_noinfo((int)a3, (int)&result, 0); /*0x79c7bc*/
                v16 = (float *)a3->begin; /*0x79c7c1*/
                v110 = v16; /*0x79c7c6*/
                if ( !v16 || (unsigned int)(((char *)a3->end - (char *)v16) / 0x38) <= 1 ) /*0x79c7e7*/
                  _invalid_parameter_noinfo((int)a3, (int)&result, 0); /*0x79c7e9*/
                v17 = (float *)a3->begin; /*0x79c7ee*/
                v18 = v110; /*0x79c7f1*/
                v111 = v17[0xE] - *v110; /*0x79c7fa*/
                v140 = v17[0xF] - v18[1]; /*0x79c804*/
                v195 = v17[0x10] - v18[2]; /*0x79c80e*/
                v234 = v111; /*0x79c816*/
                v19 = v111; /*0x79c81d*/
                v235 = v140; /*0x79c828*/
                v20 = v140; /*0x79c82f*/
                v236 = v195; /*0x79c83a*/
                v21 = v195; /*0x79c841*/
              }
              else
              {
                if ( !v15 || !(((char *)a3->end - (char *)v15) / 0x38) ) /*0x79c867*/
                  _invalid_parameter_noinfo((int)a3, (int)&result, v198); /*0x79c86b*/
                v22 = (float *)a3->begin; /*0x79c870*/
                v112 = v22; /*0x79c875*/
                if ( !v22 || v14 >= ((char *)a3->end - (char *)v22) / 0x38 ) /*0x79c895*/
                  _invalid_parameter_noinfo((int)a3, (int)&result, v14); /*0x79c897*/
                v17 = (float *)a3->begin; /*0x79c89c*/
                v23 = &v17[0xE * v14]; /*0x79c8ab*/
                v24 = v112; /*0x79c8ae*/
                v113 = *v23 - *v112; /*0x79c8b4*/
                v141 = v23[1] - v24[1]; /*0x79c8be*/
                v195 = v23[2] - v24[2]; /*0x79c8c8*/
                v247 = v113; /*0x79c8d0*/
                v19 = v113; /*0x79c8d7*/
                v248 = v141; /*0x79c8e2*/
                v20 = v141; /*0x79c8e9*/
                v249 = v195; /*0x79c8f4*/
                v21 = v195; /*0x79c8fb*/
              }
              v114 = v19 * v19 + v20 * v20 + v21 * v21; /*0x79c92a*/
              v115 = sqrt(v114); /*0x79c937*/
              v116 = 1.0 / v115; /*0x79c945*/
              normal = v116 * v19; /*0x79c953*/
              v200 = v116 * v20; /*0x79c95d*/
              v201 = v116 * v21; /*0x79c965*/
              v216 = 0.0; /*0x79c96b*/
              v215 = 0.0; /*0x79c972*/
              coord = 0.0; /*0x79c979*/
              v213 = 0.0; /*0x79c980*/
              v212 = 0.0; /*0x79c987*/
              v211 = 0.0; /*0x79c98b*/
              if ( v14 == OB_stVector_SFrondVertex_Size_010201A0(a3) - 1 && OB_stVector_SFrondVertex_Size_010201A0(a3) ) /*0x79c9a1*/
              {
                v25 = v209.begin; /*0x79c9ae*/
                v26 = v14 - 1; /*0x79c9b4*/
                if ( !v209.begin || v26 >= (unsigned int)(((char *)v209.end - (char *)v209.begin) / 0xC) ) /*0x79c9d1*/
                {
                  _invalid_parameter_noinfo((int)a3, v26, v14); /*0x79c9d3*/
                  v25 = v209.begin; /*0x79c9d8*/
                }
                v27 = (float *)&v25[3 * v26]; /*0x79c9e6*/
                v28 = *(float *)&a3[1].begin; /*0x79c9f3*/
                v117 = *v27 * v28; /*0x79c9f5*/
                v142 = v27[1] * v28; /*0x79c9fe*/
                v29 = v28 * v27[2]; /*0x79ca02*/
                v30 = a3->begin; /*0x79ca05*/
                v195 = v29; /*0x79ca0a*/
                if ( !v30 || (v26 = (char *)a3->end - (char *)v30, v14 >= v26 / 0x38) ) /*0x79ca2a*/
                {
                  _invalid_parameter_noinfo((int)a3, v26, v14); /*0x79ca2c*/
                  v25 = v209.begin; /*0x79ca31*/
                }
                v31 = (float *)a3->begin; /*0x79ca35*/
                a2 = 0x38 * v14; /*0x79ca49*/
                v32 = v117 + v31[0xE * v14]; /*0x79ca4b*/
                v33 = &v31[0xE * v14]; /*0x79ca4e*/
                v118 = v32; /*0x79ca52*/
                v143 = v33[1] + v142; /*0x79ca5d*/
                v195 = v33[2] + v195; /*0x79ca68*/
                v228 = v118; /*0x79ca70*/
                coord = v118; /*0x79ca82*/
                v229 = v143; /*0x79ca89*/
                v215 = v143; /*0x79ca9b*/
                v230 = v195; /*0x79caa2*/
                v216 = v195; /*0x79cab0*/
                if ( !v25 || v14 - 1 >= ((char *)v209.end - (char *)v25) / 0xC ) /*0x79cad6*/
                {
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79cad8*/
                  v25 = v209.begin; /*0x79cadd*/
                }
                v34 = (float *)&v25[3 * v14 - 3]; /*0x79caf1*/
                v35 = *(float *)&a3[1].begin; /*0x79cafc*/
                v119 = *v34 * v35; /*0x79cafe*/
                v144 = v34[1] * v35; /*0x79cb07*/
                v36 = v35 * v34[2]; /*0x79cb0b*/
                v37 = a3->begin; /*0x79cb0e*/
                v195 = v36; /*0x79cb13*/
                if ( !v37 || v14 >= ((char *)a3->end - (char *)v37) / 0x38 ) /*0x79cb33*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79cb35*/
                v38 = (float *)a3->begin; /*0x79cb3a*/
                v39 = v38[0xE * v14]; /*0x79cb3d*/
                v40 = &v38[a2 / 4u]; /*0x79cb40*/
                v120 = v39 - v119; /*0x79cb46*/
                v145 = v40[1] - v144; /*0x79cb51*/
                v195 = v40[2] - v195; /*0x79cb5c*/
                v250 = v120; /*0x79cb64*/
                v211 = v120; /*0x79cb76*/
                v251 = v145; /*0x79cb7a*/
                v212 = v145; /*0x79cb8c*/
                v252 = v195; /*0x79cb90*/
                v213 = v195; /*0x79cb9e*/
              }
              else if ( v14 && v14 < OB_stVector_SFrondVertex_Size_010201A0(a3) - 1 ) /*0x79cbbe*/
              {
                v41 = v14 - 1; /*0x79cbca*/
                if ( !v209.begin || v41 >= ((char *)v209.end - (char *)v209.begin) / 0xC ) /*0x79cbe7*/
                  _invalid_parameter_noinfo((int)a3, v41, v14); /*0x79cbe9*/
                v42 = *(float *)&a3[1].begin; /*0x79cbfc*/
                v43 = (float *)&v209.begin[3 * v41]; /*0x79cc00*/
                v121 = v42 * *v43; /*0x79cc07*/
                v146 = v43[1] * v42; /*0x79cc10*/
                v44 = v42 * v43[2]; /*0x79cc14*/
                v45 = a3->begin; /*0x79cc17*/
                v195 = v44; /*0x79cc1c*/
                if ( !v45 || v14 >= ((char *)a3->end - (char *)v45) / 0x38 ) /*0x79cc3c*/
                  _invalid_parameter_noinfo((int)a3, v41, v14); /*0x79cc3e*/
                v46 = (float *)a3->begin; /*0x79cc43*/
                a2 = 0x38 * v14; /*0x79cc57*/
                value = v121 + v46[0xE * v14]; /*0x79cc5e*/
                *(float *)&v198 = v46[0xE * v14 + 1] + v146; /*0x79cc6a*/
                v169 = v46[0xE * v14 + 2] + v195; /*0x79cc76*/
                v47 = *(float *)&a3[1].begin; /*0x79cc81*/
                v122 = v47 * tangent; /*0x79cc8b*/
                v147 = v47 * v207; /*0x79cc95*/
                v195 = v47 * v208; /*0x79cc9d*/
                if ( !v46 || v14 >= ((char *)a3->end - (char *)v46) / 0x38 ) /*0x79ccbd*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79ccbf*/
                v48 = (float *)a3->begin; /*0x79ccc4*/
                v49 = v48[0xE * v14]; /*0x79ccc7*/
                v50 = &v48[a2 / 4u]; /*0x79ccca*/
                v123 = v49 + v122; /*0x79ccd0*/
                v148 = v50[1] + v147; /*0x79ccdb*/
                v195 = v50[2] + v195; /*0x79cce6*/
                v124 = v123 + value; /*0x79ccf2*/
                v149 = v148 + *(float *)&v198; /*0x79ccfe*/
                v170 = v195 + v169; /*0x79cd0a*/
                v51 = dbl_A2FAA0; /*0x79cd1a*/
                v125 = v124 * v51; /*0x79cd1c*/
                v150 = v149 * v51; /*0x79cd26*/
                v171 = v170 * v51; /*0x79cd30*/
                v244 = v125; /*0x79cd38*/
                coord = v125; /*0x79cd4a*/
                v245 = v150; /*0x79cd51*/
                v215 = v150; /*0x79cd63*/
                v246 = v171; /*0x79cd6a*/
                v216 = v171; /*0x79cd78*/
                v52 = v209.begin; /*0x79cd7f*/
                if ( !v209.begin || v14 - 1 >= ((char *)v209.end - (char *)v209.begin) / 0xC ) /*0x79cda4*/
                {
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79cda8*/
                  v51 = dbl_A2FAA0; /*0x79cdad*/
                  v52 = v209.begin; /*0x79cdb3*/
                }
                v53 = (float *)&v52[3 * v14 - 3]; /*0x79cdc7*/
                v54 = *(float *)&a3[1].begin; /*0x79cdd2*/
                v172 = *v53 * v54; /*0x79cdd4*/
                v126 = v53[1] * v54; /*0x79cddd*/
                v55 = v54 * v53[2]; /*0x79cde1*/
                v56 = a3->begin; /*0x79cde4*/
                if ( !v56 || v14 >= ((char *)a3->end - (char *)v56) / 0x38 ) /*0x79ce09*/
                {
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79ce0d*/
                  v51 = dbl_A2FAA0; /*0x79ce12*/
                }
                v57 = (char *)a3->begin; /*0x79ce18*/
                v195 = *(float *)&v57[a2] - v172; /*0x79ce24*/
                value = *(float *)&v57[a2 + 4] - v126; /*0x79ce30*/
                v151 = v55; /*0x79cde9*/
                *(float *)&v198 = *(float *)&v57[a2 + 8] - v151; /*0x79ce3c*/
                v58 = *(float *)&a3[1].begin; /*0x79ce47*/
                v173 = v58 * tangent; /*0x79ce51*/
                v127 = v58 * v207; /*0x79ce5b*/
                v152 = v58 * v208; /*0x79ce63*/
                if ( !v57 || v14 >= ((char *)a3->end - (char *)v57) / 0x38 ) /*0x79ce83*/
                {
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79ce87*/
                  v51 = dbl_A2FAA0; /*0x79ce8c*/
                }
                v59 = (float *)a3->begin; /*0x79ce92*/
                v60 = v59[0xE * v14]; /*0x79ce95*/
                v61 = &v59[a2 / 4u]; /*0x79ce98*/
                v174 = v60 - v173; /*0x79ce9e*/
                v128 = v61[1] - v127; /*0x79cea9*/
                v153 = v61[2] - v152; /*0x79ceb4*/
                v175 = v174 + v195; /*0x79cec0*/
                v129 = v128 + value; /*0x79cecc*/
                v154 = v153 + *(float *)&v198; /*0x79ced8*/
                v176 = v175 * v51; /*0x79cee2*/
                v130 = v129 * v51; /*0x79ceec*/
                v155 = v51 * v154; /*0x79cef4*/
                v256 = v176; /*0x79cefc*/
                v211 = v176; /*0x79cf0e*/
                v257 = v130; /*0x79cf12*/
                v212 = v130; /*0x79cf24*/
                v258 = v155; /*0x79cf28*/
                v213 = v155; /*0x79cf36*/
              }
              else
              {
                v62 = *(float *)&a3[1].begin; /*0x79cf4b*/
                v177 = v62 * tangent; /*0x79cf55*/
                v131 = v62 * v207; /*0x79cf5f*/
                v156 = v62 * v208; /*0x79cf67*/
                if ( !v17 || v14 >= ((char *)a3->end - (char *)v17) / 0x38 ) /*0x79cf87*/
                  _invalid_parameter_noinfo((int)a3, (int)v17, v14); /*0x79cf89*/
                v63 = (float *)a3->begin; /*0x79cf8e*/
                a2 = 0x38 * v14; /*0x79cfa2*/
                v178 = v177 + v63[0xE * v14]; /*0x79cfa9*/
                v132 = v63[0xE * v14 + 1] + v131; /*0x79cfb5*/
                v157 = v63[0xE * v14 + 2] + v156; /*0x79cfc1*/
                v253 = v178; /*0x79cfc9*/
                coord = v178; /*0x79cfdb*/
                v254 = v132; /*0x79cfe2*/
                v215 = v132; /*0x79cff4*/
                v255 = v157; /*0x79cffb*/
                v64 = *(float *)&a3[1].begin; /*0x79d009*/
                v216 = v157; /*0x79d00c*/
                v179 = v64; /*0x79d013*/
                v65 = v179; /*0x79d017*/
                v180 = v179 * tangent; /*0x79d021*/
                v133 = v65 * v207; /*0x79d02b*/
                v158 = v65 * v208; /*0x79d033*/
                if ( !v63 || v14 >= ((char *)a3->end - (char *)v63) / 0x38 ) /*0x79d053*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79d055*/
                v66 = (float *)a3->begin; /*0x79d05a*/
                v67 = v66[0xE * v14]; /*0x79d05d*/
                v68 = &v66[a2 / 4u]; /*0x79d060*/
                v181 = v67 - v180; /*0x79d066*/
                v134 = v68[1] - v133; /*0x79d071*/
                v159 = v68[2] - v158; /*0x79d07c*/
                v231 = v181; /*0x79d084*/
                v211 = v181; /*0x79d096*/
                v232 = v134; /*0x79d09a*/
                v212 = v134; /*0x79d0ac*/
                v233 = v159; /*0x79d0b0*/
                v213 = v159; /*0x79d0be*/
              }
              Src = (void *)v14; /*0x79d0c9*/
              v69 = (double)(int)v14; /*0x79d0cd*/
              if ( (int)v14 < 0 ) /*0x79d0d1*/
                v69 = v69 + flt_A2FC78; /*0x79d0d3*/
              v182 = v69; /*0x79d0db*/
              *(float *)&Src = COERCE_FLOAT(OB_stVector_SFrondVertex_Size_010201A0(a3)); /*0x79d0e6*/
              v70 = (double)(int)Src; /*0x79d0ea*/
              if ( (int)Src < 0 ) /*0x79d0ee*/
                v70 = v70 + flt_A2FC78; /*0x79d0f0*/
              v183 = v182 / (v70 - dbl_A2F928); /*0x79d10e*/
              OB_CIndexedGeometry_AddVertexCoord_010201A0(*v196, &coord); /*0x79d112*/
              end_low = LOBYTE(a3[1].end); /*0x79d119*/
              diffuseST[0] = 1.0; /*0x79d11e*/
              v72 = *v196; /*0x79d12d*/
              diffuseST[1] = v183; /*0x79d12f*/
              OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(v72, diffuseST, end_low); /*0x79d13f*/
              v227 = 1.0; /*0x79d14a*/
              v73 = *v196; /*0x79d151*/
              v226 = 1.0; /*0x79d153*/
              v225 = 1.0; /*0x79d161*/
              rgba = 1.0; /*0x79d169*/
              OB_CIndexedGeometry_AddVertexColor_010201A0(v73, &rgba); /*0x79d170*/
              OB_CIndexedGeometry_AddVertexNormal_010201A0(*v196, &normal); /*0x79d180*/
              OB_CIndexedGeometry_AddVertexTangent_010201A0(*v196, &tangent); /*0x79d190*/
              v160 = v201 * v207 - v200 * v208; /*0x79d1b5*/
              v184 = v208 * normal - v201 * tangent; /*0x79d1cf*/
              v135 = tangent * v200 - normal * v207; /*0x79d1d9*/
              v237 = v160; /*0x79d1e1*/
              binormal = v160; /*0x79d1f3*/
              v238 = v184; /*0x79d1f7*/
              v204 = v184; /*0x79d209*/
              v239 = v135; /*0x79d20d*/
              v205 = v135; /*0x79d21d*/
              v74 = v184 * v184; /*0x79d221*/
              v75 = v160 * v160; /*0x79d225*/
              v76 = v135 * v135; /*0x79d227*/
              *(float *)&v185 = v75 + v74 + v76; /*0x79d22f*/
              if ( COERCE_FLOAT((v185 >> 1) + 0x1FC00000) >= dbl_A2FC80 ) /*0x79d252*/
              {
                v186 = v76 + v74 + v75; /*0x79d27a*/
                v187 = sqrt(v186); /*0x79d287*/
                v188 = 1.0 / v187; /*0x79d293*/
                binormal = v188 * v160; /*0x79d2a1*/
                v204 = v204 * v188; /*0x79d2ab*/
                v205 = v188 * v205; /*0x79d2b3*/
              }
              else
              {
                binormal = normal; /*0x79d266*/
                v204 = v200; /*0x79d26a*/
                v205 = v201; /*0x79d26e*/
              }
              OB_CIndexedGeometry_AddVertexBinormal_010201A0(*v196, &binormal); /*0x79d2c2*/
              if ( (*v196)->vertexWeighting ) /*0x79d2cd*/
              {
                v77 = a3->begin; /*0x79d2d3*/
                if ( !v77 || v14 >= ((char *)a3->end - (char *)v77) / 0x38 ) /*0x79d2f4*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79d2f6*/
                v78 = a3->begin; /*0x79d2fb*/
                v161 = v78; /*0x79d300*/
                if ( !v78 || v14 >= ((char *)a3->end - (char *)v78) / 0x38 ) /*0x79d320*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79d322*/
                OB_CIndexedGeometry_AddVertexWind_010201A0( /*0x79d342*/
                  *v196,
                  *(float *)((char *)a3->begin + a2 + 0x30),
                  v161[a2 + 0x34]);
              }
              v79 = v196; /*0x79d347*/
              ++(*v196)->currentVertexWriteCounter; /*0x79d34d*/
              OB_CIndexedGeometry_AddVertexCoord_010201A0(*v79, &v211); /*0x79d359*/
              v80 = LOBYTE(a3[1].end); /*0x79d360*/
              diffuseST[0] = 0.0; /*0x79d365*/
              OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(*v196, diffuseST, v80); /*0x79d37b*/
              v227 = 1.0; /*0x79d386*/
              v81 = *v196; /*0x79d38d*/
              v226 = 1.0; /*0x79d38f*/
              v225 = 1.0; /*0x79d39d*/
              rgba = 1.0; /*0x79d3a5*/
              OB_CIndexedGeometry_AddVertexColor_010201A0(v81, &rgba); /*0x79d3ac*/
              OB_CIndexedGeometry_AddVertexNormal_010201A0(*v196, &normal); /*0x79d3bc*/
              OB_CIndexedGeometry_AddVertexTangent_010201A0(*v196, &tangent); /*0x79d3cc*/
              v162 = v201 * v207 - v200 * v208; /*0x79d3f1*/
              v189 = v208 * normal - v201 * tangent; /*0x79d40b*/
              v136 = tangent * v200 - normal * v207; /*0x79d415*/
              v241 = v162; /*0x79d41d*/
              binormal = v162; /*0x79d42f*/
              v242 = v189; /*0x79d433*/
              v204 = v189; /*0x79d445*/
              v243 = v136; /*0x79d449*/
              v205 = v136; /*0x79d459*/
              v82 = v189 * v189; /*0x79d45d*/
              v83 = v162 * v162; /*0x79d461*/
              v84 = v136 * v136; /*0x79d463*/
              *(float *)&v190 = v83 + v82 + v84; /*0x79d46b*/
              if ( COERCE_FLOAT((v190 >> 1) + 0x1FC00000) >= dbl_A2FC80 ) /*0x79d48d*/
              {
                v191 = v84 + v82 + v83; /*0x79d4b5*/
                v192 = sqrt(v191); /*0x79d4c2*/
                v193 = 1.0 / v192; /*0x79d4ce*/
                binormal = v193 * v162; /*0x79d4dc*/
                v204 = v204 * v193; /*0x79d4e6*/
                v205 = v193 * v205; /*0x79d4ee*/
              }
              else
              {
                binormal = normal; /*0x79d4a1*/
                v204 = v200; /*0x79d4a5*/
                v205 = v201; /*0x79d4a9*/
              }
              OB_CIndexedGeometry_AddVertexBinormal_010201A0(*v196, &binormal); /*0x79d4fd*/
              if ( (*v196)->vertexWeighting ) /*0x79d508*/
              {
                v85 = a3->begin; /*0x79d50e*/
                if ( !v85 || v14 >= ((char *)a3->end - (char *)v85) / 0x38 ) /*0x79d52f*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79d531*/
                v86 = a3->begin; /*0x79d536*/
                v163 = v86; /*0x79d53b*/
                if ( !v86 || v14 >= ((char *)a3->end - (char *)v86) / 0x38 ) /*0x79d55b*/
                  _invalid_parameter_noinfo((int)a3, a2, v14); /*0x79d55d*/
                OB_CIndexedGeometry_AddVertexWind_010201A0( /*0x79d57d*/
                  *v196,
                  *(float *)((char *)a3->begin + a2 + 0x30),
                  v163[a2 + 0x34]);
              }
              ++(*v196)->currentVertexWriteCounter; /*0x79d588*/
              v198 = v14 + 1; /*0x79d592*/
            }
            while ( v14 + 1 < OB_stVector_SFrondVertex_Size_010201A0(a3) ); /*0x79d59d*/
          }
          value = 0.0; /*0x79d5a7*/
          memset(&v210.begin, 0, 0xC); /*0x79d5ab*/
          v195 = 0.0; /*0x79d5af*/
          memset(&v220.begin, 0, 0xC); /*0x79d5bb*/
          LOBYTE(v264) = 2; /*0x79d5d2*/
          v87 = OB_stVector_SFrondVertex_Size_010201A0(a3) - 1; /*0x79d5df*/
          *(float *)&v198 = 0.0; /*0x79d5e2*/
          v88 = (int)v196; /*0x79d5e8*/
          v137 = v87; /*0x79d5ec*/
          if ( v87 ) /*0x79d5f0*/
            break; /*0x79d5f0*/
LABEL_120:
          *(_WORD *)(*(_DWORD *)v88 + 0x22) = currentVertexWriteCounter + 2; /*0x79d82b*/
          if ( v87 > 1 ) /*0x79d83e*/
          {
            v96 = 0; /*0x79d844*/
            v168 = 0; /*0x79d849*/
            v198 = 2; /*0x79d84d*/
            v138 = v87 - 1; /*0x79d855*/
            do /*0x79d951*/
            {
              v97 = *OB_CIndexedGeometry_GetVertexTexCoord0_010201A0( /*0x79d86f*/
                       *(OB_CIndexedGeometry_010201A0 **)v88,
                       (unsigned int)a3[2].end + v198);
              v98 = v210.begin; /*0x79d871*/
              v259[0] = v97; /*0x79d875*/
              if ( !v210.begin || v168 >= v210.end - v210.begin ) /*0x79d88d*/
              {
                _invalid_parameter_noinfo((int)a3, v96 * 4, v88); /*0x79d88f*/
                v98 = v210.begin; /*0x79d894*/
              }
              angleDegrees = LOBYTE(a3[1].end); /*0x79d8ab*/
              v99 = *(OB_CIndexedGeometry_010201A0 **)v88; /*0x79d8ac*/
              v259[1] = v98[v96] / value * dbl_A3F460; /*0x79d8b5*/
              OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(v99, v259, angleDegrees); /*0x79d8bc*/
              ++*(_WORD *)(*(_DWORD *)v88 + 0x22); /*0x79d8c3*/
              v100 = *OB_CIndexedGeometry_GetVertexTexCoord0_010201A0( /*0x79d8db*/
                        *(OB_CIndexedGeometry_010201A0 **)v88,
                        (unsigned int)a3[2].end + v198 + 1);
              v101 = v220.begin; /*0x79d8dd*/
              v260[0] = v100; /*0x79d8e4*/
              if ( !v220.begin || v168 >= v220.end - v220.begin ) /*0x79d8ff*/
              {
                _invalid_parameter_noinfo((int)a3, v96 * 4, v88); /*0x79d901*/
                v101 = v220.begin; /*0x79d906*/
              }
              angleDegreesa = LOBYTE(a3[1].end); /*0x79d920*/
              v102 = *(OB_CIndexedGeometry_010201A0 **)v88; /*0x79d922*/
              v260[1] = v101[v96] / v195 * dbl_A3F460; /*0x79d92a*/
              OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(v102, v260, angleDegreesa); /*0x79d931*/
              v103 = *(OB_CIndexedGeometry_010201A0 **)v88; /*0x79d936*/
              v198 += 2; /*0x79d938*/
              ++v103->currentVertexWriteCounter; /*0x79d942*/
              ++v168; /*0x79d946*/
              ++v96; /*0x79d94a*/
              --v138; /*0x79d94d*/
            }
            while ( v138 ); /*0x79d951*/
          }
          ++*(_WORD *)(*(_DWORD *)v88 + 0x22); /*0x79d95e*/
          ++*(_WORD *)(*(_DWORD *)v88 + 0x22); /*0x79d964*/
          a2 = 0; /*0x79d96f*/
          if ( v220.begin ) /*0x79d973*/
            FormHeapFree((unsigned int)v220.begin); /*0x79d976*/
          memset(&v220.begin, 0, 0xC); /*0x79d984*/
          if ( v210.begin ) /*0x79d999*/
            FormHeapFree((unsigned int)v210.begin); /*0x79d99c*/
          memset(&v210.begin, 0, 0xC); /*0x79d9aa*/
          v264 = 0xFFFFFFFF; /*0x79d9b6*/
          if ( v209.begin ) /*0x79d9c1*/
            FormHeapFree((unsigned int)v209.begin); /*0x79d9c4*/
          v3 = (OB_CIndexedGeometry_010201A0 *)(v217 + 1); /*0x79d9d3*/
          v9 = (unsigned int)(v217 + 1) < *(_DWORD *)(v88 + 0x2C); /*0x79d9d6*/
          memset(&v209.begin, 0, 0xC); /*0x79d9d9*/
          ++v217; /*0x79d9e5*/
          if ( !v9 ) /*0x79d9ec*/
            return v3; /*0x79d9ec*/
        }
        while ( 1 ) /*0x79d5fd*/
        {
          v89 = 2 * v198; /*0x79d5fd*/
          VertexCoord_010201A0 = OB_CIndexedGeometry_GetVertexCoord_010201A0( /*0x79d60e*/
                                   *(OB_CIndexedGeometry_010201A0 **)v88,
                                   (unsigned int)a3[2].end + 2 * v198);
          v90 = OB_CIndexedGeometry_GetVertexCoord_010201A0( /*0x79d617*/
                  *(OB_CIndexedGeometry_010201A0 **)v88,
                  (unsigned int)a3[2].end + v89 + 2);
          v91 = VertexCoord_010201A0; /*0x79d61c*/
          v165 = *VertexCoord_010201A0; /*0x79d622*/
          v218 = v91[1]; /*0x79d629*/
          Src = *((void **)v91 + 2); /*0x79d633*/
          v194 = *v90; /*0x79d639*/
          v219 = v90[1]; /*0x79d640*/
          *(float *)&v221 = v90[2]; /*0x79d64e*/
          *(float *)&Src = (v194 - v165) * (v194 - v165) /*0x79d686*/
                         + (v219 - v218) * (v219 - v218)
                         + (*(float *)&v221 - *(float *)&Src) * (*(float *)&v221 - *(float *)&Src);
          Src = (void *)(((int)Src >> 1) + 0x1FC00000); /*0x79d698*/
          end = v210.end; /*0x79d6a0*/
          value = *(float *)&Src + value; /*0x79d6a8*/
          if ( !v210.begin ) /*0x79d6ac*/
            goto LABEL_109; /*0x79d6ac*/
          if ( v210.end - v210.begin >= (unsigned int)(v210.capacity - v210.begin) ) /*0x79d6be*/
          {
            end = v210.end; /*0x79d6d3*/
LABEL_109:
            Src = end; /*0x79d6d7*/
            if ( v210.begin > end ) /*0x79d6dd*/
              _invalid_parameter_noinfo((int)a3, v89, v88); /*0x79d6df*/
            _FFFFFFFC.current = (float *)Src; /*0x79d6ed*/
            _FFFFFFFC.owner = &v210; /*0x79d6f2*/
            OB_stVectorFloat_InsertOne_010201A0(&v210, &result, _FFFFFFFC, &value);// Grow a frond blade float work vector with one computed accumulated side length; the surrounding Oblivion loop later normalizes diffuse T coordinates from these distances. /*0x79d6fd*/
            goto LABEL_112; /*0x79d6fd*/
          }
          v93 = v210.end; /*0x79d6c0*/
          *v210.end = value; /*0x79d6c8*/
          v210.end = v93 + 1; /*0x79d6cd*/
LABEL_112:
          v166 = OB_CIndexedGeometry_GetVertexCoord_010201A0( /*0x79d702*/
                   *(OB_CIndexedGeometry_010201A0 **)v88,
                   (unsigned int)a3[2].end + v89 + 1);
          v94 = OB_CIndexedGeometry_GetVertexCoord_010201A0( /*0x79d71f*/
                  *(OB_CIndexedGeometry_010201A0 **)v88,
                  (unsigned int)a3[2].end + v89 + 3);
          *(float *)&v221 = *v166; /*0x79d731*/
          v95 = v220.end; /*0x79d738*/
          v219 = v166[1]; /*0x79d742*/
          v167 = v166[2]; /*0x79d74c*/
          Src = *(void **)v94; /*0x79d752*/
          v218 = v94[1]; /*0x79d759*/
          *(float *)&Src = (*(float *)&Src - *(float *)&v221) * (*(float *)&Src - *(float *)&v221) /*0x79d798*/
                         + (v218 - v219) * (v218 - v219)
                         + (v94[2] - v167) * (v94[2] - v167);
          Src = (void *)(((int)Src >> 1) + 0x1FC00000); /*0x79d7aa*/
          v195 = *(float *)&Src + v195; /*0x79d7b6*/
          if ( v220.begin && v220.end - v220.begin < (unsigned int)(v220.capacity - v220.begin) ) /*0x79d7d1*/
          {
            *v220.end = v195; /*0x79d7dc*/
            v220.end = v95 + 1; /*0x79d7de*/
          }
          else
          {
            if ( v220.begin > v220.end ) /*0x79d7e9*/
              _invalid_parameter_noinfo((int)a3, (int)v220.end, v88); /*0x79d7eb*/
            _FFFFFFFCa.current = v95; /*0x79d7f5*/
            _FFFFFFFCa.owner = &v220; /*0x79d7fd*/
            OB_stVectorFloat_InsertOne_010201A0(&v220, &v263, _FFFFFFFCa, &v195);// Grow the paired frond blade float work vector with the opposite side's accumulated length for diffuse T-coordinate correction. /*0x79d80d*/
          }
          if ( ++v198 >= v137 ) /*0x79d821*/
          {
            v87 = v137; /*0x79d827*/
            goto LABEL_120; /*0x79d827*/
          }
        }
      }
    }
  }
  return v3; /*0x79d9f2*/
}
