char __usercall TextMenu_Create@<al>(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, char *a4, char *a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // ebp
  int ParentMenu; // eax
  Menu *v10; // esi
  TileMenu *v11; // eax
  char *v12; // edi
  _DWORD **v13; // ebx
  int v14; // eax
  _DWORD *v15; // ecx
  BSStringT *v16; // edi
  double Float; // st7
  int v18; // eax
  char *v19; // eax
  float v21; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x41B); /*0x5dcf26*/
  if ( OpenMenuTile ) /*0x5dcf30*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5dcf3a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5dcf4a*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5dcf4c*/
  v21 = Depth; /*0x5dcf51*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Dialog\\TextEditMenu.xml"); /*0x5dcf62*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5dcf66*/
  v10 = (Menu *)ParentMenu; /*0x5dcf6b*/
  if ( !ParentMenu ) /*0x5dcf6f*/
    return TextMenu_Create_::Return_0(); /*0x5dcf6f*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x41B ) /*0x5dcf83*/
    return TextMenu_Create_::DestroyBadMenu((int)v10); /*0x5dcf83*/
  v11 = (TileMenu *)OblivionDynamicCast( /*0x5dcf9a*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v10, a2, Depth, v11); /*0x5dcfa5*/
  v12 = (char *)OblivionDynamicCast( /*0x5dcfbe*/
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &TextEditMenu `RTTI Type Descriptor',
                  0);
  v13 = (_DWORD **)(v12 + 0x28); /*0x5dcfc0*/
  v14 = 0; /*0x5dcfc6*/
  v15 = v12 + 0x28; /*0x5dcfc8*/
  do /*0x5dcfe2*/
  {
    if ( !*v15 ) /*0x5dcfd3*/
      return TextMenu_Create_::Return_0_FailureMsg(); /*0x5dcfd3*/
    ++v14; /*0x5dcfd9*/
    ++v15; /*0x5dcfdc*/
  }
  while ( v14 < 3 ); /*0x5dcfe2*/
  if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5dd014*/
    Tile_SetFloat(File, 0xFABu, v21); /*0x5dd025*/
  Tile_SetString(File, (_DWORD *)0xFAE, a4); /*0x5dd036*/
  Tile_SetString(*v13, (_DWORD *)0xFDE, a5); /*0x5dd047*/
  v16 = (BSStringT *)(v12 + 0x34); /*0x5dd053*/
  Float = Tile_GetFloat(*v13, 0xFD4); /*0x5dd056*/
  v18 = Double_To_SInt32(Float); /*0x5dd05b*/
  sub_583DD0(v16, v18); /*0x5dd063*/
  v19 = sub_588C10(*v13, 0xFDE); /*0x5dd06f*/
  sub_57FF20(v16, v19); /*0x5dd077*/
  sub_57DD90(v16, 1); /*0x5dd080*/
  EnableMenu(v10, a1, a2, Float, 0); /*0x5dd089*/
  return 1; /*0x5dd095*/
}
