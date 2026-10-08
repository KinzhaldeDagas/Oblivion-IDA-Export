char __cdecl sub_95B240(float *a1, float *a2, int a3, NiGeometryData *a4)
{
  float *v4; // eax
  float *v5; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  double v7; // st7
  unsigned __int16 v8; // ax
  NiAdditionalGeometryData *v9; // edi
  char *data; // ecx
  unsigned int stride; // edx
  unsigned __int16 v12; // bp
  float v13; // ebx
  int v14; // eax
  int v15; // esi
  int v17; // edi
  int v18; // ebp
  float *v19; // esi
  float *v20; // eax
  float *v21; // eax
  int v22; // ebx
  float *v23; // edx
  float *v24; // eax
  float *v25; // eax
  float v26; // edx
  float *v27; // eax
  NiPickRecord_Oblivion_044Verified *v28; // eax
  NiPickRecord_Oblivion_044Verified *v29; // esi
  NiTransform *v30; // eax
  double x; // st7
  double y; // st7
  __int16 v33; // ax
  __int16 v34; // cx
  double v35; // st7
  __int16 v36; // dx
  float *v37; // eax
  float *v38; // ecx
  float v39; // edx
  float v40; // ecx
  double v41; // st7
  float v42; // ecx
  float v43; // edx
  float v44; // eax
  double v45; // st7
  float v46; // eax
  int v47; // eax
  float v48; // edx
  float v49; // ecx
  float v50; // edx
  float v51; // ecx
  float v52; // edx
  double v53; // st7
  float *v54; // eax
  float v55; // edx
  float *v56; // eax
  float *v57; // ecx
  float v58; // edx
  float v59; // eax
  float v60; // eax
  float v61; // ecx
  int v62; // ecx
  float *v63; // eax
  double v64; // st7
  float *v65; // eax
  double v66; // st7
  float *v67; // eax
  float v68; // eax
  float v69; // ecx
  float v70; // edx
  NiTransform *v71; // eax
  float v72; // edx
  float v73; // eax
  double v74; // st7
  double v75; // st7
  double v76; // st7
  int v77; // eax
  int v78; // ebx
  float v79; // edx
  float v80; // ecx
  int v81; // ebx
  double v82; // st7
  float v83; // edx
  float v84; // ecx
  int v85; // ebp
  float v86; // edx
  float v87; // ecx
  int v88; // ebp
  float v89; // edx
  float v90; // ecx
  int v91; // edi
  float v92; // edx
  float v93; // ecx
  int v94; // edi
  float v95; // eax
  float v96; // edx
  double v97; // st7
  double v98; // st7
  double v99; // st7
  bool v100; // [esp+12h] [ebp-2D6h]
  char v101; // [esp+13h] [ebp-2D5h]
  float v102; // [esp+14h] [ebp-2D4h]
  float v103; // [esp+14h] [ebp-2D4h]
  unsigned __int16 v104; // [esp+14h] [ebp-2D4h]
  float z; // [esp+18h] [ebp-2D0h]
  float v106; // [esp+18h] [ebp-2D0h]
  float selfa; // [esp+1Ch] [ebp-2CCh]
  NiGeometryData *self; // [esp+1Ch] [ebp-2CCh]
  float v109; // [esp+20h] [ebp-2C8h] BYREF
  float v110; // [esp+24h] [ebp-2C4h] BYREF
  float v111; // [esp+28h] [ebp-2C0h]
  float *v112; // [esp+2Ch] [ebp-2BCh] BYREF
  NiPoint3 v113; // [esp+30h] [ebp-2B8h] BYREF
  float v114; // [esp+3Ch] [ebp-2ACh]
  float v115; // [esp+40h] [ebp-2A8h]
  float v116; // [esp+44h] [ebp-2A4h]
  float v117; // [esp+48h] [ebp-2A0h]
  float v118; // [esp+4Ch] [ebp-29Ch]
  float v119; // [esp+50h] [ebp-298h]
  float v120; // [esp+54h] [ebp-294h]
  float v121; // [esp+58h] [ebp-290h]
  float v122; // [esp+5Ch] [ebp-28Ch]
  float v123; // [esp+60h] [ebp-288h]
  float v124; // [esp+64h] [ebp-284h]
  float v125; // [esp+68h] [ebp-280h]
  float v126; // [esp+6Ch] [ebp-27Ch]
  float v127; // [esp+70h] [ebp-278h]
  float v128; // [esp+74h] [ebp-274h]
  float v129; // [esp+78h] [ebp-270h]
  float v130; // [esp+7Ch] [ebp-26Ch]
  float v131; // [esp+80h] [ebp-268h]
  float v132; // [esp+84h] [ebp-264h]
  float v133; // [esp+88h] [ebp-260h]
  float v134; // [esp+8Ch] [ebp-25Ch]
  float v135; // [esp+90h] [ebp-258h]
  float v136; // [esp+94h] [ebp-254h]
  float v137; // [esp+98h] [ebp-250h]
  float v138; // [esp+9Ch] [ebp-24Ch]
  float v139; // [esp+A0h] [ebp-248h]
  float v140; // [esp+A4h] [ebp-244h]
  float v141; // [esp+A8h] [ebp-240h]
  float v142; // [esp+ACh] [ebp-23Ch]
  float v143; // [esp+B0h] [ebp-238h]
  float v144; // [esp+B4h] [ebp-234h]
  float v145; // [esp+B8h] [ebp-230h]
  float v146; // [esp+BCh] [ebp-22Ch]
  float v147; // [esp+C0h] [ebp-228h]
  float v148; // [esp+C4h] [ebp-224h]
  float v149; // [esp+C8h] [ebp-220h]
  float v150; // [esp+CCh] [ebp-21Ch]
  float v151; // [esp+D0h] [ebp-218h]
  float v152; // [esp+D4h] [ebp-214h]
  float v153; // [esp+D8h] [ebp-210h]
  float v154; // [esp+DCh] [ebp-20Ch]
  float v155; // [esp+E0h] [ebp-208h]
  float v156; // [esp+E4h] [ebp-204h]
  float v157; // [esp+E8h] [ebp-200h]
  float v158; // [esp+ECh] [ebp-1FCh]
  float v159; // [esp+F0h] [ebp-1F8h]
  float v160; // [esp+F4h] [ebp-1F4h]
  float v161; // [esp+F8h] [ebp-1F0h]
  float v162; // [esp+FCh] [ebp-1ECh]
  float v163; // [esp+100h] [ebp-1E8h]
  float v164; // [esp+104h] [ebp-1E4h]
  float v165; // [esp+108h] [ebp-1E0h]
  float v166; // [esp+10Ch] [ebp-1DCh]
  float v167; // [esp+110h] [ebp-1D8h]
  float v168; // [esp+114h] [ebp-1D4h]
  float v169; // [esp+118h] [ebp-1D0h]
  float v170; // [esp+11Ch] [ebp-1CCh]
  float v171; // [esp+120h] [ebp-1C8h]
  float v172; // [esp+124h] [ebp-1C4h]
  float v173; // [esp+128h] [ebp-1C0h]
  NiStridedVertexStream outVertices; // [esp+12Ch] [ebp-1BCh] BYREF
  float v175; // [esp+138h] [ebp-1B0h] BYREF
  float v176; // [esp+13Ch] [ebp-1ACh]
  float v177; // [esp+140h] [ebp-1A8h]
  float v178; // [esp+144h] [ebp-1A4h] BYREF
  float v179; // [esp+148h] [ebp-1A0h]
  float v180; // [esp+14Ch] [ebp-19Ch]
  float v181; // [esp+150h] [ebp-198h] BYREF
  float v182; // [esp+154h] [ebp-194h]
  float v183; // [esp+158h] [ebp-190h]
  _DWORD v184[2]; // [esp+15Ch] [ebp-18Ch] BYREF
  char v185; // [esp+164h] [ebp-184h]
  NiPoint3 v186; // [esp+168h] [ebp-180h] BYREF
  int v187; // [esp+174h] [ebp-174h] BYREF
  int v188; // [esp+178h] [ebp-170h]
  char v189; // [esp+17Ch] [ebp-16Ch]
  float v190; // [esp+180h] [ebp-168h] BYREF
  float v191; // [esp+184h] [ebp-164h]
  float v192; // [esp+188h] [ebp-160h]
  float v193; // [esp+18Ch] [ebp-15Ch] BYREF
  float v194; // [esp+190h] [ebp-158h]
  float v195; // [esp+194h] [ebp-154h]
  float v196; // [esp+198h] [ebp-150h]
  float v197; // [esp+19Ch] [ebp-14Ch] BYREF
  float v198; // [esp+1A0h] [ebp-148h]
  float v199; // [esp+1A4h] [ebp-144h]
  float v200; // [esp+1A8h] [ebp-140h]
  float v201; // [esp+1ACh] [ebp-13Ch] BYREF
  float v202; // [esp+1B0h] [ebp-138h]
  float v203; // [esp+1B4h] [ebp-134h]
  float v204; // [esp+1B8h] [ebp-130h]
  int v205; // [esp+1BCh] [ebp-12Ch] BYREF
  int v206; // [esp+1C0h] [ebp-128h]
  char v207; // [esp+1C4h] [ebp-124h]
  float v208; // [esp+1C8h] [ebp-120h]
  float v209; // [esp+1CCh] [ebp-11Ch]
  float v210; // [esp+1D0h] [ebp-118h]
  NiPoint3 v211; // [esp+1D4h] [ebp-114h]
  float v212; // [esp+1E0h] [ebp-108h]
  float v213; // [esp+1E4h] [ebp-104h]
  float v214; // [esp+1E8h] [ebp-100h]
  int v215; // [esp+1ECh] [ebp-FCh]
  float v216; // [esp+1F0h] [ebp-F8h]
  float v217; // [esp+1F4h] [ebp-F4h]
  float v218; // [esp+1F8h] [ebp-F0h]
  int v219; // [esp+1FCh] [ebp-ECh]
  float v220; // [esp+200h] [ebp-E8h]
  float v221; // [esp+204h] [ebp-E4h]
  float v222; // [esp+208h] [ebp-E0h]
  int v223; // [esp+20Ch] [ebp-DCh]
  float v224; // [esp+210h] [ebp-D8h]
  float v225; // [esp+214h] [ebp-D4h]
  float v226; // [esp+218h] [ebp-D0h]
  int v227; // [esp+21Ch] [ebp-CCh]
  int v228; // [esp+220h] [ebp-C8h]
  float v229; // [esp+224h] [ebp-C4h] BYREF
  float v230; // [esp+228h] [ebp-C0h]
  float v231; // [esp+22Ch] [ebp-BCh]
  float v232; // [esp+230h] [ebp-B8h]
  float v233; // [esp+234h] [ebp-B4h]
  float v234; // [esp+238h] [ebp-B0h]
  float v235; // [esp+23Ch] [ebp-ACh]
  float v236; // [esp+240h] [ebp-A8h]
  float v237; // [esp+244h] [ebp-A4h]
  float v238; // [esp+248h] [ebp-A0h]
  float v239; // [esp+24Ch] [ebp-9Ch]
  float v240; // [esp+250h] [ebp-98h]
  float v241; // [esp+254h] [ebp-94h]
  float v242; // [esp+258h] [ebp-90h]
  float v243; // [esp+25Ch] [ebp-8Ch]
  float v244; // [esp+260h] [ebp-88h]
  float v245; // [esp+264h] [ebp-84h]
  float v246; // [esp+268h] [ebp-80h]
  float v247; // [esp+26Ch] [ebp-7Ch]
  float v248; // [esp+270h] [ebp-78h]
  float v249; // [esp+274h] [ebp-74h]
  float v250; // [esp+278h] [ebp-70h]
  float v251; // [esp+27Ch] [ebp-6Ch]
  float v252; // [esp+280h] [ebp-68h]
  float v253; // [esp+284h] [ebp-64h]
  float v254; // [esp+288h] [ebp-60h]
  float v255; // [esp+28Ch] [ebp-5Ch]
  float v256; // [esp+290h] [ebp-58h]
  float v257; // [esp+294h] [ebp-54h]
  float v258; // [esp+298h] [ebp-50h]
  float v259; // [esp+29Ch] [ebp-4Ch]
  float v260; // [esp+2A0h] [ebp-48h]
  float v261; // [esp+2A4h] [ebp-44h]
  float v262; // [esp+2A8h] [ebp-40h]
  float v263[3]; // [esp+2ACh] [ebp-3Ch] BYREF
  float v264[3]; // [esp+2B8h] [ebp-30h] BYREF
  float v265[3]; // [esp+2C4h] [ebp-24h] BYREF
  char v266; // [esp+2D0h] [ebp-18h] BYREF
  char v267; // [esp+2DCh] [ebp-Ch] BYREF

  v265[0] = *a1 - *(float *)&a4[2].member.m_usVertices; /*0x95b264*/
  v265[1] = a1[1] - a4[2].member.m_kBound.Center.x; /*0x95b278*/
  v265[2] = a1[2] - a4[2].member.m_kBound.Center.y; /*0x95b28e*/
  v102 = 1.0 / a4[2].member.m_kBound.Center.z; /*0x95b29c*/
  v4 = NiPoint3_MultiplyMatrix3(&v190, v265, (float *)&a4[1].member.m_pkColor); /*0x95b2a0*/
  v111 = v4[1] * v102; /*0x95b2bb*/
  selfa = v4[2] * v102; /*0x95b2c4*/
  v264[0] = v102 * *v4; /*0x95b2d2*/
  v264[1] = v111; /*0x95b2dd*/
  v264[2] = selfa; /*0x95b2e8*/
  v5 = NiPoint3_MultiplyMatrix3(&v190, a2, (float *)&a4[1].member.m_pkColor); /*0x95b2ef*/
  m_spAdditionalGeomData = a4[2].member.m_spAdditionalGeomData; /*0x95b2f7*/
  v101 = 0; /*0x95b306*/
  v7 = v102; /*0x95b30d*/
  v111 = v5[1] * v102; /*0x95b30f*/
  v103 = v5[2] * v102; /*0x95b318*/
  v263[0] = v7 * *v5; /*0x95b31e*/
  v263[1] = v111; /*0x95b329*/
  v263[2] = v103; /*0x95b334*/
  v8 = (*(int (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x5C))(m_spAdditionalGeomData); /*0x95b340*/
  v9 = a4[2].member.m_spAdditionalGeomData; /*0x95b342*/
  data = 0; /*0x95b348*/
  stride = 0; /*0x95b34a*/
  v12 = v8; /*0x95b34c*/
  memset(&outVertices, 0, 9); /*0x95b34f*/
  v13 = *((float *)v9 + 7); /*0x95b364*/
  v223 = v8; /*0x95b367*/
  v100 = 0; /*0x95b36e*/
  self = (NiGeometryData *)v9; /*0x95b373*/
  v111 = v13; /*0x95b377*/
  if ( v13 == 0.0 ) /*0x95b37d*/
  {
    v14 = *((_DWORD *)v9 + 0xD); /*0x95b37f*/
    if ( v14 ) /*0x95b384*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v14 + 0x4C))(*((_DWORD *)v9 + 0xD)) ) /*0x95b38d*/
      {
        v100 = NiGeometryData_LockVertexStream((NiGeometryData *)v9, 1); /*0x95b3a6*/
        NiGeometryData_GetLockedVertexStream((NiGeometryData *)v9, &outVertices); /*0x95b3aa*/
      }
      data = (char *)outVertices.data; /*0x95b3af*/
      stride = outVertices.stride; /*0x95b3b6*/
    }
  }
  v15 = *((_DWORD *)v9 + 0x12); /*0x95b3c0*/
  v219 = v15; /*0x95b3c3*/
  v104 = 0; /*0x95b3ca*/
  if ( !v12 ) /*0x95b3d2*/
  {
LABEL_7:
    if ( v100 ) /*0x95b3d9*/
      NiGeometryData_UnlockVertexStream((NiGeometryData *)v9); /*0x95b3dd*/
    return v101; /*0x95b3f0*/
  }
  while ( 1 ) /*0x95b417*/
  {
    v17 = *(unsigned __int16 *)(v15 + 6 * v104); /*0x95b417*/
    v18 = *(unsigned __int16 *)(v15 + 6 * v104 + 2); /*0x95b41b*/
    v19 = (float *)*(unsigned __int16 *)(v15 + 6 * v104 + 4); /*0x95b420*/
    v228 = v17; /*0x95b425*/
    v215 = v18; /*0x95b42c*/
    v112 = v19; /*0x95b433*/
    if ( v100 ) /*0x95b43d*/
    {
      v20 = (float *)&data[(unsigned __int16)v17 * stride]; /*0x95b447*/
      v181 = *v20; /*0x95b449*/
      v182 = v20[1]; /*0x95b453*/
      v183 = v20[2]; /*0x95b45d*/
      v21 = (float *)&data[(unsigned __int16)v18 * stride]; /*0x95b46c*/
      v178 = *v21; /*0x95b46e*/
      v179 = v21[1]; /*0x95b478*/
      v22 = (unsigned __int16)v19; /*0x95b482*/
      v23 = (float *)&data[(unsigned __int16)v19 * stride]; /*0x95b488*/
      v180 = v21[2]; /*0x95b48a*/
      v175 = *v23; /*0x95b493*/
      v176 = v23[1]; /*0x95b49d*/
      v177 = v23[2]; /*0x95b4a7*/
    }
    else
    {
      v24 = (float *)(LODWORD(v13) + 0xC * (unsigned __int16)v17); /*0x95b4b6*/
      v181 = *v24; /*0x95b4b9*/
      v182 = v24[1]; /*0x95b4c3*/
      v183 = v24[2]; /*0x95b4cd*/
      v25 = (float *)(LODWORD(v13) + 0xC * (unsigned __int16)v18); /*0x95b4db*/
      v178 = *v25; /*0x95b4de*/
      v179 = v25[1]; /*0x95b4e8*/
      v26 = v25[2]; /*0x95b4ef*/
      v22 = (unsigned __int16)v19; /*0x95b4f6*/
      v27 = (float *)(LODWORD(v111) + 0xC * (unsigned __int16)v19); /*0x95b4fc*/
      v180 = v26; /*0x95b4ff*/
      v175 = *v27; /*0x95b508*/
      v176 = v27[1]; /*0x95b512*/
      v177 = v27[2]; /*0x95b51c*/
    }
    LOBYTE(v227) = *(_BYTE *)(a3 + 0x10); /*0x95b52d*/
    if ( sub_96E5E0(v264, v263, &v181, &v178, &v175, v227, &v186, &v229, &v110, &v109) ) /*0x95b57e*/
      break; /*0x95b57e*/
LABEL_49:
    if ( ++v104 >= (unsigned __int16)v223 ) /*0x95c4fe*/
    {
      v9 = (NiAdditionalGeometryData *)self; /*0x95c504*/
      goto LABEL_7; /*0x95c508*/
    }
    stride = outVertices.stride; /*0x95b3f1*/
    data = (char *)outVertices.data; /*0x95b3f8*/
    v15 = v219; /*0x95b3ff*/
    v13 = v111; /*0x95b406*/
  }
  v101 = 1; /*0x95b590*/
  v28 = (NiPickRecord_Oblivion_044Verified *)FormHeapAlloc(0x44u); /*0x95b595*/
  if ( v28 ) /*0x95b59f*/
    v29 = NiPickRecord_Initialize(v28, (NiRefObject *)a4); /*0x95b5b0*/
  else
    v29 = 0; /*0x95b5b4*/
  if ( *(_DWORD *)(a3 + 0xC) == 1 ) /*0x95b5c1*/
  {
    v30 = sub_7101F0((NiTransform *)&a4[1].member.m_pkColor, (NiTransform *)&v267, &v186); /*0x95b5e1*/
    z = a4[2].member.m_kBound.Center.z; /*0x95b5f6*/
    v208 = z * v30->rot.data[0][0]; /*0x95b602*/
    v209 = v30->rot.data[0][1] * z; /*0x95b60e*/
    v210 = z * v30->rot.data[0][2]; /*0x95b618*/
    v230 = *(float *)&a4[2].member.m_usVertices + v208; /*0x95b629*/
    x = a4[2].member.m_kBound.Center.x; /*0x95b637*/
    v186.x = v230; /*0x95b63a*/
    v231 = x + v209; /*0x95b648*/
    y = a4[2].member.m_kBound.Center.y; /*0x95b656*/
    v186.y = v231; /*0x95b659*/
    v232 = y + v210; /*0x95b667*/
    v186.z = v232; /*0x95b675*/
  }
  v29->intersectionPoint_008.x = v186.x; /*0x95b683*/
  v29->intersectionPoint_008.y = v186.y; /*0x95b692*/
  v33 = v228; /*0x95b69c*/
  v29->intersectionPoint_008.z = v186.z; /*0x95b6a4*/
  v34 = v215; /*0x95b6a7*/
  v35 = v229; /*0x95b6af*/
  *(_WORD *)v29->unknown_018_027 = v104; /*0x95b6b6*/
  v36 = (__int16)v112; /*0x95b6ba*/
  v29->hitDistance_014 = v35; /*0x95b6bf*/
  *(_WORD *)&v29->unknown_018_027[2] = v33; /*0x95b6c2*/
  *(_WORD *)&v29->unknown_018_027[4] = v34; /*0x95b6cd*/
  *(_WORD *)&v29->unknown_018_027[6] = v36; /*0x95b6d1*/
  v106 = 1.0 - (v110 + v109); /*0x95b6e5*/
  if ( !*(_BYTE *)(a3 + 0x2C) ) /*0x95b6e9*/
  {
    *(float *)&v29->unknown_018_027[8] = g_TESObjectTREE_InitialBillboardSizeX; /*0x95b9ad*/
    v46 = g_TESObjectTREE_InitialBillboardSizeY; /*0x95b9b0*/
    goto LABEL_27; /*0x95b9b0*/
  }
  v205 = 0; /*0x95b6fe*/
  v206 = 0; /*0x95b705*/
  v207 = 0; /*0x95b70c*/
  sub_728E70((int)self, 0, (int)&v205); /*0x95b713*/
  if ( v205 ) /*0x95b721*/
  {
    v112 = (float *)(v205 + (unsigned __int16)v18 * v206); /*0x95b738*/
    v37 = (float *)(v205 + (unsigned __int16)v17 * v206); /*0x95b746*/
    v38 = (float *)(v205 + v22 * v206); /*0x95b748*/
    v39 = *v38; /*0x95b74a*/
    v40 = v38[1]; /*0x95b74c*/
    v124 = v39; /*0x95b74f*/
    v125 = v40; /*0x95b753*/
    v41 = v39; /*0x95b757*/
    v42 = v112[1]; /*0x95b767*/
    v142 = *v112; /*0x95b76c*/
    v43 = *v37; /*0x95b773*/
    v44 = v37[1]; /*0x95b777*/
    v124 = v41 * v109; /*0x95b77a*/
    v125 = v109 * v125; /*0x95b791*/
    v142 = v142 * v110; /*0x95b7a6*/
    v143 = v110 * v42; /*0x95b7b4*/
    v116 = v43 * v106; /*0x95b7c9*/
    v117 = v106 * v44; /*0x95b7dc*/
    v152 = v116 + v142; /*0x95b7f6*/
    v153 = v117 + v143; /*0x95b819*/
    v170 = v152 + v124; /*0x95b839*/
    v45 = v153; /*0x95b847*/
    *(float *)&v29->unknown_018_027[8] = v170; /*0x95b84e*/
    v171 = v45 + v125; /*0x95b855*/
    v46 = v171; /*0x95b85c*/
LABEL_27:
    *(float *)&v29->unknown_018_027[0xC] = v46; /*0x95b9b5*/
    goto LABEL_28; /*0x95b9b5*/
  }
  v47 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 0xA); /*0x95b875*/
  if ( v47 ) /*0x95b87a*/
  {
    v48 = *(float *)(v47 + 8 * v22 + 4); /*0x95b883*/
    v136 = *(float *)(v47 + 8 * v22); /*0x95b887*/
    v49 = *(float *)(v47 + 8 * (unsigned __int16)v18); /*0x95b899*/
    v137 = v48; /*0x95b89e*/
    v50 = *(float *)(v47 + 8 * (unsigned __int16)v18 + 4); /*0x95b8a7*/
    v122 = v49; /*0x95b8ad*/
    v51 = *(float *)(v47 + 8 * (unsigned __int16)v17); /*0x95b8b1*/
    v136 = v136 * v109; /*0x95b8b4*/
    v123 = v50; /*0x95b8bb*/
    v52 = *(float *)(v47 + 8 * (unsigned __int16)v17 + 4); /*0x95b8bf*/
    v137 = v109 * v137; /*0x95b8d2*/
    v122 = v122 * v110; /*0x95b8e7*/
    v123 = v110 * v123; /*0x95b8ef*/
    v114 = v51 * v106; /*0x95b901*/
    v115 = v106 * v52; /*0x95b911*/
    v130 = v114 + v122; /*0x95b928*/
    v131 = v115 + v123; /*0x95b942*/
    v172 = v130 + v136; /*0x95b962*/
    v53 = v131; /*0x95b970*/
    *(float *)&v29->unknown_018_027[8] = v172; /*0x95b977*/
    v173 = v53 + v137; /*0x95b981*/
    *(float *)&v29->unknown_018_027[0xC] = v173; /*0x95b98f*/
  }
  else
  {
    *(float *)&v29->unknown_018_027[8] = g_TESObjectTREE_InitialBillboardSizeX; /*0x95b999*/
    *(float *)&v29->unknown_018_027[0xC] = g_TESObjectTREE_InitialBillboardSizeY; /*0x95b9a2*/
  }
