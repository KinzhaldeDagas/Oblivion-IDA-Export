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
  unsigned int *a2; // eax
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
  _DWORD *v65; // [esp+8h] [ebp-158h]
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

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EA);
  a3 = OpenMenuTile;
  if ( !OpenMenuTile )
    return;
  ParentMenu = (Menu *)Tile_GetParentMenu(OpenMenuTile);
  vftable = (unsigned int *)ParentMenu[2].__vftable;
  p_vftable = &ParentMenu->__vftable;
  if ( vftable )
  {
    ContainerEntryExtraData_DestroyDataTable(vftable, v3);
    FormHeapFree((unsigned int)vftable);
  }
  ParentMenu[2].__vftable = 0;
  v6 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v7 = TESDataHandler_g_PlayerRef == 0;
  byte_B3B3D8 = 0;
  CountDelta = 0xFFFFFFFF;
  if ( v7 )
    return;
  tile = ParentMenu[1].members.tile;
  v8 = 0;
  v9 = 0;
  TotalEntryCountForITem = (_DWORD *)TESObjectREF_GetTotalEntryCountForITem(v6, 0);
  v91.extendData = 0;
  v91.countDelta = 0;
  if ( (int)TotalEntryCountForITem > 0 )
  {
    do
    {
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v9, 0);
      v11 = (unsigned int)InventoryEntryOfItem;
      if ( InventoryEntryOfItem )
      {
        if ( !(unsigned __int8)sub_4854F0(InventoryEntryOfItem, (Actor *)TESDataHandler_g_PlayerRef, 0, 1, 1, 0)
          || sub_469980(*(_DWORD *)(v11 + 8)) )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v11, v12);
          FormHeapFree(v11);
        }
        else
        {
          a2 = (unsigned int *)FormHeapAlloc(8u);
          if ( a2 )
          {
            *a2 = v11;
            a2[1] = (unsigned int)v9;
            BSSimpleList_PushFront(&v91, (int)a2);
          }
          else
          {
            BSSimpleList_PushFront(&v91, 0);
          }
          ++v8;
        }
      }
      v9 = (TESForm *)((char *)v9 + 1);
    }
    while ( (int)v9 < (int)TotalEntryCountForITem );
  }
  sub_5B27A0(&v91, (int (__cdecl *)(int, _DWORD))sub_5AA2A0);
  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile;
  if ( altActiveTile )
  {
    if ( Tile_GetFloat(altActiveTile, 0xFA8) >= dbl_A6C1E0 )
    {
      v15 = (Tile *)ParentMenu[1].__vftable;
      ParentMenu[1].members.unk14 = 0;
      Tile_SetFloat(v15, (_DWORD *)0xFA1, 1.0);
      InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0;
    }
  }
  v16 = (_DWORD *)tile[0xD];
  while ( v16 )
  {
    v17 = (Tile *)v16[2];
    v16 = (_DWORD *)*v16;
    if ( sub_588B50(v17, 0xFB8) )
      Tile_SetFloat(v17, (_DWORD *)0xFAA, flt_A690E0);
  }
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFAF, flt_A53954);
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFB0, flt_A53954);
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFB1, flt_A53954);
  Float = flt_A53954;
  Tile_SetFloat(ParentMenu->members.tile, (_DWORD *)0xFB2, flt_A53954);
  v19 = v8 != 0 ? &v91 : 0;
  v20 = (ExtraContainerChanges_Data **)v19;
  v81 = (_DWORD *)0xFFFFFFFF;
  v88 = 0;
  p_extendData = &v19->extendData;
  v86 = &v19->extendData;
  if ( !v19 )
    goto LABEL_38;
  while ( 2 )
  {
    v21 = *v20;
    objList = (EntryData *)(*v20)->objList;
    TotalEntryCountForITem = &(*v20)->owner->vtbl;
    v91.type = (TESForm *)v21;
    v23 = (_DWORD *)sub_485150(objList);
    type = objList->type;
    v79 = v23;
    v90 = v23;
    sub_5AA210(&v90, (int)type);
    if ( v90 != v88 )
    {
      v81 = (_DWORD *)((char *)v81 + 1);
      v88 = v90;
    }
    v25 = sub_5C0C50(type);
    _sprintf(v92, "%s\\%s", "Icons", v25);
    v26 = tile[0xE];
    if ( !v26 )
    {
LABEL_35:
      v65 = (_DWORD *)((char *)v81 + 0x3E9);
      v64 = v81;
      v63 = sub_485150(objList);
      v30 = sub_488DF0(objList);
      v31 = sub_5AAB60(ParentMenu, a1, st6_0, Float, v92, v30, v63, (signed int)v64, (signed int)v65);
      v32 = (char *)sub_48F450(objList, 1, 1, 0, 0.0);
      Tile_SetString(v31, (_DWORD *)0xFB0, v32);
      v33 = (char *)sub_48F450(objList, 2, 1, 0, 0.0);
      Tile_SetString(v31, (_DWORD *)0xFB1, v33);
      v34 = (char *)sub_48F450(objList, 3, 1, 0, 0.0);
      Tile_SetString(v31, (_DWORD *)0xFB2, v34);
      v35 = (char *)sub_48F450(objList, 4, 1, 0, 0.0);
      Tile_SetString(v31, (_DWORD *)0xFB3, v35);
      v36 = (char *)sub_48F450(objList, 0, 1, 0, 0.0);
      Tile_SetString(v31, (_DWORD *)0xFB5, v36);
      v79 = (_DWORD *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(objList, 0) != 0) + 1);
      a2a = (float)(int)v79;
      Tile_SetFloat((Tile *)v31, (_DWORD *)0xFB8, a2a);
      a2b = (float)(int)TotalEntryCountForITem;
      Tile_SetFloat((Tile *)v31, (_DWORD *)0xFB9, a2b);
      v37 = (_DWORD *)sub_485C00(objList);
      v79 = v37;
      Float = (double)(int)v37;
      a2c = Float;
      Tile_SetFloat((Tile *)v31, (_DWORD *)0xFBA, a2c);
      v38 = (char *)sub_48F6A0((int)v37);
      Tile_SetString(v31, (_DWORD *)0xFBB, v38);
      goto LABEL_36;
    }
    while ( 1 )
    {
      v27 = *(Tile **)(v26 + 8);
      v26 = *(_DWORD *)(v26 + 4);
      if ( !sub_588C10(v27, 0xFAF) )
        goto LABEL_33;
      if ( !sub_488DF0((EntryData *)v21->objList) )
        goto LABEL_33;
      Float = Tile_GetFloat(v27, 0xFAA);
      if ( Float != flt_A690E0 )
        goto LABEL_33;
      v28 = sub_488DF0((EntryData *)v21->objList);
      v29 = sub_588C10(v27, 0xFAF);
      if ( !_mbscmp((const unsigned __int8 *)v29, (const unsigned __int8 *)v28) )
        break;
      v21 = (ExtraContainerChanges_Data *)v91.type;
LABEL_33:
      if ( !v26 )
      {
        ParentMenu = (Menu *)p_vftable;
        goto LABEL_35;
      }
    }
    v50 = sub_488DF0(objList);
    Tile_SetString(v27, (_DWORD *)0xFAF, v50);
    v51 = (char *)sub_48F450(objList, 1, 1, 0, 0.0);
    Tile_SetString(v27, (_DWORD *)0xFB0, v51);
    v52 = (char *)sub_48F450(objList, 2, 1, 0, 0.0);
    Tile_SetString(v27, (_DWORD *)0xFB1, v52);
    v53 = (char *)sub_48F450(objList, 3, 1, 0, 0.0);
    Tile_SetString(v27, (_DWORD *)0xFB2, v53);
    v54 = (char *)sub_48F450(objList, 4, 1, 0, 0.0);
    Tile_SetString(v27, (_DWORD *)0xFB3, v54);
    Tile_SetString(v27, (_DWORD *)0xFB4, v92);
    v55 = (char *)sub_48F450(objList, 0, 1, 0, 0.0);
    Tile_SetString(v27, (_DWORD *)0xFB5, v55);
    a2i = (float)(int)v79;
    Tile_SetFloat(v27, (_DWORD *)0xFB7, a2i);
    v79 = (_DWORD *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(objList, 0) != 0) + 1);
    a2j = (float)(int)v79;
    Tile_SetFloat(v27, (_DWORD *)0xFB8, a2j);
    a2k = (float)(int)TotalEntryCountForITem;
    Tile_SetFloat(v27, (_DWORD *)0xFB9, a2k);
    v56 = (_DWORD *)sub_485C00(objList);
    v79 = v56;
    a2l = (float)(int)v56;
    Tile_SetFloat(v27, (_DWORD *)0xFBA, a2l);
    v57 = (char *)sub_48F6A0((int)v56);
    Tile_SetString(v27, (_DWORD *)0xFBB, v57);
    Float = (double)(int)v81;
    a2m = Float;
    Tile_SetFloat(v27, (_DWORD *)0xFAA, a2m);
    v58 = (_DWORD *)tile[0xD];
    v59 = tile + 0xC;
    if ( v58 )
    {
      while ( 1 )
      {
        v7 = v27 == (Tile *)v58[2];
        v60 = v58;
        v58 = (_DWORD *)*v58;
        if ( v7 )
          break;
        if ( !v58 )
          goto LABEL_54;
      }
    }
    else
    {
LABEL_54:
      v60 = 0;
    }
    v79 = v60;
    if ( v60 )
      sub_7AA860((BSTextureManager *)(tile + 0xC), (NiTPointerList_Node_void **)&v79);
    v61 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v59 + 4))(v59);
    v61[2] = v27;
    v61[1] = 0;
    *v61 = v59[1];
    v62 = v59[1];
    if ( v62 )
    {
      *(_DWORD *)(v62 + 4) = v61;
      ++v59[3];
    }
    else
    {
      ++v59[3];
      v59[2] = v61;
    }
    v59[1] = v61;
