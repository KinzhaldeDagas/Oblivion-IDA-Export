BSStringT *__usercall sub_5965C0@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // eax
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v9; // esi
  TileMenu *v10; // eax

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x415);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a3, a2, "Data\\Menus\\breath_meter_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v9 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x415 )
  {
    if ( v9->members.tile )
      v9->__vftable->Destructor(v9, 1);
    return 0;
  }
  v10 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, a3, a2, v10);
  if ( *((_DWORD *)OblivionDynamicCast(
                     v9,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                     &BreathMenu `RTTI Type Descriptor',
                     0)
       + 0xB) )
  {
    sub_596550(1.0);
    sub_58FBA0((int)XML, a1, a3, 1.0, 0);
    return XML;
  }
  else
  {
    PrintError("Breath Meter Menu Creation Failed... Are your menu and art resources up to date?");
    v9->__vftable->Destructor(v9, 1);
    return 0;
  }
}
