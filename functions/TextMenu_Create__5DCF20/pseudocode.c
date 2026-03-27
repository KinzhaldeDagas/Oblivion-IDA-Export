char __usercall TextMenu_Create@<al>(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, char *a4, char *a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v11; // esi
  TileMenu *v12; // eax
  char *v13; // edi
  _DWORD **v14; // ebx
  int v15; // eax
  _DWORD *v16; // ecx
  BSStringT *v17; // edi
  double Float; // st7
  int v19; // eax
  char *v20; // eax
  float a3; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x41B);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  a3 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\Dialog\\TextEditMenu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v11 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return TextMenu_Create_::Return_0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x41B )
    return TextMenu_Create_::DestroyBadMenu((int)v11);
  v12 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v11, a2, Depth, v12);
  v13 = (char *)OblivionDynamicCast(
                  v11,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &TextEditMenu `RTTI Type Descriptor',
                  0);
  v14 = (_DWORD **)(v13 + 0x28);
  v15 = 0;
  v16 = v13 + 0x28;
  do
  {
    if ( !*v16 )
      return TextMenu_Create_::Return_0_FailureMsg();
    ++v15;
    ++v16;
  }
  while ( v15 < 3 );
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
  Tile_SetString(XML, (_DWORD *)0xFAE, a4);
  Tile_SetString(*v14, (_DWORD *)0xFDE, a5);
  v17 = (BSStringT *)(v13 + 0x34);
  Float = Tile_GetFloat(*v14, 0xFD4);
  v19 = Double_To_SInt32(Float);
  sub_583DD0(v17, v19);
  v20 = sub_588C10(*v14, 0xFDE);
  sub_57FF20(v17, v20);
  sub_57DD90(v17, 1);
  EnableMenu(v11, a1, a2, Float, 0);
  return 1;
}
