LONG sub_7B8990()
{
  NiSourceTexture *v0; // eax
  NiPixelData *v1; // eax
  double v2; // st7
  double v3; // st6
  int v4; // ecx
  _BYTE *v5; // ebx
  double v6; // rt0
  int v7; // edi
  _BYTE *v8; // esi
  double v9; // rt1
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // rt2
  double v21; // st6
  NiSourceTexture *v22; // eax
  NiPixelData *v23; // eax
  double v24; // st7
  int v25; // ecx
  _BYTE *v26; // ebx
  int v27; // edi
  _BYTE *v28; // esi
  double v29; // st7
  double v30; // st7
  double v31; // st6
  double v32; // st6
  double v33; // st5
  double v34; // rt2
  NiSourceTexture *v35; // eax
  NiPixelData *v36; // eax
  double v37; // st7
  double v38; // st6
  int v39; // ecx
  _BYTE *v40; // ebx
  double v41; // rtt
  int v42; // edi
  _BYTE *v43; // esi
  double v44; // rt0
  double v45; // st6
  double v46; // st7
  double v47; // st6
  double v48; // st7
  double v49; // st6
  double v50; // st4
  double v51; // st5
  double v52; // st6
  double v53; // st4
  double v54; // rt1
  double v55; // st6
  NiSourceTexture *v56; // eax
  NiPixelData *v57; // eax
  double v58; // st7
  int v59; // ecx
  _BYTE *v60; // ebx
  int v61; // edi
  _BYTE *v62; // esi
  double v63; // st7
  double v64; // st5
  double v65; // rt1
  NiSourceTexture *v66; // eax
  NiPixelData *v67; // eax
  double v68; // st7
  double v69; // st6
  int v70; // ecx
  _BYTE *v71; // ebx
  double v72; // rt2
  int v73; // edi
  _BYTE *v74; // esi
  double v75; // rtt
  double v76; // st6
  double v77; // st7
  double v78; // st6
  double v79; // rt1
  double v80; // st4
  double v81; // rt2
  double v82; // st6
  NiSourceTexture *v83; // eax
  NiPixelData *v84; // edi
  double v85; // st7
  int v86; // eax
  _BYTE *v87; // esi
  int v88; // ebx
  double v89; // st7
  double v90; // st7
  double v91; // st6
  double v92; // st5
  double v93; // rt1
  NiSourceTexture *v94; // esi
  float v95; // eax
  float v96; // edi
  NiSourceTexture *v97; // eax
  NiPixelData *v98; // eax
  int v99; // ecx
  _BYTE *v100; // ecx
  int v101; // esi
  int v102; // edx
  NiSourceTexture *TexturePixelData; // esi
  float v104; // eax
  float v105; // edi
  NiSourceTexture *v106; // eax
  NiPixelData *v107; // eax
  int v108; // ecx
  _BYTE *v109; // ecx
  int v110; // esi
  int v111; // edx
  NiSourceTexture *v112; // esi
  int v113; // eax
  void (__thiscall ***v114)(_DWORD, int); // edi
  NiSourceTexture *v115; // eax
  NiPixelData *v116; // eax
  int v117; // ecx
  _BYTE *v118; // ecx
  int v119; // esi
  int v120; // edx
  NiSourceTexture *v121; // esi
  float v122; // eax
  float v123; // edi
  NiSourceTexture **v124; // edi
  int v125; // eax
  bool v126; // zf
  void (__thiscall ***v127)(_DWORD, int); // esi
  NiSourceTexture *v128; // eax
  NiSourceTexture *v129; // esi
  NiSourceTexture **v130; // edi
  float v131; // eax
  float v132; // esi
  NiSourceTexture *v133; // eax
  NiSourceTexture *v134; // esi
  NiSourceTexture *v135; // eax
  NiPixelData *v136; // edi
  int v137; // ecx
  _BYTE *v138; // ecx
  int v139; // esi
  int v140; // edx
  _BYTE *v141; // ecx
  int v142; // eax
  int v143; // edx
  NiSourceTexture *v144; // esi
  int v145; // eax
  void (__thiscall ***v146)(_DWORD, int); // edi
  NiSourceTexture *v147; // eax
  NiPixelData *v148; // eax
  int v149; // ecx
  _BYTE *v150; // ecx
  int v151; // esi
  int v152; // edx
  NiSourceTexture *v153; // esi
  int v154; // eax
  void (__thiscall ***v155)(_DWORD, int); // edi
  NiSourceTexture *v156; // esi
  float v157; // eax
  float v158; // edi
  NiSourceTexture *v159; // esi
  int v160; // eax
  void (__thiscall ***v161)(_DWORD, int); // edi
  NiSourceTexture *TextureByFilename; // esi
  int v163; // eax
  void (__thiscall ***v164)(_DWORD, int); // edi
  NiSourceTexture *v165; // esi
  int v166; // eax
  void (__thiscall ***v167)(_DWORD, int); // edi
  NiSourceTexture *v168; // esi
  float v169; // eax
  float v170; // edi
  NiSourceTexture *v171; // eax
  NiPixelData *v172; // ebx
  int v173; // eax
  int v174; // esi
  double v175; // st7
  int v176; // edi
  double v177; // st6
  double v178; // st5
  double v179; // st4
  double v180; // st3
  double v181; // st4
  double v182; // rt1
  double v183; // st4
  double v184; // st5
  double v185; // st7
  double v186; // rt2
  double v187; // st5
  double v188; // st7
  double v189; // st5
  double v190; // st6
  double v191; // st7
  double v192; // rt1
  double v193; // st5
  double v194; // st7
  char v195; // al
  NiSourceTexture *v196; // esi
  float v197; // eax
  float v198; // edi
  int v199; // esi
  NiScreenPolygon *v200; // edi
  LONG result; // eax
  float v202; // esi
  unsigned __int16 v203; // [esp+7Ch] [ebp-1CCh]
  float v204; // [esp+7Ch] [ebp-1CCh]
  float v205; // [esp+7Ch] [ebp-1CCh]
  float v206; // [esp+7Ch] [ebp-1CCh]
  float v207; // [esp+7Ch] [ebp-1CCh]
  int v208; // [esp+7Ch] [ebp-1CCh]
  float v209; // [esp+80h] [ebp-1C8h]
  float v210; // [esp+80h] [ebp-1C8h]
  float v211; // [esp+80h] [ebp-1C8h]
  float v212; // [esp+80h] [ebp-1C8h]
  float v213; // [esp+80h] [ebp-1C8h]
  float v214; // [esp+80h] [ebp-1C8h]
  int v215; // [esp+80h] [ebp-1C8h]
  int v216; // [esp+80h] [ebp-1C8h]
  float v217; // [esp+80h] [ebp-1C8h]
  float v218; // [esp+80h] [ebp-1C8h]
  float v219; // [esp+80h] [ebp-1C8h]
  float v220; // [esp+80h] [ebp-1C8h]
  float v221; // [esp+84h] [ebp-1C4h]
  float v222; // [esp+84h] [ebp-1C4h]
  float v223; // [esp+84h] [ebp-1C4h]
  float v224; // [esp+84h] [ebp-1C4h]
  float v225; // [esp+84h] [ebp-1C4h]
  float v226; // [esp+84h] [ebp-1C4h]
  float v227; // [esp+84h] [ebp-1C4h]
  _BYTE *v228; // [esp+84h] [ebp-1C4h]
  float v229; // [esp+88h] [ebp-1C0h]
  float v230; // [esp+88h] [ebp-1C0h]
  float v231; // [esp+88h] [ebp-1C0h]
  float v232; // [esp+88h] [ebp-1C0h]
  float v233; // [esp+88h] [ebp-1C0h]
  float v234; // [esp+88h] [ebp-1C0h]
  float v235; // [esp+88h] [ebp-1C0h]
  float v236; // [esp+88h] [ebp-1C0h]
  float v237; // [esp+88h] [ebp-1C0h]
  float v238; // [esp+88h] [ebp-1C0h]
  float v239; // [esp+88h] [ebp-1C0h]
  float v240; // [esp+88h] [ebp-1C0h]
  float v241; // [esp+88h] [ebp-1C0h]
  NiSourceTexture *outTexture; // [esp+8Ch] [ebp-1BCh] BYREF
  int v243; // [esp+90h] [ebp-1B8h]
  int v244; // [esp+94h] [ebp-1B4h]
  int v245; // [esp+98h] [ebp-1B0h]
  float v246; // [esp+9Ch] [ebp-1ACh]
  NiSourceTexture *v247; // [esp+A0h] [ebp-1A8h] BYREF
  float v248; // [esp+A4h] [ebp-1A4h]
  float v249; // [esp+A8h] [ebp-1A0h]
  float v250; // [esp+ACh] [ebp-19Ch]
  char v251[72]; // [esp+B0h] [ebp-198h] BYREF
  char Src[268]; // [esp+F8h] [ebp-150h] BYREF
  int v253; // [esp+244h] [ebp-4h]

  sub_70F010(v251, &unk_B265E0); /*0x7b89d9*/
  *(float *)&v0 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b89e0*/
  outTexture = v0; /*0x7b89e8*/
  v253 = 0; /*0x7b89f0*/
  if ( *(float *)&v0 == 0.0 ) /*0x7b89f7*/
    *(float *)&v1 = 0.0; /*0x7b8a15*/
  else
    *(float *)&v1 = COERCE_FLOAT(NiPixelData::NiPixelData((NiPixelData *)v0, 0x80u, 0x80u, (int)v251, 1u, 1)); /*0x7b8a0e*/
  v2 = 0.0; /*0x7b8a1a*/
  v3 = dbl_A4D910; /*0x7b8a1e*/
  v4 = *((_DWORD *)v1 + 0x14) + **((_DWORD **)v1 + 0x17); /*0x7b8a24*/
  v249 = *(float *)&v1; /*0x7b8a27*/
  v253 = 0xFFFFFFFF; /*0x7b8a2b*/
  v246 = 0.0; /*0x7b8a36*/
  v5 = (_BYTE *)(v4 + 1); /*0x7b8a3a*/
  while ( 1 ) /*0x7b8a43*/
  {
    v7 = 0; /*0x7b8a43*/
    v8 = v5; /*0x7b8a47*/
    v9 = v3; /*0x7b8a49*/
    v10 = v3 - v2; /*0x7b8a49*/
    v11 = v9; /*0x7b8a49*/
    v248 = v10; /*0x7b8a4b*/
    v12 = (float)0.0; /*0x7b8a55*/
    do /*0x7b8b91*/
    {
      v209 = v248; /*0x7b8a5d*/
      v229 = v11 - v12; /*0x7b8a63*/
      *(float *)&v243 = v229 * v229 + v248 * v248 + dbl_A37650; /*0x7b8a81*/
      *(float *)&v243 = sqrt(*(float *)&v243); /*0x7b8a8e*/
      v13 = *(float *)&v243; /*0x7b8a92*/
      v8[2] = 0; /*0x7b8a96*/
      *(float *)&v243 = 1.0 / v13; /*0x7b8aa2*/
      v14 = *(float *)&v243; /*0x7b8aa6*/
      v15 = dbl_A4D910; /*0x7b8aac*/
      *(float *)&v243 = *(float *)&v243 * v15; /*0x7b8aba*/
      v210 = v14 * v209; /*0x7b8ace*/
      v16 = v14 * v229; /*0x7b8ad8*/
      v17 = v15; /*0x7b8ad8*/
      v230 = v16; /*0x7b8ada*/
      v18 = *(float *)&v243; /*0x7b8ade*/
      v243 = v203 | 0xC00; /*0x7b8ae2*/
      v19 = dbl_A2FAA0; /*0x7b8ae8*/
      v20 = dbl_A3DDD8; /*0x7b8afc*/
      v8[1] = (int)((v18 + 1.0) * v19 * v20); /*0x7b8b06*/
      *v8 = (int)((v210 + 1.0) * v19 * v20); /*0x7b8b35*/
      ++v7; /*0x7b8b55*/
      v11 = v17; /*0x7b8b5e*/
      v243 = (int)((v230 + 1.0) * v19 * v20); /*0x7b8b60*/
      v8[0xFFFFFFFF] = v243; /*0x7b8b68*/
      v8 += 4; /*0x7b8b77*/
      v211 = (float)v7; /*0x7b8b7a*/
      v12 = v211; /*0x7b8b8c*/
    }
    while ( v211 < (double)flt_A2FFE8 ); /*0x7b8b91*/
    ++LODWORD(v246); /*0x7b8b9e*/
    v21 = (double)SLODWORD(v246); /*0x7b8ba2*/
    v5 += 0x200; /*0x7b8ba6*/
    if ( dbl_A3F428 <= v21 ) /*0x7b8bb9*/
      break; /*0x7b8bb9*/
    v6 = v21; /*0x7b8a3f*/
    v3 = v11; /*0x7b8a3f*/
    v2 = v6; /*0x7b8a3f*/
  }
  ++*(_DWORD *)(LODWORD(v249) + 0x68); /*0x7b8bc5*/
  *(float *)&v22 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b8bcc*/
  outTexture = v22; /*0x7b8bd4*/
  v253 = 1; /*0x7b8bda*/
  if ( *(float *)&v22 == 0.0 ) /*0x7b8be1*/
    *(float *)&v23 = 0.0; /*0x7b8bfd*/
  else
    *(float *)&v23 = COERCE_FLOAT(NiPixelData::NiPixelData((NiPixelData *)v22, 0x80u, 0x80u, (int)v251, 1u, 1)); /*0x7b8bf6*/
  v24 = 0.0; /*0x7b8c02*/
  v25 = *((_DWORD *)v23 + 0x14) + **((_DWORD **)v23 + 0x17); /*0x7b8c06*/
  v243 = (int)v23; /*0x7b8c09*/
  v253 = 0xFFFFFFFF; /*0x7b8c0d*/
  v246 = 0.0; /*0x7b8c18*/
  v26 = (_BYTE *)(v25 + 1); /*0x7b8c20*/
  do /*0x7b8d91*/
  {
    v27 = 0; /*0x7b8c29*/
    v28 = v26; /*0x7b8c2b*/
    v248 = dbl_A4D910 - v24; /*0x7b8c2d*/
    v29 = (float)0.0; /*0x7b8c37*/
    do /*0x7b8d6d*/
    {
      v231 = v248; /*0x7b8c3f*/
      v212 = v29 - dbl_A4D910; /*0x7b8c49*/
      *(float *)&v244 = v212 * v212 + v248 * v248 + dbl_A37650; /*0x7b8c67*/
      *(float *)&v244 = sqrt(*(float *)&v244); /*0x7b8c74*/
      v30 = *(float *)&v244; /*0x7b8c78*/
      ++v27; /*0x7b8c7c*/
      v28[2] = 0; /*0x7b8c81*/
      *(float *)&v244 = 1.0 / v30; /*0x7b8c8b*/
      v31 = *(float *)&v244; /*0x7b8c8f*/
      *(float *)&v244 = dbl_A8F638 * *(float *)&v244; /*0x7b8c9f*/
      v232 = v31 * v231; /*0x7b8cb3*/
      v213 = v31 * v212; /*0x7b8cbb*/
      v32 = *(float *)&v244; /*0x7b8cbf*/
      v244 = v203 | 0xC00; /*0x7b8cc3*/
      v33 = dbl_A2FAA0; /*0x7b8cc9*/
      v34 = dbl_A3DDD8; /*0x7b8cdd*/
      v28[1] = (int)((v32 + 1.0) * v33 * v34); /*0x7b8ce7*/
      *v28 = (int)((v232 + 1.0) * v33 * v34); /*0x7b8d16*/
      v28 += 4; /*0x7b8d3a*/
      v244 = (int)((v213 + 1.0) * v33 * v34); /*0x7b8d43*/
      v28[0xFFFFFFFB] = v244; /*0x7b8d4b*/
      v214 = (float)v27; /*0x7b8d56*/
      v29 = v214; /*0x7b8d68*/
    }
    while ( v214 < (double)flt_A2FFE8 ); /*0x7b8d6d*/
    ++LODWORD(v246); /*0x7b8d73*/
    v24 = (double)SLODWORD(v246); /*0x7b8d7a*/
    v26 += 0x200; /*0x7b8d7e*/
  }
  while ( dbl_A3F428 > v24 ); /*0x7b8d91*/
  ++*(_DWORD *)(v243 + 0x68); /*0x7b8d9d*/
  *(float *)&v35 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b8da3*/
  outTexture = v35; /*0x7b8dab*/
  v253 = 2; /*0x7b8db1*/
  if ( *(float *)&v35 == 0.0 ) /*0x7b8dbc*/
    *(float *)&v36 = 0.0; /*0x7b8dda*/
  else
    *(float *)&v36 = COERCE_FLOAT(NiPixelData::NiPixelData((NiPixelData *)v35, 0x80u, 0x80u, (int)v251, 1u, 1)); /*0x7b8dd3*/
  v37 = 0.0; /*0x7b8ddf*/
  v38 = dbl_A4D910; /*0x7b8de3*/
  v39 = *((_DWORD *)v36 + 0x14) + **((_DWORD **)v36 + 0x17); /*0x7b8de9*/
  v244 = (int)v36; /*0x7b8dec*/
  v253 = 0xFFFFFFFF; /*0x7b8df0*/
  v215 = 0; /*0x7b8dfb*/
  v40 = (_BYTE *)(v39 + 1); /*0x7b8e03*/
  while ( 1 ) /*0x7b8e0c*/
  {
    v42 = 0; /*0x7b8e0c*/
    v204 = 0.0; /*0x7b8e0e*/
    v43 = v40; /*0x7b8e12*/
    v44 = v38; /*0x7b8e16*/
    v45 = v37 - v38; /*0x7b8e16*/
    v46 = v44; /*0x7b8e16*/
    v250 = v45; /*0x7b8e18*/
    v47 = (float)0.0; /*0x7b8e1c*/
    do /*0x7b8f58*/
    {
      v233 = v47 - v46; /*0x7b8e22*/
      v248 = v250; /*0x7b8e2a*/
      *(float *)&v245 = v250 * v250 + v233 * v233 + dbl_A37650; /*0x7b8e48*/
      *(float *)&v245 = sqrt(*(float *)&v245); /*0x7b8e55*/
      v48 = *(float *)&v245; /*0x7b8e59*/
      v43[2] = 0; /*0x7b8e5d*/
      *(float *)&v245 = 1.0 / v48; /*0x7b8e69*/
      v49 = *(float *)&v245; /*0x7b8e6d*/
      v234 = *(float *)&v245 * v233; /*0x7b8e7b*/
      v245 = LOWORD(v204) | 0xC00; /*0x7b8e89*/
      v50 = dbl_A4D910; /*0x7b8e8f*/
      v221 = v49 * v50; /*0x7b8e99*/
      v51 = v49 * v248; /*0x7b8ea3*/
      v52 = v50; /*0x7b8ea3*/
      v248 = v51; /*0x7b8ea5*/
      v53 = dbl_A2FAA0; /*0x7b8eaf*/
      v54 = dbl_A3DDD8; /*0x7b8ec3*/
      v43[1] = (int)((v234 + 1.0) * v53 * v54); /*0x7b8ecd*/
      *v43 = (int)((v221 + 1.0) * v53 * v54); /*0x7b8efc*/
      ++v42; /*0x7b8f1c*/
      v46 = v52; /*0x7b8f25*/
      v245 = (int)((v248 + 1.0) * v53 * v54); /*0x7b8f27*/
      v43[0xFFFFFFFF] = v245; /*0x7b8f2f*/
      v43 += 4; /*0x7b8f3e*/
      v204 = (float)v42; /*0x7b8f41*/
      v47 = v204; /*0x7b8f53*/
    }
    while ( v204 < (double)flt_A2FFE8 ); /*0x7b8f58*/
    v55 = (double)++v215; /*0x7b8f65*/
    v40 += 0x200; /*0x7b8f69*/
    if ( dbl_A3F428 <= v55 ) /*0x7b8f7c*/
      break; /*0x7b8f7c*/
    v41 = v55; /*0x7b8e08*/
    v38 = v46; /*0x7b8e08*/
    v37 = v41; /*0x7b8e08*/
  }
  ++*(_DWORD *)(v244 + 0x68); /*0x7b8f88*/
  *(float *)&v56 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b8f90*/
  outTexture = v56; /*0x7b8f98*/
  v253 = 3; /*0x7b8f9e*/
  if ( *(float *)&v56 == 0.0 ) /*0x7b8fa9*/
    *(float *)&v57 = 0.0; /*0x7b8fc7*/
  else
    *(float *)&v57 = COERCE_FLOAT(NiPixelData::NiPixelData((NiPixelData *)v56, 0x80u, 0x80u, (int)v251, 1u, 1)); /*0x7b8fc0*/
  v58 = 0.0; /*0x7b8fcc*/
  v59 = *((_DWORD *)v57 + 0x14) + **((_DWORD **)v57 + 0x17); /*0x7b8fd0*/
  v250 = *(float *)&v57; /*0x7b8fd3*/
  v253 = 0xFFFFFFFF; /*0x7b8fd7*/
  v216 = 0; /*0x7b8fe2*/
  v60 = (_BYTE *)(v59 + 1); /*0x7b8fea*/
  do /*0x7b915b*/
  {
    v61 = 0; /*0x7b8fef*/
    v62 = v60; /*0x7b8ff5*/
    *(float *)&v245 = dbl_A4D910 - v58; /*0x7b8ffd*/
    v63 = (float)0.0; /*0x7b9001*/
    do /*0x7b9137*/
    {
      v235 = v63 - dbl_A4D910; /*0x7b900b*/
      v248 = *(float *)&v245; /*0x7b9013*/
      v222 = *(float *)&v245 * *(float *)&v245 + v235 * v235 + dbl_A37650; /*0x7b9031*/
      v223 = sqrt(v222); /*0x7b903e*/
      ++v61; /*0x7b9046*/
      v62[2] = 0; /*0x7b904b*/
      v224 = 1.0 / v223; /*0x7b9055*/
      v236 = v224 * v235; /*0x7b9067*/
      v246 = dbl_A8F638 * v224; /*0x7b9081*/
      v248 = v224 * v248; /*0x7b9089*/
      v64 = dbl_A2FAA0; /*0x7b9093*/
      v65 = dbl_A3DDD8; /*0x7b90a7*/
      v62[1] = (int)((v236 + 1.0) * v64 * v65); /*0x7b90b1*/
      *v62 = (int)((v246 + 1.0) * v64 * v65); /*0x7b90e0*/
      v62 += 4; /*0x7b9100*/
      v62[0xFFFFFFFB] = (int)((v248 + 1.0) * v64 * v65); /*0x7b9111*/
      v205 = (float)v61; /*0x7b9120*/
      v63 = v205; /*0x7b9132*/
    }
    while ( v205 < (double)flt_A2FFE8 ); /*0x7b9137*/
    v58 = (double)++v216; /*0x7b9144*/
    v60 += 0x200; /*0x7b9148*/
  }
  while ( dbl_A3F428 > v58 ); /*0x7b915b*/
  ++*(_DWORD *)(LODWORD(v250) + 0x68); /*0x7b9167*/
  *(float *)&v66 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b916d*/
  outTexture = v66; /*0x7b9175*/
  v253 = 4; /*0x7b917b*/
  if ( *(float *)&v66 == 0.0 ) /*0x7b9186*/
    *(float *)&v67 = 0.0; /*0x7b91a4*/
  else
    *(float *)&v67 = COERCE_FLOAT(NiPixelData::NiPixelData((NiPixelData *)v66, 0x80u, 0x80u, (int)v251, 1u, 1)); /*0x7b919d*/
  v68 = 0.0; /*0x7b91a9*/
  v69 = dbl_A4D910; /*0x7b91ad*/
  v70 = *((_DWORD *)v67 + 0x14) + **((_DWORD **)v67 + 0x17); /*0x7b91b3*/
  v245 = (int)v67; /*0x7b91b6*/
  v253 = 0xFFFFFFFF; /*0x7b91ba*/
  v246 = 0.0; /*0x7b91c5*/
  v71 = (_BYTE *)(v70 + 1); /*0x7b91cd*/
  while ( 1 ) /*0x7b91d6*/
  {
    v73 = 0; /*0x7b91d6*/
    v74 = v71; /*0x7b91dc*/
    v75 = v69; /*0x7b91e2*/
    v76 = v69 - v68; /*0x7b91e2*/
    v77 = v75; /*0x7b91e2*/
    v248 = v76; /*0x7b91e4*/
    v78 = (float)0.0; /*0x7b91e8*/
    do /*0x7b931c*/
    {
      v237 = v78 - v77; /*0x7b91ee*/
      v217 = v248; /*0x7b91f6*/
      v225 = v248 * v248 + v237 * v237 + dbl_A37650; /*0x7b9210*/
      v226 = sqrt(v225); /*0x7b921d*/
      ++v73; /*0x7b9225*/
      v74[2] = 0; /*0x7b922a*/
      v227 = 1.0 / v226; /*0x7b9234*/
      v238 = v227 * v237; /*0x7b9246*/
      v218 = v227 * v217; /*0x7b925e*/
      v79 = dbl_A4D910; /*0x7b926a*/
      *(float *)&v247 = v227 * v79; /*0x7b926c*/
      v80 = dbl_A2FAA0; /*0x7b9276*/
      v81 = dbl_A3DDD8; /*0x7b928a*/
      v74[1] = (int)((v238 + 1.0) * v80 * v81); /*0x7b9294*/
      *v74 = (int)((v218 + 1.0) * v80 * v81); /*0x7b92c3*/
      v74 += 4; /*0x7b92e3*/
      v77 = v79; /*0x7b92ec*/
      v247 = (NiSourceTexture *)(int)((*(float *)&v247 + 1.0) * v80 * v81); /*0x7b92ee*/
      v74[0xFFFFFFFB] = (_BYTE)v247; /*0x7b92f6*/
      v206 = (float)v73; /*0x7b9305*/
      v78 = v206; /*0x7b9317*/
    }
    while ( v206 < (double)flt_A2FFE8 ); /*0x7b931c*/
    ++LODWORD(v246); /*0x7b9322*/
    v82 = (double)SLODWORD(v246); /*0x7b9329*/
    v71 += 0x200; /*0x7b932d*/
    if ( dbl_A3F428 <= v82 ) /*0x7b9340*/
      break; /*0x7b9340*/
    v72 = v82; /*0x7b91d2*/
    v69 = v77; /*0x7b91d2*/
    v68 = v72; /*0x7b91d2*/
  }
  ++*(_DWORD *)(v245 + 0x68); /*0x7b934c*/
  *(float *)&v83 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b9354*/
  outTexture = v83; /*0x7b935c*/
  v253 = 5; /*0x7b9362*/
  if ( *(float *)&v83 == 0.0 ) /*0x7b936d*/
    v84 = 0; /*0x7b938d*/
  else
    v84 = NiPixelData::NiPixelData((NiPixelData *)v83, 0x80u, 0x80u, (int)v251, 1u, 1); /*0x7b9389*/
  v85 = 0.0; /*0x7b9392*/
  v86 = *((_DWORD *)v84 + 0x14) + **((_DWORD **)v84 + 0x17); /*0x7b9396*/
  v253 = 0xFFFFFFFF; /*0x7b9399*/
  v246 = 0.0; /*0x7b93a7*/
  v228 = (_BYTE *)(v86 + 1); /*0x7b93af*/
  do /*0x7b9525*/
  {
    v87 = v228; /*0x7b93b5*/
    v207 = 0.0; /*0x7b93b9*/
    v88 = 0; /*0x7b93bd*/
    v248 = dbl_A4D910 - v85; /*0x7b93c5*/
    v89 = (float)0.0; /*0x7b93c9*/
    do /*0x7b94fb*/
    {
      v239 = dbl_A4D910 - v89; /*0x7b93d3*/
      v219 = v248; /*0x7b93db*/
      *(float *)&v247 = v248 * v248 + v239 * v239 + dbl_A37650; /*0x7b93f5*/
      *(float *)&v247 = sqrt(*(float *)&v247); /*0x7b9402*/
      v90 = *(float *)&v247; /*0x7b9406*/
      ++v88; /*0x7b940a*/
      v87[2] = 0; /*0x7b940f*/
      *(float *)&v247 = 1.0 / v90; /*0x7b9419*/
      v91 = *(float *)&v247; /*0x7b941d*/
      v240 = *(float *)&v247 * v239; /*0x7b942b*/
      v247 = (NiSourceTexture *)(LOWORD(v207) | 0xC00); /*0x7b9439*/
      v220 = v91 * v219; /*0x7b9443*/
      *(float *)&outTexture = v91 * dbl_A8F638; /*0x7b944d*/
      v92 = dbl_A2FAA0; /*0x7b9457*/
      v93 = dbl_A3DDD8; /*0x7b946b*/
      v87[1] = (int)((v240 + 1.0) * v92 * v93); /*0x7b9475*/
      v247 = (NiSourceTexture *)(int)((v220 + 1.0) * v92 * v93); /*0x7b949c*/
      *v87 = (_BYTE)v247; /*0x7b94a4*/
      v87 += 4; /*0x7b94c4*/
      outTexture = (NiSourceTexture *)(int)((*(float *)&outTexture + 1.0) * v92 * v93); /*0x7b94cd*/
      v87[0xFFFFFFFB] = (_BYTE)outTexture; /*0x7b94d5*/
      v207 = (float)v88; /*0x7b94e4*/
      v89 = v207; /*0x7b94f6*/
    }
    while ( v207 < (double)flt_A2FFE8 ); /*0x7b94fb*/
    v228 += 0x200; /*0x7b9501*/
    ++LODWORD(v246); /*0x7b9510*/
    v85 = (double)SLODWORD(v246); /*0x7b9514*/
  }
  while ( dbl_A3F428 > v85 ); /*0x7b9525*/
  ++*((_DWORD *)v84 + 0x1A); /*0x7b952b*/
  v94 = sub_720A30( /*0x7b955a*/
          SLODWORD(v249),
          v243,
          v244,
          SLODWORD(v250),
          v245,
          (int)v84,
          (int)unk_B43104,
          &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
  v95 = flt_B430DC[4]; /*0x7b955c*/
  if ( (NiSourceTexture *)LODWORD(flt_B430DC[4]) == v94 ) /*0x7b9566*/
  {
LABEL_53:
    if ( v95 != 0.0 ) /*0x7b95a4*/
      goto LABEL_55; /*0x7b95a4*/
    goto LABEL_54; /*0x7b95a4*/
  }
  if ( v95 != 0.0 ) /*0x7b956a*/
  {
    v96 = flt_B430DC[4]; /*0x7b956c*/
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v95) + 4)) && v96 != 0.0 ) /*0x7b957e*/
      (**(void (__thiscall ***)(float, int))LODWORD(v96))(COERCE_FLOAT(LODWORD(v96)), 1); /*0x7b9587*/
  }
  LODWORD(flt_B430DC[4]) = v94; /*0x7b958b*/
  if ( v94 ) /*0x7b9591*/
  {
    InterlockedIncrement((volatile LONG *)&v94->members); /*0x7b9597*/
    v95 = flt_B430DC[4]; /*0x7b959d*/
    goto LABEL_53; /*0x7b959d*/
  }
