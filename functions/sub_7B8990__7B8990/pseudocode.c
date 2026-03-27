LONG sub_7B8990()
{
  NiPixelData *v0; // eax
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
  NiPixelData *v22; // eax
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
  NiPixelData *v35; // eax
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
  NiPixelData *v56; // eax
  NiPixelData *v57; // eax
  double v58; // st7
  int v59; // ecx
  _BYTE *v60; // ebx
  int v61; // edi
  _BYTE *v62; // esi
  double v63; // st7
  double v64; // st5
  double v65; // rt1
  NiPixelData *v66; // eax
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
  NiPixelData *v83; // eax
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
  int v95; // eax
  void (__thiscall ***v96)(_DWORD, int); // edi
  NiPixelData *v97; // eax
  NiPixelData *v98; // eax
  int v99; // ecx
  _BYTE *v100; // ecx
  int v101; // esi
  int v102; // edx
  NiSourceTexture *TexturePixelData; // esi
  int v104; // eax
  void (__thiscall ***v105)(_DWORD, int); // edi
  NiPixelData *v106; // eax
  NiPixelData *v107; // eax
  int v108; // ecx
  _BYTE *v109; // ecx
  int v110; // esi
  int v111; // edx
  NiSourceTexture *v112; // esi
  int v113; // eax
  void (__thiscall ***v114)(_DWORD, int); // edi
  NiPixelData *v115; // eax
  NiPixelData *v116; // eax
  int v117; // ecx
  _BYTE *v118; // ecx
  int v119; // esi
  int v120; // edx
  NiSourceTexture *v121; // esi
  int v122; // eax
  void (__thiscall ***v123)(_DWORD, int); // edi
  int *v124; // edi
  int v125; // eax
  bool v126; // zf
  void (__thiscall ***v127)(_DWORD, int); // esi
  int v128; // eax
  void (__thiscall ***v129)(_DWORD, int); // esi
  int *v130; // edi
  int v131; // eax
  void (__thiscall ***v132)(_DWORD, int); // esi
  int v133; // eax
  void (__thiscall ***v134)(_DWORD, int); // esi
  NiPixelData *v135; // eax
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
  NiPixelData *v147; // eax
  NiPixelData *v148; // eax
  int v149; // ecx
  _BYTE *v150; // ecx
  int v151; // esi
  int v152; // edx
  NiSourceTexture *v153; // esi
  int v154; // eax
  void (__thiscall ***v155)(_DWORD, int); // edi
  NiSourceTexture *v156; // esi
  int v157; // eax
  void (__thiscall ***v158)(_DWORD, int); // edi
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
  int v169; // eax
  void (__thiscall ***v170)(_DWORD, int); // edi
  NiPixelData *v171; // eax
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
  int v197; // eax
  void (__thiscall ***v198)(_DWORD, int); // edi
  int v199; // esi
  NiScreenPolygon *v200; // edi
  LONG result; // eax
  int (__thiscall ***v202)(_DWORD, int); // esi
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
  int v242; // [esp+8Ch] [ebp-1BCh] BYREF
  int v243; // [esp+90h] [ebp-1B8h]
  int v244; // [esp+94h] [ebp-1B4h]
  int v245; // [esp+98h] [ebp-1B0h]
  float v246; // [esp+9Ch] [ebp-1ACh]
  int v247; // [esp+A0h] [ebp-1A8h] BYREF
  float v248; // [esp+A4h] [ebp-1A4h]
  float v249; // [esp+A8h] [ebp-1A0h]
  float v250; // [esp+ACh] [ebp-19Ch]
  char v251[72]; // [esp+B0h] [ebp-198h] BYREF
  char Src[268]; // [esp+F8h] [ebp-150h] BYREF
  int v253; // [esp+244h] [ebp-4h]

  sub_70F010(v251, &unk_B265E0);
  v0 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v0;
  v253 = 0;
  if ( v0 )
    v1 = NiPixelData::NiPixelData(v0, 0x80u, 0x80u, (int)v251, 1u, 1);
  else
    v1 = 0;
  v2 = 0.0;
  v3 = dbl_A4D910;
  v4 = *((_DWORD *)v1 + 0x14) + **((_DWORD **)v1 + 0x17);
  v249 = *(float *)&v1;
  v253 = 0xFFFFFFFF;
  v246 = 0.0;
  v5 = (_BYTE *)(v4 + 1);
  while ( 1 )
  {
    v7 = 0;
    v8 = v5;
    v9 = v3;
    v10 = v3 - v2;
    v11 = v9;
    v248 = v10;
    v12 = (float)0.0;
    do
    {
      v209 = v248;
      v229 = v11 - v12;
      *(float *)&v243 = v229 * v229 + v248 * v248 + dbl_A37650;
      *(float *)&v243 = sqrt(*(float *)&v243);
      v13 = *(float *)&v243;
      v8[2] = 0;
      *(float *)&v243 = 1.0 / v13;
      v14 = *(float *)&v243;
      v15 = dbl_A4D910;
      *(float *)&v243 = *(float *)&v243 * v15;
      v210 = v14 * v209;
      v16 = v14 * v229;
      v17 = v15;
      v230 = v16;
      v18 = *(float *)&v243;
      v243 = v203 | 0xC00;
      v19 = dbl_A2FAA0;
      v20 = dbl_A3DDD8;
      v8[1] = (int)((v18 + 1.0) * v19 * v20);
      *v8 = (int)((v210 + 1.0) * v19 * v20);
      ++v7;
      v11 = v17;
      v243 = (int)((v230 + 1.0) * v19 * v20);
      v8[0xFFFFFFFF] = v243;
      v8 += 4;
      v211 = (float)v7;
      v12 = v211;
    }
    while ( v211 < (double)flt_A2FFE8 );
    ++LODWORD(v246);
    v21 = (double)SLODWORD(v246);
    v5 += 0x200;
    if ( dbl_A3F428 <= v21 )
      break;
    v6 = v21;
    v3 = v11;
    v2 = v6;
  }
  ++*(_DWORD *)(LODWORD(v249) + 0x68);
  v22 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v22;
  v253 = 1;
  if ( v22 )
    v23 = NiPixelData::NiPixelData(v22, 0x80u, 0x80u, (int)v251, 1u, 1);
  else
    v23 = 0;
  v24 = 0.0;
  v25 = *((_DWORD *)v23 + 0x14) + **((_DWORD **)v23 + 0x17);
  v243 = (int)v23;
  v253 = 0xFFFFFFFF;
  v246 = 0.0;
  v26 = (_BYTE *)(v25 + 1);
  do
  {
    v27 = 0;
    v28 = v26;
    v248 = dbl_A4D910 - v24;
    v29 = (float)0.0;
    do
    {
      v231 = v248;
      v212 = v29 - dbl_A4D910;
      *(float *)&v244 = v212 * v212 + v248 * v248 + dbl_A37650;
      *(float *)&v244 = sqrt(*(float *)&v244);
      v30 = *(float *)&v244;
      ++v27;
      v28[2] = 0;
      *(float *)&v244 = 1.0 / v30;
      v31 = *(float *)&v244;
      *(float *)&v244 = dbl_A8F638 * *(float *)&v244;
      v232 = v31 * v231;
      v213 = v31 * v212;
      v32 = *(float *)&v244;
      v244 = v203 | 0xC00;
      v33 = dbl_A2FAA0;
      v34 = dbl_A3DDD8;
      v28[1] = (int)((v32 + 1.0) * v33 * v34);
      *v28 = (int)((v232 + 1.0) * v33 * v34);
      v28 += 4;
      v244 = (int)((v213 + 1.0) * v33 * v34);
      v28[0xFFFFFFFB] = v244;
      v214 = (float)v27;
      v29 = v214;
    }
    while ( v214 < (double)flt_A2FFE8 );
    ++LODWORD(v246);
    v24 = (double)SLODWORD(v246);
    v26 += 0x200;
  }
  while ( dbl_A3F428 > v24 );
  ++*(_DWORD *)(v243 + 0x68);
  v35 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v35;
  v253 = 2;
  if ( v35 )
    v36 = NiPixelData::NiPixelData(v35, 0x80u, 0x80u, (int)v251, 1u, 1);
  else
    v36 = 0;
  v37 = 0.0;
  v38 = dbl_A4D910;
  v39 = *((_DWORD *)v36 + 0x14) + **((_DWORD **)v36 + 0x17);
  v244 = (int)v36;
  v253 = 0xFFFFFFFF;
  v215 = 0;
  v40 = (_BYTE *)(v39 + 1);
  while ( 1 )
  {
    v42 = 0;
    v204 = 0.0;
    v43 = v40;
    v44 = v38;
    v45 = v37 - v38;
    v46 = v44;
    v250 = v45;
    v47 = (float)0.0;
    do
    {
      v233 = v47 - v46;
      v248 = v250;
      *(float *)&v245 = v250 * v250 + v233 * v233 + dbl_A37650;
      *(float *)&v245 = sqrt(*(float *)&v245);
      v48 = *(float *)&v245;
      v43[2] = 0;
      *(float *)&v245 = 1.0 / v48;
      v49 = *(float *)&v245;
      v234 = *(float *)&v245 * v233;
      v245 = LOWORD(v204) | 0xC00;
      v50 = dbl_A4D910;
      v221 = v49 * v50;
      v51 = v49 * v248;
      v52 = v50;
      v248 = v51;
      v53 = dbl_A2FAA0;
      v54 = dbl_A3DDD8;
      v43[1] = (int)((v234 + 1.0) * v53 * v54);
      *v43 = (int)((v221 + 1.0) * v53 * v54);
      ++v42;
      v46 = v52;
      v245 = (int)((v248 + 1.0) * v53 * v54);
      v43[0xFFFFFFFF] = v245;
      v43 += 4;
      v204 = (float)v42;
      v47 = v204;
    }
    while ( v204 < (double)flt_A2FFE8 );
    v55 = (double)++v215;
    v40 += 0x200;
    if ( dbl_A3F428 <= v55 )
      break;
    v41 = v55;
    v38 = v46;
    v37 = v41;
  }
  ++*(_DWORD *)(v244 + 0x68);
  v56 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v56;
  v253 = 3;
  if ( v56 )
    v57 = NiPixelData::NiPixelData(v56, 0x80u, 0x80u, (int)v251, 1u, 1);
  else
    v57 = 0;
  v58 = 0.0;
  v59 = *((_DWORD *)v57 + 0x14) + **((_DWORD **)v57 + 0x17);
  v250 = *(float *)&v57;
  v253 = 0xFFFFFFFF;
  v216 = 0;
  v60 = (_BYTE *)(v59 + 1);
  do
  {
    v61 = 0;
    v62 = v60;
    *(float *)&v245 = dbl_A4D910 - v58;
    v63 = (float)0.0;
    do
    {
      v235 = v63 - dbl_A4D910;
      v248 = *(float *)&v245;
      v222 = *(float *)&v245 * *(float *)&v245 + v235 * v235 + dbl_A37650;
      v223 = sqrt(v222);
      ++v61;
      v62[2] = 0;
      v224 = 1.0 / v223;
      v236 = v224 * v235;
      v246 = dbl_A8F638 * v224;
      v248 = v224 * v248;
      v64 = dbl_A2FAA0;
      v65 = dbl_A3DDD8;
      v62[1] = (int)((v236 + 1.0) * v64 * v65);
      *v62 = (int)((v246 + 1.0) * v64 * v65);
      v62 += 4;
      v62[0xFFFFFFFB] = (int)((v248 + 1.0) * v64 * v65);
      v205 = (float)v61;
      v63 = v205;
    }
    while ( v205 < (double)flt_A2FFE8 );
    v58 = (double)++v216;
    v60 += 0x200;
  }
  while ( dbl_A3F428 > v58 );
  ++*(_DWORD *)(LODWORD(v250) + 0x68);
  v66 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v66;
  v253 = 4;
  if ( v66 )
    v67 = NiPixelData::NiPixelData(v66, 0x80u, 0x80u, (int)v251, 1u, 1);
  else
    v67 = 0;
  v68 = 0.0;
  v69 = dbl_A4D910;
  v70 = *((_DWORD *)v67 + 0x14) + **((_DWORD **)v67 + 0x17);
  v245 = (int)v67;
  v253 = 0xFFFFFFFF;
  v246 = 0.0;
  v71 = (_BYTE *)(v70 + 1);
  while ( 1 )
  {
    v73 = 0;
    v74 = v71;
    v75 = v69;
    v76 = v69 - v68;
    v77 = v75;
    v248 = v76;
    v78 = (float)0.0;
    do
    {
      v237 = v78 - v77;
      v217 = v248;
      v225 = v248 * v248 + v237 * v237 + dbl_A37650;
      v226 = sqrt(v225);
      ++v73;
      v74[2] = 0;
      v227 = 1.0 / v226;
      v238 = v227 * v237;
      v218 = v227 * v217;
      v79 = dbl_A4D910;
      *(float *)&v247 = v227 * v79;
      v80 = dbl_A2FAA0;
      v81 = dbl_A3DDD8;
      v74[1] = (int)((v238 + 1.0) * v80 * v81);
      *v74 = (int)((v218 + 1.0) * v80 * v81);
      v74 += 4;
      v77 = v79;
      v247 = (int)((*(float *)&v247 + 1.0) * v80 * v81);
      v74[0xFFFFFFFB] = v247;
      v206 = (float)v73;
      v78 = v206;
    }
    while ( v206 < (double)flt_A2FFE8 );
    ++LODWORD(v246);
    v82 = (double)SLODWORD(v246);
    v71 += 0x200;
    if ( dbl_A3F428 <= v82 )
      break;
    v72 = v82;
    v69 = v77;
    v68 = v72;
  }
  ++*(_DWORD *)(v245 + 0x68);
  v83 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v83;
  v253 = 5;
  if ( v83 )
    v84 = NiPixelData::NiPixelData(v83, 0x80u, 0x80u, (int)v251, 1u, 1);
  else
    v84 = 0;
  v85 = 0.0;
  v86 = *((_DWORD *)v84 + 0x14) + **((_DWORD **)v84 + 0x17);
  v253 = 0xFFFFFFFF;
  v246 = 0.0;
  v228 = (_BYTE *)(v86 + 1);
  do
  {
    v87 = v228;
    v207 = 0.0;
    v88 = 0;
    v248 = dbl_A4D910 - v85;
    v89 = (float)0.0;
    do
    {
      v239 = dbl_A4D910 - v89;
      v219 = v248;
      *(float *)&v247 = v248 * v248 + v239 * v239 + dbl_A37650;
      *(float *)&v247 = sqrt(*(float *)&v247);
      v90 = *(float *)&v247;
      ++v88;
      v87[2] = 0;
      *(float *)&v247 = 1.0 / v90;
      v91 = *(float *)&v247;
      v240 = *(float *)&v247 * v239;
      v247 = LOWORD(v207) | 0xC00;
      v220 = v91 * v219;
      *(float *)&v242 = v91 * dbl_A8F638;
      v92 = dbl_A2FAA0;
      v93 = dbl_A3DDD8;
      v87[1] = (int)((v240 + 1.0) * v92 * v93);
      v247 = (int)((v220 + 1.0) * v92 * v93);
      *v87 = v247;
      v87 += 4;
      v242 = (int)((*(float *)&v242 + 1.0) * v92 * v93);
      v87[0xFFFFFFFB] = v242;
      v207 = (float)v88;
      v89 = v207;
    }
    while ( v207 < (double)flt_A2FFE8 );
    v228 += 0x200;
    ++LODWORD(v246);
    v85 = (double)SLODWORD(v246);
  }
  while ( dbl_A3F428 > v85 );
  ++*((_DWORD *)v84 + 0x1A);
  v94 = sub_720A30(
          SLODWORD(v249),
          v243,
          v244,
          SLODWORD(v250),
          v245,
          (int)v84,
          (int)dword_B43104,
          (PixelLayout *)dword_B256D0);
  v95 = dword_B430EC;
  if ( (NiSourceTexture *)dword_B430EC == v94 )
  {
LABEL_53:
    if ( v95 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( v95 )
  {
    v96 = (void (__thiscall ***)(_DWORD, int))dword_B430EC;
    if ( !InterlockedDecrement((volatile LONG *)(v95 + 4)) )
    {
      if ( v96 )
        (**v96)(v96, 1);
    }
  }
  dword_B430EC = (int)v94;
  if ( v94 )
  {
    InterlockedIncrement((volatile LONG *)&v94->members);
    v95 = dword_B430EC;
    goto LABEL_53;
  }
LABEL_54:
  nullsub_return0_0arg();
LABEL_55:
  v97 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v97;
  v253 = 6;
  if ( v97 )
    v98 = NiPixelData::NiPixelData(v97, 0x10u, 0x10u, (int)&unk_B25E48, 1u, 1);
  else
    v98 = 0;
  v99 = *((_DWORD *)v98 + 0x14) + **((_DWORD **)v98 + 0x17);
  v253 = 0xFFFFFFFF;
  v100 = (_BYTE *)(v99 + 2);
  v101 = 0x10;
  do
  {
    v102 = 0x10;
    do
    {
      v100[0xFFFFFFFE] = 0x80;
      v100[0xFFFFFFFF] = 0x80;
      *v100 = 0xFF;
      v100 += 3;
      --v102;
    }
    while ( v102 );
    --v101;
  }
  while ( v101 );
  ++*((_DWORD *)v98 + 0x1A);
  TexturePixelData = NiSourceTexture::LoadTexturePixelData(v98, (PixelLayout *)dword_B256D0);
  v104 = dword_B430DC;
  if ( (NiSourceTexture *)dword_B430DC == TexturePixelData )
  {
LABEL_69:
    if ( v104 )
      goto LABEL_71;
    goto LABEL_70;
  }
  if ( v104 )
  {
    v105 = (void (__thiscall ***)(_DWORD, int))dword_B430DC;
    if ( !InterlockedDecrement((volatile LONG *)(v104 + 4)) )
    {
      if ( v105 )
        (**v105)(v105, 1);
    }
  }
  dword_B430DC = (int)TexturePixelData;
  if ( TexturePixelData )
  {
    InterlockedIncrement((volatile LONG *)&TexturePixelData->members);
    v104 = dword_B430DC;
    goto LABEL_69;
  }
LABEL_70:
  nullsub_return0_0arg();
LABEL_71:
  v106 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v106;
  v253 = 7;
  if ( v106 )
    v107 = NiPixelData::NiPixelData(v106, 0x10u, 0x10u, (int)&unk_B25E00, 1u, 1);
  else
    v107 = 0;
  v108 = *((_DWORD *)v107 + 0x14) + **((_DWORD **)v107 + 0x17);
  v253 = 0xFFFFFFFF;
  v109 = (_BYTE *)(v108 + 2);
  v110 = 0x10;
  do
  {
    v111 = 0x10;
    do
    {
      v109[0xFFFFFFFE] = 0x80;
      v109[0xFFFFFFFF] = 0x80;
      *v109 = 0xFF;
      v109[1] = 0x40;
      v109 += 4;
      --v111;
    }
    while ( v111 );
    --v110;
  }
  while ( v110 );
  ++*((_DWORD *)v107 + 0x1A);
  v112 = NiSourceTexture::LoadTexturePixelData(v107, (PixelLayout *)dword_B256D0);
  v113 = dword_B430F0;
  if ( (NiSourceTexture *)dword_B430F0 == v112 )
  {
LABEL_85:
    if ( v113 )
      goto LABEL_87;
    goto LABEL_86;
  }
  if ( v113 )
  {
    v114 = (void (__thiscall ***)(_DWORD, int))dword_B430F0;
    if ( !InterlockedDecrement((volatile LONG *)(v113 + 4)) )
    {
      if ( v114 )
        (**v114)(v114, 1);
    }
  }
  dword_B430F0 = (int)v112;
  if ( v112 )
  {
    InterlockedIncrement((volatile LONG *)&v112->members);
    v113 = dword_B430F0;
    goto LABEL_85;
  }
LABEL_86:
  nullsub_return0_0arg();
LABEL_87:
  v115 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v115;
  v253 = 8;
  if ( v115 )
    v116 = NiPixelData::NiPixelData(v115, 0x10u, 0x10u, (int)&unk_B25E48, 1u, 1);
  else
    v116 = 0;
  v117 = *((_DWORD *)v116 + 0x14) + **((_DWORD **)v116 + 0x17);
  v253 = 0xFFFFFFFF;
  v118 = (_BYTE *)(v117 + 2);
  v119 = 0x10;
  do
  {
    v120 = 0x10;
    do
    {
      v118[0xFFFFFFFE] = 0;
      v118[0xFFFFFFFF] = 0;
      *v118 = 0;
      v118 += 3;
      --v120;
    }
    while ( v120 );
    --v119;
  }
  while ( v119 );
  ++*((_DWORD *)v116 + 0x1A);
  v121 = NiSourceTexture::LoadTexturePixelData(v116, (PixelLayout *)dword_B256D0);
  v122 = dword_B430E0;
  if ( (NiSourceTexture *)dword_B430E0 == v121 )
  {
LABEL_101:
    if ( v122 )
      goto LABEL_103;
    goto LABEL_102;
  }
  if ( v122 )
  {
    v123 = (void (__thiscall ***)(_DWORD, int))dword_B430E0;
    if ( !InterlockedDecrement((volatile LONG *)(v122 + 4)) )
    {
      if ( v123 )
        (**v123)(v123, 1);
    }
  }
  dword_B430E0 = (int)v121;
  if ( v121 )
  {
    InterlockedIncrement((volatile LONG *)&v121->members);
    v122 = dword_B430E0;
    goto LABEL_101;
  }
LABEL_102:
  nullsub_return0_0arg();
LABEL_103:
  v124 = sub_7B8200(&v242, "Data\\Textures\\Effects\\WindowEnvironmentMap01.dds", 1, 1);
  v125 = dword_B43100;
  v126 = dword_B43100 == *v124;
  v253 = 9;
  if ( !v126 )
  {
    if ( v125 )
    {
      v127 = (void (__thiscall ***)(_DWORD, int))v125;
      if ( !InterlockedDecrement((volatile LONG *)(v125 + 4)) )
        (**v127)(v127, 1);
    }
    v128 = *v124;
    v126 = *v124 == 0;
    dword_B43100 = *v124;
    if ( !v126 )
      InterlockedIncrement((volatile LONG *)(v128 + 4));
  }
  v129 = (void (__thiscall ***)(_DWORD, int))v242;
  v253 = 0xFFFFFFFF;
  if ( *(float *)&v242 != 0.0 && !InterlockedDecrement((volatile LONG *)(v242 + 4)) )
  {
    if ( v129 )
      (**v129)(v129, 1);
  }
  v130 = sub_7B8200(&v247, "Data\\Textures\\Effects\\WindowEnvironmentMap02.dds", 1, 1);
  v131 = dword_B430E4;
  v126 = dword_B430E4 == *v130;
  v253 = 0xA;
  if ( !v126 )
  {
    if ( v131 )
    {
      v132 = (void (__thiscall ***)(_DWORD, int))v131;
      if ( !InterlockedDecrement((volatile LONG *)(v131 + 4)) )
        (**v132)(v132, 1);
    }
    v133 = *v130;
    v126 = *v130 == 0;
    dword_B430E4 = *v130;
    if ( !v126 )
      InterlockedIncrement((volatile LONG *)(v133 + 4));
  }
  v134 = (void (__thiscall ***)(_DWORD, int))v247;
  v253 = 0xFFFFFFFF;
  if ( *(float *)&v247 != 0.0 && !InterlockedDecrement((volatile LONG *)(v247 + 4)) )
  {
    if ( v134 )
      (**v134)(v134, 1);
  }
  v135 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v135;
  v253 = 0xB;
  if ( v135 )
    v136 = NiPixelData::NiPixelData(v135, 4u, 4u, (int)&unk_B25E00, 1u, 1);
  else
    v136 = 0;
  v137 = *((_DWORD *)v136 + 0x14) + **((_DWORD **)v136 + 0x17);
  v126 = byte_B42D40 == 0;
  v253 = 0xFFFFFFFF;
  if ( v126 || !ImageSpaceEffectEnabled || ShaderPackage < 2 )
  {
    v141 = (_BYTE *)(v137 + 2);
    v142 = 4;
    do
    {
      v143 = 4;
      do
      {
        v141[0xFFFFFFFE] = 0;
        v141[0xFFFFFFFF] = 0;
        *v141 = 0;
        v141[1] = 0x40;
        v141 += 4;
        --v143;
      }
      while ( v143 );
      --v142;
    }
    while ( v142 );
  }
  else
  {
    v138 = (_BYTE *)(v137 + 2);
    v139 = 4;
    do
    {
      v140 = 4;
      do
      {
        v138[0xFFFFFFFE] = 0xE6;
        v138[0xFFFFFFFF] = 0xD4;
        *v138 = 0xB8;
        v138[1] = 0x40;
        v138 += 4;
        --v140;
      }
      while ( v140 );
      --v139;
    }
    while ( v139 );
  }
  ++*((_DWORD *)v136 + 0x1A);
  v144 = NiSourceTexture::LoadTexturePixelData(v136, (PixelLayout *)dword_B256D0);
  v145 = dword_B4311C;
  if ( (NiSourceTexture *)dword_B4311C == v144 )
  {
LABEL_145:
    if ( v145 )
      goto LABEL_147;
    goto LABEL_146;
  }
  if ( v145 )
  {
    v146 = (void (__thiscall ***)(_DWORD, int))dword_B4311C;
    if ( !InterlockedDecrement((volatile LONG *)(v145 + 4)) )
    {
      if ( v146 )
        (**v146)(v146, 1);
    }
  }
  dword_B4311C = (int)v144;
  if ( v144 )
  {
    InterlockedIncrement((volatile LONG *)&v144->members);
    v145 = dword_B4311C;
    goto LABEL_145;
  }
LABEL_146:
  nullsub_return0_0arg();
LABEL_147:
  v147 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v147;
  v253 = 0xC;
  if ( v147 )
    v148 = NiPixelData::NiPixelData(v147, 4u, 4u, (int)&unk_B25E00, 1u, 1);
  else
    v148 = 0;
  v149 = *((_DWORD *)v148 + 0x14) + **((_DWORD **)v148 + 0x17);
  v253 = 0xFFFFFFFF;
  v150 = (_BYTE *)(v149 + 2);
  v151 = 4;
  do
  {
    v152 = 4;
    do
    {
      v150[0xFFFFFFFE] = 0;
      v150[0xFFFFFFFF] = 0;
      *v150 = 0;
      v150[1] = 0xFF;
      v150 += 4;
      --v152;
    }
    while ( v152 );
    --v151;
  }
  while ( v151 );
  ++*((_DWORD *)v148 + 0x1A);
  v153 = NiSourceTexture::LoadTexturePixelData(v148, (PixelLayout *)dword_B256D0);
  v154 = dword_B43120;
  if ( (NiSourceTexture *)dword_B43120 == v153 )
  {
LABEL_161:
    if ( v154 )
      goto LABEL_163;
    goto LABEL_162;
  }
  if ( v154 )
  {
    v155 = (void (__thiscall ***)(_DWORD, int))dword_B43120;
    if ( !InterlockedDecrement((volatile LONG *)(v154 + 4)) )
    {
      if ( v155 )
        (**v155)(v155, 1);
    }
  }
  dword_B43120 = (int)v153;
  if ( v153 )
  {
    InterlockedIncrement((volatile LONG *)&v153->members);
    v154 = dword_B43120;
    goto LABEL_161;
  }
LABEL_162:
  nullsub_return0_0arg();
LABEL_163:
  _sprintf(Src, "%seyereflection.dds", "Data\\Textures\\Effects\\");
  v156 = sub_720F80(Src, Src, Src, Src, Src, Src, (int)dword_B43104, (PixelLayout *)dword_B256D0);
  v157 = dword_B43114;
  if ( (NiSourceTexture *)dword_B43114 == v156 )
    goto LABEL_170;
  if ( v157 )
  {
    v158 = (void (__thiscall ***)(_DWORD, int))dword_B43114;
    if ( !InterlockedDecrement((volatile LONG *)(v157 + 4)) )
    {
      if ( v158 )
        (**v158)(v158, 1);
    }
  }
  dword_B43114 = (int)v156;
  if ( v156 )
  {
    InterlockedIncrement((volatile LONG *)&v156->members);
    v157 = dword_B43114;
LABEL_170:
    if ( v157 )
      goto LABEL_172;
  }
  nullsub_return0_0arg();
LABEL_172:
  _sprintf(Src, "%sreflection.dds", "Data\\Textures\\Effects\\");
  v159 = sub_720F80(Src, Src, Src, Src, Src, Src, (int)dword_B43104, (PixelLayout *)dword_B256D0);
  v160 = dword_B430F4;
  if ( (NiSourceTexture *)dword_B430F4 == v159 )
    goto LABEL_179;
  if ( v160 )
  {
    v161 = (void (__thiscall ***)(_DWORD, int))dword_B430F4;
    if ( !InterlockedDecrement((volatile LONG *)(v160 + 4)) )
    {
      if ( v161 )
        (**v161)(v161, 1);
    }
  }
  dword_B430F4 = (int)v159;
  if ( v159 )
  {
    InterlockedIncrement((volatile LONG *)&v159->members);
    v160 = dword_B430F4;
LABEL_179:
    if ( v160 )
      goto LABEL_181;
  }
  nullsub_return0_0arg();
LABEL_181:
  _sprintf(Src, "%saniso.dds", "Data\\Textures\\Effects\\");
  TextureByFilename = NiSourceTexture::LoadTextureByFilename(Src, (PixelLayout *)dword_B256D0, 1u);
  v163 = dword_B430F8;
  if ( (NiSourceTexture *)dword_B430F8 != TextureByFilename )
  {
    if ( v163 )
    {
      v164 = (void (__thiscall ***)(_DWORD, int))dword_B430F8;
      if ( !InterlockedDecrement((volatile LONG *)(v163 + 4)) )
      {
        if ( v164 )
          (**v164)(v164, 1);
      }
    }
    dword_B430F8 = (int)TextureByFilename;
    if ( TextureByFilename )
      InterlockedIncrement((volatile LONG *)&TextureByFilename->members);
  }
  _sprintf(Src, "%sblooddecal.dds", "Data\\Textures\\Effects\\");
  v165 = NiSourceTexture::LoadTextureByFilename(Src, (PixelLayout *)dword_B256D0, 1u);
  v166 = dword_B43128;
  if ( (NiSourceTexture *)dword_B43128 != v165 )
  {
    if ( v166 )
    {
      v167 = (void (__thiscall ***)(_DWORD, int))dword_B43128;
      if ( !InterlockedDecrement((volatile LONG *)(v166 + 4)) )
      {
        if ( v167 )
          (**v167)(v167, 1);
      }
    }
    dword_B43128 = (int)v165;
    if ( v165 )
      InterlockedIncrement((volatile LONG *)&v165->members);
  }
  if ( !dword_B430E8 )
  {
    _sprintf(Src, "%sterrainnoise.dds", "Data\\Textures\\Effects\\");
    v168 = NiSourceTexture::LoadTextureByFilename(Src, (PixelLayout *)dword_B256D0, 1u);
    v169 = dword_B430E8;
    if ( (NiSourceTexture *)dword_B430E8 != v168 )
    {
      if ( v169 )
      {
        v170 = (void (__thiscall ***)(_DWORD, int))dword_B430E8;
        if ( !InterlockedDecrement((volatile LONG *)(v169 + 4)) )
        {
          if ( v170 )
            (**v170)(v170, 1);
        }
      }
      dword_B430E8 = (int)v168;
      if ( v168 )
        InterlockedIncrement((volatile LONG *)&v168->members);
    }
  }
  v171 = (NiPixelData *)FormHeapAlloc(0x70u);
  v242 = (int)v171;
  v253 = 0xD;
  if ( v171 )
    v172 = NiPixelData::NiPixelData(v171, 0x80u, 0x80u, (int)&unk_B25E48, 1u, 1);
  else
    v172 = 0;
  v173 = *((_DWORD *)v172 + 0x14) + **((_DWORD **)v172 + 0x17);
  v253 = 0xFFFFFFFF;
  v246 = 0.0;
  v174 = v173 + 2;
  do
  {
    v175 = dbl_A8F550;
    v176 = 0;
    v177 = 1.0;
    v208 = 0;
    v249 = (float)SLODWORD(v246);
    v178 = v249;
    while ( 1 )
    {
      *(float *)&v242 = (float)v208;
      v179 = *(float *)&v242;
      if ( *(float *)&v242 >= v175 )
      {
        *(float *)&v244 = (v179 - v175) / v175;
        v181 = 1.0;
      }
      else
      {
        v180 = 1.0 - v179 / v175;
        v181 = 1.0;
        *(float *)&v244 = v180;
      }
      v182 = v181;
      v183 = v178;
      v184 = v182;
      v185 = v183 >= v175 ? (v183 - v175) / v175 : v184 - v183 / v175;
      v186 = v184;
      v187 = v185;
      v188 = v186;
      *(float *)&v243 = v187;
      *(float *)&v242 = *(float *)&v243 * *(float *)&v243 + *(float *)&v244 * *(float *)&v244;
      if ( *(float *)&v242 <= v186 )
      {
        v243 = v242;
        v189 = v177;
        v190 = *(float *)&v242;
      }
      else
      {
        v189 = v177;
        v190 = *(float *)&v242;
        *(float *)&v243 = v189;
      }
      if ( *(float *)&v243 >= dbl_A2FC68 )
      {
        v192 = v189;
        v193 = v188;
        v191 = v192;
        if ( v193 >= v190 )
          v191 = v190;
      }
      else
      {
        v191 = 0.0;
      }
      v241 = v191;
      v194 = v241;
      if ( sub_404F00(0) == 1 )
        v194 = 1.0 - v194;
      *(float *)&v242 = v194;
      *(float *)&v242 = *(float *)&v242 * dbl_A3DDD8;
      ++v176;
      v174 += 3;
      v242 = (int)floor(*(float *)&v242);
      v195 = v242;
      *(_BYTE *)(v174 - 5) = v242;
      *(_BYTE *)(v174 - 4) = v195;
      *(_BYTE *)(v174 - 3) = v195;
      v208 = v176;
      if ( v176 >= 0x80 )
        break;
      v175 = dbl_A8F550;
      v178 = v249;
      v177 = 1.0;
    }
    ++LODWORD(v246);
  }
  while ( SLODWORD(v246) < 0x80 );
  ++*((_DWORD *)v172 + 0x1A);
  v196 = NiSourceTexture::LoadTexturePixelData(v172, (PixelLayout *)dword_B256D0);
  v197 = dword_B43110;
  if ( (NiSourceTexture *)dword_B43110 != v196 )
  {
    if ( v197 )
    {
      v198 = (void (__thiscall ***)(_DWORD, int))dword_B43110;
      if ( !InterlockedDecrement((volatile LONG *)(v197 + 4)) )
      {
        if ( v198 )
          (**v198)(v198, 1);
      }
    }
    v197 = (int)v196;
    dword_B43110 = (int)v196;
    if ( v196 )
    {
      InterlockedIncrement((volatile LONG *)&v196->members);
      v197 = dword_B43110;
    }
  }
  v199 = dword_B430D4;
  if ( dword_B430D4 != v197 )
  {
    if ( v199 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v199 + 4)) )
        (**(void (__thiscall ***)(int, int))v199)(v199, 1);
      v197 = dword_B43110;
    }
    dword_B430D4 = v197;
    if ( v197 )
      InterlockedIncrement((volatile LONG *)(v197 + 4));
  }
  v200 = sub_7A98E0();
  result = dword_B43118;
  if ( (NiScreenPolygon *)dword_B43118 != v200 )
  {
    if ( result )
    {
      v202 = (int (__thiscall ***)(_DWORD, int))dword_B43118;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
      {
        if ( v202 )
          result = (**v202)(v202, 1);
      }
    }
    dword_B43118 = (int)v200;
    if ( v200 )
      return InterlockedIncrement((volatile LONG *)v200 + 1);
  }
  return result;
}
