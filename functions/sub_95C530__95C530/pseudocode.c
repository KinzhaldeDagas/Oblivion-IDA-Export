// Verified geometry-hit path: computes intersection point/distance and fills the 0x44-byte NiPickRecord. When requested, its +0x28 vector is either a normalized triangle face normal (NiPoint3_CrossProduct of edge vectors) or an interpolated vertex normal; no-normal cases write zero.
char __cdecl NiPick_ProcessGeometryIntersection(float *a1, float *a2, int a3, NiGeometryData *a4)
{
  NiGeometryData *v4; // esi
  NiRTTI *v5; // eax
  NiTransform *p_m_pkColor; // ebx
  float *v8; // eax
  float *v9; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  double v11; // st7
  unsigned __int16 v12; // ax
  NiGeometryData *v13; // ebp
  float v14; // edi
  NiAdditionalGeometryData *v15; // ecx
  unsigned int v16; // eax
  float v17; // ebp
  float *v18; // eax
  unsigned int v19; // eax
  float v20; // ebp
  float *v21; // eax
  unsigned int v22; // eax
  float v23; // ecx
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  int v27; // ebp
  NiPickRecord_Oblivion_044Verified *v28; // eax
  NiPickRecord_Oblivion_044Verified *pickRecord; // esi
  NiTransform *v30; // eax
  double x; // st7
  double y; // st7
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  bool v36; // zf
  float *v37; // eax
  int v38; // ecx
  int v39; // edx
  float v40; // edi
  float v41; // edx
  float v42; // edx
  float v43; // ecx
  float v44; // edx
  float v45; // eax
  double v46; // st7
  int v47; // edi
  float *v48; // ebp
  float *v49; // eax
  float v50; // ecx
  double v51; // st7
  float *v52; // eax
  double v53; // st7
  int v54; // eax
  float v55; // edi
  int v56; // eax
  float v57; // edi
  float *v58; // eax
  float v59; // edi
  int v60; // eax
  float v61; // edx
  float *v62; // eax
  float v63; // ecx
  float v64; // eax
  int v65; // edi
  float *v66; // eax
  float *v67; // eax
  NiPoint3 *v68; // eax
  NiTransform *v69; // eax
  float v70; // ecx
  float v71; // edx
  float *v72; // eax
  float *v73; // eax
  float v74; // ecx
  float v75; // edx
  float v76; // eax
  int v77; // edi
  float *v78; // eax
  float *v79; // eax
  float v80; // eax
  float v81; // ecx
  float v82; // edx
  NiColorAlpha *m_pkColor; // ecx
  void *m_pkTexture; // edx
  double v85; // st7
  float v86; // eax
  NiPickRecord_Oblivion_044Verified *v87; // eax
  NiPickRecord_Oblivion_044Verified *v88; // esi
  double v89; // st7
  float v90; // eax
  double v91; // st7
  float *v92; // [esp+1Ch] [ebp-30Ch]
  float *v93; // [esp+1Ch] [ebp-30Ch]
  float *v94; // [esp+1Ch] [ebp-30Ch]
  float *v95; // [esp+24h] [ebp-304h]
  float *v96; // [esp+24h] [ebp-304h]
  float *v97; // [esp+24h] [ebp-304h]
  int v98; // [esp+38h] [ebp-2F0h] BYREF
  float v99; // [esp+3Ch] [ebp-2ECh] BYREF
  int v100; // [esp+40h] [ebp-2E8h] BYREF
  int v101; // [esp+44h] [ebp-2E4h]
  float v102; // [esp+48h] [ebp-2E0h] BYREF
  float z; // [esp+4Ch] [ebp-2DCh] BYREF
  float v104; // [esp+50h] [ebp-2D8h]
  NiPoint3 v105; // [esp+54h] [ebp-2D4h] BYREF
  float v106; // [esp+60h] [ebp-2C8h] BYREF
  NiGeometryData *self; // [esp+64h] [ebp-2C4h]
  float v108; // [esp+68h] [ebp-2C0h] BYREF
  float v109; // [esp+6Ch] [ebp-2BCh]
  float v110; // [esp+70h] [ebp-2B8h]
  float v111; // [esp+74h] [ebp-2B4h]
  float v112; // [esp+78h] [ebp-2B0h]
  float v113; // [esp+7Ch] [ebp-2ACh]
  float v114; // [esp+80h] [ebp-2A8h]
  float v115; // [esp+84h] [ebp-2A4h]
  NiPoint3 v116; // [esp+88h] [ebp-2A0h]
  float v117; // [esp+94h] [ebp-294h]
  float v118; // [esp+98h] [ebp-290h]
  NiPoint3 v119; // [esp+9Ch] [ebp-28Ch]
  float v120; // [esp+A8h] [ebp-280h]
  float v121; // [esp+ACh] [ebp-27Ch]
  float v122; // [esp+B0h] [ebp-278h]
  float v123; // [esp+B4h] [ebp-274h]
  float v124; // [esp+B8h] [ebp-270h]
  float v125; // [esp+BCh] [ebp-26Ch]
  float v126; // [esp+C0h] [ebp-268h] BYREF
  float v127; // [esp+C4h] [ebp-264h]
  float v128; // [esp+C8h] [ebp-260h]
  float v129; // [esp+CCh] [ebp-25Ch] BYREF
  float v130; // [esp+D0h] [ebp-258h]
  float v131; // [esp+D4h] [ebp-254h]
  float v132; // [esp+D8h] [ebp-250h] BYREF
  float v133; // [esp+DCh] [ebp-24Ch]
  float v134; // [esp+E0h] [ebp-248h]
  _DWORD v135[2]; // [esp+E4h] [ebp-244h] BYREF
  int v136; // [esp+ECh] [ebp-23Ch]
  NiPoint3 v137; // [esp+F0h] [ebp-238h] BYREF
  float v138; // [esp+FCh] [ebp-22Ch]
  float v139; // [esp+100h] [ebp-228h]
  float v140; // [esp+104h] [ebp-224h]
  NiPoint3 v141; // [esp+108h] [ebp-220h] BYREF
  float v142; // [esp+114h] [ebp-214h]
  float v143; // [esp+118h] [ebp-210h]
  float v144; // [esp+11Ch] [ebp-20Ch]
  float v145; // [esp+120h] [ebp-208h]
  float v146; // [esp+124h] [ebp-204h]
  float v147; // [esp+128h] [ebp-200h]
  NiStridedVertexStream outVertices; // [esp+12Ch] [ebp-1FCh] BYREF
  NiPoint3 v149; // [esp+138h] [ebp-1F0h]
  float v150; // [esp+144h] [ebp-1E4h]
  float v151; // [esp+148h] [ebp-1E0h]
  float v152; // [esp+14Ch] [ebp-1DCh]
  float v153; // [esp+150h] [ebp-1D8h]
  float v154; // [esp+154h] [ebp-1D4h]
  float v155; // [esp+158h] [ebp-1D0h]
  float v156; // [esp+15Ch] [ebp-1CCh]
  float v157; // [esp+160h] [ebp-1C8h]
  float v158; // [esp+164h] [ebp-1C4h]
  NiTransform v159; // [esp+168h] [ebp-1C0h] BYREF
  float v160; // [esp+19Ch] [ebp-18Ch]
  float v161; // [esp+1A0h] [ebp-188h] BYREF
  float v162; // [esp+1A4h] [ebp-184h]
  int v163; // [esp+1A8h] [ebp-180h]
  float v164; // [esp+1ACh] [ebp-17Ch]
  float v165; // [esp+1B0h] [ebp-178h]
  float v166; // [esp+1B4h] [ebp-174h]
  float v167; // [esp+1B8h] [ebp-170h]
  int v168[4]; // [esp+1BCh] [ebp-16Ch] BYREF
  int v169[4]; // [esp+1CCh] [ebp-15Ch] BYREF
  int v170[4]; // [esp+1DCh] [ebp-14Ch] BYREF
  float v171[3]; // [esp+1ECh] [ebp-13Ch] BYREF
  NiPoint3 other; // [esp+1F8h] [ebp-130h] BYREF
  float v173[3]; // [esp+204h] [ebp-124h] BYREF
  float v174[3]; // [esp+210h] [ebp-118h] BYREF
  float v175[4]; // [esp+21Ch] [ebp-10Ch] BYREF
  float v176[4]; // [esp+22Ch] [ebp-FCh] BYREF
  float v177[2]; // [esp+23Ch] [ebp-ECh] BYREF
  float v178[2]; // [esp+244h] [ebp-E4h] BYREF
  float v179[2]; // [esp+24Ch] [ebp-DCh] BYREF
  int v180[3]; // [esp+254h] [ebp-D4h] BYREF
  NiTransform v181; // [esp+260h] [ebp-C8h] BYREF
  float v182[3]; // [esp+29Ch] [ebp-8Ch] BYREF
  int v183[4]; // [esp+2A8h] [ebp-80h] BYREF
  int v184[4]; // [esp+2B8h] [ebp-70h] BYREF
  int v185[4]; // [esp+2C8h] [ebp-60h] BYREF
  int v186[4]; // [esp+2D8h] [ebp-50h] BYREF
  int v187[4]; // [esp+2E8h] [ebp-40h] BYREF
  float v188[4]; // [esp+2F8h] [ebp-30h] BYREF
  float v189[4]; // [esp+308h] [ebp-20h] BYREF
  int v190[4]; // [esp+318h] [ebp-10h] BYREF

  v4 = a4; /*0x95c544*/
  if ( *(_DWORD *)(a3 + 8) && !a4[2].member.BuffData ) /*0x95c552*/
  {
    v5 = a4->__vftable->super.GetType(a4); /*0x95c566*/
    if ( v5 ) /*0x95c56a*/
    {
      while ( v5 != &stru_B3FD04 ) /*0x95c575*/
      {
        v5 = v5->parent; /*0x95c577*/
        if ( !v5 ) /*0x95c57c*/
          goto LABEL_6; /*0x95c57c*/
      }
      if ( *((_WORD *)a4[2].member.m_spAdditionalGeomData + 0x22) == 1 ) /*0x95c5c0*/
        return sub_95A380(a1, a2, a3, (int)a4); /*0x95c5e6*/
    }
    else
    {
LABEL_6:
      if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FCD4, (NiObject *)a4) ) /*0x95c584*/
        return sub_95B240(a1, a2, a3, a4); /*0x95c5b4*/
    }
    p_m_pkColor = (NiTransform *)&a4[1].member.m_pkColor; /*0x95c5f0*/
    v171[0] = *a1 - *(float *)&a4[2].member.m_usVertices; /*0x95c5ff*/
    v171[1] = a1[1] - a4[2].member.m_kBound.Center.x; /*0x95c60c*/
    v171[2] = a1[2] - a4[2].member.m_kBound.Center.y; /*0x95c621*/
    v104 = 1.0 / a4[2].member.m_kBound.Center.z; /*0x95c62f*/
    v8 = NiPoint3_MultiplyMatrix3(&v141.x, v171, (float *)&a4[1].member.m_pkColor); /*0x95c633*/
    v109 = v8[1] * v104; /*0x95c656*/
    *(float *)&self = v8[2] * v104; /*0x95c65f*/
    v174[0] = v104 * *v8; /*0x95c665*/
    v174[1] = v109; /*0x95c670*/
    v174[2] = *(float *)&self; /*0x95c67b*/
    v9 = NiPoint3_MultiplyMatrix3(&v141.x, a2, (float *)&a4[1].member.m_pkColor); /*0x95c682*/
    m_spAdditionalGeomData = a4[2].member.m_spAdditionalGeomData; /*0x95c68a*/
    v11 = v104; /*0x95c6a0*/
    v109 = v9[1] * v104; /*0x95c6a2*/
    v104 = v9[2] * v104; /*0x95c6ab*/
    v173[0] = v11 * *v9; /*0x95c6b1*/
    v173[1] = v109; /*0x95c6bc*/
    v173[2] = v104; /*0x95c6c7*/
    v12 = (*(int (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x5C))(m_spAdditionalGeomData); /*0x95c6d3*/
    v13 = (NiGeometryData *)a4[2].member.m_spAdditionalGeomData; /*0x95c6d5*/
    LODWORD(v109) = v12; /*0x95c6de*/
    memset(&outVertices, 0, 9); /*0x95c6e4*/
    v14 = *(float *)&v13->member.m_pkVertex; /*0x95c6f9*/
    HIWORD(v101) = 0; /*0x95c6fe*/
    self = v13; /*0x95c703*/
    v102 = v14; /*0x95c707*/
    if ( v14 == 0.0 ) /*0x95c70b*/
    {
      v15 = v13->member.m_spAdditionalGeomData; /*0x95c70d*/
      if ( v15 ) /*0x95c712*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)v15 + 0x4C))(v15) ) /*0x95c719*/
        {
          BYTE2(v101) = NiGeometryData_LockVertexStream(v13, 1); /*0x95c732*/
          NiGeometryData_GetLockedVertexStream(v13, &outVertices); /*0x95c736*/
        }
      }
    }
    v104 = 0.0; /*0x95c741*/
    if ( !LOWORD(v109) ) /*0x95c749*/
    {
LABEL_55:
      if ( BYTE2(v101) ) /*0x95d385*/
        NiGeometryData_UnlockVertexStream(v13); /*0x95d389*/
      return HIBYTE(v101); /*0x95d39c*/
    }
    while ( 1 ) /*0x95c76f*/
    {
      (*(void (__thiscall **)(NiAdditionalGeometryData *, float, int *, int *, float *))(*(_DWORD *)v4[2].member.m_spAdditionalGeomData /*0x95c76f*/
                                                                                       + 0x60))(
        v4[2].member.m_spAdditionalGeomData,
        COERCE_FLOAT(LODWORD(v104)),
        &v98,
        &v100,
        &v99);
      if ( v14 == 0.0 ) /*0x95c778*/
      {
        v16 = outVertices.stride * (unsigned __int16)v98; /*0x95c78c*/
        v17 = *(float *)((char *)outVertices.data + v16); /*0x95c78f*/
        v18 = (float *)((char *)outVertices.data + v16); /*0x95c792*/
        v132 = v17; /*0x95c794*/
        v133 = v18[1]; /*0x95c79e*/
        v134 = v18[2]; /*0x95c7a8*/
        v19 = outVertices.stride * (unsigned __int16)v100; /*0x95c7b4*/
        v20 = *(float *)((char *)outVertices.data + v19); /*0x95c7b7*/
        v21 = (float *)((char *)outVertices.data + v19); /*0x95c7ba*/
        v126 = v20; /*0x95c7bc*/
        v127 = v21[1]; /*0x95c7c6*/
        v128 = v21[2]; /*0x95c7d0*/
        v22 = outVertices.stride * LOWORD(v99); /*0x95c7dc*/
        v23 = *(float *)((char *)outVertices.data + v22); /*0x95c7df*/
        v24 = (float *)((char *)outVertices.data + v22); /*0x95c7e2*/
        v129 = v23; /*0x95c7e4*/
      }
      else
      {
        v25 = (float *)(LODWORD(v14) + 0xC * (unsigned __int16)v98); /*0x95c807*/
        v132 = *v25; /*0x95c80a*/
        v133 = v25[1]; /*0x95c814*/
        v134 = v25[2]; /*0x95c826*/
        v26 = (float *)(LODWORD(v14) + 0xC * (unsigned __int16)v100); /*0x95c830*/
        v126 = *v26; /*0x95c833*/
        v127 = v26[1]; /*0x95c83d*/
        v128 = v26[2]; /*0x95c847*/
        v24 = (float *)(LODWORD(v14) + 0xC * LOWORD(v99)); /*0x95c859*/
        v129 = *v24; /*0x95c85c*/
      }
      v130 = v24[1]; /*0x95c7ee*/
      v131 = v24[2]; /*0x95c7f8*/
      v27 = a3; /*0x95c877*/
      LOBYTE(v167) = *(_BYTE *)(a3 + 0x10); /*0x95c881*/
      if ( sub_96E5E0(v174, v173, &v132, &v126, &v129, SLOBYTE(v167), &v137, &v159.rot.data[1][1], &v106, &v108) ) /*0x95c8d2*/
      {
        HIBYTE(v101) = 1; /*0x95c8e4*/
        v28 = (NiPickRecord_Oblivion_044Verified *)FormHeapAlloc(0x44u); /*0x95c8e9*/
        if ( v28 ) /*0x95c8f5*/
          pickRecord = NiPickRecord_Initialize(v28, (NiRefObject *)v4); /*0x95c8ff*/
        else
          pickRecord = 0; /*0x95c903*/
        if ( *(_DWORD *)(a3 + 0xC) == 1 ) /*0x95c909*/
        {
          v30 = sub_7101F0(p_m_pkColor, &v181, &v137); /*0x95c921*/
          z = a4[2].member.m_kBound.Center.z; /*0x95c929*/
          v153 = z * v30->rot.data[0][0]; /*0x95c935*/
          v154 = v30->rot.data[0][1] * z; /*0x95c941*/
          v155 = z * v30->rot.data[0][2]; /*0x95c94b*/
          v150 = v153 + *(float *)&a4[2].member.m_usVertices; /*0x95c95c*/
          x = a4[2].member.m_kBound.Center.x; /*0x95c96a*/
          v137.x = v150; /*0x95c96d*/
          v151 = x + v154; /*0x95c97b*/
          y = a4[2].member.m_kBound.Center.y; /*0x95c989*/
          v137.y = v151; /*0x95c98c*/
          v152 = y + v155; /*0x95c99a*/
          v137.z = v152; /*0x95c9a8*/
        }
        pickRecord->intersectionPoint_008.x = v137.x; /*0x95c9b6*/
        v33 = LOWORD(v104); /*0x95c9c0*/
        pickRecord->intersectionPoint_008.y = v137.y; /*0x95c9c5*/
        pickRecord->intersectionPoint_008.z = v137.z; /*0x95c9cf*/
        pickRecord->hitDistance_014 = v159.rot.data[1][1]; /*0x95c9d9*/
        *(_WORD *)pickRecord->unknown_018_027 = v33; /*0x95c9dc*/
        v34 = LOWORD(v99); /*0x95c9e0*/
        v35 = v100; /*0x95c9e5*/
        *(_WORD *)&pickRecord->unknown_018_027[2] = v98; /*0x95c9ef*/
        *(_WORD *)&pickRecord->unknown_018_027[4] = v35; /*0x95c9f3*/
        *(_WORD *)&pickRecord->unknown_018_027[6] = v34; /*0x95c9f7*/
        v36 = *(_BYTE *)(a3 + 0x2C) == 0; /*0x95c9fb*/
        z = 1.0 - (v106 + v108); /*0x95ca0b*/
        if ( v36 ) /*0x95ca0f*/
        {
          *(float *)&pickRecord->unknown_018_027[8] = g_TESObjectTREE_InitialBillboardSizeX; /*0x95cc87*/
          *(float *)&pickRecord->unknown_018_027[0xC] = g_TESObjectTREE_InitialBillboardSizeY; /*0x95cc90*/
        }
        else
        {
          memset(&v159.rot.data[2][2], 0, 9); /*0x95ca22*/
          sub_728E70((int)self, 0, (int)&v159.rot.data[2][2]); /*0x95ca38*/
          if ( LODWORD(v159.rot.data[2][2]) ) /*0x95ca46*/
          {
            v37 = (float *)(LODWORD(v159.rot.data[2][2]) + LODWORD(v159.pos.x) * (unsigned __int16)v98); /*0x95ca6b*/
            v38 = LODWORD(v159.rot.data[2][2]) + LODWORD(v159.pos.x) * (unsigned __int16)v100; /*0x95ca6d*/
            v39 = LODWORD(v159.rot.data[2][2]) + LODWORD(v159.pos.x) * LOWORD(v99); /*0x95ca6f*/
            v40 = *(float *)v39; /*0x95ca71*/
            v41 = *(float *)(v39 + 4); /*0x95ca73*/
            v114 = v40; /*0x95ca76*/
            v115 = v41; /*0x95ca7a*/
            v42 = *(float *)v38; /*0x95ca82*/
            v43 = *(float *)(v38 + 4); /*0x95ca88*/
            v120 = v42; /*0x95ca8d*/
            v44 = *v37; /*0x95ca96*/
            v45 = v37[1]; /*0x95ca9a*/
            v114 = v40 * v108; /*0x95caa4*/
            v27 = a3; /*0x95cab4*/
            v115 = v108 * v115; /*0x95cabb*/
            v120 = v120 * v106; /*0x95cad0*/
            v121 = v106 * v43; /*0x95cade*/
            v112 = v44 * z; /*0x95caf3*/
            v113 = z * v45; /*0x95cb03*/
            v117 = v112 + v120; /*0x95cb1a*/
            v118 = v113 + v121; /*0x95cb34*/
            v122 = v117 + v114; /*0x95cb4b*/
            v46 = v118; /*0x95cb59*/
            *(float *)&pickRecord->unknown_018_027[8] = v122; /*0x95cb60*/
            v123 = v46 + v115; /*0x95cb67*/
            *(float *)&pickRecord->unknown_018_027[0xC] = v123; /*0x95cb75*/
          }
          else
          {
            v47 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 0xA); /*0x95cb8a*/
            if ( v47 ) /*0x95cb8f*/
            {
              v48 = sub_95A280(v178, v106, (float *)(v47 + 8 * (unsigned __int16)v100)); /*0x95cbb7*/
              v49 = sub_95A280(v179, z, (float *)(v47 + 8 * (unsigned __int16)v98)); /*0x95cbd1*/
              v50 = *v49; /*0x95cbd6*/
              v51 = *v48; /*0x95cbd8*/
              v111 = v49[1]; /*0x95cbe7*/
              v110 = v51 + v50; /*0x95cbf6*/
              v111 = v48[1] + v111; /*0x95cc09*/
              v52 = sub_95A280(v177, v108, (float *)(v47 + 8 * LOWORD(v99))); /*0x95cc15*/
              v27 = a3; /*0x95cc28*/
              v124 = v110 + *v52; /*0x95cc36*/
              v53 = v52[1] + v111; /*0x95cc4e*/
              *(float *)&pickRecord->unknown_018_027[8] = v124; /*0x95cc58*/
              v125 = v53; /*0x95cc5b*/
              *(float *)&pickRecord->unknown_018_027[0xC] = v125; /*0x95cc69*/
            }
            else
            {
              *(float *)&pickRecord->unknown_018_027[8] = g_TESObjectTREE_InitialBillboardSizeX; /*0x95cc74*/
              *(float *)&pickRecord->unknown_018_027[0xC] = g_TESObjectTREE_InitialBillboardSizeY; /*0x95cc7c*/
            }
          }
        }
        if ( *(_BYTE *)(v27 + 0x2D) ) /*0x95cc93*/
        {
          v161 = 0.0; /*0x95ccab*/
          v162 = 0.0; /*0x95ccb2*/
          LOBYTE(v163) = 0; /*0x95ccb9*/
          sub_728D00((int)self, (int)&v161); /*0x95ccc1*/
          if ( LODWORD(v161) ) /*0x95cccf*/
          {
            v54 = LODWORD(v162) * (unsigned __int16)v98; /*0x95cce1*/
            v55 = *(float *)(v54 + LODWORD(v161)); /*0x95cce4*/
            v56 = LODWORD(v161) + v54; /*0x95cce7*/
            v159.rot.data[1][2] = v55; /*0x95cce9*/
            v57 = *(float *)(v56 + 4); /*0x95ccf0*/
            v159.rot.data[2][1] = *(float *)(v56 + 8); /*0x95ccf6*/
            v58 = (float *)(LODWORD(v161) + LODWORD(v162) * (unsigned __int16)v100); /*0x95cd05*/
            v159.rot.data[2][0] = v57; /*0x95cd07*/
            v159.pos.z = *v58; /*0x95cd10*/
            v59 = v58[1]; /*0x95cd17*/
            v160 = v58[2]; /*0x95cd1d*/
            v60 = LODWORD(v162) * LOWORD(v99); /*0x95cd29*/
            v61 = *(float *)(v60 + LODWORD(v161) + 4); /*0x95cd2c*/
            v62 = (float *)(LODWORD(v161) + v60); /*0x95cd30*/
            v63 = *v62; /*0x95cd32*/
            v64 = v62[2]; /*0x95cd34*/
            v138 = v63; /*0x95cd37*/
            v139 = v61; /*0x95cd3e*/
            v140 = v64; /*0x95cd4c*/
            v159.scale = v59; /*0x95cd57*/
            v145 = v63 * v108; /*0x95cd64*/
            v146 = v61 * v108; /*0x95cd74*/
            v147 = v108 * v64; /*0x95cd82*/
            v156 = v159.pos.z * v106; /*0x95cd9a*/
            v157 = v59 * v106; /*0x95cdaa*/
            v158 = v106 * v160; /*0x95cdb8*/
            v164 = v159.rot.data[1][2] * z; /*0x95cdd0*/
            v165 = v159.rot.data[2][0] * z; /*0x95cde0*/
            v166 = z * v159.rot.data[2][1]; /*0x95cdee*/
            v142 = v164 + v156; /*0x95ce03*/
            v143 = v165 + v157; /*0x95ce18*/
            v144 = v166 + v158; /*0x95ce2d*/
            v149.x = v142 + v145; /*0x95ce42*/
            v149.y = v143 + v146; /*0x95ce62*/
            v149.z = v144 + v147; /*0x95ce77*/
            v105 = v149; /*0x95ce8c*/
          }
          else
          {
            if ( *(_BYTE *)(v27 + 0x2E) && (v65 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 8)) != 0 ) /*0x95ceb5*/
            {
              v95 = sub_47DA10(v181.rot.data[1], v108, (float *)(v65 + 0xC * LOWORD(v99))); /*0x95cee3*/
              v92 = sub_47DA10((float *)v180, v106, (float *)(v65 + 0xC * (unsigned __int16)v100)); /*0x95cf10*/
              v66 = sub_47DA10(&v181.scale, z, (float *)(v65 + 0xC * (unsigned __int16)v98)); /*0x95cf31*/
              v67 = sub_47D9B0(v66, v182, v92); /*0x95cf3b*/
              v68 = (NiPoint3 *)sub_47D9B0(v67, &v181.pos.x, v95); /*0x95cf42*/
            }
            else
            {
              v116.x = v126 - v132; /*0x95cf60*/
              v116.y = v127 - v133; /*0x95cf83*/
              v116.z = v128 - v134; /*0x95cfa6*/
              v141 = v116; /*0x95cfb5*/
              v119.x = v129 - v132; /*0x95cfc0*/
              v119.y = v130 - v133; /*0x95cfde*/
              v119.z = v131 - v134; /*0x95d003*/
              other = v119; /*0x95d011*/
              v68 = NiPoint3_CrossProduct(&v141, (NiPoint3 *)v181.rot.data[2], &other);// Verified face-normal fallback: NiPoint3_CrossProduct computes the cross product of two triangle edges to form the hit surface normal. /*0x95d018*/
            }
            v105 = *v68; /*0x95d01f*/
          }
          Vector3_NormalizeInPlace(&v105.x);    // Verified NiPick geometry path normalizes the computed or interpolated surface normal before writing the record. /*0x95d035*/
          if ( *(_DWORD *)(v27 + 0xC) == 1 ) /*0x95d040*/
          {
            v69 = sub_7101F0(p_m_pkColor, &v159, &v105); /*0x95d051*/
            v105.x = v69->rot.data[0][0]; /*0x95d058*/
            v105.y = v69->rot.data[0][1]; /*0x95d05f*/
            v105.z = v69->rot.data[0][2]; /*0x95d066*/
          }
          v70 = v105.y; /*0x95d06e*/
          v71 = v105.z; /*0x95d072*/
          pickRecord->surfaceNormal_028.x = v105.x;// Verified triangle pick writes the normalized surface-normal X component to NiPickRecord +0x28. /*0x95d076*/
          pickRecord->surfaceNormal_028.y = v70;// Verified triangle pick writes the normalized surface-normal Y component to NiPickRecord +0x2C. /*0x95d079*/
        }
        else
        {
          pickRecord->surfaceNormal_028.x = g_zeroNiPoint3.x; /*0x95d083*/
          pickRecord->surfaceNormal_028.y = g_zeroNiPoint3.y; /*0x95d08c*/
          v71 = g_zeroNiPoint3.z; /*0x95d08f*/
        }
        pickRecord->surfaceNormal_028.z = v71;  // Verified triangle pick writes the normalized surface-normal Z component to NiPickRecord +0x30; absent-normal geometry paths write zero. /*0x95d095*/
        if ( *(_BYTE *)(v27 + 0x2F) ) /*0x95d098*/
        {
          v135[0] = 0; /*0x95d0b0*/
          v135[1] = 0; /*0x95d0b7*/
          LOBYTE(v136) = 0; /*0x95d0be*/
          sub_728DB0((int)self, (int)v135); /*0x95d0c6*/
          if ( v135[0] ) /*0x95d0d2*/
          {
            *(float *)v168 = 0.0; /*0x95d0df*/
            *(float *)&v168[1] = 0.0; /*0x95d0ed*/
            *(float *)&v168[2] = 0.0; /*0x95d0f5*/
            *(float *)&v168[3] = 0.0; /*0x95d0fd*/
            *(float *)v170 = 0.0; /*0x95d10b*/
            *(float *)&v170[1] = 0.0; /*0x95d112*/
            *(float *)&v170[2] = 0.0; /*0x95d119*/
            *(float *)&v170[3] = 0.0; /*0x95d120*/
            *(float *)v169 = 0.0; /*0x95d127*/
            *(float *)&v169[1] = 0.0; /*0x95d12e*/
            *(float *)&v169[2] = 0.0; /*0x95d135*/
            *(float *)&v169[3] = 0.0; /*0x95d13c*/
            sub_4C1440(v135, (unsigned __int16)v98, (float *)v168); /*0x95d143*/
            sub_4C1440(v135, (unsigned __int16)v100, (float *)v170); /*0x95d15d*/
            sub_4C1440(v135, LOWORD(v99), (float *)v169); /*0x95d177*/
            v96 = sub_4BFBD0((float *)v183, v108, (float *)v169); /*0x95d1a0*/
            v93 = sub_4BFBD0((float *)v185, v106, (float *)v170); /*0x95d1c9*/
            v72 = sub_4BFBD0((float *)v187, z, (float *)v168); /*0x95d1e6*/
            v73 = sub_4BFB30(v72, v189, v93); /*0x95d1f0*/
            sub_4BFB30(v73, v176, v96); /*0x95d1f7*/
            v74 = v176[1]; /*0x95d203*/
            v75 = v176[2]; /*0x95d20a*/
            *(float *)pickRecord->unknown_034_043 = v176[0]; /*0x95d211*/
            v76 = v176[3]; /*0x95d214*/
            *(float *)&pickRecord->unknown_034_043[4] = v74; /*0x95d21b*/
            *(float *)&pickRecord->unknown_034_043[8] = v75; /*0x95d21e*/
            *(float *)&pickRecord->unknown_034_043[0xC] = v76; /*0x95d221*/
          }
          else
          {
            v77 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 9); /*0x95d236*/
            if ( v77 ) /*0x95d23b*/
            {
              v97 = sub_4BFBD0((float *)v184, v108, (float *)(v77 + 0x10 * LOWORD(v99))); /*0x95d268*/
              v94 = sub_4BFBD0((float *)v186, v106, (float *)(v77 + 0x10 * (unsigned __int16)v100)); /*0x95d294*/
              v78 = sub_4BFBD0((float *)v190, z, (float *)(v77 + 0x10 * (unsigned __int16)v98)); /*0x95d2b4*/
              v79 = sub_4BFB30(v78, v188, v94); /*0x95d2be*/
              sub_4BFB30(v79, v175, v97); /*0x95d2c5*/
              v80 = v175[1]; /*0x95d2d1*/
              v81 = v175[2]; /*0x95d2d8*/
              *(float *)pickRecord->unknown_034_043 = v175[0]; /*0x95d2df*/
              v82 = v175[3]; /*0x95d2e2*/
              *(float *)&pickRecord->unknown_034_043[4] = v80; /*0x95d2e9*/
              *(float *)&pickRecord->unknown_034_043[8] = v81; /*0x95d2ec*/
              *(float *)&pickRecord->unknown_034_043[0xC] = v82; /*0x95d2ef*/
            }
            else
            {
              *(_DWORD *)pickRecord->unknown_034_043 = dword_B25AE0; /*0x95d2f9*/
              *(_DWORD *)&pickRecord->unknown_034_043[4] = dword_B25AE4; /*0x95d302*/
              *(_DWORD *)&pickRecord->unknown_034_043[8] = dword_B25AE8; /*0x95d30b*/
              *(_DWORD *)&pickRecord->unknown_034_043[0xC] = dword_B25AEC; /*0x95d313*/
            }
          }
        }
        else
        {
          *(_DWORD *)pickRecord->unknown_034_043 = dword_B25AE0; /*0x95d31e*/
          *(_DWORD *)&pickRecord->unknown_034_043[4] = dword_B25AE4; /*0x95d327*/
          *(_DWORD *)&pickRecord->unknown_034_043[8] = dword_B25AE8; /*0x95d32f*/
          *(_DWORD *)&pickRecord->unknown_034_043[0xC] = dword_B25AEC; /*0x95d338*/
        }
        z = *(float *)&pickRecord; /*0x95d343*/
        *(_DWORD *)(v27 + 0x28) = pickRecord; /*0x95d347*/
        sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(v27 + 0x18), &z); /*0x95d34a*/
        if ( *(_DWORD *)v27 == 1 && *(_DWORD *)(v27 + 4) == 1 ) /*0x95d359*/
        {
          if ( BYTE2(v101) ) /*0x95d3a2*/
          {
            NiGeometryData_UnlockVertexStream(self); /*0x95d3ac*/
            return 1; /*0x95d3bd*/
          }
          return 1; /*0x95d52e*/
        }
        v4 = a4; /*0x95d35b*/
        v14 = v102; /*0x95d362*/
      }
      ++LODWORD(v104); /*0x95d372*/
      if ( LOWORD(v104) >= LOWORD(v109) ) /*0x95d376*/
      {
        v13 = self; /*0x95d37c*/
        goto LABEL_55; /*0x95d37c*/
      }
    }
  }
  m_pkColor = a4->member.m_pkColor; /*0x95d3c8*/
  m_pkTexture = a4->member.m_pkTexture; /*0x95d3cb*/
  LODWORD(v159.rot.data[0][0]) = a4->member.m_pkNormal; /*0x95d3d5*/
  v85 = v159.rot.data[0][0] - *a1; /*0x95d3e3*/
  *(_QWORD *)&v159.rot.data[0][1] = __PAIR64__((unsigned int)m_pkTexture, (unsigned int)m_pkColor); /*0x95d3e5*/
  v86 = *(float *)&a4->member.format; /*0x95d3f3*/
  v105.x = v85; /*0x95d3f6*/
  v159.rot.data[1][0] = v86; /*0x95d3fa*/
  v105.y = *(float *)&m_pkColor - a1[1]; /*0x95d40b*/
  v105.z = *(float *)&m_pkTexture - a1[2]; /*0x95d419*/
  v102 = v105.y * a2[1] + *a2 * v105.x + v105.z * a2[2]; /*0x95d436*/
  if ( v102 < (double)*(float *)&SrcStr ) /*0x95d449*/
    return 0; /*0x95d44e*/
  v87 = (NiPickRecord_Oblivion_044Verified *)FormHeapAlloc(0x44u); /*0x95d45a*/
  if ( v87 ) /*0x95d464*/
    *(float *)&v88 = COERCE_FLOAT(NiPickRecord_Initialize(v87, (NiRefObject *)a4)); /*0x95d46e*/
  else
    *(float *)&v88 = 0.0; /*0x95d472*/
  v102 = *(float *)&v88; /*0x95d47c*/
  *(float *)(a3 + 0x28) = *(float *)&v88; /*0x95d480*/
  sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a3 + 0x18), &v102); /*0x95d483*/
  v102 = v105.y * v105.y + v105.x * v105.x + v105.z * v105.z; /*0x95d4a4*/
  v102 = sqrt(v102); /*0x95d4b1*/
  v89 = v102; /*0x95d4b5*/
  v88->hitDistance_014 = v102; /*0x95d4b9*/
  if ( *(_DWORD *)(a3 + 8) != 1 ) /*0x95d4c0*/
    return 1; /*0x95d4c0*/
  v102 = v89; /*0x95d4c2*/
  v119.x = *a2 * v102; /*0x95d4d3*/
  v119.y = v102 * a2[1]; /*0x95d4dc*/
  v119.z = v102 * a2[2]; /*0x95d4e3*/
  v116.x = *a1 + v119.x; /*0x95d4ed*/
  v116.y = a1[1] + v119.y; /*0x95d4fc*/
  v90 = v116.y; /*0x95d500*/
  v91 = v119.z + a1[2]; /*0x95d508*/
  v88->intersectionPoint_008.x = v116.x; /*0x95d50b*/
  v88->intersectionPoint_008.y = v90; /*0x95d50e*/
  v116.z = v91; /*0x95d512*/
  v88->intersectionPoint_008.z = v116.z; /*0x95d51a*/
  return 1; /*0x95c5aa*/
}