LABEL_54:
  nullsub_return0_0arg(); /*0x7b95a6*/
LABEL_55:
  *(float *)&v97 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b95ba*/
  outTexture = v97; /*0x7b95c4*/
  v253 = 6; /*0x7b95ca*/
  if ( *(float *)&v97 == 0.0 ) /*0x7b95d5*/
    v98 = 0; /*0x7b95eb*/
  else
    v98 = NiPixelData::NiPixelData((NiPixelData *)v97, 0x10u, 0x10u, (int)&unk_B25E48, 1u, 1); /*0x7b95e4*/
  v99 = *((_DWORD *)v98 + 0x14) + **((_DWORD **)v98 + 0x17); /*0x7b95f2*/
  v253 = 0xFFFFFFFF; /*0x7b95f8*/
  v100 = (_BYTE *)(v99 + 2); /*0x7b95ff*/
  v101 = 0x10; /*0x7b9602*/
  do /*0x7b962b*/
  {
    v102 = 0x10; /*0x7b9610*/
    do /*0x7b9626*/
    {
      v100[0xFFFFFFFE] = 0x80; /*0x7b9615*/
      v100[0xFFFFFFFF] = 0x80; /*0x7b9619*/
      *v100 = 0xFF; /*0x7b961d*/
      v100 += 3; /*0x7b9620*/
      --v102; /*0x7b9623*/
    }
    while ( v102 ); /*0x7b9626*/
    --v101; /*0x7b9628*/
  }
  while ( v101 ); /*0x7b962b*/
  ++*((_DWORD *)v98 + 0x1A); /*0x7b962d*/
  TexturePixelData = NiSourceTexture::LoadTexturePixelData( /*0x7b963c*/
                       v98,
                       &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
  v104 = flt_B430DC[0]; /*0x7b963e*/
  if ( (NiSourceTexture *)LODWORD(flt_B430DC[0]) == TexturePixelData ) /*0x7b9648*/
  {
LABEL_69:
    if ( v104 != 0.0 ) /*0x7b9687*/
      goto LABEL_71; /*0x7b9687*/
    goto LABEL_70; /*0x7b9687*/
  }
  if ( v104 != 0.0 ) /*0x7b964c*/
  {
    v105 = flt_B430DC[0]; /*0x7b964e*/
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v104) + 4)) && v105 != 0.0 ) /*0x7b9660*/
      (**(void (__thiscall ***)(float, int))LODWORD(v105))(COERCE_FLOAT(LODWORD(v105)), 1); /*0x7b966a*/
  }
  LODWORD(flt_B430DC[0]) = TexturePixelData; /*0x7b966e*/
  if ( TexturePixelData ) /*0x7b9674*/
  {
    InterlockedIncrement((volatile LONG *)&TexturePixelData->members); /*0x7b967a*/
    v104 = flt_B430DC[0]; /*0x7b9680*/
    goto LABEL_69; /*0x7b9680*/
  }
