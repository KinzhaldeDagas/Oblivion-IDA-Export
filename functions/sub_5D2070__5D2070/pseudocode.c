BSStringT *__usercall sub_5D2070@<eax>(double st7_0@<st0>, double st6_0@<st1>, signed int a3, int a4, int a5, int a6)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st5
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v15; // ebx
  TileMenu *v16; // eax
  void *v17; // eax
  int v18; // esi
  ExtraContainerChanges_Data *ContainerChanges; // eax
  double v20; // st7
  int v21; // eax
  _DWORD *v22; // eax
  void *v23; // eax
  _DWORD *v24; // eax
  float v26; // [esp+8h] [ebp-18h]
  float v27; // [esp+8h] [ebp-18h]
  float v28; // [esp+8h] [ebp-18h]
  float v29; // [esp+1Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40B);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v29 = st7_0;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, Depth, st6_0, st7_0, "Data\\Menus\\repair_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v15 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40B )
  {
    if ( v15->members.tile )
      v15->__vftable->Destructor(v15, 1);
    return 0;
  }
  v16 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v15, st6_0, st7_0, v16);
  v17 = OblivionDynamicCast(
          v15,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &RepairMenu `RTTI Type Descriptor',
          0);
  v26 = (float)a3;
  v18 = (int)v17;
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, v26);
  ContainerChanges = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
  *(_DWORD *)(v18 + 0x54) = ContainerExtraData_GetItemCount(ContainerChanges, (TESForm *)TESDataHandler_g_RepairHammer);
  *(_DWORD *)(v18 + 0x58) = a3;
  *(_DWORD *)(v18 + 0x60) = a6;
  *(_DWORD *)(v18 + 0x5C) = a5;
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v29);
  v20 = (double)*(int *)(v18 + 0x54);
  v27 = v20;
  Tile_SetFloat(*(Tile **)(v18 + 0x34), (_DWORD *)0xFAE, v27);
  if ( a3 == 2 )
  {
    v20 = (double)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
    v28 = v20;
    Tile_SetFloat(*(Tile **)(v18 + 0x34), (_DWORD *)0xFAE, v28);
    sub_6AC3D0((_DWORD *)OSGlobals->sound);
    v21 = TESTopic::GEtTopic(5, 3);
    (*(void (__thiscall **)(int, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)a6 + 0xDC))(
      a6,
      v21,
      TESDataHandler_g_PlayerRef,
      1,
      1,
      0);
  }
  else if ( a3 == 3 )
  {
    sub_57DE50(1);
    v22 = (_DWORD *)Menu_GetOpenMenuTile(0x410);
    v23 = (void *)Tile_GetParentMenu(v22);
    v24 = OblivionDynamicCast(
            v23,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &AlchemyMenu `RTTI Type Descriptor',
            0);
    if ( v24 )
    {
      if ( v24[dword_B3B270 + 0x2C] )
      {
        v20 = fConstant_2;
        Tile_SetFloat(*(Tile **)(v18 + 0x4C), (_DWORD *)0xFA1, fConstant_2);
      }
    }
    *(_BYTE *)(v18 + 0x65) = 1;
  }
  sub_5D1080(v18, (int)v15, v20, Depth, st6_0, 1);
  EnableMenu(v15, Depth, st6_0, v20, 0);
  return XML;
}
