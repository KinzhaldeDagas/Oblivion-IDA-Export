NiObjectNET *__cdecl sub_6FC010(float a1, int a2, int a3, _DWORD *a4)
{
  NiNode *v4; // eax
  NiColorAlpha *v5; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // esi
  NiPoint3 *v10; // ebx
  NiColorAlpha *v11; // eax
  int v12; // eax
  NiPoint3 *v13; // ecx
  UInt16 *v14; // ebp
  double v15; // st7
  int v16; // esi
  double v17; // st5
  double v18; // st6
  int v19; // edi
  float *p_x; // ebx
  double v21; // st7
  int v22; // ecx
  int v23; // esi
  float v24; // edx
  int v25; // esi
  double v26; // st7
  int v27; // eax
  double v28; // st6
  float v29; // edx
  int v30; // esi
  _DWORD *v31; // eax
  int v32; // edi
  float *v33; // ebx
  double v34; // st7
  double v35; // st7
  double v36; // st7
  int v37; // esi
  int v38; // esi
  int v39; // esi
  NiAVObject *v40; // ecx
  NiAVObject *v41; // esi
  NiObjectNET *v42; // ebx
  __int16 v43; // bp
  unsigned int v44; // edi
  unsigned int v45; // esi
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // eax
  int v50; // esi
  double v51; // st6
  float *v52; // ebp
  float *v53; // ebx
  float *v54; // edi
  double v55; // st7
  double v56; // st7
  double v57; // st6
  float *v58; // edi
  float *v59; // ebx
  int v60; // esi
  float *v61; // ebp
  NiAVObject *v62; // eax
  NiAVObject *v63; // esi
  float v65; // [esp+14h] [ebp-DCh]
  float v66; // [esp+14h] [ebp-DCh]
  float v67; // [esp+14h] [ebp-DCh]
  float v68; // [esp+14h] [ebp-DCh]
  float v69; // [esp+14h] [ebp-DCh]
  float v70; // [esp+14h] [ebp-DCh]
  float v71; // [esp+14h] [ebp-DCh]
  float v72; // [esp+14h] [ebp-DCh]
  float v73; // [esp+14h] [ebp-DCh]
  float v74; // [esp+14h] [ebp-DCh]
  NiPoint3 *v75; // [esp+14h] [ebp-DCh]
  int v76; // [esp+18h] [ebp-D8h]
  float v77; // [esp+18h] [ebp-D8h]
  _DWORD *v78; // [esp+18h] [ebp-D8h]
  float v79; // [esp+18h] [ebp-D8h]
  _DWORD *v80; // [esp+18h] [ebp-D8h]
  char *v81; // [esp+1Ch] [ebp-D4h]
  float v82; // [esp+1Ch] [ebp-D4h]
  char *v83; // [esp+1Ch] [ebp-D4h]
  float v84; // [esp+1Ch] [ebp-D4h]
  float v85; // [esp+1Ch] [ebp-D4h]
  float v86; // [esp+1Ch] [ebp-D4h]
  _DWORD *colors; // [esp+20h] [ebp-D0h]
  int colorsa; // [esp+20h] [ebp-D0h]
  NiColorAlpha *colors_4; // [esp+24h] [ebp-CCh]
  NiColorAlpha *colors_4a; // [esp+24h] [ebp-CCh]
  float v91; // [esp+28h] [ebp-C8h]
  float v92; // [esp+28h] [ebp-C8h]
  float v93; // [esp+28h] [ebp-C8h]
  double v94; // [esp+28h] [ebp-C8h]
  float v95; // [esp+2Ch] [ebp-C4h]
  float v96; // [esp+2Ch] [ebp-C4h]
  float v97; // [esp+30h] [ebp-C0h]
  float v98; // [esp+30h] [ebp-C0h]
  float v99; // [esp+30h] [ebp-C0h]
  float v100; // [esp+34h] [ebp-BCh]
  float *v101; // [esp+34h] [ebp-BCh]
  int v102; // [esp+34h] [ebp-BCh]
  NiPoint3 *vertices; // [esp+38h] [ebp-B8h]
  int verticesa; // [esp+38h] [ebp-B8h]
  float *vertices_4; // [esp+3Ch] [ebp-B4h]
  int vertices_4a; // [esp+3Ch] [ebp-B4h]
  UInt16 v107; // [esp+40h] [ebp-B0h]
  float v108; // [esp+40h] [ebp-B0h]
  float v109; // [esp+40h] [ebp-B0h]
  NiPoint3 *v110; // [esp+48h] [ebp-A8h]
  float v111; // [esp+48h] [ebp-A8h]
  float v112; // [esp+48h] [ebp-A8h]
  float v113; // [esp+4Ch] [ebp-A4h]
  float v114; // [esp+4Ch] [ebp-A4h]
  float v115; // [esp+4Ch] [ebp-A4h]
  float v116; // [esp+50h] [ebp-A0h]
  float v117; // [esp+50h] [ebp-A0h]
  float v118; // [esp+50h] [ebp-A0h]
  float v119; // [esp+50h] [ebp-A0h]
  float *v120; // [esp+54h] [ebp-9Ch]
  float v121; // [esp+54h] [ebp-9Ch]
  float v122; // [esp+54h] [ebp-9Ch]
  float v123; // [esp+58h] [ebp-98h]
  float v124; // [esp+5Ch] [ebp-94h]
  float v125; // [esp+60h] [ebp-90h]
  float v126; // [esp+60h] [ebp-90h]
  float v127; // [esp+60h] [ebp-90h]
  unsigned int v128; // [esp+64h] [ebp-8Ch]
  float v129; // [esp+68h] [ebp-88h]
  float v130; // [esp+6Ch] [ebp-84h]
  float v131; // [esp+6Ch] [ebp-84h]
  NiPoint3 *v132; // [esp+6Ch] [ebp-84h]
  float v133; // [esp+70h] [ebp-80h]
  float v134; // [esp+74h] [ebp-7Ch]
  float v135; // [esp+78h] [ebp-78h]
  float v136; // [esp+78h] [ebp-78h]
  NiObjectNET *v137; // [esp+7Ch] [ebp-74h]
  float v138; // [esp+80h] [ebp-70h]
  float v139; // [esp+84h] [ebp-6Ch]
  float v140; // [esp+88h] [ebp-68h]
  float v141; // [esp+8Ch] [ebp-64h]
  float v142; // [esp+94h] [ebp-5Ch]
  float v143; // [esp+98h] [ebp-58h]
  double v144; // [esp+9Ch] [ebp-54h]
  float v145; // [esp+9Ch] [ebp-54h]
  int v146; // [esp+A8h] [ebp-48h]
  char *v147; // [esp+ACh] [ebp-44h]
  float v148; // [esp+B0h] [ebp-40h]
  float v149; // [esp+B4h] [ebp-3Ch]
  float v150; // [esp+B8h] [ebp-38h]
  float v151; // [esp+C8h] [ebp-28h]
  float v152; // [esp+CCh] [ebp-24h]
  float v153; // [esp+D0h] [ebp-20h]
  float v154; // [esp+D4h] [ebp-1Ch]

  v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x6fc042*/
  v5 = 0; /*0x6fc04e*/
  if ( v4 ) /*0x6fc059*/
    v137 = (NiObjectNET *)NiNode::NiNode(v4, 0); /*0x6fc063*/
  else
    v137 = 0; /*0x6fc069*/
  NiObjectNET_SetName(v137, "BSTestObjects Sphere"); /*0x6fc081*/
  v6 = (double)a3; /*0x6fc086*/
  if ( a3 < 0 ) /*0x6fc096*/
    v6 = v6 + flt_A2FC78; /*0x6fc098*/
  v65 = v6; /*0x6fc09e*/
  v7 = v65; /*0x6fc0c1*/
  v141 = unk_B3F9A4 / v65; /*0x6fc0c3*/
  v8 = (double)a2; /*0x6fc0ca*/
  if ( a2 < 0 ) /*0x6fc0ce*/
    v8 = v8 + flt_A2FC78; /*0x6fc0d0*/
  v66 = v8; /*0x6fc0d6*/
  v9 = 2 * a2 + 2; /*0x6fc0da*/
  v140 = (unk_B3F9A4 + unk_B3F9A4) / v66; /*0x6fc0ff*/
  v138 = 1.0 / v66; /*0x6fc10e*/
  v139 = 1.0 / v7; /*0x6fc117*/
  vertices = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  v10 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  v110 = v10; /*0x6fc14b*/
  if ( a4 )
  {
    v11 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)(unsigned int)v9 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v9);
    v5 = v11; /*0x6fc169*/
    if ( v11 ) /*0x6fc17f*/
      sub_401080(v11, 0x10, v9, (void *(__thiscall *)(void *))sub_47EA50); /*0x6fc18a*/
    else
      v5 = 0; /*0x6fc191*/
  }
  colors_4 = v5; /*0x6fc1ac*/
  vertices_4 = (float *)FormHeapAlloc((unsigned __int64)(unsigned int)v9 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v9);
  v12 = FormHeapAlloc((unsigned __int64)(unsigned int)(6 * a2) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * a2);
  v13 = vertices; /*0x6fc1e2*/
  v14 = (UInt16 *)v12; /*0x6fc1ee*/
  vertices->x = 0.0; /*0x6fc201*/
  v144 = a1; /*0x6fc203*/
  vertices->y = 0.0; /*0x6fc20e*/
  v15 = a1; /*0x6fc215*/
  vertices->z = a1; /*0x6fc217*/
  v10->x = 0.0; /*0x6fc22c*/
  v10->y = 0.0; /*0x6fc232*/
  v16 = 0; /*0x6fc243*/
  v10->z = 1.0; /*0x6fc247*/
  if ( a4 ) /*0x6fc24a*/
  {
    *(_DWORD *)v5 = *a4; /*0x6fc252*/
    *((_DWORD *)v5 + 1) = a4[1]; /*0x6fc257*/
    *((_DWORD *)v5 + 2) = a4[2]; /*0x6fc25d*/
    *((_DWORD *)v5 + 3) = a4[3]; /*0x6fc263*/
  }
  v17 = 0.0; /*0x6fc27f*/
  v18 = 1.0; /*0x6fc27f*/
  *vertices_4 = kHeadBodyNormalMatchRadius; /*0x6fc285*/
  v113 = 0.0; /*0x6fc28b*/
  vertices_4[1] = 0.0; /*0x6fc28f*/
  v19 = 1; /*0x6fc292*/
  v76 = 0; /*0x6fc297*/
  if ( a2 ) /*0x6fc29b*/
  {
    v125 = sin(v141); /*0x6fc2b7*/
    v67 = cos(v141); /*0x6fc2c4*/
    v120 = vertices_4 + 2; /*0x6fc2e6*/
    p_x = &v10[1].x; /*0x6fc2f3*/
    v97 = v144 * v67; /*0x6fc2fa*/
    colors = (_DWORD *)((char *)colors_4 + 0x10); /*0x6fc2fe*/
    v135 = v67; /*0x6fc302*/
    v81 = (char *)((char *)vertices - (char *)v110); /*0x6fc306*/
    do /*0x6fc482*/
    {
      v21 = (double)v76; /*0x6fc326*/
      if ( v76 < 0 ) /*0x6fc32c*/
        v21 = v21 + flt_A2FC78; /*0x6fc32e*/
      v100 = v21 * v140; /*0x6fc33b*/
      v68 = sin(v100); /*0x6fc348*/
      v130 = -v68 * v125; /*0x6fc35e*/
      v69 = cos(v100); /*0x6fc36b*/
      v70 = v69 * v125; /*0x6fc383*/
      v91 = v130 * a1; /*0x6fc39a*/
      *(float *)((char *)p_x + (_DWORD)v81) = v91; /*0x6fc3a2*/
      v144 = a1; /*0x6fc3ab*/
      v95 = a1 * v70; /*0x6fc3bc*/
      *(float *)((char *)p_x + (_DWORD)v81 + 4) = v95; /*0x6fc3c4*/
      *(float *)((char *)p_x + (_DWORD)v81 + 8) = v97; /*0x6fc3ca*/
      v15 = a1; /*0x6fc3d6*/
      *p_x = v130; /*0x6fc3e4*/
      p_x[1] = v70; /*0x6fc3e6*/
      p_x[2] = v135; /*0x6fc3f2*/
      if ( a4 ) /*0x6fc3f9*/
      {
        *colors = *a4; /*0x6fc3fd*/
        colors[1] = a4[1]; /*0x6fc402*/
        colors[2] = a4[2]; /*0x6fc408*/
        colors[3] = a4[3]; /*0x6fc40e*/
      }
      *v120 = v113; /*0x6fc42b*/
      colors += 4; /*0x6fc431*/
      v113 = v113 + v138; /*0x6fc435*/
      v22 = v76; /*0x6fc439*/
      v120[1] = v139; /*0x6fc43d*/
      ++v19; /*0x6fc443*/
      p_x += 3; /*0x6fc446*/
      v120 += 2; /*0x6fc44b*/
      if ( v76 ) /*0x6fc44f*/
      {
        *(_WORD *)(v12 + 2 * v16) = 0; /*0x6fc451*/
        v23 = v16 + 1; /*0x6fc45b*/
        *(_WORD *)(v12 + 2 * v23++) = v19 - 2; /*0x6fc461*/
        *(_WORD *)(v12 + 2 * v23) = v19 - 1; /*0x6fc46c*/
        v16 = v23 + 1; /*0x6fc471*/
      }
      ++v76; /*0x6fc47e*/
    }
    while ( v22 + 1 < (unsigned int)a2 ); /*0x6fc482*/
    v10 = v110; /*0x6fc48a*/
    v13 = vertices; /*0x6fc490*/
    v17 = 0.0; /*0x6fc494*/
    v18 = 1.0; /*0x6fc494*/
  }
  *(_WORD *)(v12 + 2 * v16) = 0; /*0x6fc496*/
  v92 = v17; /*0x6fc49d*/
  v24 = v92; /*0x6fc4a1*/
  v96 = v17; /*0x6fc4a5*/
  v25 = v16 + 1; /*0x6fc4a9*/
  *(_WORD *)(v12 + 2 * v25) = v19 - 1; /*0x6fc4b3*/
  v98 = -v15; /*0x6fc4b8*/
  *(_WORD *)(v12 + 2 * v25 + 2) = 1; /*0x6fc4bc*/
  v26 = v18; /*0x6fc4c3*/
  v93 = v17; /*0x6fc4c8*/
  v27 = v19; /*0x6fc4d1*/
  v13[v27].x = v24; /*0x6fc4d3*/
  v28 = kTerrainLODQuadRayDirectionZ; /*0x6fc4de*/
  v13[v27].y = v96; /*0x6fc4e4*/
  v29 = v98; /*0x6fc4e8*/
  v99 = v28; /*0x6fc4ec*/
  v13[v27].z = v29; /*0x6fc4f0*/
  v10[v27].x = v93; /*0x6fc4fc*/
  v10[v27].y = v93; /*0x6fc503*/
  v10[v27].z = v99; /*0x6fc507*/
  v30 = v25 + 2; /*0x6fc512*/
  v107 = v19; /*0x6fc517*/
  if ( a4 ) /*0x6fc51b*/
  {
    v31 = (_DWORD *)((char *)colors_4 + 0x10 * v19); /*0x6fc524*/
    *v31 = *a4; /*0x6fc528*/
    v31[1] = a4[1]; /*0x6fc52d*/
    v31[2] = a4[2]; /*0x6fc533*/
    v31[3] = a4[3]; /*0x6fc539*/
  }
  vertices_4[2 * v19] = kHeadBodyNormalMatchRadius; /*0x6fc54e*/
  v129 = v26; /*0x6fc551*/
  vertices_4[2 * v19 + 1] = v129; /*0x6fc559*/
  v32 = v19 + 1; /*0x6fc571*/
  v82 = unk_B3F9A4 - v141; /*0x6fc576*/
  colorsa = a2; /*0x6fc57a*/
  v114 = v26; /*0x6fc57e*/
  v94 = v139; /*0x6fc589*/
  if ( a2 ) /*0x6fc595*/
  {
    v126 = sin(v82); /*0x6fc5a8*/
    v71 = cos(v82); /*0x6fc5b5*/
    v101 = &vertices_4[2 * v32]; /*0x6fc5cc*/
    v136 = v144 * v71; /*0x6fc5e5*/
    v33 = &v10[v32].x; /*0x6fc5e9*/
    v143 = v71; /*0x6fc5ec*/
    v77 = 1.0 - v139; /*0x6fc591*/
    v34 = v77; /*0x6fc5f3*/
    v78 = (_DWORD *)((char *)colors_4 + 0x10 * v32); /*0x6fc5f7*/
    v124 = v34; /*0x6fc5ff*/
    v83 = (char *)((char *)vertices - (char *)v110); /*0x6fc607*/
    do /*0x6fc784*/
    {
      if ( colorsa == a2 ) /*0x6fc61b*/
      {
        v35 = 0.0; /*0x6fc61d*/
      }
      else
      {
        v36 = (double)colorsa; /*0x6fc627*/
        if ( colorsa < 0 ) /*0x6fc62b*/
          v36 = v36 + flt_A2FC78; /*0x6fc62d*/
        v35 = v36 * v140; /*0x6fc633*/
      }
      v121 = v35; /*0x6fc63a*/
      v72 = sin(v121); /*0x6fc647*/
      v131 = -v72 * v126; /*0x6fc65d*/
      v73 = cos(v121); /*0x6fc66a*/
      v74 = v126 * v73; /*0x6fc682*/
      v133 = v131 * a1; /*0x6fc699*/
      *(float *)&v83[(_DWORD)v33] = v133; /*0x6fc6a5*/
      v134 = a1 * v74; /*0x6fc6b2*/
      *(float *)&v83[(_DWORD)v33 + 4] = v134; /*0x6fc6ba*/
      *(float *)&v83[(_DWORD)v33 + 8] = v136; /*0x6fc6c0*/
      *v33 = v131; /*0x6fc6e7*/
      v33[1] = v74; /*0x6fc6f2*/
      v33[2] = v143; /*0x6fc6f9*/
      if ( a4 ) /*0x6fc6fc*/
      {
        *v78 = *a4; /*0x6fc700*/
        v78[1] = a4[1]; /*0x6fc705*/
        v78[2] = a4[2]; /*0x6fc70b*/
        v78[3] = a4[3]; /*0x6fc711*/
      }
      *v101 = v114; /*0x6fc72b*/
      v101[1] = v124; /*0x6fc731*/
      v114 = v114 - v138; /*0x6fc737*/
      v101 += 2; /*0x6fc73b*/
      LOWORD(v32) = v32 + 1; /*0x6fc746*/
      v33 += 3; /*0x6fc749*/
      v78 += 4; /*0x6fc753*/
      if ( colorsa != a2 ) /*0x6fc757*/
      {
        v14[v30] = v107; /*0x6fc75e*/
        v37 = v30 + 1; /*0x6fc766*/
        v14[v37++] = v32 - 2; /*0x6fc76c*/
        v14[v37] = v32 - 1; /*0x6fc777*/
        v30 = v37 + 1; /*0x6fc77c*/
      }
      --colorsa; /*0x6fc77f*/
    }
    while ( colorsa ); /*0x6fc784*/
    v10 = v110; /*0x6fc78a*/
  }
  v14[v30] = v107; /*0x6fc792*/
  v38 = v30 + 1; /*0x6fc797*/
  v14[v38++] = v32 - 1; /*0x6fc79d*/
  v14[v38] = v107 + 1; /*0x6fc7a8*/
  v39 = v38 + 1; /*0x6fc7b2*/
  v40 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x6fc7ba*/
  if ( v40 ) /*0x6fc7d0*/
    v41 = NiTriShape_ctorWithGeometryData(v40, v32, vertices, v10, colors_4, vertices_4, 1, 0, v39 / 3, v14); /*0x6fc7fc*/
  else
    v41 = 0; /*0x6fc800*/
  v41->vtbl[1].super.Unk_03((NiObject *)v41); /*0x6fc817*/
  v42 = v137; /*0x6fc819*/
  (*((void (__thiscall **)(NiObjectNET *, NiAVObject *, _DWORD))v137->vtbl + 0x21))(v137, v41, 0); /*0x6fc82a*/
  v79 = 0.0; /*0x6fc835*/
  v43 = a2; /*0x6fc839*/
  v44 = a3 - 2; /*0x6fc840*/
  v45 = (a3 - 2) * (2 * a2 + 2); /*0x6fc847*/
  v75 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v45) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v45);
  v132 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v45) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v45);
  if ( !a4 ) /*0x6fc894*/
  {
    colors_4a = 0; /*0x6fc8e5*/
    goto LABEL_51; /*0x6fc8e5*/
  }
  v46 = FormHeapAlloc((unsigned __int64)v45 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v45);
  if ( !v46 ) /*0x6fc8b3*/
  {
    v46 = 0; /*0x6fc8dd*/
    goto LABEL_49; /*0x6fc8dd*/
  }
  v47 = v45 - 1; /*0x6fc8b5*/
  if ( (int)(v45 - 1) < 0 ) /*0x6fc8ba*/
  {
LABEL_49:
    colors_4a = (NiColorAlpha *)v46; /*0x6fc8df*/
    goto LABEL_51; /*0x6fc8e3*/
  }
  v48 = v46 + 8; /*0x6fc8be*/
  do /*0x6fc8d3*/
  {
    *(float *)(v48 - 8) = 0.0; /*0x6fc8c1*/
    v48 += 0x10; /*0x6fc8c4*/
    --v47; /*0x6fc8c7*/
    *(float *)(v48 - 0x14) = 0.0; /*0x6fc8ca*/
    *(float *)(v48 - 0x10) = 0.0; /*0x6fc8cd*/
    *(float *)(v48 - 0xC) = 0.0; /*0x6fc8d0*/
  }
  while ( v47 >= 0 ); /*0x6fc8d3*/
  colors_4a = (NiColorAlpha *)v46; /*0x6fc8d7*/