LABEL_36:
    v39 = (_DWORD *)v86[1];
    v81 = (_DWORD *)((char *)v81 + 1);
    ParentMenu = (Menu *)p_vftable;
    v86 = v39;
    if ( v39 )
    {
      v20 = (ExtraContainerChanges_Data **)v86;
      continue;
    }
    break;
  }
  v19 = (EntryData *)p_extendData;
LABEL_38:
  p_extendData = (_DWORD *)((char *)v81 + 0xFFFFFFFF);
  v40 = (double)(int)((int)v81 + 0xFFFFFFFF);
  a2d = v40;
  Tile_SetFloat(ParentMenu[1].members.tile, (_DWORD *)0xFAE, a2d);
  v42 = (_DWORD *)tile[0xD];
  while ( v42 )
  {
    v43 = (_DWORD *)v42[2];
    v42 = (_DWORD *)*v42;
    v40 = Tile_GetFloat(v43, 0xFAA);
    if ( v40 == flt_A690E0 )
    {
      if ( v43 )
        (*(void (__thiscall **)(_DWORD *, int))*v43)(v43, 1);
    }
  }
  while ( v19 )
  {
    extendData = (unsigned int **)v19->extendData;
    v7 = v19->extendData == 0;
    v19 = (EntryData *)v19->countDelta;
    if ( !v7 )
    {
      v45 = *extendData;
      if ( *extendData )
      {
        ContainerEntryExtraData_DestroyDataTable(*extendData, v41);
        FormHeapFree((unsigned int)v45);
      }
      FormHeapFree((unsigned int)extendData);
    }
  }
  BSSimpleList_Clear(&v91);
  sub_5AA3A0(ParentMenu, v40, ParentMenu[1].members.unk18);
  v46 = TESDataHandler_g_PlayerRef;
  v87 = 0.0;
  v89 = 0.0;
  sub_65DFA0((int)v46, 0.0, &v87, &v89);
  v47 = (_DWORD *)Double_To_SInt32(v87);
  v48 = a3;
  p_extendData = v47;
  a2e = (float)(int)v47;
  Tile_SetFloat(a3, (_DWORD *)0xFB4, a2e);
  a3 = (Tile *)Double_To_SInt32(v89);
  a2f = (float)(int)a3;
  Tile_SetFloat(v48, (_DWORD *)0xFB5, a2f);
  v49 = ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_D2)(TESDataHandler_g_PlayerRef);
  a3 = (Tile *)Double_To_SInt32(v49);
  a2g = (float)(int)a3;
  Tile_SetFloat(v48, (_DWORD *)0xFB6, a2g);
  a3 = (Tile *)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
  a2h = (float)(int)a3;
  Tile_SetFloat(v48, (_DWORD *)0xFB7, a2h);
}
