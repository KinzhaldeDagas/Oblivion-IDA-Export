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
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  Menu *v15; // edi
  TileMenu *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // esi
  Tile *v20; // ecx
  float v21; // [esp+4h] [ebp-18h]
  int a3; // [esp+14h] [ebp-8h]
  float v23; // [esp+18h] [ebp-4h]
  float v24; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F8);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v23 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\quantity_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v15 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F8 )
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
  Menu_SetTileMenu(v15, a2, Depth, v16);
  v17 = OblivionDynamicCast(
          v15,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &QuantityMenu `RTTI Type Descriptor',
          0);
  v18 = v17;
  if ( v17[0xB] && v17[0xA] && v17[0xC] && v17[0xD] && v17[0xE] && v17[0xF] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v23);
    v18[0x11] = a5;
    v20 = (Tile *)v18[0xC];
    v18[0x10] = a7;
    v18[0x13] = a6;
    v18[0x12] = a7;
    v18[0x14] = a8;
    Tile_SetFloat(v20, (_DWORD *)0xFAF, 1.0);
    v24 = (float)a7;
    Tile_SetFloat((Tile *)v18[0xC], (_DWORD *)0xFB0, v24);
    a3 = a7 / 4;
    if ( a7 / 4 <= 1 )
      a3 = 1;
    v21 = (float)a3;
    Tile_SetFloat((Tile *)v18[0xC], (_DWORD *)0xFB2, v21);
    Tile_SetFloat((Tile *)v18[0xC], (_DWORD *)0xFB3, v24);
    Tile_SetFloat((Tile *)v18[0xC], (_DWORD *)0xFB3, 0.0);
    EnableMenu(v15, a1, a2, 0.0, 0);
    return 1;
  }
  else
  {
    PrintError("Quantity Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