LABEL_51:
  v147 = (char *)FormHeapAlloc((unsigned __int64)v45 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v45);
  v146 = FormHeapAlloc((unsigned __int64)v44 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v44);
  v49 = FormHeapAlloc((unsigned __int64)v45 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v45);
  v50 = 0; /*0x6fc943*/
  v102 = v49; /*0x6fc94a*/
  vertices_4a = 0; /*0x6fc94e*/
  if ( a3 != 2 ) /*0x6fc952*/
  {
    do /*0x6fcd02*/
    {
      v51 = (double)(vertices_4a + 1); /*0x6fc970*/
      v128 = vertices_4a + 1; /*0x6fc974*/
      if ( vertices_4a + 1 < 0 ) /*0x6fc978*/
        v51 = v51 + flt_A2FC78; /*0x6fc97a*/
      verticesa = 0; /*0x6fc982*/
      v84 = v141 * v51; /*0x6fc98a*/
      v115 = 0.0; /*0x6fc990*/
      v127 = sin(v84); /*0x6fc9a1*/
      v116 = cos(v84); /*0x6fc9ae*/
      v154 = v116; /*0x6fc9b6*/
      v142 = v79; /*0x6fc9c1*/
      v117 = v84 + v141; /*0x6fc9d0*/
      v145 = sin(v117); /*0x6fc9e1*/
      v118 = cos(v117); /*0x6fc9f1*/
      v123 = v118; /*0x6fca04*/
      v52 = (float *)&v147[8 * v50]; /*0x6fca14*/
      v119 = v79 + v94; /*0x6fca1f*/
      v53 = &v132[v50].x; /*0x6fca33*/
      v80 = (_DWORD *)((char *)colors_4a + 0x10 * v50); /*0x6fca36*/
      v54 = &v75[v50].x; /*0x6fca3a*/
      do /*0x6fccc0*/
      {
        if ( verticesa == a2 ) /*0x6fca4b*/
        {
          v55 = 0.0; /*0x6fca4d*/
        }
        else
        {
          v56 = (double)verticesa; /*0x6fca57*/
          if ( verticesa < 0 ) /*0x6fca5b*/
            v56 = v56 + flt_A2FC78; /*0x6fca5d*/
          v55 = v56 * v140; /*0x6fca63*/
        }
        v108 = v55; /*0x6fca6a*/
        v122 = sin(v108); /*0x6fca77*/
        v85 = -v122 * v127; /*0x6fca8d*/
        v109 = cos(v108); /*0x6fca9a*/
        v111 = v127 * v109; /*0x6fcaae*/
        v148 = v85 * a1; /*0x6fcad0*/
        *v54 = v148; /*0x6fcae2*/
        v149 = v111 * a1; /*0x6fcae8*/
        v54[1] = v149; /*0x6fcafa*/
        v150 = v154 * a1; /*0x6fcb01*/
        v54[2] = v150; /*0x6fcb11*/
        *v53 = v85; /*0x6fcb22*/
        v57 = a1; /*0x6fcb36*/
        v53[1] = v111; /*0x6fcb38*/
        v53[2] = v154; /*0x6fcb52*/
        if ( a4 ) /*0x6fcb55*/
        {
          *v80 = *a4; /*0x6fcb59*/
          v80[1] = a4[1]; /*0x6fcb5e*/
          v80[2] = a4[2]; /*0x6fcb64*/
          v80[3] = a4[3]; /*0x6fcb6a*/
        }
        v58 = v54 + 3; /*0x6fcb71*/
        *v52 = v115; /*0x6fcb86*/
        v52[1] = v142; /*0x6fcb98*/
        *(_WORD *)(v49 + 2 * v50) = v50; /*0x6fcba8*/
        v59 = v53 + 3; /*0x6fcbae*/
        v60 = v50 + 1; /*0x6fcbb3*/
        v61 = v52 + 2; /*0x6fcbbb*/
        v86 = -v122 * v145; /*0x6fcbc0*/
        v112 = v145 * v109; /*0x6fcbd2*/
        v151 = v86 * v57; /*0x6fcbe6*/
        *v58 = v151; /*0x6fcbf8*/
        v152 = v112 * v57; /*0x6fcbfe*/
        v58[1] = v152; /*0x6fcc10*/
        v153 = v57 * v123; /*0x6fcc19*/
        v58[2] = v153; /*0x6fcc27*/
        *v59 = v86; /*0x6fcc3a*/
        v59[1] = v112; /*0x6fcc4a*/
        v59[2] = v123; /*0x6fcc5b*/
        if ( a4 ) /*0x6fcc5e*/
        {
          v80[4] = *a4; /*0x6fcc62*/
          v80[5] = a4[1]; /*0x6fcc67*/
          v80[6] = a4[2]; /*0x6fcc6d*/
          v80[7] = a4[3]; /*0x6fcc73*/
        }
        *v61 = v115; /*0x6fcc8c*/
        v115 = v115 + v138; /*0x6fcc93*/
        v80 += 8; /*0x6fcc97*/
        v61[1] = v119; /*0x6fcc9f*/
        *(_WORD *)(v49 + 2 * v60) = v60; /*0x6fcca5*/
        v50 = v60 + 1; /*0x6fcca9*/
        v54 = v58 + 3; /*0x6fccac*/
        v53 = v59 + 3; /*0x6fccaf*/
        v52 = v61 + 2; /*0x6fccb2*/
        ++verticesa; /*0x6fccbc*/
      }
      while ( verticesa <= (unsigned int)a2 ); /*0x6fccc0*/
      v94 = v139; /*0x6fccd8*/
      v79 = v119; /*0x6fcceb*/
      *(_WORD *)(v146 + 2 * vertices_4a++) = 2 * a2 + 2; /*0x6fccef*/
    }
    while ( v128 < a3 - 2 ); /*0x6fcd02*/
    LOWORD(v44) = a3 - 2; /*0x6fcd08*/
    v42 = v137; /*0x6fcd0f*/
    v43 = a2; /*0x6fcd13*/
  }
  v62 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x6fcd1f*/
  if ( v62 ) /*0x6fcd38*/
    v63 = sub_719960(v62, v50, v75, v132, colors_4a, v147, 1, 0, 2 * v44 * v43, v44, v146, v102); /*0x6fcd74*/
  else
    v63 = 0; /*0x6fcd78*/
  v63->vtbl[1].super.Unk_03((NiObject *)v63); /*0x6fcd8f*/
  (*((void (__thiscall **)(NiObjectNET *, NiAVObject *, _DWORD))v42->vtbl + 0x21))(v42, v63, 0); /*0x6fcd9e*/
  return v42; /*0x6fcda2*/
}
