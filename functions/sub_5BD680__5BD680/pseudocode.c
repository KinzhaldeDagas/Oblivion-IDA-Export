char __usercall sub_5BD680@<al>(double a1@<st2>, double st6_0@<st1>, double st7_0@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v9; // edi
  TileMenu *v10; // eax
  _DWORD *v11; // eax
  char v13; // bl
  int v14; // esi
  double v15; // st7
  float a2; // [esp+4h] [ebp-1Ch]
  InterfaceManager *Singleton; // [esp+18h] [ebp-8h]
  float a3; // [esp+1Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F7);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  a3 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, st6_0, Depth, "Data\\Menus\\Options\\options_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v9 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F7 )
  {
    if ( v9->members.tile )
      v9->__vftable->Destructor(v9, 1);
    return 0;
  }
  v10 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, st6_0, Depth, v10);
  v11 = OblivionDynamicCast(
          v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &OptionsMenu `RTTI Type Descriptor',
          0);
  if ( v11[0xA] && v11[0xB] && v11[0xC] && v11[0xD] && v11[0xE] && v11[0xF] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
    v13 = 0;
    v14 = 0;
    do
    {
      if ( v14 >= 0xA )
        break;
      if ( sub_57CFA0(Singleton, v14) == 0x3F7 )
        break;
      if ( sub_57CFA0(Singleton, v14) == 0x3F5 )
        v13 = 1;
      ++v14;
    }
    while ( !v13 );
    v15 = (double)((v13 != 0) + 1);
    a2 = v15;
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a2);
    EnableMenu(v9, a1, st6_0, v15, 0);
    return 1;
  }
  else
  {
    PrintError("Options Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