LABEL_70:
  nullsub_return0_0arg(); /*0x7b9689*/
LABEL_71:
  *(float *)&v106 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b969d*/
  outTexture = v106; /*0x7b96a7*/
  v253 = 7; /*0x7b96ad*/
  if ( *(float *)&v106 == 0.0 ) /*0x7b96b8*/
    v107 = 0; /*0x7b96d0*/
  else
    v107 = NiPixelData::NiPixelData((NiPixelData *)v106, 0x10u, 0x10u, (int)&unk_B25E00, 1u, 1); /*0x7b96c9*/
  v108 = *((_DWORD *)v107 + 0x14) + **((_DWORD **)v107 + 0x17); /*0x7b96d7*/
  v253 = 0xFFFFFFFF; /*0x7b96da*/
  v109 = (_BYTE *)(v108 + 2); /*0x7b96e1*/
  v110 = 0x10; /*0x7b96e4*/
  do /*0x7b970f*/
  {
    v111 = 0x10; /*0x7b96f0*/
    do /*0x7b970a*/
    {
      v109[0xFFFFFFFE] = 0x80; /*0x7b96f5*/
      v109[0xFFFFFFFF] = 0x80; /*0x7b96f9*/
      *v109 = 0xFF; /*0x7b96fd*/
      v109[1] = 0x40; /*0x7b9700*/
      v109 += 4; /*0x7b9704*/
      --v111; /*0x7b9707*/
    }
    while ( v111 ); /*0x7b970a*/
    --v110; /*0x7b970c*/
  }
  while ( v110 ); /*0x7b970f*/
  ++*((_DWORD *)v107 + 0x1A); /*0x7b9711*/
  v112 = NiSourceTexture::LoadTexturePixelData(v107, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x7b9720*/
  v113 = unk_B430F0; /*0x7b9722*/
  if ( (NiSourceTexture *)unk_B430F0 == v112 ) /*0x7b972c*/
  {
LABEL_85:
    if ( v113 ) /*0x7b976b*/
      goto LABEL_87; /*0x7b976b*/
    goto LABEL_86; /*0x7b976b*/
  }
  if ( v113 ) /*0x7b9730*/
  {
    v114 = (void (__thiscall ***)(_DWORD, int))unk_B430F0; /*0x7b9732*/
    if ( !InterlockedDecrement((volatile LONG *)(v113 + 4)) ) /*0x7b9738*/
    {
      if ( v114 ) /*0x7b9744*/
        (**v114)(v114, 1); /*0x7b974e*/
    }
  }
  unk_B430F0 = (int)v112; /*0x7b9752*/
  if ( v112 ) /*0x7b9758*/
  {
    InterlockedIncrement((volatile LONG *)&v112->members); /*0x7b975e*/
    v113 = unk_B430F0; /*0x7b9764*/
    goto LABEL_85; /*0x7b9764*/
  }
LABEL_86:
  nullsub_return0_0arg(); /*0x7b976d*/
LABEL_87:
  *(float *)&v115 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b9781*/
  outTexture = v115; /*0x7b978b*/
  v253 = 8; /*0x7b9791*/
  if ( *(float *)&v115 == 0.0 ) /*0x7b979c*/
    v116 = 0; /*0x7b97b4*/
  else
    v116 = NiPixelData::NiPixelData((NiPixelData *)v115, 0x10u, 0x10u, (int)&unk_B25E48, 1u, 1); /*0x7b97ad*/
  v117 = *((_DWORD *)v116 + 0x14) + **((_DWORD **)v116 + 0x17); /*0x7b97bb*/
  v253 = 0xFFFFFFFF; /*0x7b97be*/
  v118 = (_BYTE *)(v117 + 2); /*0x7b97c5*/
  v119 = 0x10; /*0x7b97c8*/
  do /*0x7b97eb*/
  {
    v120 = 0x10; /*0x7b97d0*/
    do /*0x7b97e6*/
    {
      v118[0xFFFFFFFE] = 0; /*0x7b97d5*/
      v118[0xFFFFFFFF] = 0; /*0x7b97d9*/
      *v118 = 0; /*0x7b97dd*/
      v118 += 3; /*0x7b97e0*/
      --v120; /*0x7b97e3*/
    }
    while ( v120 ); /*0x7b97e6*/
    --v119; /*0x7b97e8*/
  }
  while ( v119 ); /*0x7b97eb*/
  ++*((_DWORD *)v116 + 0x1A); /*0x7b97ed*/
  v121 = NiSourceTexture::LoadTexturePixelData(v116, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x7b97fc*/
  v122 = flt_B430DC[1]; /*0x7b97fe*/
  if ( (NiSourceTexture *)LODWORD(flt_B430DC[1]) == v121 ) /*0x7b9808*/
  {
LABEL_101:
    if ( v122 != 0.0 ) /*0x7b9847*/
      goto LABEL_103; /*0x7b9847*/
    goto LABEL_102; /*0x7b9847*/
  }
  if ( v122 != 0.0 ) /*0x7b980c*/
  {
    v123 = flt_B430DC[1]; /*0x7b980e*/
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v122) + 4)) && v123 != 0.0 ) /*0x7b9820*/
      (**(void (__thiscall ***)(float, int))LODWORD(v123))(COERCE_FLOAT(LODWORD(v123)), 1); /*0x7b982a*/
  }
  LODWORD(flt_B430DC[1]) = v121; /*0x7b982e*/
  if ( v121 ) /*0x7b9834*/
  {
    InterlockedIncrement((volatile LONG *)&v121->members); /*0x7b983a*/
    v122 = flt_B430DC[1]; /*0x7b9840*/
    goto LABEL_101; /*0x7b9840*/
  }
