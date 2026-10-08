// Verified vertex-stream builder uses source geometry data, locks/reads/unlocks the vertex stream, constructs clipped decal mesh arrays and hands them to BSTempEffectGeometryDecal_BuildGeneratedGeometry. Called from Initialize only when source additional-data vslot +0x4C returns true.
void __thiscall BSTempEffectGeometryDecal_InitializeUsingVertexStreams(BSTempEffectGeometryDecalLayout_t *this)
{
  NiGeometry *sourceGeometry_2C; // eax
  NiObject *skinData; // ebp
  NiMatrix33 *v4; // eax
  NiMatrix33 *v5; // esi
  NiGeometry *v6; // eax
  double v7; // st7
  _WORD *v8; // eax
  unsigned __int16 v9; // cx
  int v10; // edi
  _WORD *v11; // eax
  __int16 v12; // dx
  int v13; // esi
  float v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  NiObjectVtbl *vftable; // eax
  int v19; // esi
  int v20; // ebp
  int i; // edi
  int v22; // ecx
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  _WORD *k; // esi
  __int64 v27; // rax
  int v28; // eax
  int v29; // edi
  _WORD *j; // esi
  bool v31; // cc
  int v32; // edi
  int v33; // ebp
  float *v34; // esi
  double v35; // st7
  float x; // ecx
  float y; // edx
  float v38; // ecx
  float v39; // edx
  float *v40; // eax
  float v41; // edx
  float v42; // eax
  BSTempEffectGeometryDecalLayout_t *v43; // eax
  double v44; // st6
  double v45; // st7
  unsigned int v46; // eax
  double v47; // st6
  double v48; // st6
  int v49; // edi
  char *v50; // esi
  unsigned __int16 *v51; // edx
  unsigned __int16 *v52; // ebp
  unsigned __int16 *v53; // edx
  __int16 v54; // ax
  __int16 v55; // cx
  unsigned __int16 v56; // dx
  unsigned __int16 v57; // ax
  unsigned __int16 v58; // cx
  __int16 v59; // dx
  unsigned int v60; // edi
  unsigned __int16 v61; // ax
  int v62; // edx
  int v63; // ecx
  int v64; // eax
  bool v65; // c3
  void *v66; // edx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  _WORD *v71; // ebp
  __int16 v72; // cx
  bool v73; // zf
  int v74; // ebp
  int v75; // eax
  double v76; // st7
  int v77; // esi
  _DWORD *v78; // edx
  int v79; // edi
  _DWORD *v80; // ecx
  char *v81; // eax
  int v82; // ebx
  int v83; // eax
  float v84; // eax
  float *v85; // eax
  _DWORD *v86; // eax
  float *v87; // eax
  int v88; // ebx
  float v89; // eax
  int v90; // eax
  float v91; // eax
  float *v92; // eax
  _DWORD *v93; // eax
  char *v94; // eax
  int v95; // ebx
  int v96; // eax
  float v97; // eax
  float *v98; // eax
  _DWORD *v99; // eax
  char *v100; // eax
  int v101; // ebx
  int v102; // eax
  float v103; // eax
  float *v104; // eax
  _DWORD *v105; // eax
  _DWORD *v106; // ecx
  int v107; // edx
  char *v108; // eax
  int v109; // edi
  int v110; // eax
  float v111; // edi
  float v112; // eax
  float *v113; // eax
  _DWORD *v114; // eax
  int v115; // esi
  unsigned int v116; // edi
  int v117; // eax
  _WORD *v118; // edi
  void *v119; // eax
  void *v120; // edi
  BSTempEffectGeometryDecalLayout_t *v121; // esi
  float v122; // edi
  unsigned int *v123; // esi
  __int64 v124; // [esp-24h] [ebp-25Ch]
  __int64 v125; // [esp-10h] [ebp-248h]
  unsigned int v126; // [esp+0h] [ebp-238h]
  int v127; // [esp+18h] [ebp-220h]
  unsigned __int16 v128; // [esp+18h] [ebp-220h]
  float v129; // [esp+18h] [ebp-220h]
  float v130; // [esp+18h] [ebp-220h]
  float v131; // [esp+18h] [ebp-220h]
  float v132; // [esp+18h] [ebp-220h]
  float v133; // [esp+18h] [ebp-220h]
  float v134; // [esp+18h] [ebp-220h]
  float v135; // [esp+18h] [ebp-220h]
  float v136; // [esp+18h] [ebp-220h]
  float v137; // [esp+18h] [ebp-220h]
  float v138; // [esp+18h] [ebp-220h]
  int v139; // [esp+1Ch] [ebp-21Ch]
  char v140; // [esp+1Ch] [ebp-21Ch]
  float v141; // [esp+1Ch] [ebp-21Ch]
  float v142; // [esp+1Ch] [ebp-21Ch]
  float v143; // [esp+1Ch] [ebp-21Ch]
  float v144; // [esp+1Ch] [ebp-21Ch]
  float v145; // [esp+1Ch] [ebp-21Ch]
  float v146; // [esp+1Ch] [ebp-21Ch]
  float v147; // [esp+1Ch] [ebp-21Ch]
  float v148; // [esp+1Ch] [ebp-21Ch]
  float v149; // [esp+1Ch] [ebp-21Ch]
  float v150; // [esp+1Ch] [ebp-21Ch]
  unsigned int v151; // [esp+20h] [ebp-218h]
  float v152; // [esp+20h] [ebp-218h]
  float v153; // [esp+20h] [ebp-218h]
  float v154; // [esp+20h] [ebp-218h]
  float v155; // [esp+20h] [ebp-218h]
  float v156; // [esp+20h] [ebp-218h]
  float v157; // [esp+20h] [ebp-218h]
  float v158; // [esp+20h] [ebp-218h]
  float v159; // [esp+20h] [ebp-218h]
  float v160; // [esp+20h] [ebp-218h]
  float v161; // [esp+20h] [ebp-218h]
  int a6; // [esp+24h] [ebp-214h]
  float a6d; // [esp+24h] [ebp-214h]
  float a6e; // [esp+24h] [ebp-214h]
  float a6f; // [esp+24h] [ebp-214h]
  float a6a; // [esp+24h] [ebp-214h]
  int a6b; // [esp+24h] [ebp-214h]
  int a6c; // [esp+24h] [ebp-214h]
  bool v169; // [esp+2Bh] [ebp-20Dh]
  float Dstb; // [esp+2Ch] [ebp-20Ch]
  float Dstc; // [esp+2Ch] [ebp-20Ch]
  float Dstd; // [esp+2Ch] [ebp-20Ch]
  float Dste; // [esp+2Ch] [ebp-20Ch]
  unsigned __int16 *Dst; // [esp+2Ch] [ebp-20Ch]
  void *Dsta; // [esp+2Ch] [ebp-20Ch]
  int v176; // [esp+30h] [ebp-208h]
  float a4a; // [esp+34h] [ebp-204h]
  float a4b; // [esp+34h] [ebp-204h]
  float a4c; // [esp+34h] [ebp-204h]
  unsigned __int16 a4[2]; // [esp+34h] [ebp-204h]
  void (__thiscall *Unk_11)(NiObject *); // [esp+38h] [ebp-200h]
  int v182; // [esp+38h] [ebp-200h]
  int v183; // [esp+38h] [ebp-200h]
  int v184; // [esp+38h] [ebp-200h]
  unsigned int v185; // [esp+38h] [ebp-200h]
  int m; // [esp+38h] [ebp-200h]
  float v187; // [esp+3Ch] [ebp-1FCh] BYREF
  float v188; // [esp+40h] [ebp-1F8h]
  float z; // [esp+44h] [ebp-1F4h]
  double v190; // [esp+48h] [ebp-1F0h]
  float v191; // [esp+50h] [ebp-1E8h]
  double v192; // [esp+58h] [ebp-1E0h]
  float v193; // [esp+60h] [ebp-1D8h]
  int a8; // [esp+6Ch] [ebp-1CCh]
  float v195; // [esp+70h] [ebp-1C8h]
  void *source; // [esp+74h] [ebp-1C4h]
  float v197; // [esp+78h] [ebp-1C0h]
  bool v198; // [esp+7Fh] [ebp-1B9h]
  float v199; // [esp+80h] [ebp-1B8h]
  float v200; // [esp+84h] [ebp-1B4h]
  int v201; // [esp+88h] [ebp-1B0h]
  void *Src; // [esp+8Ch] [ebp-1ACh]
  int v203; // [esp+90h] [ebp-1A8h]
  int v204; // [esp+94h] [ebp-1A4h] BYREF
  int v205; // [esp+98h] [ebp-1A0h]
  char v206; // [esp+9Ch] [ebp-19Ch]
  NiStridedVertexStream outVertices; // [esp+A0h] [ebp-198h] BYREF
  BSTempEffectGeometryDecalLayout_t *v208; // [esp+ACh] [ebp-18Ch]
  int v209; // [esp+B0h] [ebp-188h]
  int v210; // [esp+B4h] [ebp-184h]
  unsigned __int16 *a7[3]; // [esp+B8h] [ebp-180h]
  int v212; // [esp+C4h] [ebp-174h]
  int v213; // [esp+C8h] [ebp-170h] BYREF
  int v214; // [esp+CCh] [ebp-16Ch]
  char v215; // [esp+D0h] [ebp-168h]
  int v216; // [esp+D4h] [ebp-164h] BYREF
  int v217; // [esp+D8h] [ebp-160h]
  char v218; // [esp+DCh] [ebp-15Ch]
  float v219; // [esp+E0h] [ebp-158h]
  float v220; // [esp+E4h] [ebp-154h]
  float v221; // [esp+E8h] [ebp-150h]
  _DWORD v222[3]; // [esp+ECh] [ebp-14Ch] BYREF
  _DWORD v223[3]; // [esp+F8h] [ebp-140h] BYREF
  _DWORD v224[2]; // [esp+104h] [ebp-134h] BYREF
  char v225; // [esp+10Ch] [ebp-12Ch]
  float v226[3]; // [esp+110h] [ebp-128h] BYREF
  float v227[13]; // [esp+11Ch] [ebp-11Ch] BYREF
  float v228[9]; // [esp+150h] [ebp-E8h] BYREF
  NiMatrix33 v229; // [esp+174h] [ebp-C4h] BYREF
  _BYTE v230[36]; // [esp+198h] [ebp-A0h] BYREF
  float v231[9]; // [esp+1BCh] [ebp-7Ch] BYREF
  NiMatrix33 out; // [esp+1E0h] [ebp-58h] BYREF
  float v233[10]; // [esp+204h] [ebp-34h] BYREF
  int v234; // [esp+234h] [ebp-4h]

  v208 = this; /*0x56da15*/
  sourceGeometry_2C = this->sourceGeometry_2C; /*0x56da1c*/
  skinData = sourceGeometry_2C->member.skinData; /*0x56da1f*/
  v139 = *(_DWORD *)(skinData[1].members.m_uiRefCount + 8); /*0x56da2b*/
  qmemcpy(v228, &sourceGeometry_2C->member.super.m_worldTransform, sizeof(v228)); /*0x56da45*/
  sub_7103C0(v228, v233); /*0x56da4f*/
  sub_7107A0(v228, 1u, (int)&this->orientationVectorX_40, (int)v226); /*0x56da6a*/
  NiMatrix33_InitRotationZ(&v229, this->randomRotation_50); /*0x56da7f*/
  v4 = (NiMatrix33 *)sub_6F9290( /*0x56daa1*/
                       v231,
                       this->orientationVectorX_40,
                       this->orientationVectorY_44,
                       this->orientationVectorZ_48);
  v5 = NiMAtrix33_Multiply(&v229, &out, v4); /*0x56dabe*/
  v6 = this->sourceGeometry_2C; /*0x56dac0*/
  qmemcpy(v230, v5, sizeof(v230)); /*0x56dacf*/
  qmemcpy(v227, &v6->member.super.m_worldTransform, sizeof(v227)); /*0x56dae0*/
  v227[9] = v227[9] - this->projectionPointX_34; /*0x56daec*/
  v227[0xA] = v227[0xA] - this->projectionPointY_38; /*0x56dafd*/
  v7 = v227[0xB] - this->projectionPointZ_3C; /*0x56db0b*/
  memset(&outVertices, 0, 9); /*0x56db10*/
  v227[0xB] = v7; /*0x56db1e*/
  v204 = 0; /*0x56db2d*/
  v205 = 0; /*0x56db34*/
  v206 = 0; /*0x56db3b*/
  v224[0] = 0; /*0x56db43*/
  v224[1] = 0; /*0x56db4a*/
  v225 = 0; /*0x56db51*/
  v213 = 0; /*0x56db59*/
  v214 = 0; /*0x56db60*/
  v215 = 0; /*0x56db67*/
  v216 = 0; /*0x56db6f*/
  v217 = 0; /*0x56db76*/
  v218 = 0; /*0x56db7d*/
  v176 = *((unsigned __int16 *)v6->member.geomData->member.m_spAdditionalGeomData + 6); /*0x56db9e*/
  v198 = NiGeometryData_LockVertexStream(v6->member.geomData, 0); /*0x56dba7*/
  NiGeometryData_GetLockedVertexStream(this->sourceGeometry_2C->member.geomData, &outVertices); /*0x56dbbe*/
  sub_728D00((int)this->sourceGeometry_2C->member.geomData, (int)&v204); /*0x56dbd6*/
  sub_728E70((int)this->sourceGeometry_2C->member.geomData, 0, (int)v224); /*0x56dbef*/
  sub_728C00((int)this->sourceGeometry_2C->member.geomData, (int)&v213); /*0x56dc07*/
  sub_728C80((int)this->sourceGeometry_2C->member.geomData, (int)&v216); /*0x56dc1f*/
  v8 = *(_WORD **)(skinData[1].members.m_uiRefCount + 0xC); /*0x56dc27*/
  v9 = 0; /*0x56dc2a*/
  source = v8; /*0x56dc34*/
  if ( v139 > 0 ) /*0x56dc38*/
  {
    v10 = v139; /*0x56dc3a*/
    v11 = v8 + 0x11; /*0x56dc3e*/
    v12 = 0; /*0x56dc41*/
    do /*0x56dc6c*/
    {
      v12 += v11[0xFFFFFFFE]; /*0x56dc44*/
      if ( *v11 ) /*0x56dc48*/
        v9 = v12 + 2; /*0x56dc5b*/
      else
        v9 = 3 * v12; /*0x56dc60*/
      v11 += 0x16; /*0x56dc63*/
      --v10; /*0x56dc66*/
    }
    while ( v10 ); /*0x56dc6c*/
  }
  v13 = v176; /*0x56dc8a*/
  Src = (void *)FormHeapAlloc((unsigned __int64)(3 * (unsigned int)v9) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v9);
  v14 = 0.0; /*0x56dcb7*/
  v203 = FormHeapAlloc((unsigned __int64)(unsigned int)v176 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v176);
  v197 = 0.0; /*0x56dcc1*/
  _memset(v203, 0xFFFFFFFF, 4 * v176); /*0x56dcc8*/
  v201 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v13) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v13);
  v15 = FormHeapAlloc((unsigned __int64)(unsigned int)v13 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v13);
  if ( v15 ) /*0x56dd0b*/
  {
    v16 = v176 - 1; /*0x56dd0f*/
    if ( v176 - 1 >= 0 ) /*0x56dd12*/
    {
      v17 = v15 + 8; /*0x56dd14*/
      do /*0x56dd29*/
      {
        *(float *)(v17 + 4) = 0.0; /*0x56dd17*/
        v17 += 0x10; /*0x56dd1a*/
        --v16; /*0x56dd1d*/
        *(float *)(v17 - 0x10) = 0.0; /*0x56dd20*/
        *(float *)(v17 - 0x14) = 0.0; /*0x56dd23*/
        *(float *)(v17 - 0x18) = 0.0; /*0x56dd26*/
      }
      while ( v16 >= 0 ); /*0x56dd29*/
    }
    v151 = v15; /*0x56dd2b*/
  }
  else
  {
    v151 = 0; /*0x56dd31*/
  }
  if ( skinData[1].__vftable->Unk_11 )
  {
    v209 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v176) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v176);
    v212 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v176) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v176);
    nullsub_4((int)&outVertices, (int)&v213, (int)&v216, (int)&v204, v176, v209, v212, 0xC); /*0x56ddb4*/
    vftable = skinData[1].__vftable; /*0x56ddb9*/
    Unk_11 = vftable->Unk_11; /*0x56ddc2*/
    v200 = *(float *)&vftable->Unk_10; /*0x56ddd4*/
    v19 = FormHeapAlloc((0x4C * (unsigned __int64)LODWORD(v200)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * LODWORD(v200));
    v234 = 0; /*0x56ddf2*/
    if ( v19 ) /*0x56ddf9*/
    {
      v20 = LODWORD(v200) - 1; /*0x56de02*/
      for ( i = v19; v20 >= 0; --v20 ) /*0x56de07*/
      {
        sub_72EF90(i); /*0x56de12*/
        i += 0x4C; /*0x56de17*/
      }
      a8 = v19; /*0x56de1f*/
    }
    else
    {
      a8 = 0; /*0x56de27*/
    }
    v234 = 0xFFFFFFFF; /*0x56de32*/
    a6 = 0; /*0x56de3d*/
    if ( SLODWORD(v200) > 0 ) /*0x56de41*/
    {
      do /*0x56de6c*/
      {
        LODWORD(v195) = 0x4C * a6 + a8; /*0x56de6c*/
        qmemcpy((void *)LODWORD(v195), (char *)Unk_11 + 0x4C * a6, 0x34u); /*0x56de70*/
        v22 = 0; /*0x56de72*/
        if ( a6 ) /*0x56de7b*/
        {
          v27 = 8LL * (unsigned int)v176; /*0x56ded5*/
          LOBYTE(v22) = HIDWORD(v27) != 0; /*0x56ded7*/
          v28 = FormHeapAlloc(v27 | -v22); /*0x56dedf*/
          v24 = v28; /*0x56dee4*/
          v234 = 2; /*0x56deef*/
          if ( v28 ) /*0x56defa*/
          {
            v29 = v176 - 1; /*0x56df00*/
            for ( j = (_WORD *)v28; v29 >= 0; --v29 ) /*0x56df05*/
            {
              sub_72EFA0(j); /*0x56df09*/
              j += 4; /*0x56df0e*/
            }
            goto LABEL_30; /*0x56df14*/
          }
        }
        else
        {
          LOBYTE(v22) = (unsigned __int64)(unsigned int)(4 * v176) >> 0x1D != 0; /*0x56de89*/
          v23 = FormHeapAlloc((0x20 * v176) | -v22); /*0x56de91*/
          v24 = v23; /*0x56de96*/
          v234 = 1; /*0x56dea1*/
          if ( v23 ) /*0x56deac*/
          {
            v25 = 4 * v176 - 1; /*0x56deb6*/
            for ( k = (_WORD *)v23; v25 >= 0; --v25 ) /*0x56debb*/
            {
              sub_72EFA0(k); /*0x56dec2*/
              k += 4; /*0x56dec7*/
            }
            goto LABEL_30; /*0x56decd*/
          }
        }
        v24 = 0; /*0x56df18*/
LABEL_30:
        *(_DWORD *)(LODWORD(v195) + 0x44) = v24; /*0x56df1a*/
        v31 = a6 + 1 < SLODWORD(v200); /*0x56df28*/
        v234 = 0xFFFFFFFF; /*0x56df2f*/
        ++a6; /*0x56df3a*/
      }
      while ( v31 ); /*0x56de6c*/
    }
    v127 = 0; /*0x56df44*/
    if ( v176 > 0 ) /*0x56df51*/
    {
      *(double *)a7 = v226[1]; /*0x56df69*/
      v32 = v212; /*0x56df77*/
      v192 = v226[0]; /*0x56df85*/
      v33 = v201 + 8; /*0x56df90*/
      v34 = (float *)(v151 + 8); /*0x56df93*/
      v190 = v226[2]; /*0x56df96*/
      v35 = 1.0; /*0x56df9a*/
      v182 = v209 - v212; /*0x56df9e*/
      do /*0x56e1e0*/
      {
        x = g_zeroNiPoint3.x; /*0x56dfa7*/
        y = g_zeroNiPoint3.y; /*0x56dfad*/
        z = g_zeroNiPoint3.z; /*0x56dfb3*/
        v187 = x; /*0x56dfbb*/
        v223[0] = *(_DWORD *)(v182 + v32); /*0x56dfc2*/
        v188 = y; /*0x56dfc9*/
        v223[1] = *(_DWORD *)(v182 + v32 + 4); /*0x56dfd1*/
        v223[2] = *(_DWORD *)(v182 + v32 + 8); /*0x56dfdc*/
        v38 = *(float *)v32; /*0x56dfe6*/
        v39 = *(float *)(v32 + 4); /*0x56dfe8*/
        v221 = *(float *)(v32 + 8); /*0x56dfeb*/
        v40 = (float *)(v213 + v127 * v214); /*0x56dffe*/
        v219 = v38; /*0x56e005*/
        v220 = v39; /*0x56e00c*/
        a6d = *v40; /*0x56e015*/
        a4a = v35 - a6d; /*0x56e021*/
        v34[0xFFFFFFFE] = a6d; /*0x56e025*/
        a6e = v40[1]; /*0x56e02b*/
        a4b = a4a - a6e; /*0x56e03d*/
        v34[0xFFFFFFFF] = a6e; /*0x56e041*/
        a6f = v40[2]; /*0x56e047*/
        a4c = a4b - a6f; /*0x56e059*/
        *v34 = a6f; /*0x56e05d*/
        v34[1] = a4c; /*0x56e063*/
        Dstb = v34[0xFFFFFFFF] + v34[0xFFFFFFFE] + *v34; /*0x56e06e*/
        Dstc = v35 - Dstb; /*0x56e076*/
        v34[1] = Dstc; /*0x56e07e*/
        if ( Dstc < dbl_A68618 ) /*0x56e08c*/
          v34[1] = 0.0; /*0x56e090*/
        v41 = g_zeroNiPoint3.y; /*0x56e099*/
        v42 = g_zeroNiPoint3.z; /*0x56e09f*/
        v222[0] = LODWORD(g_zeroNiPoint3.x); /*0x56e0a4*/
        *(float *)&v222[1] = v41; /*0x56e0b3*/
        *(float *)&v222[2] = v42; /*0x56e0c2*/
        HIDWORD(v125) = &v227[9]; /*0x56e0d2*/
        LODWORD(v125) = v227; /*0x56e0da*/
        sub_710580(v125, 1u, (int)v223, (int)v222); /*0x56e0db*/
        HIDWORD(v124) = &g_zeroNiPoint3; /*0x56e0f6*/
        LODWORD(v124) = v230; /*0x56e0fb*/
        sub_710580(v124, 1u, (int)v222, (int)&v187); /*0x56e0fc*/
        v43 = v208; /*0x56e105*/
        v44 = dbl_A2FAA0; /*0x56e112*/
        *(float *)(v33 - 8) = v187 / v208->footprintScale_4C + v44; /*0x56e11c*/
        *(float *)(v33 - 4) = v44 + v188 / v43->footprintScale_4C; /*0x56e128*/
        Dstd = v220 * *(double *)a7 + v219 * v192 + v221 * v190; /*0x56e153*/
        v45 = Dstd; /*0x56e157*/
        if ( Dstd < 0.0 ) /*0x56e164*/
          v45 = 0.0; /*0x56e166*/
        v46 = 0xA; /*0x56e16e*/
        v47 = 1.0 - v45; /*0x56e177*/
        v35 = 1.0; /*0x56e177*/
        v195 = v47; /*0x56e179*/
        a6a = 1.0; /*0x56e17f*/
        while ( 1 ) /*0x56e185*/
        {
          v48 = v195; /*0x56e185*/
          if ( (v46 & 1) != 0 ) /*0x56e189*/
            a6a = a6a * v48; /*0x56e191*/
          v46 >>= 1; /*0x56e195*/
          if ( !v46 ) /*0x56e197*/
            break; /*0x56e197*/
          v195 = v48 * v48; /*0x56e19b*/
        }
        v199 = a6a; /*0x56e1ae*/
        v34 += 4; /*0x56e1b2*/
        v32 += 0xC; /*0x56e1b9*/
        v33 += 0xC; /*0x56e1be*/
        v31 = v127 + 1 < v176; /*0x56e1c1*/
        Dste = fabs(z); /*0x56e1c5*/
        ++v127; /*0x56e1cd*/
        *(float *)(v33 - 0xC) = (1.0 - Dste * dbl_A4C2D0) * a6a; /*0x56e1dd*/
      }
      while ( v31 ); /*0x56e1e0*/
    }
    v49 = 0; /*0x56e1e8*/
    *(_DWORD *)a4 = 0; /*0x56e1ee*/
    a6b = 0; /*0x56e1f2*/
    if ( v139 > 0 ) /*0x56e1f6*/
    {
      v50 = (char *)source + 0x14; /*0x56e204*/
      v183 = v139; /*0x56e207*/
      while ( 1 ) /*0x56e219*/
      {
        v51 = *(unsigned __int16 **)v50; /*0x56e219*/
        v128 = *((_WORD *)v50 + 5); /*0x56e21b*/
        v140 = *((_WORD *)v50 + 7) != 0; /*0x56e222*/
        a7[0] = *(unsigned __int16 **)v50; /*0x56e229*/
        v169 = 0; /*0x56e230*/
        LODWORD(v192) = 0; /*0x56e235*/
        if ( v128 ) /*0x56e23d*/
          break; /*0x56e23d*/
LABEL_78:
        v49 += *((unsigned __int16 *)v50 + 4); /*0x56e560*/
        v50 += 0x2C; /*0x56e566*/
        v73 = v183-- == 1; /*0x56e569*/
        a6b = v49; /*0x56e56e*/
        if ( v73 ) /*0x56e572*/
          goto LABEL_79; /*0x56e572*/
      }
      v52 = v51; /*0x56e243*/
      Dst = v51; /*0x56e245*/
      v53 = v51 + 2; /*0x56e249*/
      v195 = 0.0; /*0x56e24c*/
      v199 = *(float *)&v53; /*0x56e254*/
      while ( 1 ) /*0x56e258*/
      {
        if ( v140 ) /*0x56e25d*/
        {
          v54 = v49 + *v52; /*0x56e26d*/
          v55 = v49 + v52[1]; /*0x56e270*/
          v56 = v52[2]; /*0x56e273*/
        }
        else
        {
          v57 = v53[0xFFFFFFFE]; /*0x56e279*/
          v58 = v53[0xFFFFFFFF]; /*0x56e27d*/
          v56 = *v53; /*0x56e281*/
          v54 = v49 + v57; /*0x56e28a*/
          v55 = v49 + v58; /*0x56e28d*/
        }
        v59 = v49 + v56; /*0x56e296*/
        if ( v54 == v55 || v54 == v59 || v55 == v59 ) /*0x56e2ab*/
        {
          if ( v140 ) /*0x56e51b*/
            v169 = !v169; /*0x56e525*/
          goto LABEL_77; /*0x56e525*/
        }
        if ( sub_56CB70(SLODWORD(v192), v49, v140, (int)a7[0], v201, 0) ) /*0x56e2d5*/
        {
          v60 = v151; /*0x56e2e4*/
          v210 = 0; /*0x56e2e8*/
          LODWORD(v190) = v52; /*0x56e2f3*/
          do /*0x56e4d2*/
          {
            if ( v140 ) /*0x56e2fc*/
              v61 = *(_WORD *)LODWORD(v190); /*0x56e302*/
            else
              v61 = a7[0][v210 + LODWORD(v195)]; /*0x56e31b*/
            v62 = (unsigned __int16)(a6b + v61); /*0x56e323*/
            v63 = 4 * v62; /*0x56e331*/
            if ( *(_DWORD *)(v203 + 4 * v62) == 0xFFFFFFFF ) /*0x56e338*/
            {
              *(_DWORD *)(v203 + 4 * v62) = LOWORD(v14); /*0x56e341*/
              v64 = a4[0]; /*0x56e344*/
              ++*(_DWORD *)a4; /*0x56e350*/
              *((_WORD *)Src + v64) = LOWORD(v14); /*0x56e355*/
              v65 = 0.0 == *(float *)(v60 + 0x10 * v62); /*0x56e361*/
              v66 = *(void **)(v216 + v62 * v217); /*0x56e36e*/
              source = v66; /*0x56e372*/
              if ( !v65 ) /*0x56e379*/
              {
                v67 = a8 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * HIBYTE(source)); /*0x56e38d*/
                *(_WORD *)(*(_DWORD *)(v67 + 0x44) + 8 * *(unsigned __int16 *)(v67 + 0x48)) = LOWORD(v14); /*0x56e398*/
                v60 = v151; /*0x56e3a1*/
                *(float *)(*(_DWORD *)(v67 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v67 + 0x48))++ + 4) = *(float *)(v151 + 4 * v63); /*0x56e3ab*/
                v14 = v197; /*0x56e3b4*/
              }
              if ( 0.0 != *(float *)(v60 + 4 * v63 + 4) ) /*0x56e3c1*/
              {
                v68 = a8 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * BYTE2(source)); /*0x56e3d5*/
                *(_WORD *)(*(_DWORD *)(v68 + 0x44) + 8 * *(unsigned __int16 *)(v68 + 0x48)) = LOWORD(v14); /*0x56e3e0*/
                *(float *)(*(_DWORD *)(v68 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v68 + 0x48))++ + 4) = *(float *)(v151 + 4 * v63 + 4); /*0x56e3f4*/
                v14 = v197; /*0x56e3fd*/
                v60 = v151; /*0x56e401*/
              }
              if ( 0.0 != *(float *)(v60 + 4 * v63 + 8) ) /*0x56e40c*/
              {
                v69 = a8 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * BYTE1(v66)); /*0x56e41e*/
                *(_WORD *)(*(_DWORD *)(v69 + 0x44) + 8 * *(unsigned __int16 *)(v69 + 0x48)) = LOWORD(v14); /*0x56e429*/
                v60 = v151; /*0x56e432*/
                *(float *)(*(_DWORD *)(v69 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v69 + 0x48))++ + 4) = *(float *)(v151 + 4 * v63 + 8); /*0x56e43d*/
                v14 = v197; /*0x56e446*/
              }
              if ( 0.0 != *(float *)(v60 + 4 * v63 + 0xC) ) /*0x56e453*/
              {
                v70 = a8 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * (unsigned __int8)v66); /*0x56e465*/
                *(_WORD *)(*(_DWORD *)(v70 + 0x44) + 8 * *(unsigned __int16 *)(v70 + 0x48)) = LOWORD(v14); /*0x56e470*/
                *(float *)(*(_DWORD *)(v70 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v70 + 0x48))++ + 4) = *(float *)(v60 + 4 * v63 + 0xC); /*0x56e480*/
              }
              v71 = Src; /*0x56e489*/
              ++LODWORD(v14); /*0x56e490*/
              v197 = v14; /*0x56e493*/
            }
            else
            {
              v71 = Src; /*0x56e4a6*/
              *((_WORD *)Src + a4[0]) = *(_WORD *)(v203 + 4 * v62); /*0x56e4b0*/
              ++*(_DWORD *)a4; /*0x56e4b5*/
            }
            LODWORD(v190) += 2; /*0x56e4c0*/
            ++v210; /*0x56e4cb*/
          }
          while ( v210 < 3 ); /*0x56e4d2*/
          if ( !v140 ) /*0x56e4df*/
            goto LABEL_77; /*0x56e4df*/
          if ( v169 ) /*0x56e4e6*/
          {
            v72 = v71[a4[0] - 3]; /*0x56e4ed*/
            v71[a4[0] - 3] = v71[a4[0] - 1]; /*0x56e4f7*/
            v71[a4[0] - 1] = v72; /*0x56e4fc*/
          }
        }
        if ( v140 ) /*0x56e506*/
          v169 = !v169; /*0x56e510*/
