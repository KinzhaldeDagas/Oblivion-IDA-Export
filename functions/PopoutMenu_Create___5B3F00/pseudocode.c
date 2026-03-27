BSStringT *__usercall PopoutMenu_Create_@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v10; // edi
  TileMenu *v11; // eax
  char *v12; // esi
  Tile **v14; // esi
  int v15; // ebx
  Tile *v16; // ecx
  float v17; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x400);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v17 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\Main\\magic_popup_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x400 )
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
  Menu_SetTileMenu(v10, a2, Depth, v11);
  v12 = (char *)OblivionDynamicCast(
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &MagicPopupMenu `RTTI Type Descriptor',
                  0);
  if ( sub_5A46B0(v12) )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v17);
    Tile_SetString(*((_DWORD **)v12 + 0x13), (_DWORD *)0xFDE, EmptyString);
    Tile_SetFloat(*((Tile **)v12 + 0x13), (_DWORD *)0xFA1, 1.0);
    v14 = (Tile **)(v12 + 0x2C);
    v15 = 8;
    do
    {
      v16 = *v14++;
      Tile_SetFloat(v16, (_DWORD *)0xFA1, 1.0);
      --v15;
    }
    while ( v15 );
    EnableMenu(v10, a1, a2, 1.0, 0);
    return XML;
  }
  else
  {
    PrintError("Magic Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
