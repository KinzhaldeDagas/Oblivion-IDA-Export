BSStringT *__usercall SpellPurchaseMenu_Create@<eax>(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, int a4)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v9; // edi
  TileMenu *v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  double Float; // st7
  int v15; // esi
  float a3; // [esp+14h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40D); /*0x5d9596*/
  if ( OpenMenuTile ) /*0x5d95a0*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5d95aa*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d95bb*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5d95bd*/
  a3 = Depth; /*0x5d95c2*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\dialog\\spell_purchase.xml"); /*0x5d95d3*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5d95d7*/
  v9 = (Menu *)ParentMenu; /*0x5d95dc*/
  if ( !ParentMenu ) /*0x5d95e0*/
    return 0; /*0x5d95e0*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40D ) /*0x5d95f4*/
  {
    if ( v9->members.tile ) /*0x5d970d*/
      v9->__vftable->Destructor(v9, 1); /*0x5d971b*/
    return 0; /*0x5d971f*/
  }
  v10 = (TileMenu *)OblivionDynamicCast( /*0x5d9609*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, a2, Depth, v10); /*0x5d9614*/
  v11 = OblivionDynamicCast( /*0x5d9628*/
          v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SpellPurchaseMenu `RTTI Type Descriptor',
          0);
  v12 = (int)v11; /*0x5d962d*/
  if ( v11[0xA] && v11[0xB] && v11[0xC] && v11[0xD] && v11[0xE] && v11[0xF] && v11[0x10] ) /*0x5d9656*/
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 /*0x5d96a0*/
      || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
    {
      Float = a3; /*0x5d96a2*/
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3); /*0x5d96b1*/
    }
    *(_DWORD *)(v12 + 0x50) = a4; /*0x5d96bd*/
    SpellPurchaseMenu_Update(v12, a1, a2, Float); /*0x5d96c0*/
    EnableMenu(v9, a1, a2, Float, 0); /*0x5d96c9*/
    v15 = TESTopic::GetTopic(5, 1); /*0x5d96e3*/
    sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5d96e5*/
    (*(void (__thiscall **)(int, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)a4 + 0xDC))( /*0x5d9701*/
      a4,
      v15,
      reference,
      1,
      1,
      0);
    return XML; /*0x5d9708*/
  }
  else
  {
    PrintError("Spell Purchase Creation Failed... Are your menu and art resources up to date?"); /*0x5d9661*/
    return 0; /*0x5d966b*/
  }
}
