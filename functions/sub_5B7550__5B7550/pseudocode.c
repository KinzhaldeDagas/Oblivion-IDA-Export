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
  NiNode *v22; // ecx
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
  int v39; // edx
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

  v185 = this;
  v2 = (_DWORD *)*(this + 0x32);
  if ( v2[1] )
  {
    do
    {
      v3 = *(_DWORD *)(v2[1] + 4);
      FormHeapFree(v2[1]);
      v2[1] = v3;
    }
    while ( v3 );
  }
  *v2 = 0;
  v4 = *(_DWORD *)(*(this + 0x19) + 0x24);
  v173 = v4;
  if ( !v4 )
    return 0;
  nullsub_returnTrue_0arg();
  v6 = InterlockedDecrement;
  for ( i = 0; *(unsigned __int16 *)(v4 + 0xB6) > i; ++i )
  {
    v8 = *(_DWORD *)(v4 + 0xB0);
    if ( *(_DWORD *)(v8 + 4 * i) )
    {
      (*(void (__thiscall **)(int, void **, _DWORD))(*(_DWORD *)v4 + 0x88))(v4, &v175, *(_DWORD *)(v8 + 4 * i));
      if ( v175 )
      {
        v9 = (void (__thiscall ***)(void *, int))v175;
        if ( !v6((volatile LONG *)v175 + 1) )
          (**v9)(v9, 1);
      }
    }
  }
  nullsub_returnTrue_0arg();
  v10 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
  v11 = uGridsToLoad;
  v176 = *(int *)v10;
  v177 = v10[1];
  v178 = *((void **)v10 + 2);
  *(float *)&v178 = *(float *)&v178 + dbl_A3F3E8;
  v12 = byte_B42D40 == 0;
  v172 = v11;
  v163 = v11 * v11;
  v175 = (void *)(v11 << 9);
  if ( v12 || !ImageSpaceEffectEnabled || (v145 = 1, ShaderPackage < 2) )
    v145 = 0;
  v148 = 1;
  v191 = sub_411F00();
  if ( v145 )
  {
    v13 = sub_7B8200(&v174, "Data\\Textures\\Menus\\Map\\local\\MapPaper01.dds", 1, 0);
    v14 = dword_B42D44;
    v12 = dword_B42D44 == *v13;
    v234 = 0;
    if ( !v12 )
    {
      if ( v14 )
      {
        if ( !v6((volatile LONG *)(v14 + 4)) )
          (**(void (__thiscall ***)(int, int))v14)(v14, 1);
      }
      v15 = *v13;
      dword_B42D44 = v15;
      if ( v15 )
        InterlockedIncrement((volatile LONG *)(v15 + 4));
    }
    v16 = (void (__thiscall ***)(_DWORD, int))v174;
    v234 = 0xFFFFFFFF;
    if ( v174 )
    {
      if ( !v6((volatile LONG *)(v174 + 4)) )
      {
        if ( v16 )
          (**v16)(v16, 1);
      }
    }
  }
  v17 = flt_B45E08;
  v18 = flt_B45E0C;
  v225 = flt_B45E04;
  v228 = flt_B45E10;
  v19 = dword_B25AD8;
  v226 = v17;
  v20 = dword_B25AD0;
  v227 = v18;
  v21 = dword_B25AD4;
  LODWORD(flt_B45E0C) = v19;
  v22 = LodWaterRoot;
  LODWORD(flt_B45E04) = v20;
  v23 = dword_B25ADC;
  LODWORD(flt_B45E08) = v21;
  LOBYTE(v21) = byte_B45DC0;
  v24 = 0;
  LODWORD(flt_B45E10) = v23;
  v165 = v21;
  byte_B45DC0 = 1;
  v149 = 1;
  if ( v22 )
  {
    v25 = v22->members.super.m_flags & 1;
    v22->members.super.m_flags |= 1u;
    v149 = v25;
  }
  v26 = LODRoot;
  v27 = LODRoot->members.super.m_flags & 1;
  v188 = LODRoot;
  v166 = v27;
  if ( !v27 )
    v26->members.super.m_flags |= 1u;
  v169 = 0;
  if ( !TES->currentInteriorCell )
  {
    *(_DWORD *)&v141[4] = 1;
    *(_DWORD *)v141 = 4 * v163;
    v169 = j_MemoryHeap_Alloc(&FormHeap, 0, *(size_t *)v141, *(int *)&v141[8]);
    v159 = 0;
    if ( v11 > 0 )
    {
      do
      {
        v157 = 0;
        do
        {
          GridEntry = GetGridEntry(TES->gridCellArray, v159, v157);
          p_cell = &GridEntry->cell;
          if ( GridEntry )
          {
            if ( GridEntry->cell )
            {
              v30 = 0;
              for ( j = 8; j < 0x18; j += 4 )
              {
                NiNode = TESObjectCELL_GetNiNode_(*p_cell);
                if ( NiNode
                  && NiNode->members.children.end > (unsigned int)(v30 + 2)
                  && (v33 = *(int *)((char *)&NiNode->members.children.data->vtbl + j)) != 0
                  && *(_WORD *)(v33 + 0xB6) )
                {
                  v34 = **(_DWORD **)(v33 + 0xB0);
                }
                else
                {
                  v34 = 0;
                }
                if ( v34 && (*(_BYTE *)(v34 + 0x18) & 1) != 0 )
                {
                  *(_WORD *)(v34 + 0x18) &= ~1u;
                  *((_BYTE *)&v169->prev + v24) = 1;
                }
                else
                {
                  *((_BYTE *)&v169->prev + v24) = 0;
                }
                ++v24;
                ++v30;
              }
            }
          }
          ++v157;
        }
        while ( v157 < v172 );
        ++v159;
      }
      while ( v159 < v172 );
      v26 = v188;
    }
  }
  v35 = 0;
  v174 = 0;
  if ( v163 <= 0 )
  {
    v124 = v173;
  }
  else
  {
    v201 = 0.0;
    v203 = 0.0;
    v204 = 1.0;
    v205 = 0.0;
    v217 = v191;
    v170 = (float)(int)v175;
    v213 = flt_A58DA8;
    do
    {
      v37 = v35 % uGridsToLoad;
      v36 = v35 / uGridsToLoad;
      v160 = 0;
      v38 = v37;
      v192 = v37;
      v158 = v36;
      v39 = *((_DWORD *)&Vector3_InitValue_ + 1);
      v40 = dword_B3F9B0;
      *(float *)&v181 = Vector3_InitValue_;
      v41 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      v234 = 1;
      HIDWORD(v181) = v39;
      v182 = v40;
      v42 = sub_4D8B90(v41);
      v43 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      if ( v42 )
      {
        ParentCell = TESObjectREFR_GetParentCell(v43);
        v45 = (ExtraDataList *)ParentCell;
        if ( ParentCell )
        {
          sub_4CCE20((ExtraDataList *)ParentCell, (float *)&v176, v233, COERCE_FLOAT(1));
          v193 = (int)*(float *)v233;
          v198 = (int)*(float *)&v233[1];
          v46 = v38 + ((v193 - 0x800) >> 0xC) - (v172 >> 1);
          v47 = v158 + ((v198 - 0x800) >> 0xC) - (v172 >> 1);
          *(float *)&v219 = (float)((v46 << 0xC) + 0x800);
          *((float *)&v219 + 1) = (float)((v47 << 0xC) + 0x800);
          v181 = v219;
          v220 = 0.0;
          v182 = 0.0;
          sub_4CCEE0(v45, v46, v47, 0);
          v48 = *sub_4D4250((TESObjectCELL *)v45, &v206, v46, (BSRenderedTexture *)v47);
          if ( v48 )
          {
            v160 = (NiRenderedTexture *)v48;
            InterlockedIncrement((volatile LONG *)&v48->members);
          }
          v49 = v206;
          LOBYTE(v234) = 1;
          if ( v206 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v206->members) )
            {
              if ( v49 )
                (*(void (__thiscall **)(Ni2DBuffer *, int))v49->__vftable)(v49, 1);
            }
          }
          if ( v148 )
          {
            sub_4CBDB0((TESObjectCELL *)v45, (_DWORD *)v185[0x32]);
            v148 = 0;
          }
        }
      }
      else
      {
        WorldSpace = TESObjectREFR_GetWorldSpace(v43);
        v197 = (int)*(float *)&v176;
        v195 = (int)v177;
        *(float *)&v215 = (float)(int)((v38 + (v197 >> 0xC) - (v172 >> 1)) << 0xC);
        *((float *)&v215 + 1) = (float)(int)((v158 + (v195 >> 0xC) - (v172 >> 1)) << 0xC);
        v181 = v215;
        v216 = 0.0;
        v182 = 0.0;
        if ( WorldSpace )
        {
          CellAtCellCoord = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(
                                               WorldSpace,
                                               v38 + ((int)*(float *)&v176 >> 0xC) - (v172 >> 1),
                                               v158 + ((int)v177 >> 0xC) - (v172 >> 1));
          v52 = (TESObjectCELL *)CellAtCellCoord;
          if ( CellAtCellCoord )
          {
            sub_4CCED0(CellAtCellCoord);
            v53 = *sub_4D41A0(v52, &v218);
            if ( v53 )
            {
              v160 = (NiRenderedTexture *)v53;
              InterlockedIncrement((volatile LONG *)&v53->members);
            }
            v54 = v218;
            LOBYTE(v234) = 1;
            if ( v218 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v218->members) )
              {
                if ( v54 )
                  (*(void (__thiscall **)(Ni2DBuffer *, int))v54->__vftable)(v54, 1);
              }
            }
            sub_4CBDB0(v52, (_DWORD *)v185[0x32]);
          }
        }
      }
      v55 = FormHeapAlloc(0xD8Cu);
      Src = (void *)v55;
      v161 = (float *)FormHeapAlloc(0xD8Cu);
      v187 = (void *)FormHeapAlloc(0x908u);
      v56 = FormHeapAlloc(0x1210u);
      if ( v56 )
      {
        v57 = 0x120;
        v58 = v56 + 8;
        do
        {
          *(float *)(v58 - 8) = 0.0;
          v58 += 0x10;
          --v57;
          *(float *)(v58 - 0x14) = 0.0;
          *(float *)(v58 - 0x10) = 0.0;
          *(float *)(v58 - 0xC) = 0.0;
        }
        while ( v57 >= 0 );
        v180 = v56;
      }
      else
      {
        v180 = 0;
      }
      v59 = (_WORD *)FormHeapAlloc(0xC00u);
      Dst = 0;
      v186 = 0;
      v179 = 0;
      v196 = 0;
      if ( v145 )
      {
        Dst = (void *)FormHeapAlloc(0xD8Cu);
        v186 = (void *)FormHeapAlloc(0xD8Cu);
        v179 = (void *)FormHeapAlloc(0x908u);
        v196 = (void *)FormHeapAlloc(0xC00u);
      }
      v60 = dbl_A3B1B8;
      v61 = v201;
      for ( k = 0; k < 0x220; k += 0x20 )
      {
        v62 = 0;
        v63 = v55;
        v167 = 0;
        v55 += 0xCC;
        v202 = (double)k - v60;
        v64 = v202;
        do
        {
          v62 += 0x20;
          v63 += 0xC;
          v65 = (double)v167 - v60;
          v167 = v62;
          v200 = v65;
          *(float *)(v63 - 0xC) = v200;
          *(float *)(v63 - 8) = v61;
          *(float *)(v63 - 4) = v64;
        }
        while ( v62 < 0x220 );
      }
      if ( v145 )
      {
        *(_DWORD *)&v141[4] = 0xD8C;
        memcpy(Dst, Src, *(size_t *)&v141[4]);
      }
      v151 = 0;
      v146 = v182 + dbl_A2FC68;
      v190 = v161;
      v66 = dbl_A3C770;
      v194 = (char *)v187;
      v67 = dbl_A492E0;
      v189 = v180;
      v68 = 1.0;
      v69 = v217;
      while ( 1 )
      {
        v71 = (double)v151;
        v72 = v189;
        v73 = *(float *)&v194;
        v74 = v190;
        v168 = 0;
        v189 += 0x110;
        v194 += 0x88;
        v190 += 0x33;
        v211 = 1.0 - v71 / v67;
        *(float *)&v184 = v69 * v71;
        while ( 1 )
        {
          v75 = v204;
          v76 = v205;
          v154 = (float)v168;
          *v74 = v203;
          v74[1] = v75;
          v77 = v211;
          v74[2] = v76;
          *(float *)(LODWORD(v73) + 4) = v77;
          v210 = v154 / v67;
          v78 = v191;
          v217 = v191;
          v79 = v154 * v191;
          *(float *)LODWORD(v73) = v210;
          v12 = byte_B1437C == 0;
          v80 = v78;
          v81 = v79;
          v82 = v80;
          v199[0] = v81;
          v199[0] = v199[0] + *(float *)&v181;
          v199[1] = *((float *)&v181 + 1) + *(float *)&v184;
          v199[2] = v146;
          v155 = flt_A46B10;
          if ( !v12 )
          {
            v155 = (float)sub_4D2D00(v199);
            v66 = dbl_A3C770;
            v67 = dbl_A492E0;
            v68 = 1.0;
            v82 = v217;
          }
          if ( v145 )
          {
            v83 = v82;
            v84 = v68;
            v85 = v83;
            v221 = v84;
            v222 = v84;
            v86 = v222;
            v223 = v84;
            v87 = v223;
            *(float *)v72 = v221;
            *(float *)(v72 + 4) = v86;
            *(float *)(v72 + 8) = v87;
            v224 = v155 * v66;
            *(float *)(v72 + 0xC) = v224;
          }
          else
          {
            v156 = v155 * v66;
            v229 = v156;
            v230 = v156;
            v231 = v156;
            *(float *)v72 = v156;
            v88 = v82;
            v84 = v68;
            v85 = v88;
            v232 = v84;
            v89 = v232;
            *(float *)(v72 + 4) = v156;
            *(float *)(v72 + 8) = v156;
            *(float *)(v72 + 0xC) = v89;
          }
          v74 += 3;
          LODWORD(v73) += 8;
          v72 += 0x10;
          if ( ++v168 >= 0x11 )
            break;
          v68 = v84;
        }
        if ( ++v151 >= 0x11 )
          break;
        v70 = v84;
        v69 = v85;
        v68 = v70;
      }
      if ( v145 )
      {
        *(_DWORD *)&v141[4] = 0xD8C;
        memcpy(v186, v161, *(size_t *)&v141[4]);
        LODWORD(v140) = 0x908;
        memcpy(v179, v187, v140);
      }
      v90 = 0;
      v91 = 0;
      for ( m = 0; m < 0x10; ++m )
      {
        v92 = 0;
        v93 = v91 % 2;
        v94 = 0x11 * v91;
        v147 = v91 % 2;
        v95 = 0x11 * ((unsigned __int16)v91 + 1);
        while ( 1 )
        {
          if ( v93 != v92 % 2 )
          {
            v96 = v95 + v92;
            v59[v90] = v95 + v92;
            v97 = v90 + 1;
            v59[v97] = v94 + v92;
            v98 = v94 + v92 + 1;
            ++v97;
            v59[v97++] = v98;
            v59[v97] = v98;
            v99 = v97 + 1;
            v59[v99] = v95 + v92 + 1;
          }
          else
          {
            v59[v90] = v95 + v92 + 1;
            v100 = v90 + 1;
            v184 = v95 + (unsigned __int16)v92 + 1;
            v59[v100++] = v95 + v92;
            v59[v100++] = v94 + v92;
            v59[v100] = v94 + v92;
            v99 = v100 + 1;
            v59[v99] = v94 + v92 + 1;
            v96 = v184;
          }
          v101 = v99 + 1;
          v59[v101] = v96;
          ++v92;
          v90 = v101 + 1;
          if ( v92 >= 0x10 )
            break;
          v93 = v147;
        }
        v91 = m + 1;
      }
      if ( v145 )
      {
        v102 = v196;
        *(_DWORD *)&v141[4] = 0xC00;
        memcpy(v196, v59, *(size_t *)&v141[4]);
        v103 = (NiAVObject *)FormHeapAlloc(0xD0u);
        LOBYTE(v234) = 4;
        if ( v103 )
        {
          v104 = sub_57D7F0();
          a3 = Double_To_SInt32(v104);
          v105 = sub_57D7A0();
          v106 = Double_To_SInt32(v105);
          v107 = (NiNode *)sub_4A1780(
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
          v107 = 0;
        }
        LOBYTE(v234) = 1;
        v108 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
        LOBYTE(v234) = 5;
        if ( v108 )
          v109 = NiTexturingProperty::NiTexturingProperty(v108);
        else
          v109 = 0;
        a3a = (NiRenderedTexture *)dword_B42D44;
        LOBYTE(v234) = 1;
        NiTexturingProperty::SetUnk08(v109, a3a);
        sub_405870(v109, 0);
        v109->unk018 &= 0xFFF1u;
        sub_405680(v107, (BSShaderProperty *)v109);
        NiAVObject_InitializePropertyState((NiAVObject *)v107);
        v110 = v192;
        v111 = dbl_A3B1B8;
        v207 = (double)(int)(v192 << 9) + v111;
        v107->members.super.m_localTransform.pos.x = v207;
        v208 = 0.0;
        v107->members.super.m_localTransform.pos.y = 0.0;
        v209 = v111 + (double)(int)(v158 << 9) - v170;
        v107->members.super.m_localTransform.pos.z = v209;
        (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v173 + 0x84))(v173, v107, 1);
      }
      else
      {
        v110 = v192;
      }
      v112 = (NiAVObject *)FormHeapAlloc(0xD0u);
      LOBYTE(v234) = 6;
      if ( v112 )
      {
        v113 = sub_57D7F0();
        a3b = Double_To_SInt32(v113);
        v114 = sub_57D7A0();
        v115 = Double_To_SInt32(v114);
        v116 = sub_4A1780(v112, 0x121, (int)Src, (int)v161, v180, (int)v187, 1, 0, 0x200, (int)v59, 0, 0, v115, a3b);
      }
      else
      {
        v116 = 0;
      }
      v117 = v160;
      LOBYTE(v234) = 1;
      if ( v160 )
      {
        v118 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
        LOBYTE(v234) = 7;
        if ( v118 )
          v119 = NiTexturingProperty::NiTexturingProperty(v118);
        else
          v119 = 0;
        LOBYTE(v234) = 1;
        NiTexturingProperty::SetUnk08(v119, v160);
        sub_405870(v119, 0);
        v119->unk018 = v119->unk018 & 0xFFF1 | 4;
        sub_405680((NiNode *)v116, (BSShaderProperty *)v119);
        if ( !InterlockedDecrement((volatile LONG *)&v160->member) )
          v160->__vftable->super.super.super.Destructor((NiRefObject *)v160, 1);
        v117 = 0;
      }
      if ( !NiNode_GetNiPropertyByID((NiNode *)v116, 7) )
      {
        v120 = (BSShaderProperty *)sub_4E70B0();
        sub_405680((NiNode *)v116, v120);
      }
      if ( v145 )
      {
        v121 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v122 = (BSShaderProperty *)v121;
        LOBYTE(v234) = 8;
        if ( v121 )
        {
          NiObjectNET::NiObjectNET(v121);
          v122->vtbl = &NiAlphaProperty::`vftable';
          v122->member.super.flags = 0xEC;
          v122->member.super.pad01A[0] = 0;
        }
        else
        {
          v122 = 0;
        }
        v122->member.super.flags = v122->member.super.flags & 0xFE00 | 0xED;
        LOBYTE(v234) = 1;
        sub_405680((NiNode *)v116, v122);
      }
      NiAVObject_InitializePropertyState(v116);
      v123 = (double)(int)(v110 << 9);
      v124 = v173;
      v125 = v213;
      v126 = dbl_A3B1B8;
      v212 = v123 + v126;
      v116->members.m_localTransform.pos.x = v212;
      v116->members.m_localTransform.pos.y = v125;
      v214 = v126 + (double)(int)(v158 << 9) - v170;
      v116->members.m_localTransform.pos.z = v214;
      (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v173 + 0x84))(v173, v116, 1);
      v234 = 0xFFFFFFFF;
      if ( v117 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v117->member) )
          v117->__vftable->super.super.super.Destructor((NiRefObject *)v117, 1);
      }
      v35 = ++v174;
    }
    while ( v174 < v163 );
    v26 = v188;
  }
  v127 = 0;
  if ( !TES->currentInteriorCell )
  {
    for ( n = 0; (int)n < v172; ++n )
    {
      for ( ii = 0; ii < v172; ++ii )
      {
        v128 = GetGridEntry(TES->gridCellArray, (int)n, ii);
        v129 = &v128->cell;
        if ( v128 )
        {
          if ( v128->cell )
          {
            v130 = 0;
            for ( jj = 8; jj < 0x18; jj += 4 )
            {
              if ( *((_BYTE *)&v169->prev + v127) )
              {
                v132 = TESObjectCELL_GetNiNode_(*v129);
                if ( v132
                  && v132->members.children.end > (unsigned int)(v130 + 2)
                  && (v133 = *(int *)((char *)&v132->members.children.data->vtbl + jj)) != 0
                  && *(_WORD *)(v133 + 0xB6) )
                {
                  v134 = **(_DWORD **)(v133 + 0xB0);
                }
                else
                {
                  v134 = 0;
                }
                if ( v134 )
                  *(_WORD *)(v134 + 0x18) |= 1u;
              }
              ++v127;
              ++v130;
            }
          }
        }
      }
    }
    MemoryHeap_Free_checked(v169);
    v124 = v173;
    v26 = v188;
  }
  v135 = v226;
  v136 = v227;
  flt_B45E04 = v225;
  v137 = v228;
  flt_B45E08 = v135;
  flt_B45E0C = v136;
  flt_B45E10 = v137;
  byte_B45DC0 = v165;
  if ( !v149 )
    LodWaterRoot->members.super.m_flags &= ~1u;
  if ( !v166 )
    v26->members.super.m_flags &= ~1u;
  v138 = dword_B42D44;
  if ( dword_B42D44 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v138 + 4)) )
    {
      if ( v138 )
        (**(void (__thiscall ***)(int, int))v138)(v138, 1);
    }
    dword_B42D44 = 0;
  }
  v139 = v185;
  Tile_SetFloat((Tile *)v185[0x19], (_DWORD *)0xFC8, 1.0);
  Tile_SetFloat((Tile *)v139[0x19], (_DWORD *)0xFC8, fConstant_2);
  v171 = (float)(int)v175;
  Tile_SetFloat((Tile *)v139[0x19], (_DWORD *)0xFAE, v171);
  Tile_SetFloat((Tile *)v139[0x19], (_DWORD *)0xFAF, v171);
  return v124;
}
