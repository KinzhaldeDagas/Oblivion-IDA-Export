BSStringT *__usercall MagicMenu_Create@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // esi
  Menu *ParentMenu; // edi
  TileMenu *v8; // eax
  int *v9; // eax
  int *v10; // ebx
  char v12; // al
  float v13; // [esp+14h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FE); /*0x5b3766*/
  if ( OpenMenuTile ) /*0x5b3770*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5b377a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b378a*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5b378c*/
  v13 = Depth; /*0x5b3791*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, a3, Depth, "Data\\Menus\\Main\\magic_menu.xml"); /*0x5b37a2*/
  ParentMenu = (Menu *)Tile_GetParentMenu(XML); /*0x5b37ab*/
  sub_584670("Data\\Menus\\Main\\magic_menu.xml", (int)ParentMenu); /*0x5b37b3*/
  if ( !ParentMenu ) /*0x5b37bd*/
    return 0; /*0x5b37bd*/
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x3FE ) /*0x5b37d1*/
  {
    if ( ParentMenu->members.tile ) /*0x5b396f*/
      ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5b397d*/
    return 0; /*0x5b3980*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x5b37e7*/
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(ParentMenu, a3, Depth, v8); /*0x5b37f2*/
  v9 = (int *)OblivionDynamicCast( /*0x5b3806*/
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &MagicMenu `RTTI Type Descriptor',
                0);
  v10 = v9; /*0x5b380b*/
  if ( v9[0xB] && v9[0xA] && v9[0xC] && v9[0xD] ) /*0x5b3822*/
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5b386c*/
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v13); /*0x5b387d*/
    Tile_SetFloat((Tile *)v10[0xC], (_DWORD *)0xFB3, 0.0); /*0x5b3890*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAF, flt_A53954); /*0x5b38a6*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB0, flt_A53954); /*0x5b38bc*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, flt_A53954); /*0x5b38d2*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, flt_A53954); /*0x5b38e8*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB3, 0.0); /*0x5b38fa*/
    Tile_SetString(XML, (_DWORD *)0xFB4, word_A36430); /*0x5b390b*/
    sub_5B2B70(a1, a3); /*0x5b3910*/
    v12 = InterfaceManager_GetSingleton(0, 1)->unk008[1]; /*0x5b391e*/
    if ( v12 != (char)0xFF ) /*0x5b3926*/
      sub_5B2060(v10, a1, 0.0, a3, v12, 0); /*0x5b3930*/
    Tile_SetFloat((Tile *)v10[0xC], (_DWORD *)0xFB3, flt_A6B328); /*0x5b3947*/
    Tile_SetFloat((Tile *)v10[0xC], (_DWORD *)0xFB3, 0.0); /*0x5b395a*/
    EnableMenu(ParentMenu, a1, a3, 0.0, 1); /*0x5b3963*/
    return XML; /*0x5b396a*/
  }
  else
  {
    PrintError("Magic Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5b382d*/
    return 0; /*0x5b3837*/
  }
}
