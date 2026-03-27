BSStringT *__usercall sub_5D9590@<eax>(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, int a4)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v11; // edi
  TileMenu *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  double Float; // st7
  int v17; // esi
  float a3; // [esp+14h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40D);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  a3 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\dialog\\spell_purchase.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v11 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40D )
  {
    if ( v11->members.tile )
      v11->__vftable->Destructor(v11, 1);
    return 0;
  }
  v12 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v11, a2, Depth, v12);
  v13 = OblivionDynamicCast(
          v11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SpellPurchaseMenu `RTTI Type Descriptor',
          0);
  v14 = (int)v13;
  if ( v13[0xA] && v13[0xB] && v13[0xC] && v13[0xD] && v13[0xE] && v13[0xF] && v13[0x10] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
      || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
    {
      Float = a3;
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
    }
    *(_DWORD *)(v14 + 0x50) = a4;
    SpellPurchaseMenu_Update(v14, a1, a2, Float);
    EnableMenu(v11, a1, a2, Float, 0);
    v17 = TESTopic::GEtTopic(5, 1);
    sub_6AC3D0((_DWORD *)OSGlobals->sound);
    (*(void (__thiscall **)(int, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)a4 + 0xDC))(
      a4,
      v17,
      TESDataHandler_g_PlayerRef,
      1,
      1,
      0);
    return XML;
  }
  else
  {
    PrintError("Spell Purchase Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