LABEL_102:
  nullsub_return0_0arg(); /*0x7b9849*/
LABEL_103:
  v124 = NiSourceTexture_LoadChecked(&outTexture, "Data\\Textures\\Effects\\WindowEnvironmentMap01.dds", 1, 1); /*0x7b985d*/
  v125 = unk_B43100; /*0x7b9875*/
  v126 = unk_B43100 == (_DWORD)*v124; /*0x7b987a*/
  v253 = 9; /*0x7b987c*/
  if ( !v126 ) /*0x7b9887*/
  {
    if ( v125 ) /*0x7b988b*/
    {
      v127 = (void (__thiscall ***)(_DWORD, int))v125; /*0x7b988d*/
      if ( !InterlockedDecrement((volatile LONG *)(v125 + 4)) ) /*0x7b9893*/
        (**v127)(v127, 1); /*0x7b98a9*/
    }
    v128 = *v124; /*0x7b98ab*/
    v126 = *v124 == 0; /*0x7b98ad*/
    unk_B43100 = (int)*v124; /*0x7b98af*/
    if ( !v126 ) /*0x7b98b4*/
      InterlockedIncrement((volatile LONG *)&v128->members); /*0x7b98ba*/
  }
  v129 = outTexture; /*0x7b98c0*/
  v253 = 0xFFFFFFFF; /*0x7b98c6*/
  if ( *(float *)&outTexture != 0.0 && !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x7b98d3*/
  {
    if ( v129 ) /*0x7b98df*/
      v129->vtbl->super.super.super.Destructor((NiRefObject *)v129, 1); /*0x7b98e9*/
  }
  v130 = NiSourceTexture_LoadChecked(&v247, "Data\\Textures\\Effects\\WindowEnvironmentMap02.dds", 1, 1); /*0x7b9901*/
  v131 = flt_B430DC[2]; /*0x7b9903*/
  v126 = LODWORD(flt_B430DC[2]) == (_DWORD)*v130; /*0x7b9908*/
  v253 = 0xA; /*0x7b990a*/
  if ( !v126 ) /*0x7b9915*/
  {
    if ( v131 != 0.0 ) /*0x7b9919*/
    {
      v132 = v131; /*0x7b991b*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v131) + 4)) ) /*0x7b9921*/
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v132))(LODWORD(v132), 1); /*0x7b9937*/
    }
    v133 = *v130; /*0x7b9939*/
    v126 = *v130 == 0; /*0x7b993b*/
    LODWORD(flt_B430DC[2]) = *v130; /*0x7b993d*/
    if ( !v126 ) /*0x7b9942*/
      InterlockedIncrement((volatile LONG *)&v133->members); /*0x7b9948*/
  }
  v134 = v247; /*0x7b994e*/
  v253 = 0xFFFFFFFF; /*0x7b9954*/
  if ( *(float *)&v247 != 0.0 && !InterlockedDecrement((volatile LONG *)&v247->members) ) /*0x7b9961*/
  {
    if ( v134 ) /*0x7b996d*/
      v134->vtbl->super.super.super.Destructor((NiRefObject *)v134, 1); /*0x7b9977*/
  }
  *(float *)&v135 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b997b*/
  outTexture = v135; /*0x7b9983*/
  v253 = 0xB; /*0x7b9989*/
  if ( *(float *)&v135 == 0.0 ) /*0x7b9994*/
    v136 = 0; /*0x7b99ae*/
  else
    v136 = NiPixelData::NiPixelData((NiPixelData *)v135, 4u, 4u, (int)&unk_B25E00, 1u, 1); /*0x7b99aa*/
  v137 = *((_DWORD *)v136 + 0x14) + **((_DWORD **)v136 + 0x17); /*0x7b99b5*/
  v126 = unk_B42D40 == 0; /*0x7b99b8*/
  v253 = 0xFFFFFFFF; /*0x7b99bf*/
  if ( v126 /*0x7b99d8*/
    || !OB_RendererGlobalState_010201A0.pad_00D[0x98]
    || *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 )
  {
    v141 = (_BYTE *)(v137 + 2); /*0x7b9a14*/
    v142 = 4; /*0x7b9a17*/
    do /*0x7b9a3f*/
    {
      v143 = 4; /*0x7b9a20*/
      do /*0x7b9a3a*/
      {
        v141[0xFFFFFFFE] = 0; /*0x7b9a25*/
        v141[0xFFFFFFFF] = 0; /*0x7b9a29*/
        *v141 = 0; /*0x7b9a2d*/
        v141[1] = 0x40; /*0x7b9a30*/
        v141 += 4; /*0x7b9a34*/
        --v143; /*0x7b9a37*/
      }
      while ( v143 ); /*0x7b9a3a*/
      --v142; /*0x7b9a3c*/
    }
    while ( v142 ); /*0x7b9a3f*/
  }
  else
  {
    v138 = (_BYTE *)(v137 + 2); /*0x7b99da*/
    v139 = 4; /*0x7b99dd*/
    do /*0x7b9a0d*/
    {
      v140 = 4; /*0x7b99f0*/
      do /*0x7b9a08*/
      {
        v138[0xFFFFFFFE] = 0xE6; /*0x7b99f5*/
        v138[0xFFFFFFFF] = 0xD4; /*0x7b99f8*/
        *v138 = 0xB8; /*0x7b99fb*/
        v138[1] = 0x40; /*0x7b99fe*/
        v138 += 4; /*0x7b9a02*/
        --v140; /*0x7b9a05*/
      }
      while ( v140 ); /*0x7b9a08*/
      --v139; /*0x7b9a0a*/
    }
    while ( v139 ); /*0x7b9a0d*/
  }
  ++*((_DWORD *)v136 + 0x1A); /*0x7b9a41*/
  v144 = NiSourceTexture::LoadTexturePixelData(v136, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x7b9a50*/
  v145 = unk_B4311C; /*0x7b9a52*/
  if ( (NiSourceTexture *)unk_B4311C == v144 ) /*0x7b9a5c*/
  {
LABEL_145:
    if ( v145 ) /*0x7b9a9b*/
      goto LABEL_147; /*0x7b9a9b*/
    goto LABEL_146; /*0x7b9a9b*/
  }
  if ( v145 ) /*0x7b9a60*/
  {
    v146 = (void (__thiscall ***)(_DWORD, int))unk_B4311C; /*0x7b9a62*/
    if ( !InterlockedDecrement((volatile LONG *)(v145 + 4)) ) /*0x7b9a68*/
    {
      if ( v146 ) /*0x7b9a74*/
        (**v146)(v146, 1); /*0x7b9a7e*/
    }
  }
  unk_B4311C = (int)v144; /*0x7b9a82*/
  if ( v144 ) /*0x7b9a88*/
  {
    InterlockedIncrement((volatile LONG *)&v144->members); /*0x7b9a8e*/
    v145 = unk_B4311C; /*0x7b9a94*/
    goto LABEL_145; /*0x7b9a94*/
  }
LABEL_146:
  nullsub_return0_0arg(); /*0x7b9a9d*/
LABEL_147:
  *(float *)&v147 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b9ab1*/
  outTexture = v147; /*0x7b9abb*/
  v253 = 0xC; /*0x7b9ac1*/
  if ( *(float *)&v147 == 0.0 ) /*0x7b9acc*/
    v148 = 0; /*0x7b9ae4*/
  else
    v148 = NiPixelData::NiPixelData((NiPixelData *)v147, 4u, 4u, (int)&unk_B25E00, 1u, 1); /*0x7b9add*/
  v149 = *((_DWORD *)v148 + 0x14) + **((_DWORD **)v148 + 0x17); /*0x7b9aeb*/
  v253 = 0xFFFFFFFF; /*0x7b9aee*/
  v150 = (_BYTE *)(v149 + 2); /*0x7b9af5*/
  v151 = 4; /*0x7b9af8*/
  do /*0x7b9b1f*/
  {
    v152 = 4; /*0x7b9b00*/
    do /*0x7b9b1a*/
    {
      v150[0xFFFFFFFE] = 0; /*0x7b9b05*/
      v150[0xFFFFFFFF] = 0; /*0x7b9b09*/
      *v150 = 0; /*0x7b9b0d*/
      v150[1] = 0xFF; /*0x7b9b10*/
      v150 += 4; /*0x7b9b14*/
      --v152; /*0x7b9b17*/
    }
    while ( v152 ); /*0x7b9b1a*/
    --v151; /*0x7b9b1c*/
  }
  while ( v151 ); /*0x7b9b1f*/
  ++*((_DWORD *)v148 + 0x1A); /*0x7b9b21*/
  v153 = NiSourceTexture::LoadTexturePixelData(v148, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x7b9b30*/
  v154 = unk_B43120; /*0x7b9b32*/
  if ( (NiSourceTexture *)unk_B43120 == v153 ) /*0x7b9b3c*/
  {
LABEL_161:
    if ( v154 ) /*0x7b9b7b*/
      goto LABEL_163; /*0x7b9b7b*/
    goto LABEL_162; /*0x7b9b7b*/
  }
  if ( v154 ) /*0x7b9b40*/
  {
    v155 = (void (__thiscall ***)(_DWORD, int))unk_B43120; /*0x7b9b42*/
    if ( !InterlockedDecrement((volatile LONG *)(v154 + 4)) ) /*0x7b9b48*/
    {
      if ( v155 ) /*0x7b9b54*/
        (**v155)(v155, 1); /*0x7b9b5e*/
    }
  }
  unk_B43120 = (int)v153; /*0x7b9b62*/
  if ( v153 ) /*0x7b9b68*/
  {
    InterlockedIncrement((volatile LONG *)&v153->members); /*0x7b9b6e*/
    v154 = unk_B43120; /*0x7b9b74*/
    goto LABEL_161; /*0x7b9b74*/
  }
LABEL_162:
  nullsub_return0_0arg(); /*0x7b9b7d*/
LABEL_163:
  _sprintf(Src, "%seyereflection.dds", "Data\\Textures\\Effects\\"); /*0x7b9b91*/
  v156 = sub_720F80( /*0x7b9bca*/
           Src,
           Src,
           Src,
           Src,
           Src,
           Src,
           (int)unk_B43104,
           &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
  v157 = flt_B43110[1]; /*0x7b9bcc*/
  if ( (NiSourceTexture *)LODWORD(flt_B43110[1]) == v156 ) /*0x7b9bd6*/
    goto LABEL_170; /*0x7b9bd6*/
  if ( v157 != 0.0 ) /*0x7b9bda*/
  {
    v158 = flt_B43110[1]; /*0x7b9bdc*/
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v157) + 4)) && v158 != 0.0 ) /*0x7b9bee*/
      (**(void (__thiscall ***)(float, int))LODWORD(v158))(COERCE_FLOAT(LODWORD(v158)), 1); /*0x7b9bf8*/
  }
  LODWORD(flt_B43110[1]) = v156; /*0x7b9bfc*/
  if ( v156 ) /*0x7b9c02*/
  {
    InterlockedIncrement((volatile LONG *)&v156->members); /*0x7b9c08*/
    v157 = flt_B43110[1]; /*0x7b9c0e*/
LABEL_170:
    if ( v157 != 0.0 ) /*0x7b9c15*/
      goto LABEL_172; /*0x7b9c15*/
  }
  nullsub_return0_0arg(); /*0x7b9c17*/
