char __cdecl sub_95A380(float *a1, float *a2, int a3, NiRefObject *pickedObject)
{
  float *v4; // eax
  float *v5; // eax
  UInt32 m_uiRefCount; // ecx
  unsigned __int16 v7; // ax
  NiGeometryData *v8; // ebx
  unsigned int stride; // esi
  float v10; // ebp
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  float x; // edi
  unsigned __int16 v13; // ax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // bx
  int v18; // edi
  float *v19; // eax
  int v20; // ebp
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  char v25; // dl
  NiPickRecord_Oblivion_044Verified *v26; // eax
  NiPickRecord_Oblivion_044Verified *v27; // esi
  NiTransform *v28; // eax
  double v29; // st7
  double v30; // st7
  __int16 v31; // dx
  double v32; // st7
  __int16 v33; // dx
  float *v34; // eax
  float *v35; // ecx
  float v36; // edx
  float v37; // ecx
  double v38; // st7
  float v39; // ecx
  float v40; // edx
  float v41; // eax
  double v42; // st7
  float v43; // eax
  int v44; // eax
  float v45; // edx
  float v46; // ecx
  float v47; // edx
  float v48; // ecx
  float v49; // edx
  double v50; // st7
  float *v51; // eax
  float v52; // edx
  float *v53; // eax
  float *v54; // ecx
  float v55; // edx
  float v56; // eax
  float v57; // eax
  float v58; // ecx
  int v59; // eax
  float *v60; // eax
  float *v61; // eax
  float v62; // ecx
  float v63; // edx
  float v64; // eax
  NiTransform *v65; // eax
  float y; // edx
  float z; // eax
  float *v68; // eax
  float *v69; // eax
  float v70; // eax
  float v71; // ecx
  float v72; // edx
  float *v73; // eax
  float *v74; // ebx
  float *v75; // eax
  float *v76; // eax
  float v77; // edx
  float v78; // eax
  float v79; // ecx
  float *v80; // [esp+Ch] [ebp-2F4h]
  float *v81; // [esp+Ch] [ebp-2F4h]
  float *v82; // [esp+14h] [ebp-2ECh]
  float *v83; // [esp+14h] [ebp-2ECh]
  bool v84; // [esp+2Ah] [ebp-2D6h]
  char v85; // [esp+2Bh] [ebp-2D5h]
  unsigned __int16 v86; // [esp+2Ch] [ebp-2D4h]
  float v87; // [esp+2Ch] [ebp-2D4h]
  float v88; // [esp+30h] [ebp-2D0h]
  unsigned __int16 v89; // [esp+30h] [ebp-2D0h]
  int v90; // [esp+30h] [ebp-2D0h]
  float *v91; // [esp+34h] [ebp-2CCh] BYREF
  float v92; // [esp+38h] [ebp-2C8h] BYREF
  float v93; // [esp+3Ch] [ebp-2C4h] BYREF
  float v94; // [esp+40h] [ebp-2C0h]
  float v95; // [esp+44h] [ebp-2BCh]
  NiGeometryData *self; // [esp+48h] [ebp-2B8h]
  NiPoint3 v97; // [esp+4Ch] [ebp-2B4h] BYREF
  int v98; // [esp+58h] [ebp-2A8h]
  float v99; // [esp+5Ch] [ebp-2A4h]
  float v100; // [esp+60h] [ebp-2A0h]
  float v101; // [esp+64h] [ebp-29Ch]
  float v102; // [esp+68h] [ebp-298h]
  float v103; // [esp+6Ch] [ebp-294h]
  float v104; // [esp+70h] [ebp-290h]
  float v105; // [esp+74h] [ebp-28Ch]
  float v106; // [esp+78h] [ebp-288h]
  float v107; // [esp+7Ch] [ebp-284h]
  float v108; // [esp+80h] [ebp-280h]
  float v109; // [esp+84h] [ebp-27Ch]
  float v110; // [esp+88h] [ebp-278h]
  float v111; // [esp+8Ch] [ebp-274h]
  float v112; // [esp+90h] [ebp-270h]
  float v113; // [esp+94h] [ebp-26Ch]
  float v114; // [esp+98h] [ebp-268h]
  float v115; // [esp+9Ch] [ebp-264h]
  float v116; // [esp+A0h] [ebp-260h]
  float v117; // [esp+A4h] [ebp-25Ch]
  float v118; // [esp+A8h] [ebp-258h]
  float v119; // [esp+ACh] [ebp-254h] BYREF
  float v120; // [esp+B0h] [ebp-250h]
  float v121; // [esp+B4h] [ebp-24Ch]
  float v122; // [esp+B8h] [ebp-248h] BYREF
  float v123; // [esp+BCh] [ebp-244h]
  float v124; // [esp+C0h] [ebp-240h]
  float v125; // [esp+C4h] [ebp-23Ch] BYREF
  float v126; // [esp+C8h] [ebp-238h]
  float v127; // [esp+CCh] [ebp-234h]
  NiStridedVertexStream outVertices; // [esp+D0h] [ebp-230h] BYREF
  NiPoint3 v129; // [esp+DCh] [ebp-224h] BYREF
  _DWORD v130[2]; // [esp+E8h] [ebp-218h] BYREF
  char v131; // [esp+F0h] [ebp-210h]
  float v132; // [esp+F4h] [ebp-20Ch] BYREF
  float v133; // [esp+F8h] [ebp-208h]
  float v134; // [esp+FCh] [ebp-204h]
  int v135; // [esp+100h] [ebp-200h] BYREF
  int v136; // [esp+104h] [ebp-1FCh]
  char v137; // [esp+108h] [ebp-1F8h]
  int v138; // [esp+10Ch] [ebp-1F4h] BYREF
  int v139; // [esp+110h] [ebp-1F0h]
  char v140; // [esp+114h] [ebp-1ECh]
  float v141; // [esp+118h] [ebp-1E8h]
  float v142; // [esp+11Ch] [ebp-1E4h]
  float v143; // [esp+120h] [ebp-1E0h]
  float v144; // [esp+124h] [ebp-1DCh]
  float v145; // [esp+128h] [ebp-1D8h]
  float v146; // [esp+12Ch] [ebp-1D4h]
  float v147; // [esp+130h] [ebp-1D0h]
  float v148; // [esp+134h] [ebp-1CCh]
  float v149; // [esp+138h] [ebp-1C8h]
  int v150; // [esp+13Ch] [ebp-1C4h]
  NiPoint3 v151; // [esp+140h] [ebp-1C0h]
  float v152; // [esp+14Ch] [ebp-1B4h]
  float v153; // [esp+150h] [ebp-1B0h]
  float v154; // [esp+154h] [ebp-1ACh]
  float v155; // [esp+158h] [ebp-1A8h]
  float v156; // [esp+15Ch] [ebp-1A4h]
  float v157; // [esp+160h] [ebp-1A0h]
  float v158; // [esp+164h] [ebp-19Ch]
  float v159; // [esp+168h] [ebp-198h]
  float v160; // [esp+16Ch] [ebp-194h]
  float v161; // [esp+170h] [ebp-190h]
  float v162; // [esp+174h] [ebp-18Ch]
  float v163; // [esp+178h] [ebp-188h]
  float v164; // [esp+17Ch] [ebp-184h]
  float v165; // [esp+180h] [ebp-180h]
  float v166; // [esp+184h] [ebp-17Ch]
  float v167; // [esp+188h] [ebp-178h]
  float v168; // [esp+18Ch] [ebp-174h]
  float v169; // [esp+190h] [ebp-170h]
  float v170; // [esp+194h] [ebp-16Ch]
  float v171; // [esp+198h] [ebp-168h]
  float v172; // [esp+19Ch] [ebp-164h]
  float v173; // [esp+1A0h] [ebp-160h] BYREF
  float v174; // [esp+1A4h] [ebp-15Ch]
  float v175; // [esp+1A8h] [ebp-158h]
  float v176; // [esp+1ACh] [ebp-154h]
  float v177; // [esp+1B0h] [ebp-150h]
  float v178; // [esp+1B4h] [ebp-14Ch]
  float v179; // [esp+1B8h] [ebp-148h]
  float v180; // [esp+1BCh] [ebp-144h]
  float v181; // [esp+1C0h] [ebp-140h]
  float v182; // [esp+1C4h] [ebp-13Ch]
  float v183; // [esp+1C8h] [ebp-138h]
  UInt32 v184; // [esp+1CCh] [ebp-134h]
  int v185[4]; // [esp+1D0h] [ebp-130h] BYREF
  int v186[4]; // [esp+1E0h] [ebp-120h] BYREF
  int v187[4]; // [esp+1F0h] [ebp-110h] BYREF
  float v188[3]; // [esp+200h] [ebp-100h] BYREF
  float v189[3]; // [esp+20Ch] [ebp-F4h] BYREF
  float v190[3]; // [esp+218h] [ebp-E8h] BYREF
  float v191[4]; // [esp+224h] [ebp-DCh] BYREF
  float v192[4]; // [esp+234h] [ebp-CCh] BYREF
  int v193[3]; // [esp+244h] [ebp-BCh] BYREF
  NiTransform v194; // [esp+250h] [ebp-B0h] BYREF
  int v195[4]; // [esp+290h] [ebp-70h] BYREF
  int v196[4]; // [esp+2A0h] [ebp-60h] BYREF
  int v197[4]; // [esp+2B0h] [ebp-50h] BYREF
  int v198[4]; // [esp+2C0h] [ebp-40h] BYREF
  float v199[4]; // [esp+2D0h] [ebp-30h] BYREF
  float v200[4]; // [esp+2E0h] [ebp-20h] BYREF
  int v201[4]; // [esp+2F0h] [ebp-10h] BYREF

  v190[0] = *a1 - *(float *)&pickedObject[0x11].vtbl; /*0x95a3a4*/
  v190[1] = a1[1] - *(float *)&pickedObject[0x11].members.m_uiRefCount; /*0x95a3b8*/
  v190[2] = a1[2] - *(float *)&pickedObject[0x12].vtbl; /*0x95a3ce*/
  v88 = 1.0 / *(float *)&pickedObject[0x12].members.m_uiRefCount; /*0x95a3dc*/
  v4 = NiPoint3_MultiplyMatrix3(&v132, v190, (float *)&pickedObject[0xC].members.m_uiRefCount); /*0x95a3e0*/
  v95 = v4[1] * v88; /*0x95a3fb*/
  v94 = v4[2] * v88; /*0x95a404*/
  v189[0] = v88 * *v4; /*0x95a412*/
  v189[1] = v95; /*0x95a41d*/
  v189[2] = v94; /*0x95a428*/
  v5 = NiPoint3_MultiplyMatrix3(&v132, a2, (float *)&pickedObject[0xC].members.m_uiRefCount); /*0x95a42f*/
  m_uiRefCount = pickedObject[0x16].members.m_uiRefCount; /*0x95a437*/
  v85 = 0; /*0x95a446*/
  v95 = v5[1] * v88; /*0x95a44f*/
  v94 = v5[2] * v88; /*0x95a458*/
  v188[0] = v88 * *v5; /*0x95a45e*/
  v188[1] = v95; /*0x95a469*/
  v188[2] = v94; /*0x95a474*/
  v7 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0x5C))(m_uiRefCount); /*0x95a480*/
  v8 = (NiGeometryData *)pickedObject[0x16].members.m_uiRefCount; /*0x95a482*/
  stride = 0; /*0x95a488*/
  memset(&outVertices, 0, 9); /*0x95a48d*/
  v10 = *(float *)&v8->member.m_pkVertex; /*0x95a4a3*/
  LODWORD(v95) = v7; /*0x95a4a8*/
  v84 = 0; /*0x95a4ac*/
  self = v8; /*0x95a4b1*/
  v94 = v10; /*0x95a4b5*/
  if ( v10 == 0.0 ) /*0x95a4b9*/
  {
    m_spAdditionalGeomData = v8->member.m_spAdditionalGeomData; /*0x95a4bb*/
    if ( m_spAdditionalGeomData ) /*0x95a4c0*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x4C))(m_spAdditionalGeomData) ) /*0x95a4c7*/
      {
        v84 = NiGeometryData_LockVertexStream(v8, 1); /*0x95a4e0*/
        NiGeometryData_GetLockedVertexStream(v8, &outVertices); /*0x95a4e4*/
      }
      stride = outVertices.stride; /*0x95a4e9*/
    }
  }
  x = v8[1].member.m_kBound.Center.x; /*0x95a4f0*/
  v13 = 0; /*0x95a4f3*/
  v174 = x; /*0x95a4fa*/
  v98 = 0; /*0x95a501*/
  if ( !LOWORD(v95) ) /*0x95a505*/
  {
LABEL_7:
    if ( v84 ) /*0x95a50c*/
      NiGeometryData_UnlockVertexStream(v8); /*0x95a510*/
    return v85; /*0x95a523*/
  }
  while ( 1 ) /*0x95a528*/
  {
    if ( (v13 & 1) != 0 ) /*0x95a52d*/
    {
      v15 = *(_WORD *)(LODWORD(x) + 2 * v13 + 2); /*0x95a52f*/
      v16 = *(_WORD *)(LODWORD(x) + 2 * v13); /*0x95a534*/
    }
    else
    {
      v15 = *(_WORD *)(LODWORD(x) + 2 * v13); /*0x95a542*/
      v16 = *(_WORD *)(LODWORD(x) + 2 * v13 + 2); /*0x95a546*/
    }
    v86 = v15; /*0x95a538*/
    v89 = v16; /*0x95a53c*/
    v17 = *(_WORD *)(LODWORD(x) + 2 * v13 + 4); /*0x95a556*/
    v91 = (float *)v17; /*0x95a55b*/
    if ( v15 != v16 && v16 != v17 ) /*0x95a568*/
      break; /*0x95a568*/
LABEL_55:
    if ( (unsigned __int16)++v98 >= LOWORD(v95) ) /*0x95b20b*/
    {
      v8 = self; /*0x95b211*/
      goto LABEL_7; /*0x95b215*/
    }
    v13 = v98; /*0x95a524*/
  }
  v18 = v15; /*0x95a570*/
  if ( v10 == 0.0 ) /*0x95a576*/
  {
    v19 = (float *)((char *)outVertices.data + v15 * stride); /*0x95a57d*/
    v20 = v16; /*0x95a584*/
    v125 = *v19; /*0x95a590*/
    v126 = v19[1]; /*0x95a59a*/
    v127 = v19[2]; /*0x95a5a4*/
    v21 = (float *)((char *)outVertices.data + v16 * stride); /*0x95a5b3*/
    v119 = *v21; /*0x95a5b5*/
    v120 = v21[1]; /*0x95a5bf*/
    v121 = v21[2]; /*0x95a5c9*/
    v22 = (float *)((char *)outVertices.data + stride * v17); /*0x95a5d5*/
  }
  else
  {
    v23 = (float *)(LODWORD(v10) + 0xC * v15); /*0x95a5dc*/
    v125 = *v23; /*0x95a5e2*/
    v126 = v23[1]; /*0x95a5ec*/
    v20 = v16; /*0x95a5f6*/
    v127 = v23[2]; /*0x95a5fd*/
    v24 = (float *)(LODWORD(v94) + 0xC * v16); /*0x95a608*/
    v119 = *v24; /*0x95a60d*/
    v120 = v24[1]; /*0x95a617*/
    v121 = v24[2]; /*0x95a624*/
    v22 = (float *)(LODWORD(v94) + 0xC * v17); /*0x95a62b*/
  }
  v122 = *v22; /*0x95a630*/
  v123 = v22[1]; /*0x95a641*/
  v25 = *(_BYTE *)(a3 + 0x10); /*0x95a64b*/
  v124 = v22[2]; /*0x95a64e*/
  LOBYTE(v150) = v25; /*0x95a655*/
  if ( !sub_96E5E0(v189, v188, &v125, &v119, &v122, v25, &v129, &v173, &v93, &v92) ) /*0x95a6b0*/
  {
LABEL_54:
    stride = outVertices.stride; /*0x95b1e9*/
    v10 = v94; /*0x95b1f0*/
    x = v174; /*0x95b1f4*/
    goto LABEL_55; /*0x95b1f4*/
  }
  v85 = 1; /*0x95a6b8*/
  v26 = (NiPickRecord_Oblivion_044Verified *)FormHeapAlloc(0x44u); /*0x95a6bd*/
  if ( v26 ) /*0x95a6c7*/
    v27 = NiPickRecord_Initialize(v26, pickedObject); /*0x95a6d8*/
  else
    v27 = 0; /*0x95a6dc*/
  if ( *(_DWORD *)(a3 + 0xC) == 1 ) /*0x95a6e9*/
  {
    v28 = sub_7101F0((NiTransform *)&pickedObject[0xC].members, &v194, &v129); /*0x95a709*/
    v184 = pickedObject[0x12].members.m_uiRefCount; /*0x95a71e*/
    v141 = *(float *)&v184 * v28->rot.data[0][0]; /*0x95a730*/
    v142 = v28->rot.data[0][1] * *(float *)&v184; /*0x95a73c*/
    v143 = *(float *)&v184 * v28->rot.data[0][2]; /*0x95a746*/
    v152 = v141 + *(float *)&pickedObject[0x11].vtbl; /*0x95a757*/
    v29 = *(float *)&pickedObject[0x11].members.m_uiRefCount; /*0x95a765*/
    v129.x = v152; /*0x95a768*/
    v153 = v29 + v142; /*0x95a776*/
    v30 = *(float *)&pickedObject[0x12].vtbl; /*0x95a784*/
    v129.y = v153; /*0x95a787*/
    v154 = v30 + v143; /*0x95a795*/
    v129.z = v154; /*0x95a7a3*/
  }
  v27->intersectionPoint_008.x = v129.x; /*0x95a7b1*/
  v31 = v98; /*0x95a7bb*/
  v27->intersectionPoint_008.y = v129.y; /*0x95a7c0*/
  v27->intersectionPoint_008.z = v129.z; /*0x95a7cf*/
  v32 = v173; /*0x95a7d7*/
  *(_WORD *)v27->unknown_018_027 = v31; /*0x95a7de*/
  v33 = (__int16)v91; /*0x95a7e2*/
  v27->hitDistance_014 = v32; /*0x95a7e7*/
  *(_WORD *)&v27->unknown_018_027[2] = v86; /*0x95a7ea*/
  *(_WORD *)&v27->unknown_018_027[4] = v89; /*0x95a7f5*/
  *(_WORD *)&v27->unknown_018_027[6] = v33; /*0x95a7f9*/
  v87 = 1.0 - (v93 + v92); /*0x95a80d*/
  if ( !*(_BYTE *)(a3 + 0x2C) ) /*0x95a811*/
  {
    *(float *)&v27->unknown_018_027[8] = g_TESObjectTREE_InitialBillboardSizeX; /*0x95aa8d*/
    v43 = g_TESObjectTREE_InitialBillboardSizeY; /*0x95aa90*/
    goto LABEL_32; /*0x95aa90*/
  }
  v138 = 0; /*0x95a826*/
  v139 = 0; /*0x95a82d*/
  v140 = 0; /*0x95a834*/
  sub_728E70((int)self, 0, (int)&v138); /*0x95a83b*/
  if ( v138 ) /*0x95a849*/
  {
    v91 = (float *)(v138 + v20 * v139); /*0x95a860*/
    v34 = (float *)(v138 + v18 * v139); /*0x95a86e*/
    v35 = (float *)(v138 + v17 * v139); /*0x95a870*/
    v36 = *v35; /*0x95a872*/
    v37 = v35[1]; /*0x95a874*/
    v103 = v36; /*0x95a877*/
    v104 = v37; /*0x95a87b*/
    v38 = v36; /*0x95a87f*/
    v39 = v91[1]; /*0x95a88f*/
    v111 = *v91; /*0x95a894*/
    v40 = *v34; /*0x95a898*/
    v41 = v34[1]; /*0x95a89c*/
    v103 = v38 * v92; /*0x95a89f*/
    v104 = v92 * v104; /*0x95a8b3*/
    v111 = v111 * v93; /*0x95a8c5*/
    v112 = v93 * v39; /*0x95a8cd*/
    v101 = v40 * v87; /*0x95a8df*/
    v102 = v87 * v41; /*0x95a8ef*/
    v107 = v101 + v111; /*0x95a903*/
    v108 = v102 + v112; /*0x95a91a*/
    v115 = v107 + v103; /*0x95a931*/
    v42 = v108; /*0x95a93f*/
    *(float *)&v27->unknown_018_027[8] = v115; /*0x95a946*/
    v116 = v42 + v104; /*0x95a94d*/
    v43 = v116; /*0x95a954*/
LABEL_32:
    *(float *)&v27->unknown_018_027[0xC] = v43; /*0x95aa95*/
    goto LABEL_33; /*0x95aa95*/
  }
  v44 = *(_DWORD *)(pickedObject[0x16].members.m_uiRefCount + 0x28); /*0x95a96d*/
  if ( v44 ) /*0x95a972*/
  {
    v45 = *(float *)(v44 + 8 * v17 + 4); /*0x95a97b*/
    v105 = *(float *)(v44 + 8 * v17); /*0x95a97f*/
    v46 = *(float *)(v44 + 8 * v20); /*0x95a98b*/
    v106 = v45; /*0x95a990*/
    v47 = *(float *)(v44 + 8 * v20 + 4); /*0x95a996*/
    v109 = v46; /*0x95a99c*/
    v48 = *(float *)(v44 + 8 * v18); /*0x95a9a0*/
    v105 = v105 * v92; /*0x95a9a3*/
    v110 = v47; /*0x95a9a7*/
    v49 = *(float *)(v44 + 8 * v18 + 4); /*0x95a9ab*/
    v106 = v92 * v106; /*0x95a9bb*/
    v109 = v109 * v93; /*0x95a9cd*/
    v110 = v93 * v110; /*0x95a9d5*/
    v99 = v48 * v87; /*0x95a9e7*/
    v100 = v87 * v49; /*0x95a9f7*/
    v113 = v99 + v109; /*0x95aa0e*/
    v114 = v100 + v110; /*0x95aa28*/
    v117 = v113 + v105; /*0x95aa45*/
    v50 = v114; /*0x95aa53*/
    *(float *)&v27->unknown_018_027[8] = v117; /*0x95aa5a*/
    v118 = v50 + v106; /*0x95aa61*/
    *(float *)&v27->unknown_018_027[0xC] = v118; /*0x95aa6f*/
  }
  else
  {
    *(float *)&v27->unknown_018_027[8] = g_TESObjectTREE_InitialBillboardSizeX; /*0x95aa79*/
    *(float *)&v27->unknown_018_027[0xC] = g_TESObjectTREE_InitialBillboardSizeY; /*0x95aa82*/
  }
