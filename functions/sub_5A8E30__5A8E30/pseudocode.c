BSStringT *__usercall sub_5A8E30@<eax>(double a1@<st2>, double a2@<st0>, double st6_0@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // eax
  BSStringT *XML; // edi
  int ParentMenu; // eax
  int v8; // esi
  TileMenu *v9; // eax
  double Float; // st7
  float a3; // [esp+4h] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F2);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, st6_0, a2, "Data\\Menus\\Main\\hud_subtitle_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v8 = ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F2 )
  {
    if ( *(_DWORD *)(v8 + 4) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    return 0;
  }
  v9 = (TileMenu *)OblivionDynamicCast(
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu((Menu *)v8, st6_0, a2, v9);
  if ( !*(_DWORD *)(v8 + 0x28) )
    sub_404EC0("HUD-Subtitle Menu Creation Failed... Are your menu and art resources up to date?");
  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(v8 + 0x28), 0xFAC);
  a3 = Float;
  Tile_SetFloat(*(Tile **)(v8 + 0x28), (_DWORD *)0xFB7, a3);
  Tile_SetString(*(_DWORD **)(v8 + 0x28), (_DWORD *)0xFDE, word_A36430);
  Tile_SetString(*(_DWORD **)(v8 + 0x34), (_DWORD *)0xFDE, word_A36430);
  EnableMenu((Menu *)v8, a1, st6_0, Float, 0);
  return XML;
}
