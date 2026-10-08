char __usercall sub_5C05D0@<al>(
        double a1@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        int a4,
        int a5,
        int a6,
        signed int a7,
        int a8)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // ebx
  int ParentMenu; // eax
  Menu *v13; // edi
  TileMenu *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  Tile *v18; // ecx
  float v19; // [esp+4h] [ebp-18h]
  int a3; // [esp+14h] [ebp-8h]
  float v21; // [esp+18h] [ebp-4h]
  float v22; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F8); /*0x5c05d8*/
  if ( OpenMenuTile ) /*0x5c05e2*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5c05ec*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5c05fd*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5c05ff*/
  v21 = Depth; /*0x5c0604*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\quantity_menu.xml"); /*0x5c0615*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5c0619*/
  v13 = (Menu *)ParentMenu; /*0x5c061e*/
  if ( !ParentMenu ) /*0x5c0622*/
    return 0; /*0x5c0622*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F8 ) /*0x5c0636*/
  {
    if ( v13->members.tile ) /*0x5c07ae*/
      v13->__vftable->Destructor(v13, 1); /*0x5c07bc*/
    return 0; /*0x5c07c0*/
  }
  v14 = (TileMenu *)OblivionDynamicCast( /*0x5c064b*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v13, a2, Depth, v14); /*0x5c0656*/
  v15 = OblivionDynamicCast( /*0x5c066a*/
          v13,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &QuantityMenu `RTTI Type Descriptor',
          0);
  v16 = v15; /*0x5c066f*/
  if ( v15[0xB] && v15[0xA] && v15[0xC] && v15[0xD] && v15[0xE] && v15[0xF] ) /*0x5c0692*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5c06de*/
      Tile_SetFloat(File, 0xFABu, v21); /*0x5c06ef*/
    v16[0x11] = a5; /*0x5c070a*/
    v18 = (Tile *)v16[0xC]; /*0x5c070d*/
    v16[0x10] = a7; /*0x5c0715*/
    v16[0x13] = a6; /*0x5c0718*/
    v16[0x12] = a7; /*0x5c071b*/
    v16[0x14] = a8; /*0x5c071e*/
    Tile_SetFloat(v18, 0xFAFu, 1.0); /*0x5c0721*/
    v22 = (float)a7; /*0x5c072e*/
    Tile_SetFloat((Tile *)v16[0xC], 0xFB0u, v22); /*0x5c073e*/
    a3 = a7 / 4; /*0x5c0751*/
    if ( a7 / 4 <= 1 ) /*0x5c0755*/
      a3 = 1; /*0x5c0757*/
    v19 = (float)a3; /*0x5c0767*/
    Tile_SetFloat((Tile *)v16[0xC], 0xFB2u, v19); /*0x5c076f*/
    Tile_SetFloat((Tile *)v16[0xC], 0xFB3u, v22); /*0x5c0784*/
    Tile_SetFloat((Tile *)v16[0xC], 0xFB3u, 0.0); /*0x5c0797*/
    EnableMenu(v13, a1, a2, 0.0, 0); /*0x5c07a0*/
    return 1; /*0x5c07a7*/
  }
  else
  {
    PrintError("Quantity Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5c069d*/
    return 0; /*0x5c06a7*/
  }
}
