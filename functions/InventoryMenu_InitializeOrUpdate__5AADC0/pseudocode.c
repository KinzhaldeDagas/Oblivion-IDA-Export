void __usercall InventoryMenu_InitializeOrUpdate(double a1@<st2>, double st6_0@<st1>)
{
  Tile *OpenMenuTile; // eax
  int v3; // edx
  Menu *ParentMenu; // edi
  unsigned int *vftable; // esi
  TESObjectREFR *v6; // ecx
  bool v7; // zf
  int v8; // esi
  TESForm *v9; // ebp
  EntryData *InventoryEntryOfItem; // eax
  unsigned int v11; // ebx
  int v12; // edx
  unsigned int *v13; // eax
  Tile *altActiveTile; // ecx
  Tile *v15; // ecx
  _DWORD *v16; // ebx
  Tile *v17; // ebp
  double Float; // st7
  EntryData *v19; // esi
  ExtraContainerChanges_Data **v20; // eax
  ExtraContainerChanges_Data *v21; // ebx
  EntryData *objList; // esi
  _DWORD *v23; // eax
  TESForm *type; // ebp
  CHAR *v25; // eax
  int v26; // ebp
  Tile *v27; // edi
  CHAR *v28; // ebx
  CHAR *v29; // eax
  char *v30; // eax
  BSStringT *v31; // edi
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  _DWORD *v37; // ebp
  char *v38; // eax
  _DWORD *v39; // eax
  double v40; // st7
  int v41; // edx
  _DWORD *v42; // ebx
  _DWORD *v43; // ebp
  unsigned int **extendData; // ebx
  unsigned int *v45; // ebp
  PlayerCharacter *v46; // ecx
  _DWORD *v47; // eax
  Tile *v48; // esi
  double v49; // st7
  char *v50; // eax
  char *v51; // eax
  char *v52; // eax
  char *v53; // eax
  char *v54; // eax
  char *v55; // eax
  _DWORD *v56; // ebp
  char *v57; // eax
  _DWORD *v58; // eax
  _DWORD *v59; // esi
  _DWORD *v60; // edx
  _DWORD *v61; // eax
  int v62; // ecx
  signed int v63; // [esp+0h] [ebp-160h]
  _DWORD *v64; // [esp+4h] [ebp-15Ch]
  _DWORD *a2; // [esp+8h] [ebp-158h]
  float a2a; // [esp+8h] [ebp-158h]
  float a2b; // [esp+8h] [ebp-158h]
  float a2c; // [esp+8h] [ebp-158h]
  float a2d; // [esp+8h] [ebp-158h]
  float a2e; // [esp+8h] [ebp-158h]
  float a2f; // [esp+8h] [ebp-158h]
  float a2g; // [esp+8h] [ebp-158h]
  float a2h; // [esp+8h] [ebp-158h]
  float a2i; // [esp+8h] [ebp-158h]
  float a2j; // [esp+8h] [ebp-158h]
  float a2k; // [esp+8h] [ebp-158h]
  float a2l; // [esp+8h] [ebp-158h]
  float a2m; // [esp+8h] [ebp-158h]
  _DWORD *v79; // [esp+1Ch] [ebp-144h] BYREF
  Tile *a3; // [esp+20h] [ebp-140h]
  _DWORD *v81; // [esp+24h] [ebp-13Ch]
  _DWORD *p_extendData; // [esp+28h] [ebp-138h]
  _DWORD *TotalEntryCountForITem; // [esp+2Ch] [ebp-134h]
  _DWORD *tile; // [esp+30h] [ebp-130h]
  _DWORD *p_vftable; // [esp+34h] [ebp-12Ch]
  _DWORD *v86; // [esp+38h] [ebp-128h]
  float v87; // [esp+3Ch] [ebp-124h] BYREF
  _DWORD *v88; // [esp+40h] [ebp-120h]
  float v89; // [esp+44h] [ebp-11Ch] BYREF
  _DWORD *v90; // [esp+48h] [ebp-118h] BYREF
  EntryData v91; // [esp+4Ch] [ebp-114h] BYREF
  char v92[260]; // [esp+58h] [ebp-108h] BYREF

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EA); /*0x5aadda*/
  a3 = OpenMenuTile; /*0x5aade6*/
  if ( !OpenMenuTile ) /*0x5aadea*/
    return; /*0x5aadea*/
  ParentMenu = (Menu *)Tile_GetParentMenu(OpenMenuTile); /*0x5aadf9*/
  vftable = (unsigned int *)ParentMenu[2].__vftable; /*0x5aadfb*/
  p_vftable = &ParentMenu->__vftable; /*0x5aae00*/
  if ( vftable ) /*0x5aae04*/
  {
    ContainerEntryExtraData_DestroyDataTable(vftable, v3); /*0x5aae08*/
    FormHeapFree((unsigned int)vftable); /*0x5aae0e*/
  }
  ParentMenu[2].__vftable = 0; /*0x5aae16*/
  v6 = (TESObjectREFR *)reference; /*0x5aae19*/
  v7 = reference == 0; /*0x5aae1f*/
  MEMORY[0xB3B3D8] = 0; /*0x5aae21*/
  CountDelta = 0xFFFFFFFF; /*0x5aae27*/
  if ( v7 ) /*0x5aae31*/
    return; /*0x5aae31*/
  tile = ParentMenu[1].members.tile; /*0x5aae3c*/
  v8 = 0; /*0x5aae45*/
  v9 = 0; /*0x5aae47*/
  TotalEntryCountForITem = (_DWORD *)TESObjectREF_GetTotalEntryCountForITem(v6, 0); /*0x5aae4b*/
  v91.extendData = 0; /*0x5aae4f*/
  v91.countDelta = 0; /*0x5aae53*/
  if ( (int)TotalEntryCountForITem > 0 ) /*0x5aae57*/
  {
    do /*0x5aaee9*/
    {
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v9, 0); /*0x5aae68*/
      v11 = (unsigned int)InventoryEntryOfItem; /*0x5aae6d*/
      if ( InventoryEntryOfItem ) /*0x5aae71*/
      {
        if ( !(unsigned __int8)sub_4854F0(InventoryEntryOfItem, (Actor *)reference, 0, 1, 1, 0) /*0x5aae91*/
          || sub_469980(*(_DWORD *)(v11 + 8)) )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v11, v12); /*0x5aaed2*/
          FormHeapFree(v11); /*0x5aaed8*/
        }
        else
        {
          v13 = (unsigned int *)FormHeapAlloc(8u); /*0x5aae9f*/
          if ( v13 ) /*0x5aaea9*/
          {
            *v13 = v11; /*0x5aaeb0*/
            v13[1] = (unsigned int)v9; /*0x5aaeb2*/
            BSSimpleList_PushFront(&v91, (int)v13); /*0x5aaeb5*/
          }
          else
          {
            BSSimpleList_PushFront(&v91, 0); /*0x5aaec6*/
          }
          ++v8; /*0x5aaeba*/
        }
      }
      v9 = (TESForm *)((char *)v9 + 1); /*0x5aaee0*/
    }
    while ( (int)v9 < (int)TotalEntryCountForITem ); /*0x5aaee9*/
  }
  BSSimpleList_SortViaArrayAndRebuild(&v91, (int (__cdecl *)(tListVoid *, tListVoid *))sub_5AA2A0); /*0x5aaef8*/
  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile; /*0x5aaf05*/
  if ( altActiveTile ) /*0x5aaf10*/
  {
    if ( Tile_GetFloat(altActiveTile, 0xFA8) >= dbl_A6C1E0 ) /*0x5aaf27*/
    {
      v15 = (Tile *)ParentMenu[1].__vftable; /*0x5aaf2c*/
      ParentMenu[1].members.unk14 = 0; /*0x5aaf37*/
      Tile_SetFloat(v15, (_DWORD *)0xFA1, 1.0); /*0x5aaf3a*/
      InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x5aaf4a*/
    }
  }
  v16 = (_DWORD *)tile[0xD]; /*0x5aaf54*/
  while ( v16 ) /*0x5aaf59*/
  {
    v17 = (Tile *)v16[2]; /*0x5aaf60*/
    v16 = (_DWORD *)*v16; /*0x5aaf66*/
    if ( sub_588B50(v17, 0xFB8) ) /*0x5aaf6f*/
      Tile_SetFloat(v17, (_DWORD *)0xFAA, flt_A690E0); /*0x5aaf89*/
  }
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFAF, flt_A53954); /*0x5aafa4*/
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFB0, flt_A53954); /*0x5aafbb*/
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFB1, flt_A53954); /*0x5aafd2*/
  Float = flt_A53954; /*0x5aafd7*/
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFB2, flt_A53954); /*0x5aafe9*/
  v19 = v8 != 0 ? &v91 : 0;
  v20 = (ExtraContainerChanges_Data **)v19; /*0x5aaff8*/
  v81 = (_DWORD *)0xFFFFFFFF; /*0x5aaffc*/
  v88 = 0; /*0x5ab004*/
  p_extendData = &v19->extendData; /*0x5ab00c*/
  v86 = &v19->extendData; /*0x5ab010*/
  if ( !v19 ) /*0x5ab014*/
    goto LABEL_38; /*0x5ab014*/
  while ( 2 ) /*0x5ab024*/
  {
    v21 = *v20; /*0x5ab024*/
    objList = (EntryData *)(*v20)->objList; /*0x5ab029*/
    TotalEntryCountForITem = &(*v20)->owner->vtbl; /*0x5ab02b*/
    v91.type = (TESForm *)v21; /*0x5ab031*/
    v23 = (_DWORD *)sub_485150(objList); /*0x5ab035*/
    type = objList->type; /*0x5ab03a*/
    v79 = v23; /*0x5ab043*/
    v90 = v23; /*0x5ab047*/
    sub_5AA210(&v90, (int)type); /*0x5ab04b*/
    if ( v90 != v88 ) /*0x5ab05b*/
    {
      v81 = (_DWORD *)((char *)v81 + 1); /*0x5ab05d*/
      v88 = v90; /*0x5ab062*/
    }
    v25 = sub_5C0C50(type); /*0x5ab067*/
    _sprintf(v92, "%s\\%s", "Icons", v25); /*0x5ab07c*/
    v26 = tile[0xE]; /*0x5ab085*/
    if ( !v26 ) /*0x5ab08d*/
    {
LABEL_35:
      a2 = (_DWORD *)((char *)v81 + 0x3E9); /*0x5ab100*/
      v64 = v81; /*0x5ab10b*/
      v63 = sub_485150(objList); /*0x5ab113*/
      v30 = sub_488DF0(objList); /*0x5ab116*/
      v31 = sub_5AAB60(ParentMenu, a1, st6_0, Float, v92, v30, v63, (signed int)v64, (signed int)a2); /*0x5ab134*/
      v32 = (char *)sub_48F450(objList, 1, 1, 0, 0.0); /*0x5ab136*/
      Tile_SetString(v31, (_DWORD *)0xFB0, v32); /*0x5ab143*/
      v33 = (char *)sub_48F450(objList, 2, 1, 0, 0.0); /*0x5ab154*/
      Tile_SetString(v31, (_DWORD *)0xFB1, v33); /*0x5ab161*/
      v34 = (char *)sub_48F450(objList, 3, 1, 0, 0.0); /*0x5ab172*/
      Tile_SetString(v31, (_DWORD *)0xFB2, v34); /*0x5ab17f*/
      v35 = (char *)sub_48F450(objList, 4, 1, 0, 0.0); /*0x5ab190*/
      Tile_SetString(v31, (_DWORD *)0xFB3, v35); /*0x5ab19d*/
      v36 = (char *)sub_48F450(objList, 0, 1, 0, 0.0); /*0x5ab1ae*/
      Tile_SetString(v31, (_DWORD *)0xFB5, v36); /*0x5ab1bb*/
      v79 = (_DWORD *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(objList, 0) != 0) + 1); /*0x5ab1d3*/
      a2a = (float)(int)v79; /*0x5ab1db*/
      Tile_SetFloat((Tile *)v31, (_DWORD *)0xFB8, a2a); /*0x5ab1e5*/
      a2b = (float)(int)TotalEntryCountForITem; /*0x5ab1f1*/
      Tile_SetFloat((Tile *)v31, (_DWORD *)0xFB9, a2b); /*0x5ab1f9*/
      v37 = (_DWORD *)sub_485C00(objList); /*0x5ab205*/
      v79 = v37; /*0x5ab207*/
      Float = (double)(int)v37; /*0x5ab20b*/
      a2c = Float; /*0x5ab212*/
      Tile_SetFloat((Tile *)v31, (_DWORD *)0xFBA, a2c); /*0x5ab21a*/
      v38 = (char *)sub_48F6A0((int)v37); /*0x5ab222*/
      Tile_SetString(v31, (_DWORD *)0xFBB, v38); /*0x5ab22f*/
      goto LABEL_36; /*0x5ab22f*/
    }
    while ( 1 ) /*0x5ab090*/
    {
      v27 = *(Tile **)(v26 + 8); /*0x5ab090*/
      v26 = *(_DWORD *)(v26 + 4); /*0x5ab096*/
      if ( !sub_588C10(v27, 0xFAF) ) /*0x5ab0a0*/
        goto LABEL_33; /*0x5ab0a0*/
      if ( !sub_488DF0((EntryData *)v21->objList) ) /*0x5ab0ab*/
        goto LABEL_33; /*0x5ab0ab*/
      Float = Tile_GetFloat(v27, 0xFAA); /*0x5ab0bb*/
      if ( Float != flt_A690E0 ) /*0x5ab0cb*/
        goto LABEL_33; /*0x5ab0cb*/
      v28 = sub_488DF0((EntryData *)v21->objList); /*0x5ab0db*/
      v29 = sub_588C10(v27, 0xFAF); /*0x5ab0dd*/
      if ( !_mbscmp((const unsigned __int8 *)v29, (const unsigned __int8 *)v28) ) /*0x5ab0e4*/
        break; /*0x5ab0e4*/
      v21 = (ExtraContainerChanges_Data *)v91.type; /*0x5ab0f4*/
LABEL_33:
      if ( !v26 ) /*0x5ab0fa*/
      {
        ParentMenu = (Menu *)p_vftable; /*0x5ab0fc*/
        goto LABEL_35; /*0x5ab0fc*/
      }
    }
    v50 = sub_488DF0(objList); /*0x5ab3c8*/
    Tile_SetString(v27, (_DWORD *)0xFAF, v50); /*0x5ab3d5*/
    v51 = (char *)sub_48F450(objList, 1, 1, 0, 0.0); /*0x5ab3e6*/
    Tile_SetString(v27, (_DWORD *)0xFB0, v51); /*0x5ab3f3*/
    v52 = (char *)sub_48F450(objList, 2, 1, 0, 0.0); /*0x5ab404*/
    Tile_SetString(v27, (_DWORD *)0xFB1, v52); /*0x5ab411*/
    v53 = (char *)sub_48F450(objList, 3, 1, 0, 0.0); /*0x5ab422*/
    Tile_SetString(v27, (_DWORD *)0xFB2, v53); /*0x5ab42f*/
    v54 = (char *)sub_48F450(objList, 4, 1, 0, 0.0); /*0x5ab440*/
    Tile_SetString(v27, (_DWORD *)0xFB3, v54); /*0x5ab44d*/
    Tile_SetString(v27, (_DWORD *)0xFB4, v92); /*0x5ab45e*/
    v55 = (char *)sub_48F450(objList, 0, 1, 0, 0.0); /*0x5ab46f*/
    Tile_SetString(v27, (_DWORD *)0xFB5, v55); /*0x5ab47c*/
    a2i = (float)(int)v79; /*0x5ab488*/
    Tile_SetFloat(v27, (_DWORD *)0xFB7, a2i); /*0x5ab490*/
    v79 = (_DWORD *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(objList, 0) != 0) + 1); /*0x5ab4a7*/
    a2j = (float)(int)v79; /*0x5ab4b0*/
    Tile_SetFloat(v27, (_DWORD *)0xFB8, a2j); /*0x5ab4ba*/
    a2k = (float)(int)TotalEntryCountForITem; /*0x5ab4c6*/
    Tile_SetFloat(v27, (_DWORD *)0xFB9, a2k); /*0x5ab4ce*/
    v56 = (_DWORD *)sub_485C00(objList); /*0x5ab4da*/
    v79 = v56; /*0x5ab4dc*/
    a2l = (float)(int)v56; /*0x5ab4e7*/
    Tile_SetFloat(v27, (_DWORD *)0xFBA, a2l); /*0x5ab4ef*/
    v57 = (char *)sub_48F6A0((int)v56); /*0x5ab4f7*/
    Tile_SetString(v27, (_DWORD *)0xFBB, v57); /*0x5ab504*/
    Float = (double)(int)v81; /*0x5ab509*/
    a2m = Float; /*0x5ab510*/
    Tile_SetFloat(v27, (_DWORD *)0xFAA, a2m); /*0x5ab518*/
    v58 = (_DWORD *)tile[0xD]; /*0x5ab521*/
    v59 = tile + 0xC; /*0x5ab524*/
    if ( v58 ) /*0x5ab529*/
    {
      while ( 1 ) /*0x5ab530*/
      {
        v7 = v27 == (Tile *)v58[2]; /*0x5ab530*/
        v60 = v58; /*0x5ab536*/
        v58 = (_DWORD *)*v58; /*0x5ab538*/
        if ( v7 ) /*0x5ab53a*/
          break; /*0x5ab53a*/
        if ( !v58 ) /*0x5ab53e*/
          goto LABEL_54; /*0x5ab53e*/
      }
    }
    else
    {
LABEL_54:
      v60 = 0; /*0x5ab540*/
    }
    v79 = v60; /*0x5ab544*/
    if ( v60 ) /*0x5ab548*/
      NiTPointerList_RemoveNode((BSTextureManager *)(tile + 0xC), (NiTPointerList_Node_void **)&v79); /*0x5ab551*/
    v61 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v59 + 4))(v59); /*0x5ab55d*/
    v61[2] = v27; /*0x5ab55f*/
    v61[1] = 0; /*0x5ab562*/
    *v61 = v59[1]; /*0x5ab56c*/
    v62 = v59[1]; /*0x5ab56e*/
    if ( v62 ) /*0x5ab573*/
    {
      *(_DWORD *)(v62 + 4) = v61; /*0x5ab575*/
      ++v59[3]; /*0x5ab578*/
    }
    else
    {
      ++v59[3]; /*0x5ab584*/
      v59[2] = v61; /*0x5ab588*/
    }
    v59[1] = v61; /*0x5ab57c*/
