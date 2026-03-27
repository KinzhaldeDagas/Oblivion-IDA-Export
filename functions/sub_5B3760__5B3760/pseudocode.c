BSStringT *__usercall sub_5B3760@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // esi
  Menu *ParentMenu; // edi
  TileMenu *v10; // eax
  int *v11; // eax
  int *v12; // ebx
  char v14; // al
  float v15; // [esp+14h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FE);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a2);
  v15 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a3, Depth, "Data\\Menus\\Main\\magic_menu.xml");
  ParentMenu = (Menu *)Tile_GetParentMenu(XML);
  sub_584670("Data\\Menus\\Main\\magic_menu.xml", (int)ParentMenu);
  if ( !ParentMenu )
    return 0;
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x3FE )
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
  v11 = (int *)OblivionDynamicCast(
                 ParentMenu,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &MagicMenu `RTTI Type Descriptor',
                 0);
  v12 = v11;
  if ( v11[0xB] && v11[0xA] && v11[0xC] && v11[0xD] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v15);
    Tile_SetFloat((Tile *)v12[0xC], (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAF, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB0, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, flt_A53954);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB3, 0.0);
    Tile_SetString(XML, (_DWORD *)0xFB4, word_A36430);
    sub_5B2B70(a1, a3);
    v14 = InterfaceManager_GetSingleton(0, 1)->unk008[1];
    if ( v14 != (char)0xFF )
      sub_5B2060(v12, a1, 0.0, a3, v14, 0);
    Tile_SetFloat((Tile *)v12[0xC], (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)v12[0xC], (_DWORD *)0xFB3, 0.0);
    EnableMenu(ParentMenu, a1, a3, 0.0, 1);
    return XML;
  }
  else
  {
    PrintError("Magic Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
