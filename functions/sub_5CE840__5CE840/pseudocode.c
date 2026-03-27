BSStringT *__usercall sub_5CE840@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v10; // esi
  TileMenu *v11; // eax
  Menu *v12; // eax
  Menu *v13; // esi
  float v15; // [esp+10h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x419);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a2);
  v15 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a3, Depth, "Data\\Menus\\recharge_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x419 )
  {
    if ( v10->members.tile )
      v10->__vftable->Destructor(v10, 1);
    return 0;
  }
  v11 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v10, a3, Depth, v11);
  v12 = (Menu *)OblivionDynamicCast(
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &RechargeMenu `RTTI Type Descriptor',
                  0);
  v13 = v12;
  if ( v12[1].__vftable && v12[1].members.tile && v12[1].members.unk08 && v12[1].members.unk0C && v12[1].members.unk10 )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v15);
    Tile_SetFloat((Tile *)v13[1].members.unk08, (_DWORD *)0xFB7, flt_A6906C);
    Tile_SetFloat((Tile *)v13[1].members.unk08, (_DWORD *)0xFB7, 0.0);
    EnableMenu(v13, a1, a3, 0.0, 0);
    return XML;
  }
  else
  {
    PrintError("Recharge Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
