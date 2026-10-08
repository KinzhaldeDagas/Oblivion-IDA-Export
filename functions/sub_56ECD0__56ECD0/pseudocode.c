// Verified CPU-skinned fallback builder passes sourceGeometry->skinData and NiGeometryData vertex/normal arrays/count to sub_72AF20, then computes/clips decal arrays and calls BSTempEffectGeometryDecal_BuildGeneratedGeometry. Called from Initialize when source additional-data vslot +0x4C returns false.
void __thiscall BSTempEffectGeometryDecal_InitializeUsingSkinnedGeometryData(BSTempEffectGeometryDecalLayout_t *this)
{
  NiGeometry *sourceGeometry; // eax
  NiObject *sourceSkinData; // ebp
  NiMatrix33 *v4; // eax
  NiMatrix33 *v5; // esi
  NiGeometry *sourceGeometry_2C; // eax
  void (__thiscall *Unk_11)(NiObject *); // ecx
  int v8; // edx
  int m_usVertices; // ebx
  unsigned __int16 v10; // ax
  _WORD *v11; // ecx
  __int16 v12; // si
  NiObjectVtbl *vftable; // ebp
  void (__thiscall *v14)(NiObject *); // edx
  int Unk_10; // ebp
  int v16; // esi
  bool v17; // sf
  int v18; // ebp
  int v19; // edi
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ebp
  int v24; // edi
  _WORD *j; // esi
  __int64 v26; // rax
  int v27; // eax
  int v28; // edi
  _WORD *i; // esi
  bool v30; // cc
  float *v31; // esi
  int v32; // ebp
  int v33; // edi
  float y; // ecx
  float z; // edx
  float x; // eax
  int v37; // ebx
  float v38; // ebx
  float v39; // ebx
  double v40; // st6
  double v41; // st7
  unsigned int v42; // eax
  double v43; // st6
  bool v44; // zf
  int v45; // edi
  int v46; // ebx
  unsigned __int16 *v47; // eax
  unsigned __int16 v48; // dx
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // si
  int v51; // eax
  __int16 v52; // cx
  __int16 v53; // dx
  __int16 v54; // ax
  int v55; // esi
  unsigned __int16 v56; // ax
  unsigned __int16 v57; // ax
  _DWORD *v58; // eax
  int v59; // edi
  int v60; // ecx
  unsigned __int16 v61; // ax
  int v62; // eax
  _DWORD *v63; // eax
  int v64; // edi
  unsigned __int16 v65; // ax
  _DWORD *v66; // eax
  __int16 v67; // cx
  NiGeometryData *geomData; // eax
  int v69; // ebx
  int v70; // eax
  double v71; // st7
  int v72; // ebp
  float *p_y; // ecx
  _DWORD *v74; // esi
  _DWORD *v75; // edx
  float *p_z; // eax
  int v77; // edi
  float *v78; // edi
  _DWORD *v79; // edi
  int v80; // edi
  float *v81; // edi
  _DWORD *v82; // edi
  float *v83; // edi
  _DWORD *v84; // edi
  int v85; // edi
  float *v86; // edi
  _DWORD *v87; // edi
  float *p_x; // edx
  float *v89; // eax
  int v90; // esi
  int v91; // ecx
  float *v92; // ecx
  _DWORD *v93; // ecx
  int v94; // esi
  _WORD *v95; // edi
  int v96; // eax
  int v97; // edx
  void *v98; // ebp
  int v99; // eax
  _WORD *v100; // ebp
  void *v101; // eax
  int v102; // edi
  unsigned int *v103; // esi
  __int64 v104; // [esp-24h] [ebp-204h]
  __int64 v105; // [esp-10h] [ebp-1F0h]
  unsigned int v106; // [esp+0h] [ebp-1E0h]
  int v107; // [esp+1Ch] [ebp-1C4h]
  char v108; // [esp+1Ch] [ebp-1C4h]
  float v109; // [esp+1Ch] [ebp-1C4h]
  float v110; // [esp+1Ch] [ebp-1C4h]
  float v111; // [esp+1Ch] [ebp-1C4h]
  float v112; // [esp+1Ch] [ebp-1C4h]
  float v113; // [esp+1Ch] [ebp-1C4h]
  float v114; // [esp+1Ch] [ebp-1C4h]
  float v115; // [esp+1Ch] [ebp-1C4h]
  float v116; // [esp+1Ch] [ebp-1C4h]
  float v117; // [esp+1Ch] [ebp-1C4h]
  float v118; // [esp+1Ch] [ebp-1C4h]
  unsigned __int16 v119; // [esp+20h] [ebp-1C0h]
  float v120; // [esp+20h] [ebp-1C0h]
  float v121; // [esp+20h] [ebp-1C0h]
  float v122; // [esp+20h] [ebp-1C0h]
  float v123; // [esp+20h] [ebp-1C0h]
  float v124; // [esp+20h] [ebp-1C0h]
  float v125; // [esp+20h] [ebp-1C0h]
  float v126; // [esp+20h] [ebp-1C0h]
  float v127; // [esp+20h] [ebp-1C0h]
  float v128; // [esp+20h] [ebp-1C0h]
  float v129; // [esp+20h] [ebp-1C0h]
  unsigned __int16 *v130; // [esp+24h] [ebp-1BCh]
  float v131; // [esp+24h] [ebp-1BCh]
  float v132; // [esp+24h] [ebp-1BCh]
  float v133; // [esp+24h] [ebp-1BCh]
  float v134; // [esp+24h] [ebp-1BCh]
  float v135; // [esp+24h] [ebp-1BCh]
  float v136; // [esp+24h] [ebp-1BCh]
  float v137; // [esp+24h] [ebp-1BCh]
  float v138; // [esp+24h] [ebp-1BCh]
  float v139; // [esp+24h] [ebp-1BCh]
  float v140; // [esp+24h] [ebp-1BCh]
  bool v141; // [esp+2Bh] [ebp-1B5h]
  int v142; // [esp+2Ch] [ebp-1B4h]
  float v143; // [esp+2Ch] [ebp-1B4h]
  int v144; // [esp+2Ch] [ebp-1B4h]
  int v145; // [esp+2Ch] [ebp-1B4h]
  char *source; // [esp+30h] [ebp-1B0h]
  unsigned __int16 *sourcea; // [esp+30h] [ebp-1B0h]
  NiPoint3 *sourceb; // [esp+30h] [ebp-1B0h]
  void *sourcec; // [esp+30h] [ebp-1B0h]
  void *sourced; // [esp+30h] [ebp-1B0h]
  int a6; // [esp+34h] [ebp-1ACh]
  unsigned __int16 *a6a; // [esp+34h] [ebp-1ACh]
  int a6b; // [esp+34h] [ebp-1ACh]
  _DWORD *a4; // [esp+38h] [ebp-1A8h]
  float a4a; // [esp+38h] [ebp-1A8h]
  int a4b; // [esp+38h] [ebp-1A8h]
  unsigned __int16 a4c; // [esp+38h] [ebp-1A8h]
  float v158; // [esp+3Ch] [ebp-1A4h]
  float v159; // [esp+44h] [ebp-19Ch]
  int v160; // [esp+48h] [ebp-198h]
  unsigned int v161; // [esp+48h] [ebp-198h]
  int v162; // [esp+48h] [ebp-198h]
  float Dstb; // [esp+4Ch] [ebp-194h]
  float Dstc; // [esp+4Ch] [ebp-194h]
  NiPoint3 *Dst; // [esp+4Ch] [ebp-194h]
  void *Dsta; // [esp+4Ch] [ebp-194h]
  int a8; // [esp+50h] [ebp-190h]
  int v168; // [esp+54h] [ebp-18Ch]
  int v169; // [esp+58h] [ebp-188h]
  void (__thiscall *v171)(NiObject *); // [esp+60h] [ebp-180h]
  int k; // [esp+60h] [ebp-180h]
  int v173; // [esp+64h] [ebp-17Ch]
  double a3; // [esp+68h] [ebp-178h]
  int a3a; // [esp+68h] [ebp-178h]
  int v176; // [esp+74h] [ebp-16Ch]
  float *v177; // [esp+78h] [ebp-168h]
  _WORD *Src; // [esp+7Ch] [ebp-164h]
  double a7; // [esp+80h] [ebp-160h]
  void *a7a; // [esp+80h] [ebp-160h]
  double v181; // [esp+88h] [ebp-158h]
  int v182; // [esp+88h] [ebp-158h]
  float *v183; // [esp+90h] [ebp-150h]
  float v184; // [esp+94h] [ebp-14Ch] BYREF
  float v185; // [esp+98h] [ebp-148h]
  float v186; // [esp+9Ch] [ebp-144h]
  _DWORD v187[3]; // [esp+A0h] [ebp-140h] BYREF
  _DWORD v188[3]; // [esp+ACh] [ebp-134h] BYREF
  float v189[3]; // [esp+B8h] [ebp-128h] BYREF
  float v190[13]; // [esp+C4h] [ebp-11Ch] BYREF
  float v191[9]; // [esp+F8h] [ebp-E8h] BYREF
  NiMatrix33 v192; // [esp+11Ch] [ebp-C4h] BYREF
  _BYTE v193[36]; // [esp+140h] [ebp-A0h] BYREF
  float v194[9]; // [esp+164h] [ebp-7Ch] BYREF
  NiMatrix33 out; // [esp+188h] [ebp-58h] BYREF
  float v196[10]; // [esp+1ACh] [ebp-34h] BYREF
  int v197; // [esp+1DCh] [ebp-4h]

  sourceGeometry = this->sourceGeometry_2C; /*0x56ed09*/
  sourceSkinData = sourceGeometry->member.skinData; /*0x56ed0c*/
  a6 = *(_DWORD *)(sourceSkinData[1].members.m_uiRefCount + 8); /*0x56ed18*/
  qmemcpy(v191, &sourceGeometry->member.super.m_worldTransform, sizeof(v191)); /*0x56ed32*/
  sub_7103C0(v191, v196); /*0x56ed3c*/
  sub_7107A0(v191, 1u, (int)&this->orientationVectorX_40, (int)v189); /*0x56ed57*/
  NiMatrix33_InitRotationZ(&v192, this->randomRotation_50); /*0x56ed6c*/
  v4 = (NiMatrix33 *)sub_6F9290( /*0x56ed8e*/
                       v194,
                       this->orientationVectorX_40,
                       this->orientationVectorY_44,
                       this->orientationVectorZ_48);
  v5 = NiMAtrix33_Multiply(&v192, &out, v4); /*0x56edab*/
  sourceGeometry_2C = this->sourceGeometry_2C; /*0x56edad*/
  qmemcpy(v193, v5, sizeof(v193)); /*0x56edbc*/
  qmemcpy(v190, &sourceGeometry_2C->member.super.m_worldTransform, sizeof(v190)); /*0x56edcd*/
  v190[9] = v190[9] - this->projectionPointX_34; /*0x56edd9*/
  v190[0xA] = v190[0xA] - this->projectionPointY_38; /*0x56edea*/
  v190[0xB] = v190[0xB] - this->projectionPointZ_3C; /*0x56edfb*/
  Unk_11 = sourceSkinData[1].__vftable->Unk_11; /*0x56ee05*/
  if ( !Unk_11 || !*((_DWORD *)Unk_11 + 0x11) ) /*0x56ee10*/
    return; /*0x56ee14*/
  v8 = a6; /*0x56ee27*/
  m_usVertices = sourceGeometry_2C->member.geomData->member.m_usVertices; /*0x56ee2e*/
  v10 = 0; /*0x56ee31*/
  v176 = m_usVertices; /*0x56ee35*/
  v107 = *(_DWORD *)(sourceSkinData[1].members.m_uiRefCount + 0xC); /*0x56ee3d*/
  if ( a6 > 0 ) /*0x56ee41*/
  {
    v11 = (_WORD *)(*(_DWORD *)(sourceSkinData[1].members.m_uiRefCount + 0xC) + 0x22); /*0x56ee43*/
    v12 = 0; /*0x56ee46*/
    do /*0x56ee79*/
    {
      v12 += v11[0xFFFFFFFE]; /*0x56ee50*/
      if ( *v11 ) /*0x56ee54*/
        v10 = v12 + 2; /*0x56ee68*/
      else
        v10 = 3 * v12; /*0x56ee6d*/
      v11 += 0x16; /*0x56ee70*/
      --v8; /*0x56ee73*/
    }
    while ( v8 ); /*0x56ee79*/
  }
  Src = (_WORD *)FormHeapAlloc((unsigned __int64)(3 * (unsigned int)v10) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v10);
  v168 = FormHeapAlloc((unsigned __int64)(unsigned int)m_usVertices >> 0x1E != 0 ? 0xFFFFFFFF : 4 * m_usVertices);
  _memset(v168, 0xFFFFFFFF, 4 * m_usVertices); /*0x56eec2*/
  v173 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)m_usVertices) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * m_usVertices);
  v177 = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)m_usVertices) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * m_usVertices);
  v183 = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)m_usVertices) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * m_usVertices);
  sub_72AF20( /*0x56ef54*/
    sourceSkinData,
    (int)this->sourceGeometry_2C->member.geomData->member.m_pkVertex,
    (int)this->sourceGeometry_2C->member.geomData->member.m_pkNormal,
    this->sourceGeometry_2C->member.geomData->member.m_usVertices,
    v177,
    v183,
    0,
    0,
    0xC);                                       // Verified fallback branch skinning call: passes source skinData, NiGeometryData m_pkVertex/m_pkNormal arrays, vertex count, two allocated XYZ output arrays and stride 0xC to sub_72AF20 before decal geometry construction.
  vftable = sourceSkinData[1].__vftable; /*0x56ef59*/
  v14 = vftable->Unk_11; /*0x56ef5c*/
  Unk_10 = (int)vftable->Unk_10; /*0x56ef5f*/
  v171 = v14; /*0x56ef62*/
  v169 = Unk_10; /*0x56ef66*/
  v16 = FormHeapAlloc((0x4C * (unsigned __int64)(unsigned int)Unk_10) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * Unk_10);
  v197 = 0; /*0x56ef8f*/
  if ( v16 ) /*0x56ef96*/
  {
    v17 = Unk_10 - 1 < 0; /*0x56ef98*/
    v18 = Unk_10 - 1; /*0x56ef98*/
    v19 = v16; /*0x56ef9b*/
    if ( !v17 ) /*0x56ef9d*/
    {
      do /*0x56efad*/
      {
        sub_72EF90(v19); /*0x56efa2*/
        v19 += 0x4C; /*0x56efa7*/
        --v18; /*0x56efaa*/
      }
      while ( v18 >= 0 ); /*0x56efad*/
    }
    a8 = v16; /*0x56efaf*/
  }
  else
  {
    a8 = 0; /*0x56efb5*/
  }
  v20 = 0; /*0x56efb9*/
  v197 = 0xFFFFFFFF; /*0x56efbf*/
  v142 = 0; /*0x56efca*/
  if ( v169 > 0 ) /*0x56efce*/
  {
    while ( 1 ) /*0x56eff2*/
    {
      a4 = (_DWORD *)(0x4C * v20 + a8); /*0x56eff2*/
      qmemcpy(a4, (char *)v171 + 0x4C * v20, 0x34u); /*0x56eff6*/
      v21 = 0; /*0x56eff8*/
      if ( v20 ) /*0x56f001*/
      {
        v26 = 8LL * (unsigned int)m_usVertices; /*0x56f053*/
        LOBYTE(v21) = HIDWORD(v26) != 0; /*0x56f055*/
        v27 = FormHeapAlloc(v26 | -v21); /*0x56f05d*/
        v23 = v27; /*0x56f062*/
        v197 = 2; /*0x56f06d*/
        if ( !v27 ) /*0x56f078*/
        {
LABEL_26:
          v23 = 0; /*0x56f094*/
          goto LABEL_27; /*0x56f094*/
        }
        v28 = m_usVertices - 1; /*0x56f07a*/
        for ( i = (_WORD *)v27; v28 >= 0; --v28 ) /*0x56f081*/
        {
          sub_72EFA0(i); /*0x56f085*/
          i += 4; /*0x56f08a*/
        }
      }
      else
      {
        LOBYTE(v21) = (unsigned __int64)(unsigned int)(4 * m_usVertices) >> 0x1D != 0; /*0x56f00e*/
        v22 = FormHeapAlloc((0x20 * m_usVertices) | -v21); /*0x56f016*/
        v23 = v22; /*0x56f01b*/
        v197 = 1; /*0x56f026*/
        if ( !v22 ) /*0x56f031*/
          goto LABEL_26; /*0x56f031*/
        v24 = 4 * m_usVertices - 1; /*0x56f033*/
        for ( j = (_WORD *)v22; v24 >= 0; --v24 ) /*0x56f03e*/
        {
          sub_72EFA0(j); /*0x56f042*/
          j += 4; /*0x56f047*/
        }
      }
LABEL_27:
      a4[0x11] = v23; /*0x56f096*/
      v30 = v142 + 1 < v169; /*0x56f0a4*/
      v197 = 0xFFFFFFFF; /*0x56f0a8*/
      ++v142; /*0x56f0b3*/
      if ( !v30 ) /*0x56f0b7*/
        break; /*0x56f0b7*/
      v20 = v142; /*0x56efd6*/
    }
  }
  if ( m_usVertices > 0 ) /*0x56f0bf*/
  {
    v31 = v183; /*0x56f0d0*/
    a7 = v189[1]; /*0x56f0d7*/
    v181 = v189[0]; /*0x56f0e6*/
    v32 = v173 + 8; /*0x56f0ed*/
    v33 = (char *)v177 - (char *)v183; /*0x56f0f7*/
    a3 = v189[2]; /*0x56f0f9*/
    source = (char *)m_usVertices; /*0x56f0fd*/
    do /*0x56f28d*/
    {
      y = g_zeroNiPoint3.y; /*0x56f104*/
      z = g_zeroNiPoint3.z; /*0x56f10a*/
      x = g_zeroNiPoint3.x; /*0x56f110*/
      *(float *)v188 = *(float *)((char *)v31 + v33); /*0x56f115*/
      *(float *)&v188[1] = *(float *)((char *)v31 + v33 + 4); /*0x56f120*/
      v37 = *(_DWORD *)((char *)v31 + v33 + 8); /*0x56f127*/
      v185 = y; /*0x56f12b*/
      *(float *)&v187[1] = y; /*0x56f132*/
      v188[2] = v37; /*0x56f139*/
      v38 = *v31; /*0x56f140*/
      v186 = z; /*0x56f14a*/
      *(float *)&v187[2] = z; /*0x56f151*/
      v184 = x; /*0x56f160*/
      v158 = v38; /*0x56f167*/
      v39 = v31[1]; /*0x56f16b*/
      *(float *)v187 = x; /*0x56f16e*/
      HIDWORD(v105) = &v190[9]; /*0x56f17e*/
      LODWORD(v105) = v190; /*0x56f18d*/
      v159 = v31[2]; /*0x56f18e*/
      sub_710580(v105, 1u, (int)v188, (int)v187); /*0x56f192*/
      HIDWORD(v104) = &g_zeroNiPoint3; /*0x56f1b0*/
      LODWORD(v104) = v193; /*0x56f1b5*/
      sub_710580(v104, 1u, (int)v187, (int)&v184); /*0x56f1b6*/
      v40 = dbl_A2FAA0; /*0x56f1cf*/
      *(float *)(v32 - 8) = v184 / this->footprintScale_4C + v40; /*0x56f1d9*/
      *(float *)(v32 - 4) = v40 + v185 / this->footprintScale_4C; /*0x56f1e8*/
      Dstb = v39 * a7 + v158 * v181 + v159 * a3; /*0x56f20a*/
      v41 = Dstb; /*0x56f20e*/
      if ( Dstb < 0.0 ) /*0x56f21b*/
        v41 = 0.0; /*0x56f21d*/
      v42 = 0xA; /*0x56f225*/
      a4a = 1.0 - v41; /*0x56f230*/
      v143 = 1.0; /*0x56f236*/
      while ( 1 ) /*0x56f23c*/
      {
        v43 = a4a; /*0x56f23c*/
        if ( (v42 & 1) != 0 ) /*0x56f240*/
          v143 = v143 * v43; /*0x56f248*/
        v42 >>= 1; /*0x56f24c*/
        if ( !v42 ) /*0x56f24e*/
          break; /*0x56f24e*/
        a4a = v43 * v43; /*0x56f252*/
      }
      v31 += 3; /*0x56f25a*/
      v32 += 0xC; /*0x56f261*/
      v44 = source-- == (char *)1; /*0x56f264*/
      Dstc = fabs(v186); /*0x56f276*/
      *(float *)(v32 - 0xC) = (1.0 - Dstc * dbl_A4C2D0) * v143; /*0x56f28a*/
    }
    while ( !v44 ); /*0x56f28d*/
  }
  v45 = 0; /*0x56f297*/
  a3a = 0; /*0x56f29f*/
  if ( a6 <= 0 ) /*0x56f2a3*/
    goto LABEL_105; /*0x56f2a3*/
  v46 = v107 + 0x14; /*0x56f2b1*/
  v160 = a6; /*0x56f2b4*/
  do /*0x56f503*/
  {
    a4b = *(_DWORD *)v46; /*0x56f2cb*/
    v108 = *(_WORD *)(v46 + 0xE) != 0; /*0x56f2d2*/
    v119 = *(_WORD *)(v46 + 0xA); /*0x56f2d9*/
    v141 = 0; /*0x56f2dd*/
    v144 = 0; /*0x56f2e2*/
    if ( v119 ) /*0x56f2ea*/
    {
      v130 = (unsigned __int16 *)(a4b + 4); /*0x56f2f7*/
      sourcea = (unsigned __int16 *)(a4b + 4); /*0x56f2fb*/
      a6a = (unsigned __int16 *)(a4b + 4); /*0x56f2ff*/
      do /*0x56f308*/
      {
        v47 = v130; /*0x56f308*/
        if ( !v108 ) /*0x56f30c*/
          v47 = sourcea; /*0x56f30e*/
        v48 = v47[0xFFFFFFFF]; /*0x56f312*/
        v49 = v47[0xFFFFFFFE]; /*0x56f316*/
        v50 = *v47; /*0x56f31a*/
        v51 = *(_DWORD *)(v46 - 8); /*0x56f31d*/
        v52 = *(_WORD *)(v51 + 2 * v49); /*0x56f323*/
        v53 = *(_WORD *)(v51 + 2 * v48); /*0x56f32a*/
        v54 = *(_WORD *)(v51 + 2 * v50); /*0x56f334*/
        if ( v52 == v53 || v52 == v54 || v53 == v54 ) /*0x56f34a*/
        {
          if ( v108 ) /*0x56f4c3*/
            v141 = !v141; /*0x56f4cd*/
          goto LABEL_73; /*0x56f4cd*/
        }
        v55 = *(_DWORD *)(v46 - 8); /*0x56f350*/
        if ( sub_56CB70(v144, 0, v108, a4b, v173, v55) ) /*0x56f36e*/
        {
          if ( v108 ) /*0x56f380*/
            v56 = v130[0xFFFFFFFE]; /*0x56f386*/
          else
            v56 = a6a[0xFFFFFFFE]; /*0x56f390*/
          v57 = *(_WORD *)(v55 + 2 * v56); /*0x56f397*/
          v44 = *(_DWORD *)(v168 + 4 * v57) == 0xFFFFFFFF; /*0x56f3a2*/
          v58 = (_DWORD *)(v168 + 4 * v57); /*0x56f3a6*/
          if ( v44 ) /*0x56f3a9*/
          {
            *v58 = (unsigned __int16)a3a; /*0x56f3b2*/
            Src[(unsigned __int16)v45] = a3a; /*0x56f3b7*/
            v59 = v45 + 1; /*0x56f3bc*/
            v60 = ++a3a; /*0x56f3bf*/
          }
          else
          {
            Src[(unsigned __int16)v45] = *(_WORD *)v58; /*0x56f3ce*/
            v60 = a3a; /*0x56f3d3*/
            v59 = v45 + 1; /*0x56f3d7*/
          }
          if ( v108 ) /*0x56f3df*/
            v61 = v130[0xFFFFFFFF]; /*0x56f3e5*/
          else
            v61 = a6a[0xFFFFFFFF]; /*0x56f3ef*/
          v62 = *(unsigned __int16 *)(*(_DWORD *)(v46 - 8) + 2 * v61); /*0x56f3fd*/
          v44 = *(_DWORD *)(v168 + 4 * v62) == 0xFFFFFFFF; /*0x56f400*/
          v63 = (_DWORD *)(v168 + 4 * v62); /*0x56f404*/
          if ( v44 ) /*0x56f407*/
          {
            *v63 = (unsigned __int16)v60; /*0x56f40c*/
            Src[(unsigned __int16)v59] = v60; /*0x56f411*/
            v64 = v59 + 1; /*0x56f416*/
            a3a = ++v60; /*0x56f41c*/
          }
          else
          {
            Src[(unsigned __int16)v59] = *(_WORD *)v63; /*0x56f428*/
            v64 = v59 + 1; /*0x56f42d*/
          }
          if ( v108 ) /*0x56f435*/
            v65 = *v130; /*0x56f43b*/
          else
            v65 = *a6a; /*0x56f444*/
          v66 = (_DWORD *)(v168 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v46 - 8) + 2 * v65)); /*0x56f458*/
          if ( *v66 == 0xFFFFFFFF ) /*0x56f45b*/
          {
            *v66 = (unsigned __int16)v60; /*0x56f460*/
            Src[(unsigned __int16)v64] = v60; /*0x56f465*/
            v45 = v64 + 1; /*0x56f46a*/
            a3a = v60 + 1; /*0x56f470*/
          }
          else
          {
            Src[(unsigned __int16)v64] = *(_WORD *)v66; /*0x56f47c*/
            v45 = v64 + 1; /*0x56f481*/
          }
          if ( !v108 ) /*0x56f489*/
            goto LABEL_73; /*0x56f489*/
          if ( v141 ) /*0x56f490*/
          {
            v67 = Src[(unsigned __int16)v45 - 3]; /*0x56f495*/
            Src[(unsigned __int16)v45 - 3] = Src[(unsigned __int16)v45 - 1]; /*0x56f49f*/
            Src[(unsigned __int16)v45 - 1] = v67; /*0x56f4a4*/
          }
        }
        if ( v108 ) /*0x56f4ae*/
          v141 = !v141; /*0x56f4b8*/
LABEL_73:
        ++v130; /*0x56f4d1*/
        sourcea += 3; /*0x56f4df*/
        a6a += 3; /*0x56f4e3*/
        ++v144; /*0x56f4f1*/
      }
      while ( v144 < v119 ); /*0x56f308*/
    }
    v46 += 0x2C; /*0x56f4fb*/
    --v160; /*0x56f4fe*/
  }
  while ( v160 ); /*0x56f503*/
  a4c = v45; /*0x56f50f*/
  if ( (_WORD)a3a )
  {
    a7a = (void *)FormHeapAlloc((unsigned __int64)(unsigned __int16)v45 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (unsigned __int16)v45);
    memcpy(a7a, Src, 2 * (unsigned __int16)v45); /*0x56f545*/
    geomData = this->sourceGeometry_2C->member.geomData; /*0x56f557*/
    Dst = geomData->member.m_pkVertex; /*0x56f568*/
    sourceb = geomData->member.m_pkNormal; /*0x56f56c*/
    v69 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned __int16)a3a) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * (unsigned __int16)a3a);
    v145 = v69; /*0x56f598*/
    v70 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned __int16)a3a) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * (unsigned __int16)a3a);
    v71 = dbl_A68610; /*0x56f5a6*/
    v72 = 0; /*0x56f5af*/
    a6b = v70; /*0x56f5b6*/
    if ( v176 >= 4 ) /*0x56f5ba*/
    {
      p_y = &Dst[2].y; /*0x56f5d0*/
      v74 = (_DWORD *)(v168 + 8); /*0x56f5d7*/
      v75 = (_DWORD *)(v173 + 0x18); /*0x56f5eb*/
      p_z = &sourceb[1].z; /*0x56f5ee*/
      v161 = ((unsigned int)(v176 - 4) >> 2) + 1; /*0x56f5f4*/
      v72 = 4 * v161; /*0x56f5f8*/
      do /*0x56f886*/
      {
        v77 = v74[0xFFFFFFFE]; /*0x56f5ff*/
        if ( v77 != 0xFFFFFFFF ) /*0x56f605*/
        {
          v78 = (float *)(v69 + 0xC * v77); /*0x56f613*/
          v131 = p_z[0xFFFFFFFB] * v71; /*0x56f616*/
          v120 = p_z[0xFFFFFFFC] * v71; /*0x56f61f*/
          v109 = p_z[0xFFFFFFFD] * v71; /*0x56f628*/
          v132 = p_y[0xFFFFFFF9] + v131; /*0x56f633*/
          v121 = p_y[0xFFFFFFFA] + v120; /*0x56f63e*/
          v110 = p_y[0xFFFFFFFB] + v109; /*0x56f649*/
          *v78 = v132; /*0x56f65d*/
          v78[1] = v121; /*0x56f66b*/
          v78[2] = v110; /*0x56f676*/
          v79 = (_DWORD *)(a6b + 0xC * v74[0xFFFFFFFE]); /*0x56f683*/
          *v79 = v75[0xFFFFFFFA]; /*0x56f689*/
          v79[1] = v75[0xFFFFFFFB]; /*0x56f68e*/
          v79[2] = v75[0xFFFFFFFC]; /*0x56f694*/
          v69 = v145; /*0x56f697*/
        }
        v80 = v74[0xFFFFFFFF]; /*0x56f69b*/
        if ( v80 != 0xFFFFFFFF ) /*0x56f6a1*/
        {
          v133 = p_z[0xFFFFFFFE] * v71; /*0x56f6b6*/
          v122 = p_z[0xFFFFFFFF] * v71; /*0x56f6bf*/
          v111 = *p_z * v71; /*0x56f6c7*/
          v134 = p_y[0xFFFFFFFC] + v133; /*0x56f6d2*/
          v123 = p_y[0xFFFFFFFD] + v122; /*0x56f6dd*/
          v81 = (float *)(v145 + 0xC * v80); /*0x56f6ec*/
          v112 = *(float *)((char *)p_z + (char *)Dst - (char *)sourceb) + v111; /*0x56f6ef*/
          *v81 = v134; /*0x56f703*/
          v81[1] = v123; /*0x56f711*/
          v81[2] = v112; /*0x56f71c*/
          v82 = (_DWORD *)(a6b + 0xC * v74[0xFFFFFFFF]); /*0x56f729*/
          *v82 = v75[0xFFFFFFFD]; /*0x56f72f*/
          v82[1] = v75[0xFFFFFFFE]; /*0x56f734*/
          v82[2] = v75[0xFFFFFFFF]; /*0x56f73a*/
          v69 = v145; /*0x56f73d*/
        }
        if ( *v74 != 0xFFFFFFFF ) /*0x56f746*/
        {
          v83 = (float *)(v69 + 0xC * *v74); /*0x56f754*/
          v135 = p_z[1] * v71; /*0x56f757*/
          v124 = p_z[2] * v71; /*0x56f760*/
          v113 = p_z[3] * v71; /*0x56f769*/
          v136 = p_y[0xFFFFFFFF] + v135; /*0x56f774*/
          v125 = *p_y + v124; /*0x56f77e*/
          v114 = p_y[1] + v113; /*0x56f789*/
          *v83 = v136; /*0x56f79d*/
          v83[1] = v125; /*0x56f7ab*/
          v83[2] = v114; /*0x56f7b6*/
          v84 = (_DWORD *)(a6b + 0xC * *v74); /*0x56f7c2*/
          *v84 = *v75; /*0x56f7c7*/
          v84[1] = v75[1]; /*0x56f7cc*/
          v84[2] = v75[2]; /*0x56f7d2*/
          v69 = v145; /*0x56f7d5*/
        }
        v85 = v74[1]; /*0x56f7d9*/
        if ( v85 != 0xFFFFFFFF ) /*0x56f7df*/
        {
          v86 = (float *)(v69 + 0xC * v85); /*0x56f7ed*/
          v137 = p_z[4] * v71; /*0x56f7f0*/
          v126 = p_z[5] * v71; /*0x56f7f9*/
          v115 = p_z[6] * v71; /*0x56f802*/
          v138 = p_y[2] + v137; /*0x56f80d*/
          v127 = p_y[3] + v126; /*0x56f818*/
          v116 = p_y[4] + v115; /*0x56f823*/
          *v86 = v138; /*0x56f837*/
          v86[1] = v127; /*0x56f845*/
          v86[2] = v116; /*0x56f850*/
          v87 = (_DWORD *)(a6b + 0xC * v74[1]); /*0x56f85d*/
          *v87 = v75[3]; /*0x56f863*/
          v87[1] = v75[4]; /*0x56f868*/
          v87[2] = v75[5]; /*0x56f86e*/
          v69 = v145; /*0x56f871*/
        }
        p_z += 0xC; /*0x56f875*/
        p_y += 0xC; /*0x56f878*/
        v75 += 0xC; /*0x56f87b*/
        v74 += 4; /*0x56f87e*/
        --v161; /*0x56f881*/
      }
      while ( v161 ); /*0x56f886*/
    }
    if ( v72 < v176 ) /*0x56f890*/
    {
      p_x = &Dst[v72].x; /*0x56f8a8*/
      v89 = &sourceb[v72].z; /*0x56f8ab*/
      v90 = (char *)Dst - (char *)sourceb; /*0x56f8af*/
      sourcec = (void *)(v173 - (_DWORD)Dst); /*0x56f8b7*/
      do /*0x56f974*/
      {
        v91 = *(_DWORD *)(v168 + 4 * v72); /*0x56f8bf*/
        if ( v91 != 0xFFFFFFFF ) /*0x56f8c5*/
        {
          v92 = (float *)(v69 + 0xC * v91); /*0x56f8d3*/
          v139 = v89[0xFFFFFFFE] * v71; /*0x56f8d6*/
          v128 = v89[0xFFFFFFFF] * v71; /*0x56f8df*/
          v117 = *v89 * v71; /*0x56f8e7*/
          v140 = *p_x + v139; /*0x56f8f1*/
          v129 = p_x[1] + v128; /*0x56f8fc*/
          v118 = *(float *)((char *)v89 + v90) + v117; /*0x56f907*/
          *v92 = v140; /*0x56f91b*/
          v92[1] = v129; /*0x56f929*/
          v92[2] = v118; /*0x56f934*/
          v93 = (_DWORD *)(a6b + 0xC * *(_DWORD *)(v168 + 4 * v72)); /*0x56f945*/
          *v93 = *(_DWORD *)((char *)p_x + (_DWORD)sourcec); /*0x56f94f*/
          v93[1] = *(_DWORD *)((char *)p_x + (_DWORD)sourcec + 4); /*0x56f959*/
          v93[2] = *(_DWORD *)((char *)p_x + (_DWORD)sourcec + 8); /*0x56f964*/
        }
        ++v72; /*0x56f967*/
        p_x += 3; /*0x56f96a*/
        v89 += 3; /*0x56f96d*/
      }
      while ( v72 < v176 ); /*0x56f974*/
    }
    if ( v169 > 0 )
    {
      v94 = a8; /*0x56f98f*/
      v95 = (_WORD *)((char *)v171 + 0x48); /*0x56f993*/
      v162 = v169; /*0x56f996*/
      do
      {
        v96 = 0; /*0x56f99a*/
        if ( *v95 ) /*0x56f99c*/
        {
          do /*0x56f9e6*/
          {
            v97 = *(unsigned __int16 *)(*((_DWORD *)v95 + 0xFFFFFFFF) + 8 * v96); /*0x56f9a8*/
            if ( *(_DWORD *)(v168 + 4 * v97) != 0xFFFFFFFF ) /*0x56f9b6*/
            {
              *(_WORD *)(*(_DWORD *)(v94 + 0x44) + 8 * *(unsigned __int16 *)(v94 + 0x48)) = *(_WORD *)(v168 + 4 * v97); /*0x56f9c2*/
              *(float *)(*(_DWORD *)(v94 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v94 + 0x48))++ + 4) = *(float *)(*((_DWORD *)v95 + 0xFFFFFFFF) + 8 * v96 + 4); /*0x56f9d5*/
            }
            ++v96; /*0x56f9e1*/
          }
          while ( v96 < (unsigned __int16)*v95 ); /*0x56f9e6*/
        }
        v98 = *(void **)(v94 + 0x44); /*0x56f9ec*/
        v182 = *(unsigned __int16 *)(v94 + 0x48); /*0x56f9f1*/
        sourced = v98; /*0x56fa02*/
        v99 = FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)(v94 + 0x48) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v182);
        Dsta = (void *)v99; /*0x56fa13*/
        v197 = 3; /*0x56fa19*/
        if ( v99 ) /*0x56fa24*/
        {
          v100 = (_WORD *)v99; /*0x56fa26*/
          for ( k = v182 - 1; k >= 0; --k ) /*0x56fa36*/
          {
            sub_72EFA0(v100); /*0x56fa3a*/
            v100 += 4; /*0x56fa3f*/
          }
          v101 = Dsta; /*0x56fa49*/
          v98 = sourced; /*0x56fa4d*/
        }
        else
        {
          v101 = 0; /*0x56fa53*/
        }
        *(_DWORD *)(v94 + 0x44) = v101; /*0x56fa55*/
        v106 = 8 * *(unsigned __int16 *)(v94 + 0x48); /*0x56fa62*/
        v197 = 0xFFFFFFFF; /*0x56fa65*/
        memcpy(v101, v98, v106); /*0x56fa70*/
        FormHeapFree((unsigned int)v98); /*0x56fa76*/
        v95 += 0x26; /*0x56fa7e*/
        v94 += 0x4C; /*0x56fa81*/
        --v162; /*0x56fa84*/
      }
      while ( v162 );
    }
    BSTempEffectGeometryDecal_BuildGeneratedGeometry( /*0x56fab1*/
      this,
      (int)this->sourceGeometry_2C,
      a3a,
      a4c,
      v69,
      a6b,
      (unsigned __int16 *)a7a,
      a8);
    goto LABEL_109; /*0x56fab6*/
  }
LABEL_105:
  v102 = v169; /*0x56fab8*/
  if ( v169 > 0 ) /*0x56fabe*/
  {
    v103 = (unsigned int *)(a8 + 0x44); /*0x56fac4*/
    do /*0x56fade*/
    {
      FormHeapFree(*v103); /*0x56faca*/
      *v103 = 0; /*0x56facf*/
      v103 += 0x13; /*0x56fad8*/
      --v102; /*0x56fadb*/
    }
    while ( v102 ); /*0x56fade*/
  }
  FormHeapFree(a8); /*0x56fae5*/
LABEL_109:
  FormHeapFree((unsigned int)v177); /*0x56faed*/
  FormHeapFree((unsigned int)v183); /*0x56faff*/
  FormHeapFree((unsigned int)Src); /*0x56fb0c*/
  FormHeapFree(v168); /*0x56fb16*/
  FormHeapFree(v173); /*0x56fb20*/
}
