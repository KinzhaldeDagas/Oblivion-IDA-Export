int __usercall AlchMenu_Create@<eax>(
        double st5_0@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10,
        char a11)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v17; // ebp
  TileMenu *v18; // eax
  float v20; // [esp+20h] [ebp-110h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x410);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v20 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\dialog\\Alchemy.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v17 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    goto LABEL_14;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x410 )
    JUMPOUT(0x593AC3);
  v18 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v17, st6_0, Depth, v18);
  if ( !OblivionDynamicCast(
          v17,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &AlchemyMenu `RTTI Type Descriptor',
          0) )
LABEL_14:
    JUMPOUT(0x593AD4);
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v20);
  return AlchMenu_Create_::HandleMPST(a4, a5, a6, a7, a8, a9, a10, a11);
}
