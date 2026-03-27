void (__thiscall ***__usercall sub_599EE0@<eax>(
        double st5_0@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a4,
        char a5,
        char a6,
        char a7))(void *, signed int)
{
  int type; // eax
  void *v10; // eax
  _DWORD *p_errorState; // eax
  int *v12; // eax
  int *v13; // esi
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  bool v17; // zf
  float *ContainerChanges; // eax
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v22; // edi
  TileMenu *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // edi
  double v26; // st7
  void *v27; // ebx
  BOOL v28; // eax
  double v29; // st7
  float v30; // [esp+8h] [ebp-18h]
  float v31; // [esp+8h] [ebp-18h]
  Menu *v32; // [esp+1Ch] [ebp-4h]
  float v33; // [esp+24h] [ebp+4h]
  TESChildCELL *v34; // [esp+24h] [ebp+4h]

  if ( a4 )
  {
    type = a4->vtbl->GetBaseForm(a4)->member.type;
    if ( type == 0x17 )
    {
      p_errorState = &a4->vtbl->GetBaseForm(a4)[4].member.modlist.data->errorState;
LABEL_7:
      if ( p_errorState )
      {
        if ( OSGlobals->sound )
        {
          OSGLobals_PlaySound(p_errorState[3], 0x121, 0);
          v13 = v12;
          if ( v12 )
          {
            sub_6B7190(v12, 0);
            sub_6B73E0(v13);
            FormHeapFree((unsigned int)v13);
          }
        }
      }
      goto LABEL_11;
    }
    if ( (unsigned int)(type - 0x23) <= 1 && a4->vtbl->IsDead(a4, 0) )
    {
      v10 = (void *)sub_46B280("DRSBodyOpen");
      p_errorState = OblivionDynamicCast(
                       v10,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESSound `RTTI Type Descriptor',
                       0);
      goto LABEL_7;
    }
  }
LABEL_11:
  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F0);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v33 = Depth;
  v17 = a4 == (TESObjectREFR *)ObjectRef;
  byte_B3B27A = 0;
  if ( v17 )
  {
    byte_B3B279 = 0;
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a4->member.baseExtraList);
    if ( ContainerChanges )
      sub_492E70(
        ContainerChanges,
        st5_0,
        Depth,
        st6_0,
        a4,
        (TESForm *)TESDataHandler_g_PlayerRef,
        (unsigned __int8)byte_B3B279,
        0,
        0);
    sub_57DE50(0x1D);
    GameUI_QueueMessage((const char *)dword_B38B10, 0, 1u, flt_A30634);
    ObjectRef = 0;
    return 0;
  }
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\container_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v22 = (Menu *)ParentMenu;
  v32 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F0 )
  {
    if ( v22->members.tile )
      v22->__vftable->Destructor(v22, 1);
    return 0;
  }
  v23 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v22, st6_0, Depth, v23);
  v24 = OblivionDynamicCast(
          v22,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ContainerMenu `RTTI Type Descriptor',
          0);
  v25 = v24;
  if ( v24[0xA] && v24[0xB] && v24[0xC] && v24[0xD] && v24[0xE] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v33);
    InputGlobals::PollAndUpdateInputState(OSGlobals->input);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAF, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB0, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB4, 0.0);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB5, fConstant_2);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, fConstant_2);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB7, fConstant_2);
    Tile_SetFloat((Tile *)v25[0xA], (_DWORD *)0xFB3, flt_A6906C);
    Tile_SetFloat((Tile *)v25[0xA], (_DWORD *)0xFB3, 0.0);
    *((_BYTE *)v25 + 0x61) = a5;
    *((_BYTE *)v25 + 0x63) = a7;
    byte_B13E90 = 1;
    byte_B3B279 = !a5 && a4->vtbl->IsActor(a4) && Actor_IsNPC((Actor *)a4) && !a4->vtbl->IsDead(a4, 0)
               || TESObjectREFR_GetOwner(a4)
               && !TESOBjectREFR_IsOwnedBy(a4, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1)
               && !a4->vtbl->IsActor(a4);
    v26 = 1.0;
    if ( a7 )
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, 1.0);
      v26 = 1.0;
    }
    v30 = v26;
    if ( a5 )
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, v30);
      sub_448F40((_DWORD *)TESDataHandler, st6_0, v26, a4);
      LOBYTE(TESDataHandler_g_PlayerRef->unk124) = 1;
      *((_BYTE *)v25 + 0x62) = a6;
      v34 = (TESChildCELL *)TESTopic::GEtTopic(5, 1);
      v27 = OblivionDynamicCast(
              a4,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &Actor `RTTI Type Descriptor',
              0);
      if ( v27 )
      {
        sub_6AC3D0((_DWORD *)OSGlobals->sound);
        (*(void (__thiscall **)(void *, TESChildCELL *, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v27 + 0xDC))(
          v27,
          v34,
          TESDataHandler_g_PlayerRef,
          1,
          1,
          0);
      }
    }
    else
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB7, v30);
    }
    v28 = *((_BYTE *)v25 + 0x64) != 0;
    v25[0x11] = a4;
    v31 = (float)(v28 + 1);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB5, v31);
    v29 = 0.0;
    Tile_SetFloat((Tile *)v25[0xA], (_DWORD *)0xFB3, 0.0);
    if ( *((_BYTE *)v25 + 0x61) )
    {
      v29 = sub_422DC0((ExtraDataList *)(v25[0x11] + 0x44));
      TESDataHandler_g_PlayerRef->unk11C = Double_To_SInt32(v29);
    }
    ContainerMenu_Update(st5_0, st6_0);
    sub_599200(v25, v29, 1, 0);
    EnableMenu(v32, st5_0, st6_0, v29, 0);
    return (void (__thiscall ***)(void *, signed int))XML;
  }
  else
  {
    if ( XML )
      (*(void (__thiscall **)(BSStringT *, int))XML->m_data)(XML, 1);
    PrintError("Container Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
