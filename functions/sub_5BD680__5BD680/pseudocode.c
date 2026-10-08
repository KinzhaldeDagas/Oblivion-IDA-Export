char __usercall sub_5BD680@<al>(double a1@<st2>, double st6_0@<st1>, double st7_0@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  double Depth; // st7
  Tile *File; // ebp
  int ParentMenu; // eax
  Menu *v7; // edi
  TileMenu *v8; // eax
  _DWORD *v9; // eax
  char v11; // bl
  int v12; // esi
  double v13; // st7
  float a2; // [esp+4h] [ebp-1Ch]
  InterfaceManager *Singleton; // [esp+18h] [ebp-8h]
  float v16; // [esp+1Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F7); /*0x5bd688*/
  if ( OpenMenuTile ) /*0x5bd692*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5bd69c*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bd6af*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5bd6b3*/
  v16 = Depth; /*0x5bd6b8*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Options\\options_menu.xml"); /*0x5bd6c9*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5bd6cd*/
  v7 = (Menu *)ParentMenu; /*0x5bd6d2*/
  if ( !ParentMenu ) /*0x5bd6d6*/
    return 0; /*0x5bd6d6*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F7 ) /*0x5bd6ea*/
  {
    if ( v7->members.tile ) /*0x5bd815*/
      v7->__vftable->Destructor(v7, 1); /*0x5bd823*/
    return 0; /*0x5bd827*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x5bd6ff*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v7, st6_0, Depth, v8); /*0x5bd70a*/
  v9 = OblivionDynamicCast( /*0x5bd71e*/
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &OptionsMenu `RTTI Type Descriptor',
         0);
  if ( v9[0xA] && v9[0xB] && v9[0xC] && v9[0xD] && v9[0xE] && v9[0xF] ) /*0x5bd744*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5bd790*/
      Tile_SetFloat(File, 0xFABu, v16); /*0x5bd7a1*/
    v11 = 0; /*0x5bd7a7*/
    v12 = 0; /*0x5bd7a9*/
    do /*0x5bd7de*/
    {
      if ( v12 >= 0xA ) /*0x5bd7b3*/
        break; /*0x5bd7b3*/
      if ( sub_57CFA0(Singleton, v12) == 0x3F7 ) /*0x5bd7c4*/
        break; /*0x5bd7c4*/
      if ( sub_57CFA0(Singleton, v12) == 0x3F5 ) /*0x5bd7d5*/
        v11 = 1; /*0x5bd7d7*/
      ++v12; /*0x5bd7d9*/
    }
    while ( !v11 ); /*0x5bd7de*/
    v13 = (double)((v11 != 0) + 1); /*0x5bd7ee*/
    a2 = v13; /*0x5bd7f5*/
    Tile_SetFloat(File, 0xFAEu, a2); /*0x5bd7fd*/
    EnableMenu(v7, a1, st6_0, v13, 0); /*0x5bd806*/
    return 1; /*0x5bd80e*/
  }
  else
  {
    PrintError("Options Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5bd74f*/
    return 0; /*0x5bd759*/
  }
}
