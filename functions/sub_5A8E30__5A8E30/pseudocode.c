BSStringT *__usercall sub_5A8E30@<eax>(double a1@<st2>, double a2@<st0>, double st6_0@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // eax
  Tile *File; // edi
  int ParentMenu; // eax
  int v7; // esi
  TileMenu *v8; // eax
  double Float; // st7
  float a3; // [esp+4h] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F2); /*0x5a8e35*/
  if ( OpenMenuTile ) /*0x5a8e3f*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5a8e49*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a8e51*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Main\\hud_subtitle_menu.xml"); /*0x5a8e68*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5a8e6c*/
  v7 = ParentMenu; /*0x5a8e71*/
  if ( !ParentMenu ) /*0x5a8e75*/
    return 0; /*0x5a8e75*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F2 ) /*0x5a8e89*/
  {
    if ( *(_DWORD *)(v7 + 4) ) /*0x5a8f11*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x5a8f1f*/
    return 0; /*0x5a8f22*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x5a8e9e*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu((Menu *)v7, st6_0, a2, v8); /*0x5a8ea9*/
  if ( !*(_DWORD *)(v7 + 0x28) ) /*0x5a8eae*/
    sub_404EC0("HUD-Subtitle Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5a8eb9*/
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(v7 + 0x28), 0xFAC); /*0x5a8ec9*/
  a3 = Float; /*0x5a8ed2*/
  Tile_SetFloat(*(Tile **)(v7 + 0x28), 0xFB7u, a3); /*0x5a8eda*/
  Tile_SetString(*(_DWORD **)(v7 + 0x28), (_DWORD *)0xFDE, word_A36430); /*0x5a8eec*/
  Tile_SetString(*(_DWORD **)(v7 + 0x34), (_DWORD *)0xFDE, word_A36430); /*0x5a8efe*/
  EnableMenu((Menu *)v7, a1, st6_0, Float, 0); /*0x5a8f07*/
  return (BSStringT *)File; /*0x5a8f10*/
}