LABEL_33:
  if ( *(_BYTE *)(a3 + 0x2D) ) /*0x95aa9f*/
  {
    v135 = 0; /*0x95aab7*/
    v136 = 0; /*0x95aabe*/
    v137 = 0; /*0x95aac5*/
    sub_728D00((int)self, (int)&v135); /*0x95aacc*/
    if ( v135 ) /*0x95aada*/
    {
      v51 = (float *)(v135 + v18 * v136); /*0x95aaec*/
      v175 = *v51; /*0x95aaf0*/
      v52 = v51[1]; /*0x95aaf7*/
      v177 = v51[2]; /*0x95aafd*/
      v53 = (float *)(v135 + v20 * v136); /*0x95ab0c*/
      v54 = (float *)(v135 + v17 * v136); /*0x95ab13*/
      v176 = v52; /*0x95ab1a*/
      v158 = *v53; /*0x95ab23*/
      v55 = v53[1]; /*0x95ab2a*/
      v56 = v53[2]; /*0x95ab2d*/
      v159 = v55; /*0x95ab30*/
      v181 = *v54; /*0x95ab39*/
      v160 = v56; /*0x95ab40*/
      v57 = v54[1]; /*0x95ab4e*/
      v58 = v54[2]; /*0x95ab55*/
      v182 = v57; /*0x95ab5a*/
      v183 = v58; /*0x95ab63*/
      v147 = v181 * v92; /*0x95ab6c*/
      v148 = v57 * v92; /*0x95ab7c*/
      v149 = v92 * v58; /*0x95ab8a*/
      v170 = v158 * v93; /*0x95aba2*/
      v171 = v55 * v93; /*0x95abb2*/
      v172 = v93 * v160; /*0x95abc0*/
      v164 = v175 * v87; /*0x95abd8*/
      v165 = v176 * v87; /*0x95abe8*/
      v166 = v87 * v177; /*0x95abf6*/
      v144 = v164 + v170; /*0x95ac0b*/
      v145 = v165 + v171; /*0x95ac20*/
      v146 = v166 + v172; /*0x95ac35*/
      v151.x = v144 + v147; /*0x95ac4a*/
      v151.y = v145 + v148; /*0x95ac6a*/
      v151.z = v146 + v149; /*0x95ac86*/
      v97 = v151; /*0x95ac94*/
    }
    else
    {
      if ( *(_BYTE *)(a3 + 0x2E) /*0x95acc8*/
        && (v59 = *(_DWORD *)(pickedObject[0x16].members.m_uiRefCount + 0x20), (v90 = v59) != 0) )
      {
        v91 = sub_47DA10(&v194.pos.x, v93, (float *)(v59 + 0xC * v20)); /*0x95acef*/
        v60 = sub_47DA10(v194.rot.data[1], v87, (float *)(v90 + 0xC * v18)); /*0x95ad0d*/
        v155 = *v60 + *v91; /*0x95ad1d*/
        v156 = v91[1] + v60[1]; /*0x95ad2a*/
        v157 = v91[2] + v60[2]; /*0x95ad42*/
        v61 = sub_47DA10((float *)v193, v92, (float *)(v90 + 0xC * v17)); /*0x95ad59*/
        v161 = v155 + *v61; /*0x95ad6a*/
        v62 = v161; /*0x95ad71*/
        v162 = v61[1] + v156; /*0x95ad82*/
        v63 = v162; /*0x95ad89*/
        v163 = v61[2] + v157; /*0x95ad9a*/
        v64 = v163; /*0x95ada1*/
      }
      else
      {
        v178 = v119 - v125; /*0x95adc1*/
        v179 = v120 - v126; /*0x95addc*/
        v180 = v121 - v127; /*0x95adf7*/
        v167 = v122 - v125; /*0x95ae09*/
        v168 = v123 - v126; /*0x95ae17*/
        v169 = v124 - v127; /*0x95ae25*/
        v132 = v169 * v179 - v168 * v180; /*0x95ae58*/
        v62 = v132; /*0x95ae5f*/
        v133 = v180 * v167 - v169 * v178; /*0x95ae82*/
        v63 = v133; /*0x95ae89*/
        v134 = v178 * v168 - v167 * v179; /*0x95ae96*/
        v64 = v134; /*0x95ae9d*/
      }
      v97.z = v64; /*0x95aea4*/
      v97.y = v63; /*0x95aea8*/
      v97.x = v62; /*0x95aeac*/
    }
    Vector3_NormalizeInPlace(&v97.x); /*0x95aeb4*/
    if ( *(_DWORD *)(a3 + 0xC) == 1 ) /*0x95aec6*/
    {
      v65 = sub_7101F0((NiTransform *)&pickedObject[0xC].members, (NiTransform *)v194.rot.data[2], &v97); /*0x95aedf*/
      v97.x = v65->rot.data[0][0]; /*0x95aee6*/
      v97.y = v65->rot.data[0][1]; /*0x95aeed*/
      v97.z = v65->rot.data[0][2]; /*0x95aef4*/
    }
    y = v97.y; /*0x95aefc*/
    z = v97.z; /*0x95af00*/
    v27->surfaceNormal_028.x = v97.x; /*0x95af04*/
    v27->surfaceNormal_028.y = y; /*0x95af07*/
  }
  else
  {
    v27->surfaceNormal_028.x = g_zeroNiPoint3.x; /*0x95af12*/
    v27->surfaceNormal_028.y = g_zeroNiPoint3.y; /*0x95af1b*/
    z = g_zeroNiPoint3.z; /*0x95af1e*/
  }
  v27->surfaceNormal_028.z = z; /*0x95af2a*/
  if ( *(_BYTE *)(a3 + 0x2F) ) /*0x95af2d*/
  {
    v130[0] = 0; /*0x95af45*/
    v130[1] = 0; /*0x95af4c*/
    v131 = 0; /*0x95af53*/
    sub_728DB0((int)self, (int)v130); /*0x95af5a*/
    if ( v130[0] ) /*0x95af67*/
    {
      *(float *)v185 = 0.0; /*0x95af76*/
      *(float *)&v185[1] = 0.0; /*0x95af7e*/
      *(float *)&v185[2] = 0.0; /*0x95af86*/
      *(float *)&v185[3] = 0.0; /*0x95af94*/
      *(float *)v187 = 0.0; /*0x95af9b*/
      *(float *)&v187[1] = 0.0; /*0x95afa2*/
      *(float *)&v187[2] = 0.0; /*0x95afa9*/
      *(float *)&v187[3] = 0.0; /*0x95afb0*/
      *(float *)v186 = 0.0; /*0x95afb7*/
      *(float *)&v186[1] = 0.0; /*0x95afbe*/
      *(float *)&v186[2] = 0.0; /*0x95afc5*/
      *(float *)&v186[3] = 0.0; /*0x95afcc*/
      sub_4C1440(v130, v18, (float *)v185); /*0x95afd3*/
      sub_4C1440(v130, v20, (float *)v187); /*0x95afe8*/
      sub_4C1440(v130, v17, (float *)v186); /*0x95affd*/
      v82 = sub_4BFBD0(&v194.scale, v92, (float *)v186); /*0x95b026*/
      v80 = sub_4BFBD0((float *)v196, v93, (float *)v187); /*0x95b04f*/
      v68 = sub_4BFBD0((float *)v198, v87, (float *)v185); /*0x95b06c*/
      v69 = sub_4BFB30(v68, v200, v80); /*0x95b076*/
      sub_4BFB30(v69, v192, v82); /*0x95b07d*/
      v70 = v192[1]; /*0x95b089*/
      v71 = v192[2]; /*0x95b090*/
      *(float *)v27->unknown_034_043 = v192[0]; /*0x95b097*/
      v72 = v192[3]; /*0x95b09a*/
      *(float *)&v27->unknown_034_043[4] = v70; /*0x95b0a1*/
      *(float *)&v27->unknown_034_043[8] = v71; /*0x95b0a4*/
      *(float *)&v27->unknown_034_043[0xC] = v72; /*0x95b0a7*/
    }
    else
    {
      v91 = *(float **)(pickedObject[0x16].members.m_uiRefCount + 0x24); /*0x95b0c1*/
      if ( v91 ) /*0x95b0c5*/
      {
        v73 = sub_4BFBD0((float *)v195, v92, &v91[4 * v17]); /*0x95b0e1*/
        v74 = v91; /*0x95b0ea*/
        v83 = v73; /*0x95b0f1*/
        v81 = sub_4BFBD0((float *)v197, v93, &v91[4 * v20]); /*0x95b118*/
        v75 = sub_4BFBD0((float *)v201, v87, &v74[4 * v18]); /*0x95b133*/
        v76 = sub_4BFB30(v75, v199, v81); /*0x95b13d*/
        sub_4BFB30(v76, v191, v83); /*0x95b144*/
        v77 = v191[1]; /*0x95b150*/
        v78 = v191[2]; /*0x95b157*/
        *(float *)v27->unknown_034_043 = v191[0]; /*0x95b15e*/
        v79 = v191[3]; /*0x95b161*/
        *(float *)&v27->unknown_034_043[4] = v77; /*0x95b168*/
        *(float *)&v27->unknown_034_043[8] = v78; /*0x95b16b*/
        *(float *)&v27->unknown_034_043[0xC] = v79; /*0x95b16e*/
      }
      else
      {
        *(_DWORD *)v27->unknown_034_043 = dword_B25AE0; /*0x95b179*/
        *(_DWORD *)&v27->unknown_034_043[4] = dword_B25AE4; /*0x95b181*/
        *(_DWORD *)&v27->unknown_034_043[8] = dword_B25AE8; /*0x95b18a*/
        *(_DWORD *)&v27->unknown_034_043[0xC] = dword_B25AEC; /*0x95b193*/
      }
    }
  }
  else
  {
    *(_DWORD *)v27->unknown_034_043 = dword_B25AE0; /*0x95b19d*/
    *(_DWORD *)&v27->unknown_034_043[4] = dword_B25AE4; /*0x95b1a6*/
    *(_DWORD *)&v27->unknown_034_043[8] = dword_B25AE8; /*0x95b1af*/
    *(_DWORD *)&v27->unknown_034_043[0xC] = dword_B25AEC; /*0x95b1b7*/
  }
  v91 = (float *)v27; /*0x95b1c9*/
  *(_DWORD *)(a3 + 0x28) = v27; /*0x95b1cd*/
  sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a3 + 0x18), &v91); /*0x95b1d0*/
  if ( *(_DWORD *)a3 != 1 || *(_DWORD *)(a3 + 4) != 1 ) /*0x95b1e7*/
    goto LABEL_54; /*0x95b1e7*/
  if ( v84 ) /*0x95b21f*/
    NiGeometryData_UnlockVertexStream(self); /*0x95b225*/
  return 1; /*0x95a519*/
}
