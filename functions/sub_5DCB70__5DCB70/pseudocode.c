BSStringT *__usercall sub_5DCB70@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  TileMenu *v10; // eax
  double Float; // st7
  char v13; // al
  float v14; // [esp+4h] [ebp-10h]
  float v15; // [esp+10h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3EB);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a2);
  v15 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a3, Depth, "Data\\Menus\\Main\\stats_menu.xml");
  ParentMenu = (Menu *)Tile_GetParentMenu(XML);
  sub_584670("Data\\Menus\\Main\\stats_menu.xml", (int)ParentMenu);
  if ( !ParentMenu )
    return 0;
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x3EB )
  {
    if ( ParentMenu->members.tile )
      ParentMenu->__vftable->Destructor(ParentMenu, 1);
    return 0;
  }
  v10 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(ParentMenu, a3, Depth, v10);
  if ( sub_5D9B80(ParentMenu) )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
      || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
    {
      Float = v15;
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v15);
    }
    v13 = BYTE2(InterfaceManager_GetSingleton(0, 1)->unk008[0]);
    if ( v13 != (char)0xFF )
    {
      Float = (double)v13;
      v14 = Float;
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, v14);
    }
    sub_5DA1A0((Tile **)ParentMenu, (_DWORD *)0xFFFFFFFF);
    sub_5DC630((Tile **)ParentMenu, a3, Float);
    sub_5D9CB0(ParentMenu);
    sub_5DC950(ParentMenu, a1, a3, Float);
    sub_5DBB00(ParentMenu);
    Tile_SetFloat((Tile *)ParentMenu[1].members.unk18, (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)ParentMenu[1].members.unk18, (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)ParentMenu[1].members.id, (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)ParentMenu[1].members.id, (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)ParentMenu[2].__vftable, (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)ParentMenu[2].__vftable, (_DWORD *)0xFB3, 0.0);
    EnableMenu(ParentMenu, a1, a3, 0.0, 1);
    ParentMenu->__vftable->Unk_0B(ParentMenu);
    return XML;
  }
  else
  {
    PrintError("Stats Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
