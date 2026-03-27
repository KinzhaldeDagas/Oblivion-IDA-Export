int __usercall sub_5B91E0@<eax>(double a1@<st2>, double st6_0@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  double v4; // st7
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *ParentWorldpsace; // edi
  TESForm *v7; // eax
  void *v8; // eax
  CHAR **v9; // ecx
  char *v10; // eax
  float *v11; // eax
  double v12; // st7
  int v13; // eax
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // ecx
  char *v22; // eax
  int *v23; // eax
  double v24; // st7
  int *v25; // ecx
  int v26; // eax
  double v27; // st6
  _DWORD *v28; // ecx
  _DWORD *v29; // edi
  void (__thiscall ***v30)(_DWORD, int); // ecx
  int v31; // edx
  _DWORD *v32; // edi
  int v33; // ebx
  BSExtraDataVtbl *v34; // eax
  BSStringT *TileFromTemplate; // edi
  TESModel *v36; // eax
  char *ModelPath; // eax
  float v38; // edx
  unsigned int v39; // eax
  char v40; // cl
  int v41; // eax
  float v42; // ecx
  _DWORD *v43; // edx
  _DWORD *v44; // eax
  double v45; // st7
  int v46; // ecx
  int v47; // eax
  double v48; // st7
  double v49; // st6
  int v50; // eax
  BSExtraDataVtbl *v51; // eax
  TESModel *v52; // eax
  char *v53; // eax
  unsigned __int16 *v54; // eax
  BSExtraDataVtbl *v55; // eax
  _DWORD *v56; // eax
  _DWORD *v57; // ebx
  TESObjectREFR *v58; // eax
  TESObjectREFR *v59; // edi
  float *v60; // eax
  float v61; // ecx
  _DWORD *v62; // edx
  _DWORD *v63; // eax
  TESWorldSpace *WorldSpace; // eax
  char v65; // al
  float *v66; // eax
  int v67; // eax
  float *v68; // eax
  float v69; // ecx
  _DWORD *v70; // edx
  float v71; // eax
  _DWORD *v72; // ecx
  double v73; // st7
  PlayerCharacter *v74; // eax
  unsigned int *v75; // edi
  double v76; // st6
  int v77; // ecx
  int v78; // eax
  unsigned int *v79; // eax
  Tile *v80; // edi
  double v81; // st7
  PlayerCharacter *v82; // eax
  _BYTE *unk638; // ebx
  char v84; // al
  PlayerCharacter *v85; // edx
  int v86; // eax
  int v87; // eax
  float v88; // eax
  _DWORD *v89; // ecx
  double v90; // st7
  PlayerCharacter *v91; // eax
  _DWORD *v92; // edx
  int v93; // ecx
  int v94; // edx
  double v95; // st7
  double v96; // st6
  float v97; // eax
  unsigned int *v98; // eax
  Tile *v99; // edi
  float *v100; // eax
  float v101; // ecx
  _DWORD *v102; // edx
  _DWORD *v103; // eax
  TESObjectREFR *v104; // ecx
  TESWorldSpace *v105; // eax
  TESWorldSpace *v106; // ebx
  double v107; // st7
  _DWORD *v108; // ecx
  PlayerCharacter *v109; // eax
  int v110; // eax
  float *v111; // eax
  float v112; // ecx
  _DWORD *v113; // edx
  float v114; // eax
  int v115; // edx
  double v116; // st7
  double v117; // st6
  float v118; // eax
  double v119; // st6
  int v120; // ebx
  TESObjectCELL *v121; // eax
  double v122; // st7
  double v123; // st7
  unsigned int v124; // edi
  bool v125; // zf
  NiObject *v126; // eax
  float *v127; // eax
  Tile *v128; // edi
  TESObjectCELL *ParentCell; // [esp-4h] [ebp-4A8h]
  float v131; // [esp+0h] [ebp-4A4h]
  float v132; // [esp+0h] [ebp-4A4h]
  float v133; // [esp+0h] [ebp-4A4h]
  float v134; // [esp+0h] [ebp-4A4h]
  float v135; // [esp+0h] [ebp-4A4h]
  float v136; // [esp+0h] [ebp-4A4h]
  float a2; // [esp+4h] [ebp-4A0h]
  float a2a; // [esp+4h] [ebp-4A0h]
  _DWORD *v139; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *v140; // [esp+18h] [ebp-48Ch]
  _DWORD *v141; // [esp+18h] [ebp-48Ch]
  _BYTE *v142; // [esp+18h] [ebp-48Ch]
  _DWORD *v143; // [esp+18h] [ebp-48Ch]
  _DWORD *v144; // [esp+18h] [ebp-48Ch]
  _DWORD *v145; // [esp+18h] [ebp-48Ch]
  _DWORD *v146; // [esp+18h] [ebp-48Ch]
  bool v147; // [esp+1Eh] [ebp-486h]
  _DWORD *v148; // [esp+20h] [ebp-484h]
  _DWORD *v149; // [esp+20h] [ebp-484h]
  _DWORD *v150; // [esp+20h] [ebp-484h]
  _DWORD *v151; // [esp+20h] [ebp-484h]
  unsigned __int16 v152; // [esp+22h] [ebp-482h]
  float a3; // [esp+24h] [ebp-480h] BYREF
  _DWORD *v154[2]; // [esp+28h] [ebp-47Ch]
  float v155[3]; // [esp+30h] [ebp-474h] BYREF
  BSStringT v156; // [esp+3Ch] [ebp-468h]
  NiPoint3 v157; // [esp+44h] [ebp-460h] BYREF
  _DWORD *v158; // [esp+50h] [ebp-454h] BYREF
  int v159[5]; // [esp+54h] [ebp-450h] BYREF
  _DWORD *v160; // [esp+88h] [ebp-41Ch] BYREF
  int v161; // [esp+49Ch] [ebp-8h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
  if ( !OpenMenuTile )
    return 0;
  ParentMenu = Tile_GetParentMenu(OpenMenuTile);
  if ( !TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
    return 0;
  sub_5B8FC0((_DWORD **)ParentMenu, 0);
  Tile_SetFloat(*(Tile **)(ParentMenu + 0x60), (_DWORD *)0xFA1, 1.0);
  v4 = fConstant_2;
  Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), (_DWORD *)0xFA1, fConstant_2);
  if ( !TESDataHandler_g_PlayerRef )
    return 0;
  CurrentWorldspace = TES::GetCurrentWorldspace(TES);
  ParentWorldpsace = CurrentWorldspace;
  if ( CurrentWorldspace )
  {
    if ( TESWorldSpace_GetParentWorldpsace(CurrentWorldspace) )
      ParentWorldpsace = TESWorldSpace_GetParentWorldpsace(ParentWorldpsace);
    if ( ParentWorldpsace )
    {
      if ( *sub_4F1A60((CHAR **)ParentWorldpsace) )
      {
        if ( *(TESWorldSpace **)(ParentMenu + 0xD0) != ParentWorldpsace )
        {
          v21 = *(_DWORD **)(ParentMenu + 0x58);
          *(_DWORD *)(ParentMenu + 0xD0) = ParentWorldpsace;
          a3 = Tile_GetFloat(v21, 0xFD2);
          v22 = sub_4F1A60(*(CHAR ***)(ParentMenu + 0xD0));
          Tile_SetString(*(_DWORD **)(ParentMenu + 0x58), (_DWORD *)0xFE6, v22);
          v23 = (int *)sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0));
          v24 = a3 / fCostant_100;
          v25 = v23;
          v26 = *v23;
          v27 = (double)v26;
          if ( v26 < 0 )
            v27 = v27 + flt_A2FC78;
          LODWORD(a3) = v152 | 0xC00;
          *(_QWORD *)&v155[1] = (__int64)(v27 * v24);
          *(float *)(ParentMenu + 0x98) = v155[1];
          st6_0 = (double)v25[1];
          if ( v25[1] < 0 )
            st6_0 = st6_0 + flt_A2FC78;
          LODWORD(a3) = v152 | 0xC00;
          *(_QWORD *)&v155[1] = (__int64)(v24 * st6_0);
          *(float *)(ParentMenu + 0x9C) = v155[1];
          *(_DWORD *)(ParentMenu + 0xA0) = *((__int16 *)v25 + 4) << 0xC;
          v4 = fConstant_2;
          *(_DWORD *)(ParentMenu + 0xA4) = (*((__int16 *)v25 + 6) + 1) << 0xC;
          *(_DWORD *)(ParentMenu + 0xAC) = (*((__int16 *)v25 + 5) + 1) << 0xC;
          *(_DWORD *)(ParentMenu + 0xA8) = *((__int16 *)v25 + 7) << 0xC;
          a2a = v4;
          Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), (_DWORD *)0xFA1, a2a);
          sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCB, *(_DWORD *)(ParentMenu + 0x98));
          sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCA, *(_DWORD *)(ParentMenu + 0x9C));
        }
        goto LABEL_26;
      }
      ParentWorldpsace = 0;
    }
  }
  a3 = Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x58), 0xFD2);
  if ( !*(_DWORD *)(ParentMenu + 0xD0) )
  {
    v7 = TESForm_LookupByFormID(0x3Cu);
    v8 = OblivionDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESWorldSpace `RTTI Type Descriptor',
           0);
    *(_DWORD *)(ParentMenu + 0xD0) = v8;
    if ( !v8 )
      *(_DWORD *)(ParentMenu + 0xD0) = *(_DWORD *)(TESDataHandler + 0xC);
  }
  v9 = *(CHAR ***)(ParentMenu + 0xD0);
  if ( v9 )
  {
    v10 = sub_4F1A60(v9);
    Tile_SetString(*(_DWORD **)(ParentMenu + 0x58), (_DWORD *)0xFE6, v10);
    v11 = (float *)sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0));
    v12 = a3 / fCostant_100;
    v155[1] = *v11;
    *(double *)&v156 = v12;
    st6_0 = (double)SLODWORD(v155[1]);
    if ( v155[1] < 0.0 )
      st6_0 = st6_0 + flt_A2FC78;
    LODWORD(a3) = v152 | 0xC00;
    *(_QWORD *)&v155[1] = (__int64)(v12 * st6_0);
    *(float *)(ParentMenu + 0x98) = v155[1];
    v13 = sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0));
    v14 = (double)*(int *)(v13 + 4);
    if ( *(int *)(v13 + 4) < 0 )
      v14 = v14 + flt_A2FC78;
    v15 = *(_DWORD *)(ParentMenu + 0xD0);
    LODWORD(a3) = v152 | 0xC00;
    *(_QWORD *)&v155[1] = (__int64)(v14 * *(double *)&v156);
    *(float *)(ParentMenu + 0x9C) = v155[1];
    *(_DWORD *)(ParentMenu + 0xA0) = *(__int16 *)(sub_4EF1B0(v15) + 8) << 0xC;
    v16 = sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0));
    v17 = *(_DWORD *)(ParentMenu + 0xD0);
    *(_DWORD *)(ParentMenu + 0xA4) = (*(__int16 *)(v16 + 0xC) + 1) << 0xC;
    v18 = sub_4EF1B0(v17);
    v19 = *(_DWORD *)(ParentMenu + 0xD0);
    *(_DWORD *)(ParentMenu + 0xAC) = (*(__int16 *)(v18 + 0xA) + 1) << 0xC;
    v20 = sub_4EF1B0(v19);
    v4 = fConstant_2;
    *(_DWORD *)(ParentMenu + 0xA8) = *(__int16 *)(v20 + 0xE) << 0xC;
    a2 = v4;
    Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), (_DWORD *)0xFA1, a2);
    sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCB, *(_DWORD *)(ParentMenu + 0x98));
    sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCA, *(_DWORD *)(ParentMenu + 0x9C));
    ParentWorldpsace = *(TESWorldSpace **)(ParentMenu + 0xD0);
  }
  else
  {
    v4 = 1.0;
    Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), (_DWORD *)0xFA1, 1.0);
  }
LABEL_26:
  v28 = *(_DWORD **)(ParentMenu + 0xC4);
  if ( v28 )
  {
    BSSimpleList_Clear(v28);
    FormHeapFree(*(_DWORD *)(ParentMenu + 0xC4));
  }
  *(_DWORD *)(ParentMenu + 0xC4) = 0;
  if ( ParentWorldpsace )
    *(_DWORD *)(ParentMenu + 0xC4) = sub_4F0620((int)ParentWorldpsace);
  v29 = *(_DWORD **)(*(_DWORD *)(ParentMenu + 0x58) + 0x34);
  while ( v29 )
  {
    v30 = (void (__thiscall ***)(_DWORD, int))v29[2];
    v29 = (_DWORD *)*v29;
    if ( v30 )
      (**v30)(v30, 1);
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(ParentMenu + 0x58) + 0x30));
  v32 = *(_DWORD **)(ParentMenu + 0xC4);
  while ( v32 )
  {
    v33 = *v32;
    if ( !*v32 )
      break;
    v32 = (_DWORD *)v32[1];
    v148 = v32;
    v34 = sub_4D7730((_BYTE *)v33);
    if ( sub_42B310(v34) )
    {
      if ( (*(_DWORD *)(v33 + 8) & 0x800) == 0 )
      {
        TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(
                                          (_DWORD *)ParentMenu,
                                          a1,
                                          st6_0,
                                          v4,
                                          *(TileWindow **)(ParentMenu + 0x58),
                                          "map_world_icon",
                                          0);
        if ( TileFromTemplate )
        {
          v36 = (TESModel *)sub_4D7730((_BYTE *)v33);
          ModelPath = TESModel_GetModelPath(v36);
          BSStringT_constr_str((BSStringT *)&v155[2], ModelPath);
          v38 = v155[2];
          v39 = 0;
          v161 = 0;
          do
          {
            v40 = *(_BYTE *)((LODWORD(v38) != 0 ? v39 : 0) + LODWORD(v38));
            if ( !v40 )
              break;
            *((_BYTE *)&v160 + v39++) = v40 == 0x20 ? 0x5F : v40;
          }
          while ( v39 < 0x400 );
          *((_BYTE *)&v160 + v39) = 0;
          BSStringT_Set(TileFromTemplate + 1, (const char *)&v160, 0);
          v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 0x174))(v33);
          v42 = *(float *)v41;
          v43 = *(_DWORD **)(v41 + 4);
          v44 = *(_DWORD **)(v41 + 8);
          a3 = v42;
          v45 = v42;
          v46 = *(_DWORD *)(ParentMenu + 0xA4);
          v154[1] = v44;
          v47 = *(_DWORD *)(ParentMenu + 0xA0);
          v154[0] = v43;
          v48 = (v45 - (double)v47) / (double)(v46 - v47);
          v49 = (double)*(int *)(ParentMenu + 0x98);
          if ( *(int *)(ParentMenu + 0x98) < 0 )
            v49 = v49 + flt_A2FC78;
          v139 = *(_DWORD **)(ParentMenu + 0xA8);
          v50 = (int)v139 - *(_DWORD *)(ParentMenu + 0xAC);
          a3 = v48 * v49;
          st6_0 = (double)*(int *)(ParentMenu + 0x9C);
          if ( *(int *)(ParentMenu + 0x9C) < 0 )
            st6_0 = st6_0 + dbl_A30E60;
          *(float *)v154 = (1.0 - ((double)(int)v139 - *(float *)v154) / (double)v50) * st6_0;
          v51 = sub_4D7730((_BYTE *)v33);
          v131 = (float)((sub_42B310(v51) != 0) + 1);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, v131);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, a3);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, *(float *)v154);
          v52 = (TESModel *)sub_4D7730((_BYTE *)v33);
          v53 = TESModel_GetModelPath(v52);
          Tile_SetString(TileFromTemplate, (_DWORD *)0xFB2, v53);
          v54 = (unsigned __int16 *)sub_4D7730((_BYTE *)v33);
          v132 = (float)sub_42B370(v54);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB3, v132);
          v55 = sub_4D7730((_BYTE *)v33);
          v133 = (float)(sub_42B340(v55) + 1);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, v133);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB5, 1.0);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB6, fConstant_2);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB8, 1.0);
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB9, 1.0);
          v4 = 1.0;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFBA, 1.0);
          v161 = 0xFFFFFFFF;
          FormHeapFree(LODWORD(v155[2]));
          v155[2] = 0.0;
          v156.m_data = 0;
        }
        v32 = v148;
      }
    }
  }
  v56 = sub_65D830(TESDataHandler_g_PlayerRef, v4, v31);
  *(_DWORD *)(ParentMenu + 0xCC) = v56;
  v149 = v56;
  while ( v149 )
  {
    v57 = (_DWORD *)*v149;
    if ( !*v149 )
      break;
    v149 = (_DWORD *)v149[1];
    v147 = v57[4] != 0;
    sub_52B440(v57, 1);
    v59 = v58;
    if ( v58 )
    {
      v60 = v58->vtbl->GetPos(v58);
      v61 = *v60;
      v62 = *((_DWORD **)v60 + 1);
      v63 = *((_DWORD **)v60 + 2);
      a3 = v61;
      v154[0] = v62;
      v154[1] = v63;
      WorldSpace = TESObjectREFR_GetWorldSpace(v59);
      v140 = WorldSpace;
      if ( !WorldSpace
        || WorldSpace != *(TESWorldSpace **)(ParentMenu + 0xD0)
        && TESWorldSpace_GetParentWorldpsace(WorldSpace) != *(TESWorldSpace **)(ParentMenu + 0xD0) )
      {
        LOBYTE(v155[2]) = sub_67F0A0();
        v65 = sub_68CA20(v57);
        sub_67F0B0(v65);
        LOBYTE(v156.m_dataLen) = sub_67F0E0();
        sub_67F0F0(1);
        LOBYTE(v155[0]) = sub_67F0C0();
        sub_67F0D0(0);
        sub_68A9F0(&v158);
        v161 = 1;
        ParentCell = TESObjectREFR_GetParentCell(v59);
        v66 = v59->vtbl->GetPos(v59);
        v4 = sub_68B030((int *)&v158, v4, TESDataHandler_g_PlayerRef, v66, ParentCell, v140);
        v67 = sub_68A890((char *)&v158, *(_DWORD **)(ParentMenu + 0xD0), 1);
        if ( v67 )
          goto LABEL_59;
        v72 = *(_DWORD **)(ParentMenu + 0xD0);
        v73 = flt_A32048;
        v74 = TESDataHandler_g_PlayerRef;
        v157.x = v73;
        v157.y = v73;
        v157.z = v73;
        v4 = sub_68B030((int *)&v158, v73, v74, &v157.x, 0, v72);
        v67 = sub_68A890((char *)&v158, *(_DWORD **)(ParentMenu + 0xD0), 0);
        if ( v67 )
        {
LABEL_59:
          v68 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v67 + 0x174))(v67);
          v69 = *v68;
          v70 = *((_DWORD **)v68 + 1);
          v71 = v68[2];
        }
        else
        {
          v69 = Vector3_InitValue_;
          v70 = *((_DWORD **)&Vector3_InitValue_ + 1);
          v71 = dword_B3F9B0;
        }
        a3 = v69;
        v154[0] = v70;
        v154[1] = (_DWORD *)LODWORD(v71);
        sub_67F0F0(v156.m_dataLen);
        sub_67F0B0(SLOBYTE(v155[2]));
        sub_67F0D0(SLOBYTE(v155[0]));
        v161 = 0xFFFFFFFF;
        sub_68AA10((int *)&v158);
      }
      v75 = Menu_CreateTileFromTemplate(
              (_DWORD *)ParentMenu,
              a1,
              st6_0,
              v4,
              *(TileWindow **)(ParentMenu + 0x58),
              "map_world_icon",
              0);
      if ( v75 )
      {
        v76 = (double)*(int *)(ParentMenu + 0x98);
        if ( *(int *)(ParentMenu + 0x98) < 0 )
          v76 = v76 + flt_A2FC78;
        v77 = *(_DWORD *)(ParentMenu + 0x9C);
        v141 = *(_DWORD **)(ParentMenu + 0xA8);
        v78 = (int)v141 - *(_DWORD *)(ParentMenu + 0xAC);
        a3 = (a3 - (double)*(int *)(ParentMenu + 0xA0))
           / (double)(*(_DWORD *)(ParentMenu + 0xA4) - *(_DWORD *)(ParentMenu + 0xA0))
           * v76;
        st6_0 = (double)*(int *)(ParentMenu + 0x9C);
        if ( v77 < 0 )
          st6_0 = st6_0 + dbl_A30E60;
        *(float *)v154 = (1.0 - ((double)(int)v141 - *(float *)v154) / (double)v78) * st6_0;
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFAE, fConstant_2);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFAF, a3);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB0, *(float *)v154);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB2, 0.0);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB3, flt_A6BF7C);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB4, fConstant_2);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB5, fConstant_2);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB6, 1.0);
        v134 = (float)(v147 + 1);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB8, v134);
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFB9, fConstant_2);
        v4 = 1.0;
        Tile_SetFloat((Tile *)v75, (_DWORD *)0xFBA, 1.0);
      }
    }
  }
  v79 = Menu_CreateTileFromTemplate(
          (_DWORD *)ParentMenu,
          a1,
          st6_0,
          v4,
          *(TileWindow **)(ParentMenu + 0x58),
          "map_world_icon",
          0);
  v80 = (Tile *)v79;
  if ( v79 )
  {
    BSStringT_Set((BSStringT *)v79 + 1, "player_set_marker", 0);
    Tile_SetFloat(v80, (_DWORD *)0xFAE, fConstant_2);
    Tile_SetFloat(v80, (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v80, (_DWORD *)0xFB0, 0.0);
    Tile_SetFloat(v80, (_DWORD *)0xFB2, 0.0);
    Tile_SetFloat(v80, (_DWORD *)0xFB3, flt_A6BF7C);
    Tile_SetFloat(v80, (_DWORD *)0xFB4, 1.0);
    Tile_SetFloat(v80, (_DWORD *)0xFB5, *(float *)&dword_A46C30);
    Tile_SetFloat(v80, (_DWORD *)0xFB6, 1.0);
    Tile_SetFloat(v80, (_DWORD *)0xFB8, 1.0);
    Tile_SetFloat(v80, (_DWORD *)0xFB9, 1.0);
    v81 = fConstant_2;
    Tile_SetFloat(v80, (_DWORD *)0xFBA, fConstant_2);
    v82 = TESDataHandler_g_PlayerRef;
    a3 = *(float *)&TESDataHandler_g_PlayerRef->unk62C;
    v154[0] = (_DWORD *)v82->unk630;
    v154[1] = (_DWORD *)v82->unk634;
    unk638 = (_BYTE *)v82->unk638;
    if ( unk638 )
    {
      if ( unk638 != *(_BYTE **)(ParentMenu + 0xD0) )
      {
        LOBYTE(v155[2]) = sub_67F0A0();
        sub_67F0B0(1);
        LOBYTE(v155[0]) = sub_67F0E0();
        sub_67F0F0(1);
        LOBYTE(v156.m_dataLen) = sub_67F0C0();
        sub_67F0D0(0);
        v142 = 0;
        v150 = 0;
        v84 = unk638[4];
        if ( v84 == 0x30 )
        {
          v142 = unk638;
        }
        else if ( v84 == 0x35 )
        {
          v150 = unk638;
        }
        sub_68A9F0(&v158);
        v85 = TESDataHandler_g_PlayerRef;
        v161 = 2;
        sub_68B030((int *)&v158, v81, v85, &a3, v142, v150);
        v86 = sub_68A890((char *)&v158, *(_DWORD **)(ParentMenu + 0xD0), 1);
        if ( v86 )
          goto LABEL_78;
        v89 = *(_DWORD **)(ParentMenu + 0xD0);
        v90 = flt_A32048;
        v91 = TESDataHandler_g_PlayerRef;
        v157.x = v90;
        v157.y = v90;
        v157.z = v90;
        sub_68B030((int *)&v158, v90, v91, &v157.x, 0, v89);
        v86 = sub_68A890((char *)&v158, *(_DWORD **)(ParentMenu + 0xD0), 0);
        if ( v86 )
        {
LABEL_78:
          v87 = (*(int (__thiscall **)(int))(*(_DWORD *)v86 + 0x174))(v86);
          a3 = *(float *)v87;
          v154[0] = *(_DWORD **)(v87 + 4);
          v88 = *(float *)(v87 + 8);
        }
        else
        {
          v92 = *((_DWORD **)&Vector3_InitValue_ + 1);
          v88 = dword_B3F9B0;
          a3 = Vector3_InitValue_;
          v154[0] = v92;
        }
        v154[1] = (_DWORD *)LODWORD(v88);
        sub_67F0F0(SLOBYTE(v155[0]));
        sub_67F0B0(SLOBYTE(v155[2]));
        sub_67F0D0(v156.m_dataLen);
        v161 = 0xFFFFFFFF;
        sub_68AA10((int *)&v158);
      }
    }
    if ( sub_8AA390(&a3, &Vector3_InitValue_) )
    {
      v93 = *(_DWORD *)(ParentMenu + 0xA4);
      v94 = *(_DWORD *)(ParentMenu + 0x98);
      v143 = *(_DWORD **)(ParentMenu + 0xA0);
      LODWORD(v155[0]) = v93 - (_DWORD)v143;
      v95 = (a3 - (double)(int)v143) / (double)(v93 - (int)v143);
      v96 = (double)*(int *)(ParentMenu + 0x98);
      if ( v94 < 0 )
        v96 = v96 + flt_A2FC78;
      v144 = *(_DWORD **)(ParentMenu + 0xA8);
      LODWORD(v97) = (char *)v144 - *(_DWORD *)(ParentMenu + 0xAC);
      a3 = v95 * v96;
      v155[0] = v97;
      st6_0 = (double)*(int *)(ParentMenu + 0x9C);
      if ( *(int *)(ParentMenu + 0x9C) < 0 )
        st6_0 = st6_0 + dbl_A30E60;
      *(float *)v154 = (1.0 - ((double)(int)v144 - *(float *)v154) / (double)SLODWORD(v155[0])) * st6_0;
      Tile_SetFloat(v80, (_DWORD *)0xFAF, a3);
      Tile_SetFloat(v80, (_DWORD *)0xFB0, *(float *)v154);
      Tile_SetFloat(v80, (_DWORD *)0xFA7, flt_A40098);
      v4 = 1.0;
    }
    else
    {
      Tile_SetFloat(v80, (_DWORD *)0xFA7, 0.0);
      v4 = fConstant_2;
    }
    v135 = v4;
    Tile_SetFloat(v80, (_DWORD *)0xFB6, v135);
    *(_DWORD *)(ParentMenu + 0xE0) = v80;
  }
  v98 = Menu_CreateTileFromTemplate(
          (_DWORD *)ParentMenu,
          a1,
          st6_0,
          v4,
          *(TileWindow **)(ParentMenu + 0x58),
          "map_world_icon",
          0);
  v99 = (Tile *)v98;
  if ( v98 )
  {
    BSStringT_Set((BSStringT *)v98 + 1, "map_world_player", 0);
    v100 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    v101 = *v100;
    v102 = *((_DWORD **)v100 + 1);
    v103 = *((_DWORD **)v100 + 2);
    a3 = v101;
    v104 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v154[0] = v102;
    v154[1] = v103;
    v105 = TESObjectREFR_GetWorldSpace(v104);
    v106 = v105;
    if ( v105 )
    {
      if ( TESWorldSpace_GetParentWorldpsace(v105) )
        v106 = TESWorldSpace_GetParentWorldpsace(v106);
    }
    if ( v106 != *(TESWorldSpace **)(ParentMenu + 0xD0) )
    {
      LOBYTE(v155[2]) = sub_67F0A0();
      sub_67F0B0(1);
      LOBYTE(v155[0]) = sub_67F0E0();
      sub_67F0F0(1);
      LOBYTE(v156.m_dataLen) = sub_67F0C0();
      sub_67F0D0(0);
      sub_68A9F0(&v158);
      v107 = flt_A32048;
      v108 = *(_DWORD **)(ParentMenu + 0xD0);
      v157.x = v107;
      v109 = TESDataHandler_g_PlayerRef;
      v157.y = v107;
      v157.z = v107;
      v161 = 3;
      sub_68B030((int *)&v158, v107, v109, &v157.x, 0, v108);
      sub_67F0F0(SLOBYTE(v155[0]));
      sub_67F0B0(SLOBYTE(v155[2]));
      sub_67F0D0(v156.m_dataLen);
      v110 = sub_68A890((char *)&v158, *(_DWORD **)(ParentMenu + 0xD0), 0);
      if ( v110 )
      {
        v111 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v110 + 0x174))(v110);
        v112 = *v111;
        v113 = *((_DWORD **)v111 + 1);
        v114 = v111[2];
      }
      else
      {
        v112 = Vector3_InitValue_;
        v113 = *((_DWORD **)&Vector3_InitValue_ + 1);
        v114 = dword_B3F9B0;
      }
      a3 = v112;
      v154[1] = (_DWORD *)LODWORD(v114);
      v154[0] = v113;
      v161 = 0xFFFFFFFF;
      sub_68AA10((int *)&v158);
    }
    v115 = *(_DWORD *)(ParentMenu + 0x98);
    v145 = *(_DWORD **)(ParentMenu + 0xA0);
    LODWORD(v155[0]) = *(_DWORD *)(ParentMenu + 0xA4) - (_DWORD)v145;
    v116 = (a3 - (double)(int)v145) / (double)SLODWORD(v155[0]);
    v117 = (double)*(int *)(ParentMenu + 0x98);
    if ( v115 < 0 )
      v117 = v117 + flt_A2FC78;
    v146 = *(_DWORD **)(ParentMenu + 0xA8);
    LODWORD(v118) = (char *)v146 - *(_DWORD *)(ParentMenu + 0xAC);
    a3 = v116 * v117;
    v155[0] = v118;
    v119 = (double)*(int *)(ParentMenu + 0x9C);
    if ( *(int *)(ParentMenu + 0x9C) < 0 )
      v119 = v119 + dbl_A30E60;
    *(float *)v154 = (1.0 - ((double)(int)v146 - *(float *)v154) / (double)SLODWORD(v155[0])) * v119;
    Tile_SetFloat(v99, (_DWORD *)0xFA7, flt_A40098);
    Tile_SetFloat(v99, (_DWORD *)0xFAE, fConstant_2);
    v155[0] = a3 - dbl_A2F920;
    Tile_SetFloat(v99, (_DWORD *)0xFAF, v155[0]);
    Tile_SetFloat(v99, (_DWORD *)0xFB0, *(float *)v154);
    Tile_SetFloat(v99, (_DWORD *)0xFB2, 0.0);
    Tile_SetFloat(v99, (_DWORD *)0xFB3, flt_A6CD0C);
    Tile_SetFloat(v99, (_DWORD *)0xFB4, 1.0);
    Tile_SetFloat(v99, (_DWORD *)0xFB5, flt_A46B10);
    Tile_SetFloat(v99, (_DWORD *)0xFB6, 1.0);
    Tile_SetFloat(v99, (_DWORD *)0xFB8, 1.0);
    Tile_SetFloat(v99, (_DWORD *)0xFB9, 1.0);
    Tile_SetFloat(v99, (_DWORD *)0xFBA, 1.0);
    *(_DWORD *)(ParentMenu + 0xF8) = v99;
    sub_58E870((int)v99, a1, v119, 1.0);
    v120 = *(_DWORD *)(ParentMenu + 0xF8);
    if ( v120 )
    {
      v151 = *(_DWORD **)(v120 + 0x24);
      if ( v151 )
      {
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
        {
          v121 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          *(double *)v155 = sub_4CCE00((ExtraDataList *)v121);
          v122 = ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.GetZRotation)(TESDataHandler_g_PlayerRef);
          v155[0] = v122 + *(double *)v155;
          v136 = -v155[0];
          sub_70FD80((float *)&v159[4], v136);
          v155[0] = Tile_GetFloat(v99, 0xFCB) * dbl_A2FAA0;
          v123 = Tile_GetFloat(v99, 0xFCA) * dbl_A2FAA0;
          v124 = 0;
          *(_BYTE *)(v120 + 6) = 1;
          v125 = *((_WORD *)v151 + 0x5C) == 0;
          v155[2] = v123;
          if ( !v125 )
          {
            do
            {
              if ( *((unsigned __int16 *)v151 + 0x5B) > v124 )
                v126 = *(NiObject **)(v151[0x2C] + 4 * v124);
              else
                v126 = 0;
              v127 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FCD4, v126);
              if ( v127 )
              {
                v157.x = v155[0];
                v157.y = 0.0;
                v157.z = -v155[2];
                sub_5B6860(v127, (NiTransform *)&v159[4], &v157, &Vector3_InitValue_);
              }
              ++v124;
            }
            while ( v124 < *((unsigned __int16 *)v151 + 0x5C) );
          }
        }
      }
    }
    v128 = *(Tile **)(ParentMenu + 0x58);
    Tile_SetFloat(v128, (_DWORD *)0xFB8, a3);
    Tile_SetFloat(v128, (_DWORD *)0xFB9, *(float *)v154);
  }
  Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), (_DWORD *)0xFB0, flt_A31E2C);
  return *(_DWORD *)(ParentMenu + 0x58);
}