LABEL_28:
  if ( *(_BYTE *)(a3 + 0x2D) ) /*0x95b9bf*/
  {
    v187 = 0; /*0x95b9d7*/
    v188 = 0; /*0x95b9de*/
    v189 = 0; /*0x95b9e5*/
    sub_728D00((int)self, (int)&v187); /*0x95b9ec*/
    if ( v187 ) /*0x95b9fa*/
    {
      v54 = (float *)(v187 + (unsigned __int16)v17 * v188); /*0x95ba0c*/
      v248 = *v54; /*0x95ba10*/
      v55 = v54[1]; /*0x95ba17*/
      v250 = v54[2]; /*0x95ba1d*/
      v56 = (float *)(v187 + (unsigned __int16)v18 * v188); /*0x95ba2c*/
      v57 = (float *)(v187 + v22 * v188); /*0x95ba33*/
      v249 = v55; /*0x95ba3a*/
      v242 = *v56; /*0x95ba43*/
      v58 = v56[1]; /*0x95ba4a*/
      v59 = v56[2]; /*0x95ba4d*/
      v243 = v58; /*0x95ba50*/
      v236 = *v57; /*0x95ba59*/
      v244 = v59; /*0x95ba60*/
      v60 = v57[1]; /*0x95ba6e*/
      v61 = v57[2]; /*0x95ba75*/
      v237 = v60; /*0x95ba7a*/
      v238 = v61; /*0x95ba83*/
      v212 = v236 * v109; /*0x95ba8c*/
      v213 = v60 * v109; /*0x95ba9c*/
      v214 = v109 * v61; /*0x95baaa*/
      v260 = v242 * v110; /*0x95bac2*/
      v261 = v58 * v110; /*0x95bad2*/
      v262 = v110 * v244; /*0x95bae0*/
      v254 = v248 * v106; /*0x95baf8*/
      v255 = v249 * v106; /*0x95bb08*/
      v256 = v106 * v250; /*0x95bb16*/
      v233 = v254 + v260; /*0x95bb2b*/
      v234 = v255 + v261; /*0x95bb40*/
      v235 = v256 + v262; /*0x95bb55*/
      v211.x = v233 + v212; /*0x95bb6a*/
      v211.y = v234 + v213; /*0x95bb8a*/
      v211.z = v235 + v214; /*0x95bba6*/
      v113 = v211; /*0x95bbb4*/
    }
    else
    {
      if ( *(_BYTE *)(a3 + 0x2E) && (v62 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 8)) != 0 ) /*0x95bbe4*/
      {
        v63 = (float *)(v62 + 0xC * v22); /*0x95bbf0*/
        v220 = *v63 * v109; /*0x95bc00*/
        v221 = v63[1] * v109; /*0x95bc0c*/
        v64 = v109 * v63[2]; /*0x95bc13*/
        v65 = (float *)(v62 + 0xC * (unsigned __int16)v18); /*0x95bc1a*/
        v222 = v64; /*0x95bc1d*/
        v216 = *v65 * v110; /*0x95bc30*/
        v217 = v65[1] * v110; /*0x95bc3c*/
        v66 = v110 * v65[2]; /*0x95bc43*/
        v67 = (float *)(v62 + 0xC * (unsigned __int16)v17); /*0x95bc46*/
        v218 = v66; /*0x95bc49*/
        v257 = v106 * *v67; /*0x95bc58*/
        v258 = v67[1] * v106; /*0x95bc64*/
        v259 = v106 * v67[2]; /*0x95bc6e*/
        v239 = v257 + v216; /*0x95bc83*/
        v240 = v258 + v217; /*0x95bc98*/
        v241 = v259 + v218; /*0x95bcad*/
        v251 = v239 + v220; /*0x95bcc2*/
        v68 = v251; /*0x95bcc9*/
        v252 = v240 + v221; /*0x95bcde*/
        v69 = v252; /*0x95bce5*/
        v253 = v241 + v222; /*0x95bcfa*/
        v70 = v253; /*0x95bd01*/
      }
      else
      {
        v245 = v178 - v181; /*0x95bd21*/
        v246 = v179 - v182; /*0x95bd3c*/
        v247 = v180 - v183; /*0x95bd57*/
        v224 = v175 - v181; /*0x95bd69*/
        v225 = v176 - v182; /*0x95bd77*/
        v226 = v177 - v183; /*0x95bd85*/
        v190 = v226 * v246 - v225 * v247; /*0x95bdb8*/
        v68 = v190; /*0x95bdbf*/
        v191 = v247 * v224 - v226 * v245; /*0x95bde2*/
        v69 = v191; /*0x95bde9*/
        v192 = v245 * v225 - v224 * v246; /*0x95bdf6*/
        v70 = v192; /*0x95bdfd*/
      }
      v113.z = v70; /*0x95be04*/
      v113.y = v69; /*0x95be08*/
      v113.x = v68; /*0x95be0c*/
    }
    Vector3_NormalizeInPlace(&v113.x); /*0x95be14*/
    if ( *(_DWORD *)(a3 + 0xC) == 1 ) /*0x95be26*/
    {
      v71 = sub_7101F0((NiTransform *)&a4[1].member.m_pkColor, (NiTransform *)&v266, &v113); /*0x95be3f*/
      v113.x = v71->rot.data[0][0]; /*0x95be46*/
      v113.y = v71->rot.data[0][1]; /*0x95be4d*/
      v113.z = v71->rot.data[0][2]; /*0x95be54*/
    }
    v72 = v113.y; /*0x95be5c*/
    v73 = v113.z; /*0x95be60*/
    v29->surfaceNormal_028.x = v113.x; /*0x95be64*/
    v29->surfaceNormal_028.y = v72; /*0x95be67*/
  }
  else
  {
    v29->surfaceNormal_028.x = g_zeroNiPoint3.x; /*0x95be72*/
    v29->surfaceNormal_028.y = g_zeroNiPoint3.y; /*0x95be7b*/
    v73 = g_zeroNiPoint3.z; /*0x95be7e*/
  }
  v29->surfaceNormal_028.z = v73; /*0x95be8a*/
  if ( *(_BYTE *)(a3 + 0x2F) ) /*0x95be8d*/
  {
    v184[0] = 0; /*0x95bea5*/
    v184[1] = 0; /*0x95beac*/
    v185 = 0; /*0x95beb3*/
    sub_728DB0((int)self, (int)v184); /*0x95beba*/
    if ( v184[0] ) /*0x95bec7*/
    {
      v193 = 0.0; /*0x95bed6*/
      v194 = 0.0; /*0x95bede*/
      v195 = 0.0; /*0x95bee6*/
      v196 = 0.0; /*0x95bef4*/
      v197 = 0.0; /*0x95befb*/
      v198 = 0.0; /*0x95bf02*/
      v199 = 0.0; /*0x95bf09*/
      v200 = 0.0; /*0x95bf10*/
      v201 = 0.0; /*0x95bf17*/
      v202 = 0.0; /*0x95bf1e*/
      v203 = 0.0; /*0x95bf25*/
      v204 = 0.0; /*0x95bf2c*/
      sub_4C1440(v184, (unsigned __int16)v17, &v193); /*0x95bf33*/
      sub_4C1440(v184, (unsigned __int16)v18, &v197); /*0x95bf48*/
      sub_4C1440(v184, v22, &v201); /*0x95bf5d*/
      v166 = v201 * v109; /*0x95bf96*/
      v167 = v202 * v109; /*0x95bfc9*/
      v168 = v203 * v109; /*0x95bffc*/
      v169 = v109 * v204; /*0x95c02a*/
      v158 = v197 * v110; /*0x95c055*/
      v159 = v198 * v110; /*0x95c065*/
      v160 = v199 * v110; /*0x95c075*/
      v161 = v110 * v200; /*0x95c083*/
      v126 = v193 * v106; /*0x95c09b*/
      v127 = v194 * v106; /*0x95c0b0*/
      v128 = v195 * v106; /*0x95c0c5*/
      v129 = v106 * v196; /*0x95c0d8*/
      v132 = v126 + v158; /*0x95c0f2*/
      v133 = v127 + v159; /*0x95c115*/
      v134 = v128 + v160; /*0x95c138*/
      v164 = v134; /*0x95c14d*/
      v135 = v129 + v161; /*0x95c15b*/
      v165 = v135; /*0x95c170*/
      v162 = v132 + v166; /*0x95c17e*/
      v74 = v133; /*0x95c18c*/
      *(float *)v29->unknown_034_043 = v162; /*0x95c193*/
      v163 = v74 + v167; /*0x95c19d*/
      v75 = v164; /*0x95c1ab*/
      *(float *)&v29->unknown_034_043[4] = v163; /*0x95c1b2*/
      v164 = v75 + v168; /*0x95c1bc*/
      v76 = v165; /*0x95c1ca*/
      *(float *)&v29->unknown_034_043[8] = v164; /*0x95c1d1*/
      v165 = v76 + v169; /*0x95c1db*/
      *(float *)&v29->unknown_034_043[0xC] = v165; /*0x95c1e9*/
    }
    else
    {
      v77 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 9); /*0x95c1fe*/
      if ( v77 ) /*0x95c203*/
      {
        v78 = 0x10 * v22; /*0x95c209*/
        v79 = *(float *)(v78 + v77); /*0x95c20c*/
        v80 = *(float *)(v78 + v77 + 4); /*0x95c20f*/
        v81 = v77 + v78; /*0x95c213*/
        v148 = v79; /*0x95c215*/
        v82 = v79; /*0x95c21c*/
        v83 = *(float *)(v81 + 8); /*0x95c227*/
        v149 = v80; /*0x95c22c*/
        v84 = *(float *)(v81 + 0xC); /*0x95c235*/
        v150 = v83; /*0x95c23a*/
        v151 = v84; /*0x95c241*/
        v148 = v82 * v109; /*0x95c248*/
        v85 = 0x10 * (unsigned __int16)v18; /*0x95c24f*/
        v86 = *(float *)(v85 + v77); /*0x95c259*/
        v87 = *(float *)(v85 + v77 + 4); /*0x95c25f*/
        v88 = v77 + v85; /*0x95c263*/
        v138 = v86; /*0x95c265*/
        v149 = v149 * v109; /*0x95c26c*/
        v89 = *(float *)(v88 + 8); /*0x95c273*/
        v139 = v87; /*0x95c27d*/
        v90 = *(float *)(v88 + 0xC); /*0x95c286*/
        v140 = v89; /*0x95c289*/
        v141 = v90; /*0x95c290*/
        v150 = v150 * v109; /*0x95c297*/
        v91 = 0x10 * (unsigned __int16)v17; /*0x95c29e*/
        v92 = *(float *)(v91 + v77); /*0x95c2a1*/
        v93 = *(float *)(v91 + v77 + 8); /*0x95c2ab*/
        v94 = v77 + v91; /*0x95c2af*/
        v95 = *(float *)(v94 + 4); /*0x95c2b1*/
        v151 = v109 * v151; /*0x95c2b4*/
        v118 = v92; /*0x95c2bb*/
        v96 = *(float *)(v94 + 0xC); /*0x95c2c6*/
        v138 = v138 * v110; /*0x95c2df*/
        v139 = v139 * v110; /*0x95c2ef*/
        v140 = v140 * v110; /*0x95c2ff*/
        v141 = v110 * v141; /*0x95c30d*/
        v118 = v118 * v106; /*0x95c322*/
        v119 = v95 * v106; /*0x95c337*/
        v120 = v93 * v106; /*0x95c34c*/
        v121 = v106 * v96; /*0x95c35f*/
        v144 = v118 + v138; /*0x95c379*/
        v145 = v119 + v139; /*0x95c39c*/
        v146 = v120 + v140; /*0x95c3bf*/
        v156 = v146; /*0x95c3d4*/
        v147 = v121 + v141; /*0x95c3e2*/
        v157 = v147; /*0x95c3f7*/
        v154 = v144 + v148; /*0x95c405*/
        v97 = v145; /*0x95c413*/
        *(float *)v29->unknown_034_043 = v154; /*0x95c41a*/
        v155 = v97 + v149; /*0x95c424*/
        v98 = v156; /*0x95c432*/
        *(float *)&v29->unknown_034_043[4] = v155; /*0x95c439*/
        v156 = v98 + v150; /*0x95c443*/
        v99 = v157; /*0x95c451*/
        *(float *)&v29->unknown_034_043[8] = v156; /*0x95c458*/
        v157 = v99 + v151; /*0x95c462*/
        *(float *)&v29->unknown_034_043[0xC] = v157; /*0x95c470*/
      }
      else
      {
        *(_DWORD *)v29->unknown_034_043 = dword_B25AE0; /*0x95c47a*/
        *(_DWORD *)&v29->unknown_034_043[4] = dword_B25AE4; /*0x95c483*/
        *(_DWORD *)&v29->unknown_034_043[8] = dword_B25AE8; /*0x95c48c*/
        *(_DWORD *)&v29->unknown_034_043[0xC] = dword_B25AEC; /*0x95c494*/
      }
    }
  }
  else
  {
    *(_DWORD *)v29->unknown_034_043 = dword_B25AE0; /*0x95c49f*/
    *(_DWORD *)&v29->unknown_034_043[4] = dword_B25AE4; /*0x95c4a8*/
    *(_DWORD *)&v29->unknown_034_043[8] = dword_B25AE8; /*0x95c4b0*/
    *(_DWORD *)&v29->unknown_034_043[0xC] = dword_B25AEC; /*0x95c4b9*/
  }
  v112 = (float *)v29; /*0x95c4cb*/
  *(_DWORD *)(a3 + 0x28) = v29; /*0x95c4cf*/
  sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a3 + 0x18), &v112); /*0x95c4d2*/
  if ( *(_DWORD *)a3 != 1 || *(_DWORD *)(a3 + 4) != 1 ) /*0x95c4e9*/
    goto LABEL_49; /*0x95c4e9*/
  if ( v100 ) /*0x95c512*/
    NiGeometryData_UnlockVertexStream(self); /*0x95c518*/
  return 1; /*0x95b3e6*/
}
