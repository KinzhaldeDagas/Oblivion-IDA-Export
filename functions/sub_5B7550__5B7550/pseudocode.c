int __thiscall sub_5B7550(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ebp
  LONG (__stdcall *v6)(volatile LONG *); // ebx
  unsigned int i; // esi
  int v8; // ecx
  void (__thiscall ***v9)(void *, int); // edi
  float *v10; // eax
  int v11; // edi
  bool v12; // zf
  int *v13; // ebp
  int v14; // esi
  int v15; // ebp
  void (__thiscall ***v16)(_DWORD, int); // esi
  float v17; // edx
  float v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ebp
  char v25; // al
  NiNode *v26; // esi
  char v27; // al
  GridEntry *GridEntry; // eax
  TESObjectCELL **p_cell; // edi
  int v30; // ebx
  int j; // esi
  NiNode *NiNode; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // et2
  unsigned int v38; // ebx
  float v39; // edx
  float v40; // eax
  TESObjectREFR *v41; // ecx
  bool v42; // al
  TESObjectREFR *v43; // ecx
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v45; // ebp
  int v46; // esi
  int v47; // edi
  Ni2DBuffer *v48; // eax
  Ni2DBuffer *v49; // esi
  TESWorldSpace *WorldSpace; // eax
  ExtraDataList *CellAtCellCoord; // eax
  TESObjectCELL *v52; // esi
  Ni2DBuffer *v53; // eax
  Ni2DBuffer *v54; // edi
  int v55; // ebp
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  _WORD *v59; // esi
  double v60; // st7
  float v61; // edi
  int v62; // ecx
  int v63; // eax
  float v64; // edx
  double v65; // st6
  double v66; // st7
  double v67; // st6
  double v68; // st5
  double v69; // st4
  double v70; // rt0
  double v71; // st3
  int v72; // ebx
  float v73; // ebp
  float *v74; // edi
  float v75; // eax
  float v76; // ecx
  float v77; // eax
  double v78; // st3
  double v79; // st4
  double v80; // rt1
  double v81; // st3
  double v82; // st4
  double v83; // rt2
  double v84; // st4
  double v85; // st5
  float v86; // eax
  float v87; // ecx
  double v88; // rtt
  float v89; // eax
  int v90; // eax
  int v91; // ecx
  int v92; // ebp
  int v93; // ebx
  __int16 v94; // dx
  int v95; // edi
  __int16 v96; // cx
  int v97; // eax
  __int16 v98; // bx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  void *v102; // ebp
  NiAVObject *v103; // edi
  double v104; // st7
  double v105; // st7
  int v106; // eax
  NiNode *v107; // edi
  NiTexturingProperty *v108; // eax
  NiTexturingProperty *v109; // ebp
  unsigned int v110; // ebx
  double v111; // rt0
  NiAVObject *v112; // edi
  double v113; // st7
  double v114; // st7
  int v115; // eax
  NiAVObject *v116; // esi
  NiRenderedTexture *v117; // ebp
  NiTexturingProperty *v118; // eax
  NiTexturingProperty *v119; // edi
  BSShaderProperty *v120; // eax
  NiObjectNET *v121; // eax
  BSShaderProperty *v122; // edi
  double v123; // st7
  int v124; // ebx
  float v125; // eax
  double v126; // rt1
  int v127; // edi
  GridEntry *v128; // eax
  TESObjectCELL **v129; // ebp
  int v130; // ebx
  int jj; // esi
  NiNode *v132; // eax
  int v133; // eax
  int v134; // eax
  float v135; // ecx
  float v136; // edx
  float v137; // eax
  int v138; // esi
  _DWORD *v139; // esi
  size_t v140; // [esp+40h] [ebp-18Ch]
  _BYTE v141[12]; // [esp+48h] [ebp-184h]
  int a3; // [esp+4Ch] [ebp-180h]
  NiRenderedTexture *a3a; // [esp+4Ch] [ebp-180h]
  int a3b; // [esp+4Ch] [ebp-180h]
  char v145; // [esp+6Bh] [ebp-161h]
  float v146; // [esp+6Ch] [ebp-160h]
  int v147; // [esp+6Ch] [ebp-160h]
  char v148; // [esp+72h] [ebp-15Ah]
  char v149; // [esp+73h] [ebp-159h]
  int k; // [esp+74h] [ebp-158h]
  int v151; // [esp+74h] [ebp-158h]
  int m; // [esp+74h] [ebp-158h]
  void *Src; // [esp+78h] [ebp-154h]
  float v154; // [esp+7Ch] [ebp-150h]
  float v155; // [esp+7Ch] [ebp-150h]
  float v156; // [esp+7Ch] [ebp-150h]
  int v157; // [esp+80h] [ebp-14Ch]
  unsigned int v158; // [esp+80h] [ebp-14Ch]
  int v159; // [esp+84h] [ebp-148h]
  NiRenderedTexture *v160; // [esp+84h] [ebp-148h]
  float *v161; // [esp+88h] [ebp-144h]
  char *n; // [esp+88h] [ebp-144h]
  int v163; // [esp+8Ch] [ebp-140h]
  int ii; // [esp+8Ch] [ebp-140h]
  char v165; // [esp+92h] [ebp-13Ah]
  char v166; // [esp+93h] [ebp-139h]
  int v167; // [esp+94h] [ebp-138h]
  int v168; // [esp+94h] [ebp-138h]
  FreeEntry *v169; // [esp+98h] [ebp-134h]
  float v170; // [esp+9Ch] [ebp-130h]
  float v171; // [esp+9Ch] [ebp-130h]
  int v172; // [esp+A0h] [ebp-12Ch]
  int v173; // [esp+A4h] [ebp-128h]
  int v174; // [esp+A8h] [ebp-124h] BYREF
  void *v175; // [esp+ACh] [ebp-120h] BYREF
  int v176; // [esp+B0h] [ebp-11Ch] BYREF
  float v177; // [esp+B4h] [ebp-118h]
  void *v178; // [esp+B8h] [ebp-114h]
  void *v179; // [esp+BCh] [ebp-110h]
  int v180; // [esp+C0h] [ebp-10Ch]
  __int64 v181; // [esp+C4h] [ebp-108h]
  float v182; // [esp+CCh] [ebp-100h]
  void *Dst; // [esp+D0h] [ebp-FCh]
  int v184; // [esp+D4h] [ebp-F8h]
  _DWORD *v185; // [esp+D8h] [ebp-F4h]
  void *v186; // [esp+DCh] [ebp-F0h]
  void *v187; // [esp+E0h] [ebp-ECh]
  NiNode *v188; // [esp+E4h] [ebp-E8h]
  int v189; // [esp+E8h] [ebp-E4h]
  float *v190; // [esp+ECh] [ebp-E0h]
  float v191; // [esp+F0h] [ebp-DCh]
  unsigned int v192; // [esp+F4h] [ebp-D8h]
  int v193; // [esp+F8h] [ebp-D4h]
  char *v194; // [esp+FCh] [ebp-D0h]
  int v195; // [esp+100h] [ebp-CCh]
  void *v196; // [esp+104h] [ebp-C8h]
  int v197; // [esp+108h] [ebp-C4h]
  int v198; // [esp+10Ch] [ebp-C0h]
  float v199[3]; // [esp+110h] [ebp-BCh] BYREF
  float v200; // [esp+11Ch] [ebp-B0h]
  float v201; // [esp+120h] [ebp-ACh]
  float v202; // [esp+124h] [ebp-A8h]
  float v203; // [esp+128h] [ebp-A4h]
  float v204; // [esp+12Ch] [ebp-A0h]
  float v205; // [esp+130h] [ebp-9Ch]
  Ni2DBuffer *v206; // [esp+134h] [ebp-98h] BYREF
  float v207; // [esp+138h] [ebp-94h]
  float v208; // [esp+13Ch] [ebp-90h]
  float v209; // [esp+140h] [ebp-8Ch]
  float v210; // [esp+144h] [ebp-88h]
  float v211; // [esp+148h] [ebp-84h]
  float v212; // [esp+14Ch] [ebp-80h]
  float v213; // [esp+150h] [ebp-7Ch]
  float v214; // [esp+154h] [ebp-78h]
  __int64 v215; // [esp+158h] [ebp-74h]
  float v216; // [esp+160h] [ebp-6Ch]
  double v217; // [esp+164h] [ebp-68h]
  Ni2DBuffer *v218; // [esp+170h] [ebp-5Ch] BYREF
  __int64 v219; // [esp+174h] [ebp-58h]
  float v220; // [esp+17Ch] [ebp-50h]
  float v221; // [esp+180h] [ebp-4Ch]
  float v222; // [esp+184h] [ebp-48h]
  float v223; // [esp+188h] [ebp-44h]
  float v224; // [esp+18Ch] [ebp-40h]
  float v225; // [esp+190h] [ebp-3Ch]
  float v226; // [esp+194h] [ebp-38h]
  float v227; // [esp+198h] [ebp-34h]
  float v228; // [esp+19Ch] [ebp-30h]
  float v229; // [esp+1A0h] [ebp-2Ch]
  float v230; // [esp+1A4h] [ebp-28h]
  float v231; // [esp+1A8h] [ebp-24h]
  float v232; // [esp+1ACh] [ebp-20h]
  int v233[4]; // [esp+1B0h] [ebp-1Ch] BYREF
  int v234; // [esp+1C8h] [ebp-4h]

  v185 = this; /*0x5b7585*/
  v2 = (_DWORD *)*(this + 0x32); /*0x5b758c*/
  if ( v2[1] ) /*0x5b7592*/
  {
    do /*0x5b75ac*/
    {
      v3 = *(_DWORD *)(v2[1] + 4); /*0x5b759b*/
      FormHeapFree(v2[1]); /*0x5b759f*/
      v2[1] = v3; /*0x5b75a9*/
    }
    while ( v3 ); /*0x5b75ac*/
  }
  *v2 = 0; /*0x5b75ae*/
  v4 = *(_DWORD *)(*(this + 0x19) + 0x24); /*0x5b75b7*/
  v173 = v4; /*0x5b75bc*/
  if ( !v4 ) /*0x5b75c0*/
    return 0; /*0x5b75c2*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5b75dd*/
  v6 = InterlockedDecrement; /*0x5b75e9*/
  for ( i = 0; *(unsigned __int16 *)(v4 + 0xB6) > i; ++i ) /*0x5b75e2*/
  {
    v8 = *(_DWORD *)(v4 + 0xB0); /*0x5b75fc*/
    if ( *(_DWORD *)(v8 + 4 * i) ) /*0x5b7602*/
    {
      (*(void (__thiscall **)(int, void **, _DWORD))(*(_DWORD *)v4 + 0x88))(v4, &v175, *(_DWORD *)(v8 + 4 * i)); /*0x5b761a*/
      if ( v175 ) /*0x5b7622*/
      {
        v9 = (void (__thiscall ***)(void *, int))v175; /*0x5b7624*/
        if ( !v6((volatile LONG *)v175 + 1) ) /*0x5b762a*/
          (**v9)(v9, 1); /*0x5b763c*/
      }
    }
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5b764e*/
  v10 = reference->vtbl->super.super.super.GetPos(reference); /*0x5b7664*/
  v11 = uGridsToLoad; /*0x5b7668*/
  v176 = *(int *)v10; /*0x5b766e*/
  v177 = v10[1]; /*0x5b7675*/
  v178 = *((void **)v10 + 2); /*0x5b767c*/
  *(float *)&v178 = *(float *)&v178 + dbl_A3F3E8; /*0x5b768f*/
  v12 = unk_B42D40 == 0; /*0x5b7698*/
  v172 = v11; /*0x5b769f*/
  v163 = v11 * v11; /*0x5b76a3*/
  v175 = (void *)(v11 << 9); /*0x5b76a7*/
  if ( v12 || !OB_RendererGlobalState_010201A0[0xA5] || (v145 = 1, *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2) ) /*0x5b76c2*/
    v145 = 0; /*0x5b76c4*/
  v148 = 1; /*0x5b76c9*/
  v191 = sub_411F00(); /*0x5b76d3*/
  if ( v145 ) /*0x5b76df*/
  {
    v13 = NiSourceTexture_LoadChecked(&v174, "Data\\Textures\\Menus\\Map\\local\\MapPaper01.dds", 1, 0); /*0x5b76fb*/
    v14 = unk_B42D44; /*0x5b76fd*/
    v12 = unk_B42D44 == *v13; /*0x5b7703*/
    v234 = 0; /*0x5b7706*/
    if ( !v12 ) /*0x5b7711*/
    {
      if ( v14 ) /*0x5b7715*/
      {
        if ( !v6((volatile LONG *)(v14 + 4)) ) /*0x5b771b*/
          (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x5b772d*/
      }
      v15 = *v13; /*0x5b772f*/
      unk_B42D44 = v15; /*0x5b7734*/
      if ( v15 ) /*0x5b773a*/
        InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x5b7740*/
    }
    v16 = (void (__thiscall ***)(_DWORD, int))v174; /*0x5b7746*/
    v234 = 0xFFFFFFFF; /*0x5b774c*/
    if ( v174 ) /*0x5b7757*/
    {
      if ( !v6((volatile LONG *)(v174 + 4)) ) /*0x5b775d*/
      {
        if ( v16 ) /*0x5b7765*/
          (**v16)(v16, 1); /*0x5b776f*/
      }
    }
  }
  v17 = unk_B45E08; /*0x5b7777*/
  v18 = unk_B45E0C; /*0x5b777d*/
  v225 = unk_B45E04; /*0x5b7782*/
  v228 = unk_B45E10; /*0x5b778f*/
  v19 = dword_B25AD8; /*0x5b7796*/
  v226 = v17; /*0x5b779c*/
  v20 = dword_B25AD0; /*0x5b77a3*/
  v227 = v18; /*0x5b77a9*/
  v21 = dword_B25AD4; /*0x5b77b0*/
  LODWORD(unk_B45E0C) = v19; /*0x5b77b5*/
  v22 = *(_DWORD *)&MEMORY[0xB33E90][0x13A4]; /*0x5b77bb*/
  LODWORD(unk_B45E04) = v20; /*0x5b77c1*/
  v23 = dword_B25ADC; /*0x5b77c7*/
  LODWORD(unk_B45E08) = v21; /*0x5b77cd*/
  LOBYTE(v21) = unk_B45DC0; /*0x5b77d2*/
  v24 = 0; /*0x5b77d7*/
  LODWORD(unk_B45E10) = v23; /*0x5b77db*/
  v165 = v21; /*0x5b77e1*/
  unk_B45DC0 = 1; /*0x5b77e5*/
  v149 = 1; /*0x5b77ec*/
  if ( v22 ) /*0x5b77f1*/
  {
    v25 = *(_BYTE *)(v22 + 0x18) & 1; /*0x5b77f6*/
    *(_WORD *)(v22 + 0x18) |= 1u; /*0x5b77f8*/
    v149 = v25; /*0x5b77fd*/
  }
  v26 = MEMORY[0xB333A8]; /*0x5b7801*/
  v27 = MEMORY[0xB333A8]->members.super.m_flags & 1; /*0x5b780a*/
  v188 = MEMORY[0xB333A8]; /*0x5b780c*/
  v166 = v27; /*0x5b7813*/
  if ( !v27 ) /*0x5b7817*/
    v26->members.super.m_flags |= 1u; /*0x5b7819*/
  v169 = 0; /*0x5b7829*/
  if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x5b7824*/
  {
    *(_DWORD *)&v141[4] = 1; /*0x5b7837*/
    *(_DWORD *)v141 = 4 * v163; /*0x5b7840*/
    v169 = j_MemoryHeap_Alloc(&FormHeap, 0, *(size_t *)v141, *(int *)&v141[8]); /*0x5b784d*/
    v159 = 0; /*0x5b7851*/
    if ( v11 > 0 ) /*0x5b7855*/
    {
      do /*0x5b7930*/
      {
        v157 = 0; /*0x5b7860*/
        do /*0x5b791d*/
        {
          GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, v159, v157); /*0x5b7882*/
          p_cell = &GridEntry->cell; /*0x5b7887*/
          if ( GridEntry ) /*0x5b788b*/
          {
            if ( GridEntry->cell ) /*0x5b788d*/
            {
              v30 = 0; /*0x5b7892*/
              for ( j = 8; j < 0x18; j += 4 ) /*0x5b7894*/
              {
                NiNode = GetObjectPointerAt_054(*p_cell); /*0x5b78a2*/
                if ( NiNode /*0x5b78c6*/
                  && NiNode->members.children.end > (unsigned int)(v30 + 2)
                  && (v33 = *(int *)((char *)&NiNode->members.children.data->vtbl + j)) != 0
                  && *(_WORD *)(v33 + 0xB6) )
                {
                  v34 = **(_DWORD **)(v33 + 0xB0); /*0x5b78d6*/
                }
                else
                {
                  v34 = 0; /*0x5b78da*/
                }
                if ( v34 && (*(_BYTE *)(v34 + 0x18) & 1) != 0 ) /*0x5b78e4*/
                {
                  *(_WORD *)(v34 + 0x18) &= ~1u; /*0x5b78ea*/
                  *((_BYTE *)&v169->prev + v24) = 1; /*0x5b78f0*/
                }
                else
                {
                  *((_BYTE *)&v169->prev + v24) = 0; /*0x5b78fa*/
                }
                ++v24; /*0x5b7901*/
                ++v30; /*0x5b7904*/
              }
            }
          }
          ++v157; /*0x5b7919*/
        }
        while ( v157 < v172 ); /*0x5b791d*/
        ++v159; /*0x5b792c*/
      }
      while ( v159 < v172 ); /*0x5b7930*/
      v26 = v188; /*0x5b7936*/
    }
  }
  v35 = 0; /*0x5b793d*/
  v174 = 0; /*0x5b7943*/
  if ( v163 <= 0 ) /*0x5b7947*/
  {
    v124 = v173; /*0x5b85ae*/
  }
  else
  {
    v201 = 0.0; /*0x5b794f*/
    v203 = 0.0; /*0x5b7956*/
    v204 = 1.0; /*0x5b795f*/
    v205 = 0.0; /*0x5b7966*/
    v217 = v191; /*0x5b7974*/
    v170 = (float)(int)v175; /*0x5b797f*/
    v213 = flt_A58DA8; /*0x5b7989*/
    do /*0x5b859f*/
    {
      v37 = v35 % uGridsToLoad; /*0x5b7992*/
      v36 = v35 / uGridsToLoad; /*0x5b7992*/
      v160 = 0; /*0x5b7998*/
      v38 = v37; /*0x5b79a0*/
      v192 = v37; /*0x5b79a2*/
      v158 = v36; /*0x5b79a9*/
      v39 = MEMORY[0xB3F9AC]; /*0x5b79b3*/
      v40 = MEMORY[0xB3F9B0][0]; /*0x5b79b9*/
      *(float *)&v181 = g_zeroNiPoint3; /*0x5b79be*/
      v41 = (TESObjectREFR *)reference; /*0x5b79c2*/
      v234 = 1; /*0x5b79c8*/
      *((float *)&v181 + 1) = v39; /*0x5b79d3*/
      v182 = v40; /*0x5b79d7*/
      v42 = sub_4D8B90(v41); /*0x5b79db*/
      v43 = (TESObjectREFR *)reference; /*0x5b79e2*/
      if ( v42 ) /*0x5b79e8*/
      {
        ParentCell = Shared_GetDwordAtOffset40(v43); /*0x5b79ee*/
        v45 = (ExtraDataList *)ParentCell; /*0x5b79f3*/
        if ( ParentCell ) /*0x5b79f7*/
        {
          sub_4CCE20((ExtraDataList *)ParentCell, (float *)&v176, v233, COERCE_FLOAT(1)); /*0x5b7a0e*/
          v193 = (int)*(float *)v233; /*0x5b7a1a*/
          v198 = (int)*(float *)&v233[1]; /*0x5b7a37*/
          v46 = v38 + ((v193 - 0x800) >> 0xC) - (v172 >> 1); /*0x5b7a5e*/
          v47 = v158 + ((v198 - 0x800) >> 0xC) - (v172 >> 1); /*0x5b7a63*/
          *(float *)&v219 = (float)((v46 << 0xC) + 0x800); /*0x5b7a7f*/
          *((float *)&v219 + 1) = (float)((v47 << 0xC) + 0x800); /*0x5b7a95*/
          v181 = v219; /*0x5b7aa5*/
          v220 = 0.0; /*0x5b7aac*/
          v182 = 0.0; /*0x5b7ac1*/
          sub_4CCEE0(v45, v46, v47, 0); /*0x5b7aca*/
          v48 = *sub_4D4250((TESObjectCELL *)v45, &v206, v46, (BSRenderedTexture *)v47); /*0x5b7ae0*/
          if ( v48 ) /*0x5b7ae4*/
          {
            v160 = (NiRenderedTexture *)v48; /*0x5b7ae6*/
            InterlockedIncrement((volatile LONG *)&v48->members); /*0x5b7aee*/
          }
          v49 = v206; /*0x5b7af4*/
          LOBYTE(v234) = 1; /*0x5b7afd*/
          if ( v206 ) /*0x5b7b05*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v206->members) ) /*0x5b7b0b*/
            {
              if ( v49 ) /*0x5b7b17*/
                (*(void (__thiscall **)(Ni2DBuffer *, int))v49->__vftable)(v49, 1); /*0x5b7b21*/
            }
          }
          if ( v148 ) /*0x5b7b28*/
          {
            TESObjectCELL_CollectDoorsForTeleportProcessing((TESObjectCELL *)v45, (_DWORD *)v185[0x32]); /*0x5b7b3e*/
            v148 = 0; /*0x5b7b43*/
          }
        }
      }
      else
      {
        WorldSpace = TESObjectREFR_GetWorldSpace(v43); /*0x5b7b4d*/
        v197 = (int)*(float *)&v176; /*0x5b7b56*/
        v195 = (int)v177; /*0x5b7b6b*/
        *(float *)&v215 = (float)(int)((v38 + (v197 >> 0xC) - (v172 >> 1)) << 0xC); /*0x5b7ba0*/
        *((float *)&v215 + 1) = (float)(int)((v158 + (v195 >> 0xC) - (v172 >> 1)) << 0xC); /*0x5b7bba*/
        v181 = v215; /*0x5b7bca*/
        v216 = 0.0; /*0x5b7bce*/
        v182 = 0.0; /*0x5b7bdc*/
        if ( WorldSpace ) /*0x5b7be0*/
        {
          CellAtCellCoord = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord( /*0x5b7be6*/
                                               WorldSpace,
                                               v38 + ((int)*(float *)&v176 >> 0xC) - (v172 >> 1),
                                               v158 + ((int)v177 >> 0xC) - (v172 >> 1));
          v52 = (TESObjectCELL *)CellAtCellCoord; /*0x5b7beb*/
          if ( CellAtCellCoord ) /*0x5b7bef*/
          {
            sub_4CCED0(CellAtCellCoord); /*0x5b7bf3*/
            v53 = *sub_4D41A0(v52, &v218); /*0x5b7c07*/
            if ( v53 ) /*0x5b7c0b*/
            {
              v160 = (NiRenderedTexture *)v53; /*0x5b7c0d*/
              InterlockedIncrement((volatile LONG *)&v53->members); /*0x5b7c15*/
            }
            v54 = v218; /*0x5b7c1b*/
            LOBYTE(v234) = 1; /*0x5b7c24*/
            if ( v218 ) /*0x5b7c2c*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v218->members) ) /*0x5b7c32*/
              {
                if ( v54 ) /*0x5b7c3e*/
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v54->__vftable)(v54, 1); /*0x5b7c48*/
              }
            }
            TESObjectCELL_CollectDoorsForTeleportProcessing(v52, (_DWORD *)v185[0x32]); /*0x5b7c5a*/
          }
        }
      }
      v55 = FormHeapAlloc(0xD8Cu); /*0x5b7c7a*/
      Src = (void *)v55; /*0x5b7c8d*/
      v161 = (float *)FormHeapAlloc(0xD8Cu); /*0x5b7c9b*/
      v187 = (void *)FormHeapAlloc(0x908u); /*0x5b7cba*/
      v56 = FormHeapAlloc(0x1210u); /*0x5b7cd7*/
      if ( v56 ) /*0x5b7ce3*/
      {
        v57 = 0x120; /*0x5b7ce7*/
        v58 = v56 + 8; /*0x5b7cec*/
        do /*0x5b7d01*/
        {
          *(float *)(v58 - 8) = 0.0; /*0x5b7cef*/
          v58 += 0x10; /*0x5b7cf2*/
          --v57; /*0x5b7cf5*/
          *(float *)(v58 - 0x14) = 0.0; /*0x5b7cf8*/
          *(float *)(v58 - 0x10) = 0.0; /*0x5b7cfb*/
          *(float *)(v58 - 0xC) = 0.0; /*0x5b7cfe*/
        }
        while ( v57 >= 0 ); /*0x5b7d01*/
        v180 = v56; /*0x5b7d05*/
      }
      else
      {
        v180 = 0; /*0x5b7d0b*/
      }
      v59 = (_WORD *)FormHeapAlloc(0xC00u); /*0x5b7d32*/
      Dst = 0; /*0x5b7d34*/
      v186 = 0; /*0x5b7d3b*/
      v179 = 0; /*0x5b7d42*/
      v196 = 0; /*0x5b7d46*/
      if ( v145 ) /*0x5b7d4d*/
      {
        Dst = (void *)FormHeapAlloc(0xD8Cu); /*0x5b7d6e*/
        v186 = (void *)FormHeapAlloc(0xD8Cu); /*0x5b7d90*/
        v179 = (void *)FormHeapAlloc(0x908u); /*0x5b7db2*/
        v196 = (void *)FormHeapAlloc(0xC00u); /*0x5b7dd4*/
      }
      v60 = dbl_A3B1B8; /*0x5b7ddb*/
      v61 = v201; /*0x5b7de1*/
      for ( k = 0; k < 0x220; k += 0x20 ) /*0x5b7de8*/
      {
        v62 = 0; /*0x5b7df4*/
        v63 = v55; /*0x5b7df6*/
        v167 = 0; /*0x5b7df8*/
        v55 += 0xCC; /*0x5b7dfe*/
        v202 = (double)k - v60; /*0x5b7e04*/
        v64 = v202; /*0x5b7e0b*/
        do /*0x5b7e3f*/
        {
          v62 += 0x20; /*0x5b7e16*/
          v63 += 0xC; /*0x5b7e19*/
          v65 = (double)v167 - v60; /*0x5b7e22*/
          v167 = v62; /*0x5b7e24*/
          v200 = v65; /*0x5b7e28*/
          *(float *)(v63 - 0xC) = v200; /*0x5b7e36*/
          *(float *)(v63 - 8) = v61; /*0x5b7e39*/
          *(float *)(v63 - 4) = v64; /*0x5b7e3c*/
        }
        while ( v62 < 0x220 ); /*0x5b7e3f*/
      }
      if ( v145 ) /*0x5b7e5a*/
      {
        *(_DWORD *)&v141[4] = 0xD8C; /*0x5b7e67*/
        memcpy(Dst, Src, *(size_t *)&v141[4]); /*0x5b7e6e*/
      }
      v151 = 0; /*0x5b7e8f*/
      v146 = v182 + dbl_A2FC68; /*0x5b7e97*/
      v190 = v161; /*0x5b7e9b*/
      v66 = dbl_A3C770; /*0x5b7ea2*/
      v194 = (char *)v187; /*0x5b7ea8*/
      v67 = dbl_A492E0; /*0x5b7eaf*/
      v189 = v180; /*0x5b7eb5*/
      v68 = 1.0; /*0x5b7ebc*/
      v69 = v217; /*0x5b7ebe*/
      while ( 1 ) /*0x5b7ec9*/
      {
        v71 = (double)v151; /*0x5b7ec9*/
        v72 = v189; /*0x5b7ee4*/
        v73 = *(float *)&v194; /*0x5b7ee8*/
        v74 = v190; /*0x5b7ef5*/
        v168 = 0; /*0x5b7efd*/
        v189 += 0x110; /*0x5b7f05*/
        v194 += 0x88; /*0x5b7f0c*/
        v190 += 0x33; /*0x5b7f13*/
        v211 = 1.0 - v71 / v67; /*0x5b7f1e*/
        *(float *)&v184 = v69 * v71; /*0x5b7f27*/
        while ( 1 ) /*0x5b7f3d*/
        {
          v75 = v204; /*0x5b7f3d*/
          v76 = v205; /*0x5b7f44*/
          v154 = (float)v168; /*0x5b7f4b*/
          *v74 = v203; /*0x5b7f4f*/
          v74[1] = v75; /*0x5b7f55*/
          v77 = v211; /*0x5b7f5a*/
          v74[2] = v76; /*0x5b7f63*/
          *(float *)(LODWORD(v73) + 4) = v77; /*0x5b7f66*/
          v210 = v154 / v67; /*0x5b7f69*/
          v78 = v191; /*0x5b7f70*/
          v217 = v191; /*0x5b7f77*/
          v79 = v154 * v191; /*0x5b7f85*/
          *(float *)LODWORD(v73) = v210; /*0x5b7f87*/
          v12 = byte_B1437C == 0; /*0x5b7f8a*/
          v80 = v78; /*0x5b7f91*/
          v81 = v79; /*0x5b7f91*/
          v82 = v80; /*0x5b7f91*/
          v199[0] = v81; /*0x5b7f93*/
          v199[0] = v199[0] + *(float *)&v181; /*0x5b7fb3*/
          v199[1] = *((float *)&v181 + 1) + *(float *)&v184; /*0x5b7fc5*/
          v199[2] = v146; /*0x5b7fd0*/
          v155 = flt_A46B10; /*0x5b7fdd*/
          if ( !v12 ) /*0x5b7fe1*/
          {
            v155 = (float)sub_4D2D00(v199); /*0x5b8003*/
            v66 = dbl_A3C770; /*0x5b8007*/
            v67 = dbl_A492E0; /*0x5b800d*/
            v68 = 1.0; /*0x5b8013*/
            v82 = v217; /*0x5b8015*/
          }
          if ( v145 ) /*0x5b8021*/
          {
            v83 = v82; /*0x5b8023*/
            v84 = v68; /*0x5b8023*/
            v85 = v83; /*0x5b8023*/
            v221 = v84; /*0x5b8025*/
            v222 = v84; /*0x5b8033*/
            v86 = v222; /*0x5b803a*/
            v223 = v84; /*0x5b8041*/
            v87 = v223; /*0x5b8048*/
            *(float *)v72 = v221; /*0x5b8053*/
            *(float *)(v72 + 4) = v86; /*0x5b8057*/
            *(float *)(v72 + 8) = v87; /*0x5b805a*/
            v224 = v155 * v66; /*0x5b805d*/
            *(float *)(v72 + 0xC) = v224; /*0x5b806b*/
          }
          else
          {
            v156 = v155 * v66; /*0x5b8076*/
            v229 = v156; /*0x5b807e*/
            v230 = v156; /*0x5b808c*/
            v231 = v156; /*0x5b809a*/
            *(float *)v72 = v156; /*0x5b80a8*/
            v88 = v82; /*0x5b80aa*/
            v84 = v68; /*0x5b80aa*/
            v85 = v88; /*0x5b80aa*/
            v232 = v84; /*0x5b80ac*/
            v89 = v232; /*0x5b80b3*/
            *(float *)(v72 + 4) = v156; /*0x5b80ba*/
            *(float *)(v72 + 8) = v156; /*0x5b80bd*/
            *(float *)(v72 + 0xC) = v89; /*0x5b80c0*/
          }
          v74 += 3; /*0x5b80ca*/
          LODWORD(v73) += 8; /*0x5b80cd*/
          v72 += 0x10; /*0x5b80d0*/
          if ( ++v168 >= 0x11 ) /*0x5b80da*/
            break; /*0x5b80da*/
          v68 = v84; /*0x5b7f30*/
        }
        if ( ++v151 >= 0x11 ) /*0x5b80ee*/
          break; /*0x5b80ee*/
        v70 = v84; /*0x5b7ec7*/
        v69 = v85; /*0x5b7ec7*/
        v68 = v70; /*0x5b7ec7*/
      }
      if ( v145 ) /*0x5b8101*/
      {
        *(_DWORD *)&v141[4] = 0xD8C; /*0x5b810e*/
        memcpy(v186, v161, *(size_t *)&v141[4]); /*0x5b8115*/
        LODWORD(v140) = 0x908; /*0x5b8125*/
        memcpy(v179, v187, v140); /*0x5b812c*/
      }
      v90 = 0; /*0x5b8134*/
      v91 = 0; /*0x5b8136*/
      for ( m = 0; m < 0x10; ++m ) /*0x5b8138*/
      {
        v92 = 0; /*0x5b813e*/
        v93 = v91 % 2; /*0x5b814c*/
        v94 = 0x11 * v91; /*0x5b8155*/
        v147 = v91 % 2; /*0x5b815f*/
        v95 = 0x11 * ((unsigned __int16)v91 + 1); /*0x5b8163*/
        while ( 1 ) /*0x5b8185*/
        {
          if ( v93 != v92 % 2 ) /*0x5b8183*/
          {
            v96 = v95 + v92; /*0x5b818a*/
            v59[v90] = v95 + v92; /*0x5b818d*/
            v97 = v90 + 1; /*0x5b8191*/
            v59[v97] = v94 + v92; /*0x5b8196*/
            v98 = v94 + v92 + 1; /*0x5b819a*/
            ++v97; /*0x5b819d*/
            v59[v97++] = v98; /*0x5b81a0*/
            v59[v97] = v98; /*0x5b81a7*/
            v99 = v97 + 1; /*0x5b81ab*/
            v59[v99] = v95 + v92 + 1; /*0x5b81b1*/
          }
          else
          {
            v59[v90] = v95 + v92 + 1; /*0x5b81be*/
            v100 = v90 + 1; /*0x5b81c2*/
            v184 = v95 + (unsigned __int16)v92 + 1; /*0x5b81c5*/
            v59[v100++] = v95 + v92; /*0x5b81cf*/
            v59[v100++] = v94 + v92; /*0x5b81d8*/
            v59[v100] = v94 + v92; /*0x5b81df*/
            v99 = v100 + 1; /*0x5b81e3*/
            v59[v99] = v94 + v92 + 1; /*0x5b81e9*/
            v96 = v184; /*0x5b81ed*/
          }
          v101 = v99 + 1; /*0x5b81f5*/
          v59[v101] = v96; /*0x5b81f8*/
          ++v92; /*0x5b81fc*/
          v90 = v101 + 1; /*0x5b81ff*/
          if ( v92 >= 0x10 ) /*0x5b8205*/
            break; /*0x5b8205*/
          v93 = v147; /*0x5b8170*/
        }
        v91 = m + 1; /*0x5b820f*/
      }
      if ( v145 ) /*0x5b8224*/
      {
        v102 = v196; /*0x5b822a*/
        *(_DWORD *)&v141[4] = 0xC00; /*0x5b8231*/
        memcpy(v196, v59, *(size_t *)&v141[4]); /*0x5b8238*/
        v103 = (NiAVObject *)FormHeapAlloc(0xD0u); /*0x5b8247*/
        LOBYTE(v234) = 4; /*0x5b8252*/
        if ( v103 ) /*0x5b825a*/
        {
          v104 = UI_GetVirtualScreenHeight(); /*0x5b825c*/
          a3 = Double_To_SInt32(v104); /*0x5b8266*/
          v105 = UI_GetVirtualScreenWidth(); /*0x5b8267*/
          v106 = Double_To_SInt32(v105); /*0x5b826c*/
          v107 = (NiNode *)sub_4A1780( /*0x5b82a3*/
                             v103,
                             0x121,
                             (int)Dst,
                             (int)v186,
                             0,
                             (int)v179,
                             1,
                             0,
                             0x200,
                             (int)v102,
                             0,
                             0,
                             v106,
                             a3);
        }
        else
        {
          v107 = 0; /*0x5b82a7*/
        }
        LOBYTE(v234) = 1; /*0x5b82ab*/
        v108 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x5b82b3*/
        LOBYTE(v234) = 5; /*0x5b82c1*/
        if ( v108 ) /*0x5b82c9*/
          v109 = NiTexturingProperty::NiTexturingProperty(v108); /*0x5b82d2*/
        else
          v109 = 0; /*0x5b82d6*/
        a3a = (NiRenderedTexture *)unk_B42D44; /*0x5b82de*/
        LOBYTE(v234) = 1; /*0x5b82e1*/
        OB_NiTexturingProperty_SetBaseTexture_010201A0(v109, a3a); /*0x5b82e9*/
        OB_NiTexturingProperty_SetClampMode_010201A0(v109, 0); /*0x5b82f2*/
        v109->unk018 &= 0xFFF1u; /*0x5b82f7*/
        sub_405680(v107, (BSShaderProperty *)v109); /*0x5b8300*/
        NiAVObject_InitializePropertyState((NiAVObject *)v107); /*0x5b8307*/
        v110 = v192; /*0x5b830c*/
        v111 = dbl_A3B1B8; /*0x5b8335*/
        v207 = (double)(int)(v192 << 9) + v111; /*0x5b8338*/
        v107->members.super.m_localTransform.pos.x = v207; /*0x5b8348*/
        v208 = 0.0; /*0x5b834b*/
        v107->members.super.m_localTransform.pos.y = 0.0; /*0x5b8359*/
        v209 = v111 + (double)(int)(v158 << 9) - v170; /*0x5b8364*/
        v107->members.super.m_localTransform.pos.z = v209; /*0x5b8372*/
        (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v173 + 0x84))(v173, v107, 1); /*0x5b8381*/
      }
      else
      {
        v110 = v192; /*0x5b8385*/
      }
      v112 = (NiAVObject *)FormHeapAlloc(0xD0u); /*0x5b8396*/
      LOBYTE(v234) = 6; /*0x5b83a1*/
      if ( v112 ) /*0x5b83a9*/
      {
        v113 = UI_GetVirtualScreenHeight(); /*0x5b83ab*/
        a3b = Double_To_SInt32(v113); /*0x5b83b5*/
        v114 = UI_GetVirtualScreenWidth(); /*0x5b83b6*/
        v115 = Double_To_SInt32(v114); /*0x5b83bb*/
        v116 = sub_4A1780(v112, 0x121, (int)Src, (int)v161, v180, (int)v187, 1, 0, 0x200, (int)v59, 0, 0, v115, a3b); /*0x5b83f2*/
      }
      else
      {
        v116 = 0; /*0x5b83f6*/
      }
      v117 = v160; /*0x5b83f8*/
      LOBYTE(v234) = 1; /*0x5b83fe*/
      if ( v160 ) /*0x5b8406*/
      {
        v118 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x5b840a*/
        LOBYTE(v234) = 7; /*0x5b8418*/
        if ( v118 ) /*0x5b8420*/
          v119 = NiTexturingProperty::NiTexturingProperty(v118); /*0x5b8429*/
        else
          v119 = 0; /*0x5b842d*/
        LOBYTE(v234) = 1; /*0x5b8432*/
        OB_NiTexturingProperty_SetBaseTexture_010201A0(v119, v160); /*0x5b843a*/
        OB_NiTexturingProperty_SetClampMode_010201A0(v119, 0); /*0x5b8443*/
        v119->unk018 = v119->unk018 & 0xFFF1 | 4; /*0x5b8458*/
        sub_405680((NiNode *)v116, (BSShaderProperty *)v119); /*0x5b845c*/
        if ( !InterlockedDecrement((volatile LONG *)&v160->member) ) /*0x5b8465*/
          v160->__vftable->super.super.super.Destructor((NiRefObject *)v160, 1); /*0x5b8478*/
        v117 = 0; /*0x5b847a*/
      }
      if ( !NiNode_GetNiPropertyByID((NiNode *)v116, 7) ) /*0x5b8484*/
      {
        v120 = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x5b848d*/
        sub_405680((NiNode *)v116, v120); /*0x5b8495*/
      }
      if ( v145 ) /*0x5b849f*/
      {
        v121 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5b84a3*/
        v122 = (BSShaderProperty *)v121; /*0x5b84a8*/
        LOBYTE(v234) = 8; /*0x5b84b3*/
        if ( v121 ) /*0x5b84bb*/
        {
          NiObjectNET::NiObjectNET(v121); /*0x5b84bf*/
          v122->vtbl = &NiAlphaProperty::`vftable'; /*0x5b84c4*/
          v122->member.super.flags = 0xEC; /*0x5b84ca*/
          v122->member.super.pad01A[0] = 0; /*0x5b84d0*/
        }
        else
        {
          v122 = 0; /*0x5b84d6*/
        }
        v122->member.super.flags = v122->member.super.flags & 0xFE00 | 0xED; /*0x5b84e6*/
        LOBYTE(v234) = 1; /*0x5b84ed*/
        sub_405680((NiNode *)v116, v122); /*0x5b84f5*/
      }
      NiAVObject_InitializePropertyState(v116); /*0x5b84fc*/
      v123 = (double)(int)(v110 << 9); /*0x5b850c*/
      v124 = v173; /*0x5b8516*/
      v125 = v213; /*0x5b8523*/
      v126 = dbl_A3B1B8; /*0x5b852a*/
      v212 = v123 + v126; /*0x5b852e*/
      v116->members.m_localTransform.pos.x = v212; /*0x5b853c*/
      v116->members.m_localTransform.pos.y = v125; /*0x5b8543*/
      v214 = v126 + (double)(int)(v158 << 9) - v170; /*0x5b854b*/
      v116->members.m_localTransform.pos.z = v214; /*0x5b8559*/
      (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v173 + 0x84))(v173, v116, 1); /*0x5b8566*/
      v234 = 0xFFFFFFFF; /*0x5b856a*/
      if ( v117 ) /*0x5b8575*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v117->member) ) /*0x5b857b*/
          v117->__vftable->super.super.super.Destructor((NiRefObject *)v117, 1); /*0x5b858e*/
      }
      v35 = ++v174; /*0x5b8594*/
    }
    while ( v174 < v163 ); /*0x5b859f*/
    v26 = v188; /*0x5b85a5*/
  }
  v127 = 0; /*0x5b85b8*/
  if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x5b85ba*/
  {
    for ( n = 0; (int)n < v172; ++n ) /*0x5b85cb*/
    {
      for ( ii = 0; ii < v172; ++ii ) /*0x5b85d1*/
      {
        v128 = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, (int)n, ii); /*0x5b85ec*/
        v129 = &v128->cell; /*0x5b85f1*/
        if ( v128 ) /*0x5b85f5*/
        {
          if ( v128->cell ) /*0x5b85f7*/
          {
            v130 = 0; /*0x5b85fd*/
            for ( jj = 8; jj < 0x18; jj += 4 ) /*0x5b85ff*/
            {
              if ( *((_BYTE *)&v169->prev + v127) ) /*0x5b8608*/
              {
                v132 = GetObjectPointerAt_054(*v129); /*0x5b8611*/
                if ( v132 /*0x5b8635*/
                  && v132->members.children.end > (unsigned int)(v130 + 2)
                  && (v133 = *(int *)((char *)&v132->members.children.data->vtbl + jj)) != 0
                  && *(_WORD *)(v133 + 0xB6) )
                {
                  v134 = **(_DWORD **)(v133 + 0xB0); /*0x5b8645*/
                }
                else
                {
                  v134 = 0; /*0x5b8649*/
                }
                if ( v134 ) /*0x5b864d*/
                  *(_WORD *)(v134 + 0x18) |= 1u; /*0x5b864f*/
              }
              ++v127; /*0x5b8657*/
              ++v130; /*0x5b865a*/
            }
          }
        }
      }
    }
    MemoryHeap_Free_checked(v169); /*0x5b8696*/
    v124 = v173; /*0x5b869b*/
    v26 = v188; /*0x5b869f*/
  }
  v135 = v226; /*0x5b86b2*/
  v136 = v227; /*0x5b86b9*/
  unk_B45E04 = v225; /*0x5b86c0*/
  v137 = v228; /*0x5b86c5*/
  unk_B45E08 = v135; /*0x5b86cc*/
  unk_B45E0C = v136; /*0x5b86d6*/
  unk_B45E10 = v137; /*0x5b86dc*/
  unk_B45DC0 = v165; /*0x5b86e1*/
  if ( !v149 ) /*0x5b86e7*/
    *(_WORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A4] + 0x18) &= ~1u; /*0x5b86ee*/
  if ( !v166 ) /*0x5b86f9*/
    v26->members.super.m_flags &= ~1u; /*0x5b86fb*/
  v138 = unk_B42D44; /*0x5b8701*/
  if ( unk_B42D44 ) /*0x5b8701*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v138 + 4)) ) /*0x5b870f*/
    {
      if ( v138 ) /*0x5b871b*/
        (**(void (__thiscall ***)(int, int))v138)(v138, 1); /*0x5b8725*/
    }
    unk_B42D44 = 0; /*0x5b8727*/
  }
  v139 = v185; /*0x5b8733*/
  Tile_SetFloat((Tile *)v185[0x19], (_DWORD *)0xFC8, 1.0); /*0x5b8746*/
  Tile_SetFloat((Tile *)v139[0x19], (_DWORD *)0xFC8, fConstant_2); /*0x5b875d*/
  v171 = (float)(int)v175; /*0x5b876a*/
  Tile_SetFloat((Tile *)v139[0x19], (_DWORD *)0xFAE, v171); /*0x5b877a*/
  Tile_SetFloat((Tile *)v139[0x19], (_DWORD *)0xFAF, v171); /*0x5b878f*/
  return v124; /*0x5b75c4*/
}
