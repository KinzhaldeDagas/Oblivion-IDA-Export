// Verified travel-path diagnostic: called from WorldMapMenu interaction paths, repeatedly builds low-level routes to candidate points, prints each travel/door/coordinate segment, total distance and estimated game hours, reports 'No Path found' on failure, and adds a debug line render. Exact UI action name remains Unknown.
int __usercall TravelPath_DebugRouteToPoint@<eax>(double a1@<st2>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  double v3; // st7
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *PointerAtOffset7C; // edi
  TESForm *v6; // eax
  void *v7; // eax
  CHAR **v8; // ecx
  char *v9; // eax
  float *v10; // eax
  double v11; // st7
  double v12; // st6
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
  double v28; // st6
  _DWORD *v29; // ecx
  _DWORD *v30; // edi
  void (__thiscall ***v31)(_DWORD, int); // ecx
  TESWorldSpace *v32; // edi
  TESFormVtbl *vtbl; // ebx
  BSExtraDataVtbl *v34; // eax
  BSStringT *v35; // edi
  TESModel *v36; // eax
  char *ModelPath; // eax
  float v38; // edx
  unsigned int v39; // eax
  char v40; // cl
  int v41; // eax
  float v42; // ecx
  float v43; // edx
  float v44; // eax
  double v45; // st7
  int v46; // ecx
  int v47; // eax
  double v48; // st7
  double v49; // st6
  int v50; // eax
  double v51; // st6
  BSExtraDataVtbl *v52; // eax
  TESModel *v53; // eax
  char *v54; // eax
  unsigned __int16 *v55; // eax
  BSExtraDataVtbl *v56; // eax
  TESWorldSpace *v57; // eax
  TESFormVtbl *v58; // ebx
  TESObjectREFR *v59; // eax
  TESObjectREFR *v60; // edi
  int v61; // eax
  float v62; // ecx
  float v63; // edx
  float v64; // eax
  TESWorldSpace *WorldSpace; // eax
  char v66; // al
  const NiPoint3 *v67; // eax
  BSExtraDataVtbl *v68; // eax
  int v69; // eax
  float x; // ecx
  float y; // edx
  float z; // eax
  TESWorldSpace *v73; // ecx
  TESObjectREFR *v74; // eax
  Tile *v75; // edi
  double v76; // st6
  int v77; // ecx
  int v78; // eax
  double v79; // st6
  Tile *v80; // eax
  Tile *v81; // edi
  PlayerCharacter *v82; // eax
  UInt32 unk638; // ebx
  char v84; // al
  TESObjectREFR *v85; // edx
  BSExtraDataVtbl *v86; // eax
  int v87; // eax
  float v88; // eax
  TESWorldSpace *v89; // ecx
  TESObjectREFR *v90; // eax
  float v91; // edx
  int v92; // ecx
  int v93; // edx
  double v94; // st7
  double v95; // st6
  float v96; // eax
  double v97; // st6
  double v98; // st7
  Tile *v99; // eax
  Tile *v100; // edi
  float *v101; // eax
  float v102; // ecx
  float v103; // edx
  float v104; // eax
  TESObjectREFR *v105; // ecx
  TESWorldSpace *v106; // eax
  void *v107; // ebx
  TESWorldSpace *v108; // ecx
  TESObjectREFR *v109; // eax
  BSExtraDataVtbl *v110; // eax
  int v111; // eax
  float v112; // ecx
  float v113; // edx
  float v114; // eax
  int v115; // edx
  double v116; // st7
  double v117; // st6
  float v118; // eax
  double v119; // st6
  int v120; // ebx
  ExtraDataList *v121; // eax
  double v122; // st7
  double v123; // st7
  unsigned int v124; // edi
  bool v125; // zf
  NiObject *v126; // eax
  float *v127; // eax
  Tile *v128; // edi
  TESObjectCELL *DwordAtOffset40; // [esp-4h] [ebp-4A8h]
  float value; // [esp+0h] [ebp-4A4h]
  float valuea; // [esp+0h] [ebp-4A4h]
  float valueb; // [esp+0h] [ebp-4A4h]
  float valuec; // [esp+0h] [ebp-4A4h]
  float valued; // [esp+0h] [ebp-4A4h]
  float valuee; // [esp+0h] [ebp-4A4h]
  float a2; // [esp+4h] [ebp-4A0h]
  float a2a; // [esp+4h] [ebp-4A0h]
  TESWorldSpace *destinationWorldspace; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspacea; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspaceb; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspacec; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspacef; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspaced; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspaceg; // [esp+18h] [ebp-48Ch]
  TESWorldSpace *destinationWorldspacee; // [esp+18h] [ebp-48Ch]
  bool v147; // [esp+1Eh] [ebp-486h]
  TESWorldSpace *v148; // [esp+20h] [ebp-484h]
  TESWorldSpace *v149; // [esp+20h] [ebp-484h]
  TESWorldSpace *v150; // [esp+20h] [ebp-484h]
  TESWorldSpace *v151; // [esp+20h] [ebp-484h]
  unsigned __int16 v152; // [esp+22h] [ebp-482h]
  NiPoint3 a3; // [esp+24h] [ebp-480h] BYREF
  float v154[3]; // [esp+30h] [ebp-474h] BYREF
  BSStringT v155; // [esp+3Ch] [ebp-468h]
  NiPoint3 destinationPosition; // [esp+44h] [ebp-460h] BYREF
  TravelPath v157; // [esp+50h] [ebp-454h] BYREF
  NiMatrix33 v158; // [esp+64h] [ebp-440h] BYREF
  _DWORD *v159; // [esp+88h] [ebp-41Ch] BYREF
  int v160; // [esp+49Ch] [ebp-8h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x5b9225*/
  if ( !OpenMenuTile ) /*0x5b922f*/
    return 0; /*0x5b922f*/
  ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5b9242*/
  if ( !Shared_GetDwordAtOffset40(reference) ) /*0x5b9244*/
    return 0; /*0x5b9244*/
  sub_5B8FC0((_DWORD **)ParentMenu, 0); /*0x5b9255*/
  Tile_SetFloat(*(Tile **)(ParentMenu + 0x60), 0xFA1u, 1.0); /*0x5b9268*/
  v3 = fConstant_2; /*0x5b926d*/
  Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), 0xFA1u, fConstant_2); /*0x5b927f*/
  if ( !reference ) /*0x5b9284*/
    return 0; /*0x5ba49d*/
  CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x5b9297*/
  PointerAtOffset7C = CurrentWorldspace; /*0x5b929c*/
  if ( CurrentWorldspace ) /*0x5b92a0*/
  {
    if ( Shared_GetPointerAtOffset7C(CurrentWorldspace) ) /*0x5b92a4*/
      PointerAtOffset7C = (TESWorldSpace *)Shared_GetPointerAtOffset7C(PointerAtOffset7C); /*0x5b92b4*/
    if ( PointerAtOffset7C ) /*0x5b92b8*/
    {
      if ( *sub_4F1A60((CHAR **)PointerAtOffset7C) ) /*0x5b92c1*/
      {
        if ( *(TESWorldSpace **)(ParentMenu + 0xD0) != PointerAtOffset7C ) /*0x5b9495*/
        {
          v21 = *(_DWORD **)(ParentMenu + 0x58); /*0x5b949b*/
          *(_DWORD *)(ParentMenu + 0xD0) = PointerAtOffset7C; /*0x5b94a3*/
          a3.x = Tile_GetFloat(v21, 0xFD2); /*0x5b94ae*/
          v22 = sub_4F1A60(*(CHAR ***)(ParentMenu + 0xD0)); /*0x5b94b8*/
          Tile_SetString(*(_DWORD **)(ParentMenu + 0x58), (_DWORD *)0xFE6, v22); /*0x5b94c6*/
          v23 = (int *)sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0)); /*0x5b94d1*/
          v24 = a3.x / fCostant_100; /*0x5b94da*/
          v25 = v23; /*0x5b94e0*/
          v26 = *v23; /*0x5b94e2*/
          v27 = (double)v26; /*0x5b94e6*/
          if ( v26 < 0 ) /*0x5b94e8*/
            v27 = v27 + flt_A2FC78; /*0x5b94ea*/
          LODWORD(a3.x) = v152 | 0xC00; /*0x5b9500*/
          *(_QWORD *)&v154[1] = (__int64)(v27 * v24); /*0x5b9508*/
          *(float *)(ParentMenu + 0x98) = v154[1]; /*0x5b9510*/
          v28 = (double)v25[1]; /*0x5b951f*/
          if ( v25[1] < 0 ) /*0x5b9522*/
            v28 = v28 + flt_A2FC78; /*0x5b9524*/
          LODWORD(a3.x) = v152 | 0xC00; /*0x5b953a*/
          *(_QWORD *)&v154[1] = (__int64)(v24 * v28); /*0x5b9542*/
          *(float *)(ParentMenu + 0x9C) = v154[1]; /*0x5b954a*/
          *(_DWORD *)(ParentMenu + 0xA0) = *((__int16 *)v25 + 4) << 0xC; /*0x5b955b*/
          v3 = fConstant_2; /*0x5b956b*/
          *(_DWORD *)(ParentMenu + 0xA4) = (*((__int16 *)v25 + 6) + 1) << 0xC; /*0x5b9571*/
          *(_DWORD *)(ParentMenu + 0xAC) = (*((__int16 *)v25 + 5) + 1) << 0xC; /*0x5b9581*/
          *(_DWORD *)(ParentMenu + 0xA8) = *((__int16 *)v25 + 7) << 0xC; /*0x5b958e*/
          a2a = v3; /*0x5b9598*/
          Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), 0xFA1u, a2a); /*0x5b95a0*/
          sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCB, *(_DWORD *)(ParentMenu + 0x98)); /*0x5b95b4*/
          sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCA, *(_DWORD *)(ParentMenu + 0x9C)); /*0x5b95c8*/
        }
        goto LABEL_26; /*0x5b95cd*/
      }
      PointerAtOffset7C = 0; /*0x5b92ca*/
    }
  }
  a3.x = Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x58), 0xFD2); /*0x5b92d9*/
  if ( !*(_DWORD *)(ParentMenu + 0xD0) ) /*0x5b92dd*/
  {
    v6 = TESForm_LookupByFormID(0x3Cu); /*0x5b92f6*/
    v7 = OblivionDynamicCast( /*0x5b92ff*/
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESWorldSpace `RTTI Type Descriptor',
           0);
    *(_DWORD *)(ParentMenu + 0xD0) = v7; /*0x5b9309*/
    if ( !v7 ) /*0x5b930f*/
      *(_DWORD *)(ParentMenu + 0xD0) = g_TESDataHandler->worldspaceList.item; /*0x5b931a*/
  }
  v8 = *(CHAR ***)(ParentMenu + 0xD0); /*0x5b9320*/
  if ( v8 ) /*0x5b9328*/
  {
    v9 = sub_4F1A60(v8); /*0x5b932e*/
    Tile_SetString(*(_DWORD **)(ParentMenu + 0x58), (_DWORD *)0xFE6, v9); /*0x5b933c*/
    v10 = (float *)sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0)); /*0x5b9347*/
    v11 = a3.x / fCostant_100; /*0x5b9350*/
    v154[1] = *v10; /*0x5b935a*/
    *(double *)&v155 = v11; /*0x5b935e*/
    v12 = (double)SLODWORD(v154[1]); /*0x5b9362*/
    if ( v154[1] < 0.0 ) /*0x5b9366*/
      v12 = v12 + flt_A2FC78; /*0x5b9368*/
    LODWORD(a3.x) = v152 | 0xC00; /*0x5b937e*/
    *(_QWORD *)&v154[1] = (__int64)(v11 * v12); /*0x5b9386*/
    *(float *)(ParentMenu + 0x98) = v154[1]; /*0x5b938e*/
    v13 = sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0)); /*0x5b939e*/
    v14 = (double)*(int *)(v13 + 4); /*0x5b93a8*/
    if ( *(int *)(v13 + 4) < 0 ) /*0x5b93ab*/
      v14 = v14 + flt_A2FC78; /*0x5b93ad*/
    v15 = *(_DWORD *)(ParentMenu + 0xD0); /*0x5b93b7*/
    LODWORD(a3.x) = v152 | 0xC00; /*0x5b93cb*/
    *(_QWORD *)&v154[1] = (__int64)(v14 * *(double *)&v155); /*0x5b93d3*/
    *(float *)(ParentMenu + 0x9C) = v154[1]; /*0x5b93db*/
    *(_DWORD *)(ParentMenu + 0xA0) = *(__int16 *)(sub_4EF1B0(v15) + 8) << 0xC; /*0x5b93f1*/
    v16 = sub_4EF1B0(*(_DWORD *)(ParentMenu + 0xD0)); /*0x5b93fd*/
    v17 = *(_DWORD *)(ParentMenu + 0xD0); /*0x5b9406*/
    *(_DWORD *)(ParentMenu + 0xA4) = (*(__int16 *)(v16 + 0xC) + 1) << 0xC; /*0x5b9412*/
    v18 = sub_4EF1B0(v17); /*0x5b9418*/
    v19 = *(_DWORD *)(ParentMenu + 0xD0); /*0x5b9421*/
    *(_DWORD *)(ParentMenu + 0xAC) = (*(__int16 *)(v18 + 0xA) + 1) << 0xC; /*0x5b942d*/
    v20 = sub_4EF1B0(v19); /*0x5b9433*/
    v3 = fConstant_2; /*0x5b943c*/
    *(_DWORD *)(ParentMenu + 0xA8) = *(__int16 *)(v20 + 0xE) << 0xC; /*0x5b9445*/
    a2 = v3; /*0x5b944f*/
    Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), 0xFA1u, a2); /*0x5b9457*/
    sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCB, *(_DWORD *)(ParentMenu + 0x98)); /*0x5b946b*/
    sub_57D300(*(Tile **)(ParentMenu + 0x58), (Tile *)0xFCA, *(_DWORD *)(ParentMenu + 0x9C)); /*0x5b947f*/
    PointerAtOffset7C = *(TESWorldSpace **)(ParentMenu + 0xD0); /*0x5b9484*/
  }
  else
  {
    v3 = 1.0; /*0x5b95d2*/
    Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), 0xFA1u, 1.0); /*0x5b95dd*/
  }
LABEL_26:
  v29 = *(_DWORD **)(ParentMenu + 0xC4); /*0x5b95e2*/
  if ( v29 ) /*0x5b95ea*/
  {
    BSSimpleList_Clear(v29); /*0x5b95ec*/
    FormHeapFree(*(_DWORD *)(ParentMenu + 0xC4)); /*0x5b95f8*/
  }
  *(_DWORD *)(ParentMenu + 0xC4) = 0; /*0x5b9602*/
  if ( PointerAtOffset7C ) /*0x5b960c*/
    *(_DWORD *)(ParentMenu + 0xC4) = TESWorldSpace_CollectPersistentCellReferences(PointerAtOffset7C); /*0x5b9615*/
  v30 = *(_DWORD **)(*(_DWORD *)(ParentMenu + 0x58) + 0x34); /*0x5b961e*/
  while ( v30 ) /*0x5b9623*/
  {
    v31 = (void (__thiscall ***)(_DWORD, int))v30[2]; /*0x5b9625*/
    v30 = (_DWORD *)*v30; /*0x5b962d*/
    if ( v31 ) /*0x5b962f*/
      (**v31)(v31, 1); /*0x5b9637*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(ParentMenu + 0x58) + 0x30)); /*0x5b9643*/
  v32 = *(TESWorldSpace **)(ParentMenu + 0xC4); /*0x5b9648*/
  while ( v32 )
  {
    vtbl = v32->vtbl; /*0x5b9656*/
    if ( !v32->vtbl ) /*0x5b9656*/
      break; /*0x5b965a*/
    v32 = *(TESWorldSpace **)&v32->super.type; /*0x5b9660*/
    v148 = v32; /*0x5b9665*/
    v34 = sub_4D7730(vtbl); /*0x5b9669*/
    if ( sub_42B310(v34) )
    {
      if ( ((int)vtbl->super.CopyFromBase & 0x800) == 0 )
      {
        v35 = (BSStringT *)Menu::RenderTemplate((Menu *)ParentMenu, *(Tile **)(ParentMenu + 0x58), "map_world_icon", 0); /*0x5b969e*/
        if ( v35 )
        {
          v36 = (TESModel *)sub_4D7730(vtbl); /*0x5b96aa*/
          ModelPath = TESModel_GetModelPath(v36); /*0x5b96b1*/
          BSStringT_constr_str((BSStringT *)&v154[2], ModelPath); /*0x5b96bb*/
          v38 = v154[2]; /*0x5b96c0*/
          v39 = 0; /*0x5b96c4*/
          v160 = 0; /*0x5b96c6*/
          do
          {
            v40 = *(_BYTE *)((LODWORD(v38) != 0 ? v39 : 0) + LODWORD(v38));
            if ( !v40 ) /*0x5b96dd*/
              break; /*0x5b96dd*/
            *((_BYTE *)&v159 + v39++) = v40 == 0x20 ? 0x5F : v40;
          }
          while ( v39 < 0x400 );
          *((_BYTE *)&v159 + v39) = 0; /*0x5b970c*/
          BSStringT_Set(v35 + 1, (const char *)&v159, 0); /*0x5b9714*/
          v41 = (*((int (__thiscall **)(TESFormVtbl *))vtbl->super.InitializeComponent + 0x5D))(vtbl); /*0x5b9723*/
          v42 = *(float *)v41; /*0x5b9725*/
          v43 = *(float *)(v41 + 4); /*0x5b9727*/
          v44 = *(float *)(v41 + 8); /*0x5b972a*/
          a3.x = v42; /*0x5b972d*/
          v45 = v42; /*0x5b9731*/
          v46 = *(_DWORD *)(ParentMenu + 0xA4); /*0x5b9735*/
          a3.z = v44; /*0x5b973b*/
          v47 = *(_DWORD *)(ParentMenu + 0xA0); /*0x5b973f*/
          a3.y = v43; /*0x5b974f*/
          v48 = (v45 - (double)v47) / (double)(v46 - v47); /*0x5b975f*/
          v49 = (double)*(int *)(ParentMenu + 0x98); /*0x5b9763*/
          if ( *(int *)(ParentMenu + 0x98) < 0 ) /*0x5b9769*/
            v49 = v49 + flt_A2FC78; /*0x5b976b*/
          destinationWorldspace = *(TESWorldSpace **)(ParentMenu + 0xA8); /*0x5b9779*/
          v50 = (int)destinationWorldspace - *(_DWORD *)(ParentMenu + 0xAC); /*0x5b977d*/
          a3.x = v48 * v49; /*0x5b9783*/
          v51 = (double)*(int *)(ParentMenu + 0x9C); /*0x5b97a3*/
          if ( *(int *)(ParentMenu + 0x9C) < 0 ) /*0x5b97a9*/
            v51 = v51 + dbl_A30E60; /*0x5b97ab*/
          a3.y = (1.0 - ((double)(int)destinationWorldspace - a3.y) / (double)v50) * v51; /*0x5b97b5*/
          v52 = sub_4D7730(vtbl); /*0x5b97b9*/
          value = (float)((sub_42B310(v52) != 0) + 1); /*0x5b97d9*/
          Tile_SetFloat((Tile *)v35, 0xFAEu, value); /*0x5b97e1*/
          Tile_SetFloat((Tile *)v35, 0xFAFu, a3.x); /*0x5b97f5*/
          Tile_SetFloat((Tile *)v35, 0xFB0u, a3.y); /*0x5b9809*/
          v53 = (TESModel *)sub_4D7730(vtbl); /*0x5b9810*/
          v54 = TESModel_GetModelPath(v53); /*0x5b9817*/
          Tile_SetString(v35, (_DWORD *)0xFB2, v54); /*0x5b9824*/
          v55 = (unsigned __int16 *)sub_4D7730(vtbl); /*0x5b982b*/
          valuea = (float)sub_42B370(v55); /*0x5b9842*/
          Tile_SetFloat((Tile *)v35, 0xFB3u, valuea); /*0x5b984a*/
          v56 = sub_4D7730(vtbl); /*0x5b9851*/
          valueb = (float)(sub_42B340(v56) + 1); /*0x5b9871*/
          Tile_SetFloat((Tile *)v35, 0xFB4u, valueb); /*0x5b9879*/
          Tile_SetFloat((Tile *)v35, 0xFB5u, 1.0); /*0x5b988b*/
          Tile_SetFloat((Tile *)v35, 0xFB6u, fConstant_2); /*0x5b98a1*/
          Tile_SetFloat((Tile *)v35, 0xFB8u, 1.0); /*0x5b98b3*/
          Tile_SetFloat((Tile *)v35, 0xFB9u, 1.0); /*0x5b98c5*/
          v3 = 1.0; /*0x5b98ca*/
          Tile_SetFloat((Tile *)v35, 0xFBAu, 1.0); /*0x5b98d7*/
          v160 = 0xFFFFFFFF; /*0x5b98e1*/
          FormHeapFree(LODWORD(v154[2])); /*0x5b98ec*/
          v154[2] = 0.0; /*0x5b98f6*/
          v155.m_data = 0; /*0x5b98ff*/
        }
        v32 = v148; /*0x5b9904*/
      }
    }
  }
  sub_65D830(reference, v3); /*0x5b9916*/
  *(_DWORD *)(ParentMenu + 0xCC) = v57; /*0x5b991d*/
  v149 = v57; /*0x5b9923*/
  while ( v149 ) /*0x5b9927*/
  {
    v58 = v149->vtbl; /*0x5b9931*/
    if ( !v149->vtbl ) /*0x5b9931*/
      break; /*0x5b9935*/
    v149 = *(TESWorldSpace **)&v149->super.type; /*0x5b9944*/
    v147 = v58->Destroy != 0; /*0x5b994c*/
    sub_52B440(v58, 1); /*0x5b9951*/
    v60 = v59; /*0x5b9956*/
    if ( v59 ) /*0x5b995a*/
    {
      v61 = (int)v59->vtbl->GetPos(v59); /*0x5b996a*/
      v62 = *(float *)v61; /*0x5b996c*/
      v63 = *(float *)(v61 + 4); /*0x5b996e*/
      v64 = *(float *)(v61 + 8); /*0x5b9971*/
      a3.x = v62; /*0x5b9974*/
      a3.y = v63; /*0x5b997a*/
      a3.z = v64; /*0x5b997e*/
      WorldSpace = TESObjectREFR_GetWorldSpace(v60); /*0x5b9982*/
      destinationWorldspacea = WorldSpace; /*0x5b9989*/
      if ( !WorldSpace /*0x5b99a8*/
        || WorldSpace != *(TESWorldSpace **)(ParentMenu + 0xD0)
        && Shared_GetPointerAtOffset7C(WorldSpace) != *(void **)(ParentMenu + 0xD0) )
      {
        LOBYTE(v154[2]) = sub_67F0A0(); /*0x5b99b5*/
        v66 = sub_68CA20(v58); /*0x5b99b9*/
        sub_67F0B0(v66); /*0x5b99bf*/
        LOBYTE(v155.m_dataLen) = sub_67F0E0(); /*0x5b99cb*/
        sub_67F0F0(1); /*0x5b99cf*/
        LOBYTE(v154[0]) = sub_67F0C0(); /*0x5b99db*/
        sub_67F0D0(0); /*0x5b99df*/
        PathLow_ctor((float *)&v157.vtable); /*0x5b99eb*/
        v160 = 1; /*0x5b99f7*/
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v60); /*0x5b9a07*/
        v67 = (const NiPoint3 *)v60->vtbl->GetPos(v60); /*0x5b9a12*/
        TravelPath_BuildToDestination(&v157, (TESObjectREFR *)reference, v67, DwordAtOffset40, destinationWorldspacea); /*0x5b9a1f*/
        v68 = TravelPath_FindReferenceForWorldspace((char *)&v157, *(TESWorldSpace **)(ParentMenu + 0xD0), 1); /*0x5b9a31*/
        if ( v68 /*0x5b9a93*/
          || (v73 = *(TESWorldSpace **)(ParentMenu + 0xD0),
              v74 = (TESObjectREFR *)reference,
              destinationPosition.x = flt_A32048,
              destinationPosition.y = destinationPosition.x,
              destinationPosition.z = destinationPosition.x,
              TravelPath_BuildToDestination(&v157, v74, &destinationPosition, 0, v73),
              (v68 = TravelPath_FindReferenceForWorldspace((char *)&v157, *(TESWorldSpace **)(ParentMenu + 0xD0), 0)) != 0) )
        {
          v69 = (*((int (__thiscall **)(BSExtraDataVtbl *))v68->Destructor + 0x5D))(v68); /*0x5b9a44*/
          x = *(float *)v69; /*0x5b9a46*/
          y = *(float *)(v69 + 4); /*0x5b9a48*/
          z = *(float *)(v69 + 8); /*0x5b9a4b*/
        }
        else
        {
          x = g_zeroNiPoint3.x; /*0x5b9aab*/
          y = g_zeroNiPoint3.y; /*0x5b9ab1*/
          z = g_zeroNiPoint3.z; /*0x5b9ab7*/
        }
        a3.x = x; /*0x5b9abc*/
        a3.y = y; /*0x5b9ac5*/
        a3.z = z; /*0x5b9ac9*/
        sub_67F0F0(v155.m_dataLen); /*0x5b9acd*/
        sub_67F0B0(SLOBYTE(v154[2])); /*0x5b9ad7*/
        sub_67F0D0(SLOBYTE(v154[0])); /*0x5b9ae1*/
        v160 = 0xFFFFFFFF; /*0x5b9aed*/
        PathLow_dtor((int *)&v157); /*0x5b9af8*/
      }
      v75 = Menu::RenderTemplate((Menu *)ParentMenu, *(Tile **)(ParentMenu + 0x58), "map_world_icon", 0); /*0x5b9b0f*/
      if ( v75 ) /*0x5b9b13*/
      {
        v76 = (double)*(int *)(ParentMenu + 0x98); /*0x5b9b43*/
        if ( *(int *)(ParentMenu + 0x98) < 0 ) /*0x5b9b49*/
          v76 = v76 + flt_A2FC78; /*0x5b9b4b*/
        v77 = *(_DWORD *)(ParentMenu + 0x9C); /*0x5b9b59*/
        destinationWorldspaceb = *(TESWorldSpace **)(ParentMenu + 0xA8); /*0x5b9b5f*/
        v78 = (int)destinationWorldspaceb - *(_DWORD *)(ParentMenu + 0xAC); /*0x5b9b63*/
        a3.x = (a3.x - (double)*(int *)(ParentMenu + 0xA0)) /*0x5b9b69*/
             / (double)(*(_DWORD *)(ParentMenu + 0xA4) - *(_DWORD *)(ParentMenu + 0xA0))
             * v76;
        v79 = (double)*(int *)(ParentMenu + 0x9C); /*0x5b9b83*/
        if ( v77 < 0 ) /*0x5b9b89*/
          v79 = v79 + dbl_A30E60; /*0x5b9b8b*/
        a3.y = (1.0 - ((double)(int)destinationWorldspaceb - a3.y) / (double)v78) * v79; /*0x5b9b96*/
        Tile_SetFloat(v75, 0xFAEu, fConstant_2); /*0x5b9ba8*/
        Tile_SetFloat(v75, 0xFAFu, a3.x); /*0x5b9bbc*/
        Tile_SetFloat(v75, 0xFB0u, a3.y); /*0x5b9bd0*/
        Tile_SetFloat(v75, 0xFB2u, 0.0); /*0x5b9be2*/
        Tile_SetFloat(v75, 0xFB3u, flt_A6BF7C); /*0x5b9bf8*/
        Tile_SetFloat(v75, 0xFB4u, fConstant_2); /*0x5b9c0e*/
        Tile_SetFloat(v75, 0xFB5u, fConstant_2); /*0x5b9c24*/
        Tile_SetFloat(v75, 0xFB6u, 1.0); /*0x5b9c36*/
        valuec = (float)(v147 + 1); /*0x5b9c52*/
        Tile_SetFloat(v75, 0xFB8u, valuec); /*0x5b9c5a*/
        Tile_SetFloat(v75, 0xFB9u, fConstant_2); /*0x5b9c70*/
        Tile_SetFloat(v75, 0xFBAu, 1.0); /*0x5b9c82*/
      }
    }
  }
  v80 = Menu::RenderTemplate((Menu *)ParentMenu, *(Tile **)(ParentMenu + 0x58), "map_world_icon", 0); /*0x5b9c9f*/
  v81 = v80; /*0x5b9ca4*/
  if ( v80 ) /*0x5b9ca8*/
  {
    BSStringT_Set((BSStringT *)v80 + 1, "player_set_marker", 0); /*0x5b9cb8*/
    Tile_SetFloat(v81, 0xFAEu, fConstant_2); /*0x5b9cce*/
    Tile_SetFloat(v81, 0xFAFu, 0.0); /*0x5b9ce0*/
    Tile_SetFloat(v81, 0xFB0u, 0.0); /*0x5b9cf2*/
    Tile_SetFloat(v81, 0xFB2u, 0.0); /*0x5b9d04*/
    Tile_SetFloat(v81, 0xFB3u, flt_A6BF7C); /*0x5b9d1a*/
    Tile_SetFloat(v81, 0xFB4u, 1.0); /*0x5b9d2c*/
    Tile_SetFloat(v81, 0xFB5u, *(float *)&dword_A46C30); /*0x5b9d42*/
    Tile_SetFloat(v81, 0xFB6u, 1.0); /*0x5b9d54*/
    Tile_SetFloat(v81, 0xFB8u, 1.0); /*0x5b9d66*/
    Tile_SetFloat(v81, 0xFB9u, 1.0); /*0x5b9d78*/
    Tile_SetFloat(v81, 0xFBAu, fConstant_2); /*0x5b9d8e*/
    v82 = reference; /*0x5b9d93*/
    a3 = *(NiPoint3 *)&reference->unk62C; /*0x5b9d9e*/
    unk638 = v82->unk638; /*0x5b9db6*/
    if ( unk638 ) /*0x5b9dbe*/
    {
      if ( unk638 != *(_DWORD *)(ParentMenu + 0xD0) ) /*0x5b9dca*/
      {
        LOBYTE(v154[2]) = sub_67F0A0(); /*0x5b9dd7*/
        sub_67F0B0(1); /*0x5b9ddb*/
        LOBYTE(v154[0]) = sub_67F0E0(); /*0x5b9de7*/
        sub_67F0F0(1); /*0x5b9deb*/
        LOBYTE(v155.m_dataLen) = sub_67F0C0(); /*0x5b9df7*/
        sub_67F0D0(0); /*0x5b9dfb*/
        destinationWorldspacec = 0; /*0x5b9e02*/
        v150 = 0; /*0x5b9e06*/
        v84 = *(_BYTE *)(unk638 + 4); /*0x5b9e0a*/
        if ( v84 == 0x30 ) /*0x5b9e12*/
        {
          destinationWorldspacec = (TESWorldSpace *)unk638; /*0x5b9e14*/
        }
        else if ( v84 == 0x35 ) /*0x5b9e1c*/
        {
          v150 = (TESWorldSpace *)unk638; /*0x5b9e1e*/
        }
        PathLow_ctor((float *)&v157.vtable); /*0x5b9e26*/
        v85 = (TESObjectREFR *)reference; /*0x5b9e34*/
        v160 = 2; /*0x5b9e45*/
        TravelPath_BuildToDestination(&v157, v85, &a3, (TESObjectCELL *)destinationWorldspacec, v150); /*0x5b9e50*/
        v86 = TravelPath_FindReferenceForWorldspace((char *)&v157, *(TESWorldSpace **)(ParentMenu + 0xD0), 1); /*0x5b9e62*/
        if ( v86 /*0x5b9ecc*/
          || (v89 = *(TESWorldSpace **)(ParentMenu + 0xD0),
              v90 = (TESObjectREFR *)reference,
              destinationPosition.x = flt_A32048,
              destinationPosition.y = destinationPosition.x,
              destinationPosition.z = destinationPosition.x,
              TravelPath_BuildToDestination(&v157, v90, &destinationPosition, 0, v89),
              (v86 = TravelPath_FindReferenceForWorldspace((char *)&v157, *(TESWorldSpace **)(ParentMenu + 0xD0), 0)) != 0) )
        {
          v87 = (*((int (__thiscall **)(BSExtraDataVtbl *))v86->Destructor + 0x5D))(v86); /*0x5b9e75*/
          a3.x = *(float *)v87; /*0x5b9e79*/
          a3.y = *(float *)(v87 + 4); /*0x5b9e80*/
          v88 = *(float *)(v87 + 8); /*0x5b9e84*/
        }
        else
        {
          v91 = g_zeroNiPoint3.y; /*0x5b9ef2*/
          v88 = g_zeroNiPoint3.z; /*0x5b9ef8*/
          a3.x = g_zeroNiPoint3.x; /*0x5b9efd*/
          a3.y = v91; /*0x5b9f01*/
        }
        a3.z = v88; /*0x5b9f0a*/
        sub_67F0F0(SLOBYTE(v154[0])); /*0x5b9f0e*/
        sub_67F0B0(SLOBYTE(v154[2])); /*0x5b9f18*/
        sub_67F0D0(v155.m_dataLen); /*0x5b9f22*/
        v160 = 0xFFFFFFFF; /*0x5b9f2e*/
        PathLow_dtor((int *)&v157); /*0x5b9f39*/
      }
    }
    if ( NiPoint3__NotEqual(&a3, &g_zeroNiPoint3) ) /*0x5b9f47*/
    {
      v92 = *(_DWORD *)(ParentMenu + 0xA4); /*0x5b9f5e*/
      v93 = *(_DWORD *)(ParentMenu + 0x98); /*0x5b9f64*/
      destinationWorldspacef = *(TESWorldSpace **)(ParentMenu + 0xA0); /*0x5b9f6a*/
      LODWORD(v154[0]) = v92 - (_DWORD)destinationWorldspacef; /*0x5b9f76*/
      v94 = (a3.x - (double)(int)destinationWorldspacef) / (double)(v92 - (int)destinationWorldspacef); /*0x5b9f7a*/
      v95 = (double)*(int *)(ParentMenu + 0x98); /*0x5b9f7e*/
      if ( v93 < 0 ) /*0x5b9f84*/
        v95 = v95 + flt_A2FC78; /*0x5b9f86*/
      destinationWorldspaced = *(TESWorldSpace **)(ParentMenu + 0xA8); /*0x5b9f94*/
      LODWORD(v96) = (char *)destinationWorldspaced - *(_DWORD *)(ParentMenu + 0xAC); /*0x5b9f98*/
      a3.x = v94 * v95; /*0x5b9f9e*/
      v154[0] = v96; /*0x5b9fa6*/
      v97 = (double)*(int *)(ParentMenu + 0x9C); /*0x5b9fbe*/
      if ( *(int *)(ParentMenu + 0x9C) < 0 ) /*0x5b9fc4*/
        v97 = v97 + dbl_A30E60; /*0x5b9fc6*/
      a3.y = (1.0 - ((double)(int)destinationWorldspaced - a3.y) / (double)SLODWORD(v154[0])) * v97; /*0x5b9fd1*/
      Tile_SetFloat(v81, 0xFAFu, a3.x); /*0x5b9fe1*/
      Tile_SetFloat(v81, 0xFB0u, a3.y); /*0x5b9ff5*/
      Tile_SetFloat(v81, 0xFA7u, flt_A40098); /*0x5ba00b*/
      v98 = 1.0; /*0x5ba010*/
    }
    else
    {
      Tile_SetFloat(v81, 0xFA7u, 0.0); /*0x5ba021*/
      v98 = fConstant_2; /*0x5ba026*/
    }
    valued = v98; /*0x5ba02d*/
    Tile_SetFloat(v81, 0xFB6u, valued); /*0x5ba037*/
    *(_DWORD *)(ParentMenu + 0xE0) = v81; /*0x5ba03c*/
  }
  v99 = Menu::RenderTemplate((Menu *)ParentMenu, *(Tile **)(ParentMenu + 0x58), "map_world_icon", 0); /*0x5ba04f*/
  v100 = v99; /*0x5ba054*/
  if ( v99 ) /*0x5ba058*/
  {
    BSStringT_Set((BSStringT *)v99 + 1, "map_world_player", 0); /*0x5ba068*/
    v101 = reference->vtbl->super.super.super.GetPos(reference); /*0x5ba07b*/
    v102 = *v101; /*0x5ba07d*/
    v103 = v101[1]; /*0x5ba07f*/
    v104 = v101[2]; /*0x5ba082*/
    a3.x = v102; /*0x5ba085*/
    v105 = (TESObjectREFR *)reference; /*0x5ba089*/
    a3.y = v103; /*0x5ba08f*/
    a3.z = v104; /*0x5ba093*/
    v106 = TESObjectREFR_GetWorldSpace(v105); /*0x5ba097*/
    v107 = v106; /*0x5ba09c*/
    if ( v106 ) /*0x5ba0a0*/
    {
      if ( Shared_GetPointerAtOffset7C(v106) ) /*0x5ba0a4*/
        v107 = Shared_GetPointerAtOffset7C(v107); /*0x5ba0b4*/
    }
    if ( v107 != *(void **)(ParentMenu + 0xD0) ) /*0x5ba0bc*/
    {
      LOBYTE(v154[2]) = sub_67F0A0(); /*0x5ba0c9*/
      sub_67F0B0(1); /*0x5ba0cd*/
      LOBYTE(v154[0]) = sub_67F0E0(); /*0x5ba0d9*/
      sub_67F0F0(1); /*0x5ba0dd*/
      LOBYTE(v155.m_dataLen) = sub_67F0C0(); /*0x5ba0e9*/
      sub_67F0D0(0); /*0x5ba0ed*/
      PathLow_ctor((float *)&v157.vtable); /*0x5ba0f9*/
      v108 = *(TESWorldSpace **)(ParentMenu + 0xD0); /*0x5ba104*/
      destinationPosition.x = flt_A32048; /*0x5ba10a*/
      v109 = (TESObjectREFR *)reference; /*0x5ba10e*/
      destinationPosition.y = destinationPosition.x; /*0x5ba113*/
      destinationPosition.z = destinationPosition.x; /*0x5ba118*/
      v160 = 3; /*0x5ba128*/
      TravelPath_BuildToDestination(&v157, v109, &destinationPosition, 0, v108); /*0x5ba133*/
      sub_67F0F0(SLOBYTE(v154[0])); /*0x5ba13d*/
      sub_67F0B0(SLOBYTE(v154[2])); /*0x5ba147*/
      sub_67F0D0(v155.m_dataLen); /*0x5ba151*/
      v110 = TravelPath_FindReferenceForWorldspace((char *)&v157, *(TESWorldSpace **)(ParentMenu + 0xD0), 0); /*0x5ba166*/
      if ( v110 ) /*0x5ba16d*/
      {
        v111 = (*((int (__thiscall **)(BSExtraDataVtbl *))v110->Destructor + 0x5D))(v110); /*0x5ba179*/
        v112 = *(float *)v111; /*0x5ba17b*/
        v113 = *(float *)(v111 + 4); /*0x5ba17d*/
        v114 = *(float *)(v111 + 8); /*0x5ba180*/
      }
      else
      {
        v112 = g_zeroNiPoint3.x; /*0x5ba185*/
        v113 = g_zeroNiPoint3.y; /*0x5ba18b*/
        v114 = g_zeroNiPoint3.z; /*0x5ba191*/
      }
      a3.x = v112; /*0x5ba196*/
      a3.z = v114; /*0x5ba19e*/
      a3.y = v113; /*0x5ba1a2*/
      v160 = 0xFFFFFFFF; /*0x5ba1a6*/
      PathLow_dtor((int *)&v157); /*0x5ba1b1*/
    }
    v115 = *(_DWORD *)(ParentMenu + 0x98); /*0x5ba1c6*/
    destinationWorldspaceg = *(TESWorldSpace **)(ParentMenu + 0xA0); /*0x5ba1cc*/
    LODWORD(v154[0]) = *(_DWORD *)(ParentMenu + 0xA4) - (_DWORD)destinationWorldspaceg; /*0x5ba1d8*/
    v116 = (a3.x - (double)(int)destinationWorldspaceg) / (double)SLODWORD(v154[0]); /*0x5ba1dc*/
    v117 = (double)*(int *)(ParentMenu + 0x98); /*0x5ba1e0*/
    if ( v115 < 0 ) /*0x5ba1e6*/
      v117 = v117 + flt_A2FC78; /*0x5ba1e8*/
    destinationWorldspacee = *(TESWorldSpace **)(ParentMenu + 0xA8); /*0x5ba1f6*/
    LODWORD(v118) = (char *)destinationWorldspacee - *(_DWORD *)(ParentMenu + 0xAC); /*0x5ba1fa*/
    a3.x = v116 * v117; /*0x5ba200*/
    v154[0] = v118; /*0x5ba208*/
    v119 = (double)*(int *)(ParentMenu + 0x9C); /*0x5ba220*/
    if ( *(int *)(ParentMenu + 0x9C) < 0 ) /*0x5ba226*/
      v119 = v119 + dbl_A30E60; /*0x5ba228*/
    a3.y = (1.0 - ((double)(int)destinationWorldspacee - a3.y) / (double)SLODWORD(v154[0])) * v119; /*0x5ba233*/
    Tile_SetFloat(v100, 0xFA7u, flt_A40098); /*0x5ba245*/
    Tile_SetFloat(v100, 0xFAEu, fConstant_2); /*0x5ba25b*/
    v154[0] = a3.x - dbl_A2F920; /*0x5ba26d*/
    Tile_SetFloat(v100, 0xFAFu, v154[0]); /*0x5ba27d*/
    Tile_SetFloat(v100, 0xFB0u, a3.y); /*0x5ba291*/
    Tile_SetFloat(v100, 0xFB2u, 0.0); /*0x5ba2a3*/
    Tile_SetFloat(v100, 0xFB3u, flt_A6CD0C); /*0x5ba2b9*/
    Tile_SetFloat(v100, 0xFB4u, 1.0); /*0x5ba2cb*/
    Tile_SetFloat(v100, 0xFB5u, flt_A46B10); /*0x5ba2e1*/
    Tile_SetFloat(v100, 0xFB6u, 1.0); /*0x5ba2f3*/
    Tile_SetFloat(v100, 0xFB8u, 1.0); /*0x5ba305*/
    Tile_SetFloat(v100, 0xFB9u, 1.0); /*0x5ba317*/
    Tile_SetFloat(v100, 0xFBAu, 1.0); /*0x5ba329*/
    *(_DWORD *)(ParentMenu + 0xF8) = v100; /*0x5ba330*/
    sub_58E870((int)v100, a1, v119, 1.0); /*0x5ba336*/
    v120 = *(_DWORD *)(ParentMenu + 0xF8); /*0x5ba33b*/
    if ( v120 ) /*0x5ba343*/
    {
      v151 = *(TESWorldSpace **)(v120 + 0x24); /*0x5ba34e*/
      if ( v151 ) /*0x5ba352*/
      {
        if ( Shared_GetDwordAtOffset40(reference) ) /*0x5ba35e*/
        {
          v121 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x5ba371*/
          *(double *)v154 = sub_4CCE00(v121); /*0x5ba37d*/
          v122 = ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.GetZRotation)(reference); /*0x5ba38f*/
          v154[0] = v122 + *(double *)v154; /*0x5ba39a*/
          valuee = -v154[0]; /*0x5ba3a4*/
          NiMatrix33_InitRotationY(&v158, valuee); /*0x5ba3a7*/
          v154[0] = Tile_GetFloat(v100, 0xFCB) * dbl_A2FAA0; /*0x5ba3c5*/
          v123 = Tile_GetFloat(v100, 0xFCA) * dbl_A2FAA0; /*0x5ba3ce*/
          v124 = 0; /*0x5ba3d8*/
          *(_BYTE *)(v120 + 6) = 1; /*0x5ba3da*/
          v125 = LOWORD(v151->unknown0AC[3]) == 0; /*0x5ba3de*/
          v154[2] = v123; /*0x5ba3e5*/
          if ( !v125 ) /*0x5ba3e9*/
          {
            do /*0x5ba454*/
            {
              if ( HIWORD(v151->unknown0AC[2]) > v124 ) /*0x5ba3f9*/
                v126 = *(NiObject **)(LODWORD(v151->unknown0AC[1]) + 4 * v124); /*0x5ba405*/
              else
                v126 = 0; /*0x5ba3fb*/
              v127 = (float *)NiRTTI_Cast((BSStringT *)&stru_B3FCD4, v126); /*0x5ba40e*/
              if ( v127 ) /*0x5ba418*/
              {
                destinationPosition.x = v154[0]; /*0x5ba423*/
                destinationPosition.y = 0.0; /*0x5ba42e*/
                destinationPosition.z = -v154[2]; /*0x5ba43f*/
                sub_5B6860(v127, (NiTransform *)&v158, &destinationPosition, &g_zeroNiPoint3.x); /*0x5ba443*/
              }
              ++v124; /*0x5ba44f*/
            }
            while ( v124 < LOWORD(v151->unknown0AC[3]) ); /*0x5ba454*/
          }
        }
      }
    }
    v128 = *(Tile **)(ParentMenu + 0x58); /*0x5ba456*/
    Tile_SetFloat(v128, 0xFB8u, a3.x); /*0x5ba468*/
    Tile_SetFloat(v128, 0xFB9u, a3.y); /*0x5ba47c*/
  }
  Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), 0xFB0u, flt_A31E2C); /*0x5ba493*/
  return *(_DWORD *)(ParentMenu + 0x58); /*0x5ba49f*/
}