LABEL_36:
    v39 = (_DWORD *)v86[1]; /*0x5ab234*/
    v81 = (_DWORD *)((char *)v81 + 1); /*0x5ab23b*/
    ParentMenu = (Menu *)p_vftable; /*0x5ab242*/
    v86 = v39; /*0x5ab246*/
    if ( v39 ) /*0x5ab24a*/
    {
      v20 = (ExtraContainerChanges_Data **)v86; /*0x5ab020*/
      continue; /*0x5ab020*/
    }
    break;
  }
  v19 = (EntryData *)p_extendData; /*0x5ab250*/
LABEL_38:
  p_extendData = (_DWORD *)((char *)v81 + 0xFFFFFFFF); /*0x5ab254*/
  v40 = (double)(int)((int)v81 + 0xFFFFFFFF); /*0x5ab25f*/
  a2d = v40; /*0x5ab267*/
  Tile_SetFloat(ParentMenu[1].members.tile, (_DWORD *)0xFAE, a2d); /*0x5ab26f*/
  v42 = (_DWORD *)tile[0xD]; /*0x5ab278*/
  while ( v42 ) /*0x5ab27d*/
  {
    v43 = (_DWORD *)v42[2]; /*0x5ab280*/
    v42 = (_DWORD *)*v42; /*0x5ab286*/
    v40 = Tile_GetFloat(v43, 0xFAA); /*0x5ab28f*/
    if ( v40 == flt_A690E0 ) /*0x5ab29f*/
    {
      if ( v43 ) /*0x5ab2a3*/
        (*(void (__thiscall **)(_DWORD *, int))*v43)(v43, 1); /*0x5ab2ae*/
    }
  }
  while ( v19 ) /*0x5ab2b6*/
  {
    extendData = (unsigned int **)v19->extendData; /*0x5ab2b8*/
    v7 = v19->extendData == 0; /*0x5ab2ba*/
    v19 = (EntryData *)v19->countDelta; /*0x5ab2bc*/
    if ( !v7 ) /*0x5ab2bf*/
    {
      v45 = *extendData; /*0x5ab2c1*/
      if ( *extendData ) /*0x5ab2c1*/
      {
        ContainerEntryExtraData_DestroyDataTable(*extendData, v41); /*0x5ab2c9*/
        FormHeapFree((unsigned int)v45); /*0x5ab2cf*/
      }
      FormHeapFree((unsigned int)extendData); /*0x5ab2d8*/
    }
  }
  BSSimpleList_Clear(&v91); /*0x5ab2e8*/
  sub_5AA3A0(ParentMenu, v40, ParentMenu[1].members.unk18); /*0x5ab2f3*/
  v46 = reference; /*0x5ab2fa*/
  v87 = 0.0; /*0x5ab300*/
  v89 = 0.0; /*0x5ab308*/
  sub_65DFA0((int)v46, 0.0, &v87, &v89); /*0x5ab312*/
  v47 = (_DWORD *)Double_To_SInt32(v87); /*0x5ab31b*/
  v48 = a3; /*0x5ab320*/
  p_extendData = v47; /*0x5ab324*/
  a2e = (float)(int)v47; /*0x5ab32f*/
  Tile_SetFloat(a3, (_DWORD *)0xFB4, a2e); /*0x5ab337*/
  a3 = (Tile *)Double_To_SInt32(v89); /*0x5ab345*/
  a2f = (float)(int)a3; /*0x5ab350*/
  Tile_SetFloat(v48, (_DWORD *)0xFB5, a2f); /*0x5ab358*/
  v49 = ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_D2)(reference);// Inventory menu armor display calls actor vtbl+0x348 Character_GetArmorRating, rounds via Double_To_SInt32, and stores tile trait 0xFB6. AVU replaces the call with its post-DR/post-cap armor wrapper. /*0x5ab36b*/
  a3 = (Tile *)Double_To_SInt32(v49); /*0x5ab372*/
  a2g = (float)(int)a3; /*0x5ab37d*/
  Tile_SetFloat(v48, (_DWORD *)0xFB6, a2g); /*0x5ab385*/
  a3 = (Tile *)sub_5E4420((Actor *)reference); /*0x5ab395*/
  a2h = (float)(int)a3; /*0x5ab3a0*/
  Tile_SetFloat(v48, (_DWORD *)0xFB7, a2h); /*0x5ab3a8*/
}