LABEL_77:
        LODWORD(v195) += 3; /*0x56e529*/
        v49 = a6b; /*0x56e53f*/
        v53 = (unsigned __int16 *)(LODWORD(v199) + 6); /*0x56e546*/
        v52 = Dst + 1; /*0x56e549*/
        v31 = ++LODWORD(v192) < (int)v128; /*0x56e54c*/
        LODWORD(v199) += 6; /*0x56e552*/
        ++Dst; /*0x56e556*/
        if ( !v31 ) /*0x56e55a*/
          goto LABEL_78; /*0x56e55a*/
      }
    }
LABEL_79:
    FormHeapFree(v151); /*0x56e578*/
    if ( LOWORD(v14) )
    {
      a7[0] = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)a4[0] >> 0x1F != 0 ? 0xFFFFFFFF : 2 * a4[0]);
      memcpy(a7[0], Src, 2 * a4[0]); /*0x56e5bf*/
      v74 = FormHeapAlloc((0xC * (unsigned __int64)LOWORD(v14)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * LOWORD(v14));
      v184 = v74; /*0x56e5ef*/
      v75 = FormHeapAlloc((0xC * (unsigned __int64)LOWORD(v14)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * LOWORD(v14));
      v76 = dbl_A68610; /*0x56e5fd*/
      v77 = 0; /*0x56e606*/
      a6c = v75; /*0x56e60d*/
      if ( v176 >= 4 ) /*0x56e611*/
      {
        v78 = (_DWORD *)(v203 + 8); /*0x56e625*/
        v79 = 2; /*0x56e628*/
        v80 = (_DWORD *)(v201 + 0x18); /*0x56e62d*/
        do /*0x56ea06*/
        {
          if ( v78[0xFFFFFFFE] != 0xFFFFFFFF ) /*0x56e634*/
          {
            v81 = (char *)outVertices.data + v77 * outVertices.stride; /*0x56e644*/
            LODWORD(v190) = *(_DWORD *)v81; /*0x56e64d*/
            v82 = *((_DWORD *)v81 + 1); /*0x56e651*/
            v191 = *((float *)v81 + 2); /*0x56e657*/
            v83 = v204 + v77 * v205; /*0x56e665*/
            HIDWORD(v190) = v82; /*0x56e66c*/
            LODWORD(v192) = *(_DWORD *)v83; /*0x56e672*/
            v14 = *(float *)(v83 + 4); /*0x56e676*/
            v84 = *(float *)(v83 + 8); /*0x56e679*/
            *((float *)&v192 + 1) = v14; /*0x56e682*/
            v193 = v84; /*0x56e686*/
            v141 = *(float *)&v192 * v76; /*0x56e68d*/
            v85 = (float *)(v74 + 0xC * v78[0xFFFFFFFE]); /*0x56e698*/
            v129 = v14 * v76; /*0x56e69e*/
            v152 = v193 * v76; /*0x56e6a8*/
            v142 = v141 + *(float *)&v190; /*0x56e6b4*/
            v130 = *((float *)&v190 + 1) + v129; /*0x56e6c0*/
            v153 = v191 + v152; /*0x56e6cc*/
            v187 = v142; /*0x56e6d4*/
            *v85 = v142; /*0x56e6e0*/
            v188 = v130; /*0x56e6e2*/
            v85[1] = v130; /*0x56e6ee*/
            z = v153; /*0x56e6f1*/
            v85[2] = v153; /*0x56e6f9*/
            v86 = (_DWORD *)(a6c + 0xC * v78[0xFFFFFFFE]); /*0x56e706*/
            *v86 = v80[0xFFFFFFFA]; /*0x56e70c*/
            v86[1] = v80[0xFFFFFFFB]; /*0x56e711*/
            v86[2] = v80[0xFFFFFFFC]; /*0x56e717*/
            LOWORD(v14) = LOWORD(v197); /*0x56e71a*/
          }
          if ( v78[0xFFFFFFFF] != 0xFFFFFFFF ) /*0x56e722*/
          {
            v87 = (float *)((char *)outVertices.data + (v79 - 1) * outVertices.stride); /*0x56e735*/
            *(float *)&v190 = *v87; /*0x56e73e*/
            v88 = *((_DWORD *)v87 + 1); /*0x56e742*/
            v89 = v87[2]; /*0x56e745*/
            HIDWORD(v190) = v88; /*0x56e748*/
            v191 = v89; /*0x56e74c*/
            v90 = v204 + (v79 - 1) * v205; /*0x56e75d*/
            LODWORD(v192) = *(_DWORD *)v90; /*0x56e766*/
            v14 = *(float *)(v90 + 4); /*0x56e76e*/
            v91 = *(float *)(v90 + 8); /*0x56e773*/
            *((float *)&v192 + 1) = v14; /*0x56e776*/
            v143 = *(float *)&v192 * v76; /*0x56e77a*/
            v193 = v91; /*0x56e77e*/
            v92 = (float *)(v74 + 0xC * v78[0xFFFFFFFF]); /*0x56e78e*/
            v131 = v14 * v76; /*0x56e792*/
            v154 = v193 * v76; /*0x56e79c*/
            v144 = v143 + *(float *)&v190; /*0x56e7a8*/
            v132 = *((float *)&v190 + 1) + v131; /*0x56e7b4*/
            v155 = v191 + v154; /*0x56e7c0*/
            v187 = v144; /*0x56e7c8*/
            *v92 = v144; /*0x56e7d4*/
            v188 = v132; /*0x56e7d6*/
            v92[1] = v132; /*0x56e7e2*/
            z = v155; /*0x56e7e5*/
            v92[2] = v155; /*0x56e7ed*/
            v93 = (_DWORD *)(a6c + 0xC * v78[0xFFFFFFFF]); /*0x56e7fa*/
            *v93 = v80[0xFFFFFFFD]; /*0x56e800*/
            v93[1] = v80[0xFFFFFFFE]; /*0x56e805*/
            v93[2] = v80[0xFFFFFFFF]; /*0x56e80b*/
            LOWORD(v14) = LOWORD(v197); /*0x56e80e*/
          }
          if ( *v78 != 0xFFFFFFFF ) /*0x56e815*/
          {
            v94 = (char *)outVertices.data + outVertices.stride * v79; /*0x56e825*/
            LODWORD(v190) = *(_DWORD *)v94; /*0x56e82e*/
            v95 = *((_DWORD *)v94 + 1); /*0x56e832*/
            v191 = *((float *)v94 + 2); /*0x56e838*/
            v96 = v204 + v205 * v79; /*0x56e846*/
            HIDWORD(v190) = v95; /*0x56e84d*/
            LODWORD(v192) = *(_DWORD *)v96; /*0x56e853*/
            v14 = *(float *)(v96 + 4); /*0x56e857*/
            v97 = *(float *)(v96 + 8); /*0x56e85a*/
            *((float *)&v192 + 1) = v14; /*0x56e863*/
            v193 = v97; /*0x56e867*/
            v145 = *(float *)&v192 * v76; /*0x56e86d*/
            v98 = (float *)(v74 + 0xC * *v78); /*0x56e878*/
            v133 = v14 * v76; /*0x56e87e*/
            v156 = v193 * v76; /*0x56e888*/
            v146 = v145 + *(float *)&v190; /*0x56e894*/
            v134 = *((float *)&v190 + 1) + v133; /*0x56e8a0*/
            v157 = v191 + v156; /*0x56e8ac*/
            v187 = v146; /*0x56e8b4*/
            *v98 = v146; /*0x56e8c0*/
            v188 = v134; /*0x56e8c2*/
            v98[1] = v134; /*0x56e8ce*/
            z = v157; /*0x56e8d1*/
            v98[2] = v157; /*0x56e8d9*/
            v99 = (_DWORD *)(a6c + 0xC * *v78); /*0x56e8e5*/
            *v99 = *v80; /*0x56e8ea*/
            v99[1] = v80[1]; /*0x56e8ef*/
            v99[2] = v80[2]; /*0x56e8f5*/
            LOWORD(v14) = LOWORD(v197); /*0x56e8f8*/
          }
          if ( v78[1] != 0xFFFFFFFF ) /*0x56e900*/
          {
            v100 = (char *)outVertices.data + (v79 + 1) * outVertices.stride; /*0x56e913*/
            LODWORD(v190) = *(_DWORD *)v100; /*0x56e91c*/
            v101 = *((_DWORD *)v100 + 1); /*0x56e920*/
            v191 = *((float *)v100 + 2); /*0x56e926*/
            v102 = v204 + (v79 + 1) * v205; /*0x56e934*/
            HIDWORD(v190) = v101; /*0x56e93b*/
            LODWORD(v192) = *(_DWORD *)v102; /*0x56e941*/
            v14 = *(float *)(v102 + 4); /*0x56e945*/
            v103 = *(float *)(v102 + 8); /*0x56e948*/
            *((float *)&v192 + 1) = v14; /*0x56e951*/
            v193 = v103; /*0x56e955*/
            v147 = *(float *)&v192 * v76; /*0x56e95c*/
            v74 = v184; /*0x56e960*/
            v104 = (float *)(v184 + 0xC * v78[1]); /*0x56e96d*/
            v135 = v14 * v76; /*0x56e971*/
            v158 = v193 * v76; /*0x56e97b*/
            v148 = v147 + *(float *)&v190; /*0x56e987*/
            v136 = *((float *)&v190 + 1) + v135; /*0x56e993*/
            v159 = v191 + v158; /*0x56e99f*/
            v187 = v148; /*0x56e9a7*/
            *v104 = v148; /*0x56e9b3*/
            v188 = v136; /*0x56e9b5*/
            v104[1] = v136; /*0x56e9c1*/
            z = v159; /*0x56e9c4*/
            v104[2] = v159; /*0x56e9cc*/
            v105 = (_DWORD *)(a6c + 0xC * v78[1]); /*0x56e9d9*/
            *v105 = v80[3]; /*0x56e9df*/
            v105[1] = v80[4]; /*0x56e9e4*/
            v105[2] = v80[5]; /*0x56e9ea*/
            LOWORD(v14) = LOWORD(v197); /*0x56e9ed*/
          }
          v77 += 4; /*0x56e9f5*/
          v80 += 0xC; /*0x56e9fb*/
          v78 += 4; /*0x56e9fe*/
          v79 += 4; /*0x56ea01*/
        }
        while ( v77 < v176 - 3 ); /*0x56ea06*/
      }
      if ( v77 < v176 ) /*0x56ea10*/
      {
        v106 = (_DWORD *)(v201 + 0xC * v77); /*0x56ea20*/
        do /*0x56eb23*/
        {
          v107 = *(_DWORD *)(v203 + 4 * v77); /*0x56ea2a*/
          if ( v107 != 0xFFFFFFFF ) /*0x56ea30*/
          {
            v108 = (char *)outVertices.data + v77 * outVertices.stride; /*0x56ea40*/
            LODWORD(v190) = *(_DWORD *)v108; /*0x56ea4c*/
            v109 = *((_DWORD *)v108 + 1); /*0x56ea50*/
            v191 = *((float *)v108 + 2); /*0x56ea56*/
            v110 = v204 + v77 * v205; /*0x56ea64*/
            HIDWORD(v190) = v109; /*0x56ea6b*/
            LODWORD(v192) = *(_DWORD *)v110; /*0x56ea71*/
            v111 = *(float *)(v110 + 4); /*0x56ea75*/
            v112 = *(float *)(v110 + 8); /*0x56ea78*/
            *((float *)&v192 + 1) = v111; /*0x56ea81*/
            v193 = v112; /*0x56ea85*/
            v113 = (float *)(v74 + 0xC * v107); /*0x56ea89*/
            v149 = *(float *)&v192 * v76; /*0x56ea8d*/
            v137 = v111 * v76; /*0x56ea97*/
            v160 = v193 * v76; /*0x56eaa1*/
            v150 = v149 + *(float *)&v190; /*0x56eaad*/
            v138 = *((float *)&v190 + 1) + v137; /*0x56eab9*/
            v161 = v191 + v160; /*0x56eac5*/
            v187 = v150; /*0x56eacd*/
            *v113 = v150; /*0x56ead9*/
            v188 = v138; /*0x56eadb*/
            v113[1] = v138; /*0x56eae7*/
            z = v161; /*0x56eaea*/
            v113[2] = v161; /*0x56eaf2*/
            v114 = (_DWORD *)(a6c + 0xC * *(_DWORD *)(v203 + 4 * v77)); /*0x56eb06*/
            *v114 = *v106; /*0x56eb0b*/
            v114[1] = v106[1]; /*0x56eb10*/
            v114[2] = v106[2]; /*0x56eb16*/
          }
          ++v77; /*0x56eb19*/
          v106 += 3; /*0x56eb1c*/
        }
        while ( v77 < v176 ); /*0x56eb23*/
      }
      if ( SLODWORD(v200) > 0 )
      {
        v115 = a8 + 0x44; /*0x56eb44*/
        v199 = v200; /*0x56eb47*/
        do
        {
          v116 = *(unsigned __int16 *)(v115 + 4); /*0x56eb50*/
          source = *(void **)v115; /*0x56eb56*/
          v185 = v116; /*0x56eb68*/
          v117 = FormHeapAlloc((unsigned __int64)v116 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v116);
          Dsta = (void *)v117; /*0x56eb79*/
          v234 = 3; /*0x56eb7f*/
          if ( v117 ) /*0x56eb8a*/
          {
            v118 = (_WORD *)v117; /*0x56eb8c*/
            for ( m = v185 - 1; m >= 0; --m ) /*0x56eb99*/
            {
              sub_72EFA0(v118); /*0x56eba2*/
              v118 += 4; /*0x56eba7*/
            }
            v119 = Dsta; /*0x56ebb1*/
          }
          else
          {
            v119 = 0; /*0x56ebb7*/
          }
          v120 = source; /*0x56ebb9*/
          *(_DWORD *)v115 = v119; /*0x56ebbd*/
          v126 = 8 * *(unsigned __int16 *)(v115 + 4); /*0x56ebc9*/
          v234 = 0xFFFFFFFF; /*0x56ebcc*/
          memcpy(v119, v120, v126); /*0x56ebd7*/
          FormHeapFree((unsigned int)v120); /*0x56ebdd*/
          v115 += 0x4C; /*0x56ebe5*/
          --LODWORD(v199); /*0x56ebe8*/
        }
        while ( v199 != 0.0 );
      }
      v121 = v208; /*0x56ec02*/
      BSTempEffectGeometryDecal_BuildGeneratedGeometry( /*0x56ec19*/
        v208,
        (int)v208->sourceGeometry_2C,
        SLOWORD(v14),
        a4[0],
        v74,
        a6c,
        a7[0],
        a8);
    }
    else
    {
      v122 = v200; /*0x56ec20*/
      if ( SLODWORD(v200) > 0 ) /*0x56ec29*/
      {
        v123 = (unsigned int *)(a8 + 0x44); /*0x56ec2f*/
        do /*0x56ec49*/
        {
          FormHeapFree(*v123); /*0x56ec35*/
          *v123 = 0; /*0x56ec3a*/
          v123 += 0x13; /*0x56ec43*/
          --LODWORD(v122); /*0x56ec46*/
        }
        while ( v122 != 0.0 ); /*0x56ec49*/
      }
      FormHeapFree(a8); /*0x56ec50*/
      v121 = v208; /*0x56ec55*/
    }
    FormHeapFree(v209); /*0x56ec67*/
    FormHeapFree(v212); /*0x56ec74*/
    FormHeapFree((unsigned int)Src); /*0x56ec81*/
    FormHeapFree(v203); /*0x56ec8e*/
    FormHeapFree(v201); /*0x56ec9b*/
    if ( v198 ) /*0x56eca8*/
      NiGeometryData_UnlockVertexStream(v121->sourceGeometry_2C->member.geomData); /*0x56ecb3*/
  }
}
