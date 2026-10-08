BSStringT *__usercall PopoutMenu_Create_@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // ebp
  int ParentMenu; // eax
  Menu *v8; // edi
  TileMenu *v9; // eax
  char *v10; // esi
  Tile **v12; // esi
  int v13; // ebx
  Tile *v14; // ecx
  float v15; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x400); /*0x5b3f06*/
  if ( OpenMenuTile ) /*0x5b3f10*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5b3f1a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b3f2b*/
  Depth = InterfaceManager_GetDepth(a3); /*0x5b3f2d*/
  v15 = Depth; /*0x5b3f32*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Main\\magic_popup_menu.xml"); /*0x5b3f43*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5b3f47*/
  v8 = (Menu *)ParentMenu; /*0x5b3f4c*/
  if ( !ParentMenu ) /*0x5b3f50*/
    return 0; /*0x5b3f50*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x400 ) /*0x5b3f64*/
  {
    if ( v8->members.tile ) /*0x5b4060*/
      v8->__vftable->Destructor(v8, 1); /*0x5b406e*/
    return 0; /*0x5b4072*/
  }
  v9 = (TileMenu *)OblivionDynamicCast( /*0x5b3f79*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, a2, Depth, v9); /*0x5b3f84*/
  v10 = (char *)OblivionDynamicCast( /*0x5b3f9d*/
                  v8,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &MagicPopupMenu `RTTI Type Descriptor',
                  0);
  if ( sub_5A46B0(v10) ) /*0x5b3fa4*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5b3ff1*/
      Tile_SetFloat(File, 0xFABu, v15); /*0x5b4002*/
    Tile_SetString(*((_DWORD **)v10 + 0x13), (_DWORD *)0xFDE, EmptyString); /*0x5b4015*/
    Tile_SetFloat(*((Tile **)v10 + 0x13), 0xFA1u, 1.0); /*0x5b4028*/
    v12 = (Tile **)(v10 + 0x2C); /*0x5b402d*/
    v13 = 8; /*0x5b4030*/
    do /*0x5b404d*/
    {
      v14 = *v12++; /*0x5b4035*/
      Tile_SetFloat(v14, 0xFA1u, 1.0); /*0x5b4045*/
      --v13; /*0x5b404a*/
    }
    while ( v13 ); /*0x5b404d*/
    EnableMenu(v8, a1, a2, 1.0, 0); /*0x5b4053*/
    return (BSStringT *)File; /*0x5b405b*/
  }
  else
  {
    PrintError("Magic Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5b3fb2*/
    return 0; /*0x5b3fbc*/
  }
}