LABEL_172:
  _sprintf(Src, "%sreflection.dds", "Data\\Textures\\Effects\\"); /*0x7b9c2b*/
  v159 = sub_720F80( /*0x7b9c64*/
           Src,
           Src,
           Src,
           Src,
           Src,
           Src,
           (int)unk_B43104,
           &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
  v160 = unk_B430F4; /*0x7b9c66*/
  if ( (NiSourceTexture *)unk_B430F4 == v159 ) /*0x7b9c70*/
    goto LABEL_179; /*0x7b9c70*/
  if ( v160 ) /*0x7b9c74*/
  {
    v161 = (void (__thiscall ***)(_DWORD, int))unk_B430F4; /*0x7b9c76*/
    if ( !InterlockedDecrement((volatile LONG *)(v160 + 4)) ) /*0x7b9c7c*/
    {
      if ( v161 ) /*0x7b9c88*/
        (**v161)(v161, 1); /*0x7b9c92*/
    }
  }
  unk_B430F4 = (int)v159; /*0x7b9c96*/
  if ( v159 ) /*0x7b9c9c*/
  {
    InterlockedIncrement((volatile LONG *)&v159->members); /*0x7b9ca2*/
    v160 = unk_B430F4; /*0x7b9ca8*/
LABEL_179:
    if ( v160 ) /*0x7b9caf*/
      goto LABEL_181; /*0x7b9caf*/
  }
  nullsub_return0_0arg(); /*0x7b9cb1*/
LABEL_181:
  _sprintf(Src, "%saniso.dds", "Data\\Textures\\Effects\\"); /*0x7b9cc5*/
  TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x7b9cf0*/
                        Src,
                        &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                        1);
  v163 = unk_B430F8; /*0x7b9cf2*/
  if ( (NiSourceTexture *)unk_B430F8 != TextureByFilename ) /*0x7b9cfc*/
  {
    if ( v163 ) /*0x7b9d00*/
    {
      v164 = (void (__thiscall ***)(_DWORD, int))unk_B430F8; /*0x7b9d02*/
      if ( !InterlockedDecrement((volatile LONG *)(v163 + 4)) ) /*0x7b9d08*/
      {
        if ( v164 ) /*0x7b9d14*/
          (**v164)(v164, 1); /*0x7b9d1e*/
      }
    }
    unk_B430F8 = (int)TextureByFilename; /*0x7b9d22*/
    if ( TextureByFilename ) /*0x7b9d28*/
      InterlockedIncrement((volatile LONG *)&TextureByFilename->members); /*0x7b9d2e*/
  }
  _sprintf(Src, "%sblooddecal.dds", "Data\\Textures\\Effects\\"); /*0x7b9d46*/
  v165 = NiSourceTexture::LoadTextureByFilename(Src, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout, 1); /*0x7b9d5f*/
  v166 = unk_B43128; /*0x7b9d61*/
  if ( (NiSourceTexture *)unk_B43128 != v165 ) /*0x7b9d6b*/
  {
    if ( v166 ) /*0x7b9d6f*/
    {
      v167 = (void (__thiscall ***)(_DWORD, int))unk_B43128; /*0x7b9d71*/
      if ( !InterlockedDecrement((volatile LONG *)(v166 + 4)) ) /*0x7b9d77*/
      {
        if ( v167 ) /*0x7b9d83*/
          (**v167)(v167, 1); /*0x7b9d8d*/
      }
    }
    unk_B43128 = (int)v165; /*0x7b9d91*/
    if ( v165 ) /*0x7b9d97*/
      InterlockedIncrement((volatile LONG *)&v165->members); /*0x7b9d9d*/
  }
  if ( !LODWORD(flt_B430DC[3]) ) /*0x7b9da3*/
  {
    _sprintf(Src, "%sterrainnoise.dds", "Data\\Textures\\Effects\\"); /*0x7b9dbe*/
    v168 = NiSourceTexture::LoadTextureByFilename(Src, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout, 1); /*0x7b9dd7*/
    v169 = flt_B430DC[3]; /*0x7b9dd9*/
    if ( (NiSourceTexture *)LODWORD(flt_B430DC[3]) != v168 ) /*0x7b9de3*/
    {
      if ( v169 != 0.0 ) /*0x7b9de7*/
      {
        v170 = flt_B430DC[3]; /*0x7b9de9*/
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v169) + 4)) && v170 != 0.0 ) /*0x7b9dfb*/
          (**(void (__thiscall ***)(float, int))LODWORD(v170))(COERCE_FLOAT(LODWORD(v170)), 1); /*0x7b9e05*/
      }
      LODWORD(flt_B430DC[3]) = v168; /*0x7b9e09*/
      if ( v168 ) /*0x7b9e0f*/
        InterlockedIncrement((volatile LONG *)&v168->members); /*0x7b9e15*/
    }
  }
  *(float *)&v171 = COERCE_FLOAT(FormHeapAlloc(0x70u)); /*0x7b9e1d*/
  outTexture = v171; /*0x7b9e25*/
  v253 = 0xD; /*0x7b9e2b*/
  if ( *(float *)&v171 == 0.0 ) /*0x7b9e36*/
    v172 = 0; /*0x7b9e56*/
  else
    v172 = NiPixelData::NiPixelData((NiPixelData *)v171, 0x80u, 0x80u, (int)&unk_B25E48, 1u, 1); /*0x7b9e52*/
  v173 = *((_DWORD *)v172 + 0x14) + **((_DWORD **)v172 + 0x17); /*0x7b9e5d*/
  v253 = 0xFFFFFFFF; /*0x7b9e60*/
  v246 = 0.0; /*0x7b9e6b*/
  v174 = v173 + 2; /*0x7b9e73*/
  do
  {
    v175 = dbl_A8F550; /*0x7b9e76*/
    v176 = 0; /*0x7b9e7c*/
    v177 = 1.0; /*0x7b9e7e*/
    v208 = 0; /*0x7b9e80*/
    v249 = (float)SLODWORD(v246); /*0x7b9e88*/
    v178 = v249; /*0x7b9e8c*/
    while ( 1 )
    {
      *(float *)&outTexture = (float)v208; /*0x7b9ea6*/
      v179 = *(float *)&outTexture; /*0x7b9eaa*/
      if ( *(float *)&outTexture >= v175 ) /*0x7b9eb5*/
      {
        *(float *)&v244 = (v179 - v175) / v175; /*0x7b9ecb*/
        v181 = 1.0; /*0x7b9ecf*/
      }
      else
      {
        v180 = 1.0 - v179 / v175; /*0x7b9ebf*/
        v181 = 1.0; /*0x7b9ebf*/
        *(float *)&v244 = v180; /*0x7b9ec1*/
      }
      v182 = v181; /*0x7b9ed1*/
      v183 = v178; /*0x7b9ed1*/
      v184 = v182; /*0x7b9ed1*/
      v185 = v183 >= v175 ? (v183 - v175) / v175 : v184 - v183 / v175;
      v186 = v184; /*0x7b9ee8*/
      v187 = v185; /*0x7b9ee8*/
      v188 = v186; /*0x7b9ee8*/
      *(float *)&v243 = v187; /*0x7b9eea*/
      *(float *)&outTexture = *(float *)&v243 * *(float *)&v243 + *(float *)&v244 * *(float *)&v244; /*0x7b9efe*/
      if ( *(float *)&outTexture <= v186 ) /*0x7b9f0d*/
      {
        v243 = (int)outTexture; /*0x7b9f17*/
        v189 = v177; /*0x7b9f1b*/
        v190 = *(float *)&outTexture; /*0x7b9f1b*/
      }
      else
      {
        v189 = v177; /*0x7b9f0f*/
        v190 = *(float *)&outTexture; /*0x7b9f0f*/
        *(float *)&v243 = v189; /*0x7b9f11*/
      }
      if ( *(float *)&v243 >= dbl_A2FC68 ) /*0x7b9f2c*/
      {
        v192 = v189; /*0x7b9f38*/
        v193 = v188; /*0x7b9f38*/
        v191 = v192; /*0x7b9f38*/
        if ( v193 >= v190 ) /*0x7b9f41*/
          v191 = v190; /*0x7b9f47*/
      }
      else
      {
        v191 = 0.0; /*0x7b9f34*/
      }
      v241 = v191; /*0x7b9f4b*/
      v194 = v241; /*0x7b9f54*/
      if ( sub_404F00(0) == 1 ) /*0x7b9f5e*/
        v194 = 1.0 - v194; /*0x7b9f62*/
      *(float *)&outTexture = v194; /*0x7b9f64*/
      *(float *)&outTexture = *(float *)&outTexture * dbl_A3DDD8; /*0x7b9f75*/
      ++v176; /*0x7b9f89*/
      v174 += 3; /*0x7b9fa1*/
      outTexture = (NiSourceTexture *)(int)floor(*(float *)&outTexture); /*0x7b9faa*/
      v195 = (char)outTexture; /*0x7b9fae*/
      *(_BYTE *)(v174 - 5) = (_BYTE)outTexture; /*0x7b9fb2*/
      *(_BYTE *)(v174 - 4) = v195; /*0x7b9fb5*/
      *(_BYTE *)(v174 - 3) = v195; /*0x7b9fb8*/
      v208 = v176; /*0x7b9fbf*/
      if ( v176 >= 0x80 ) /*0x7b9fc3*/
        break; /*0x7b9fc3*/
      v175 = dbl_A8F550; /*0x7b9e9e*/
      v178 = v249; /*0x7b9ea0*/
      v177 = 1.0; /*0x7b9ea0*/
    }
    ++LODWORD(v246); /*0x7b9fd5*/
  }
  while ( SLODWORD(v246) < 0x80 );
  ++*((_DWORD *)v172 + 0x1A); /*0x7b9fdf*/
  *(float *)&v196 = COERCE_FLOAT( /*0x7b9fee*/
                      NiSourceTexture::LoadTexturePixelData(
                        v172,
                        &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout));
  v197 = flt_B43110[0]; /*0x7b9ff0*/
  if ( (NiSourceTexture *)LODWORD(flt_B43110[0]) != v196 ) /*0x7b9ffa*/
  {
    if ( v197 != 0.0 ) /*0x7b9ffe*/
    {
      v198 = flt_B43110[0]; /*0x7ba000*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v197) + 4)) && v198 != 0.0 ) /*0x7ba012*/
        (**(void (__thiscall ***)(float, int))LODWORD(v198))(COERCE_FLOAT(LODWORD(v198)), 1); /*0x7ba01c*/
    }
    v197 = *(float *)&v196; /*0x7ba020*/
    flt_B43110[0] = *(float *)&v196; /*0x7ba022*/
    if ( *(float *)&v196 != 0.0 ) /*0x7ba027*/
    {
      InterlockedIncrement((volatile LONG *)&v196->members); /*0x7ba02d*/
      v197 = flt_B43110[0]; /*0x7ba033*/
    }
  }
  v199 = LODWORD(flt_B430D4); /*0x7ba038*/
  if ( LODWORD(flt_B430D4) != LODWORD(v197) ) /*0x7ba040*/
  {
    if ( v199 ) /*0x7ba044*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v199 + 4)) ) /*0x7ba04a*/
        (**(void (__thiscall ***)(int, int))v199)(v199, 1); /*0x7ba060*/
      v197 = flt_B43110[0]; /*0x7ba062*/
    }
    flt_B430D4 = v197; /*0x7ba069*/
    if ( v197 != 0.0 ) /*0x7ba06e*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v197) + 4)); /*0x7ba074*/
  }
  v200 = sub_7A98E0(); /*0x7ba07f*/
  result = LODWORD(flt_B43110[2]); /*0x7ba081*/
  if ( (NiScreenPolygon *)LODWORD(flt_B43110[2]) != v200 ) /*0x7ba088*/
  {
    if ( result ) /*0x7ba08c*/
    {
      v202 = flt_B43110[2]; /*0x7ba08e*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x7ba094*/
      if ( !result && v202 != 0.0 ) /*0x7ba0a0*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v202))(COERCE_FLOAT(LODWORD(v202)), 1); /*0x7ba0aa*/
    }
    LODWORD(flt_B43110[2]) = v200; /*0x7ba0ae*/
    if ( v200 ) /*0x7ba0b4*/
      return InterlockedIncrement((volatile LONG *)v200 + 1); /*0x7ba0ba*/
  }
  return result; /*0x7ba0c0*/
}
