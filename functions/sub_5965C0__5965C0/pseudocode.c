BSStringT *__usercall sub_5965C0@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // eax
  Tile *File; // edi
  int ParentMenu; // eax
  Menu *v7; // esi
  TileMenu *v8; // eax

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x415); /*0x5965c5*/
  if ( OpenMenuTile ) /*0x5965cf*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5965d9*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5965e1*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\breath_meter_menu.xml"); /*0x5965f8*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5965fc*/
  v7 = (Menu *)ParentMenu; /*0x596601*/
  if ( !ParentMenu ) /*0x596605*/
    return 0; /*0x596605*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x415 ) /*0x596619*/
  {
    if ( v7->members.tile ) /*0x59668f*/
      v7->__vftable->Destructor(v7, 1); /*0x59669d*/
    return 0; /*0x5966a0*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x59662a*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v7, a3, a2, v8); /*0x596635*/
  if ( *((_DWORD *)OblivionDynamicCast( /*0x596651*/
                     v7,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                     &BreathMenu `RTTI Type Descriptor',
                     0)
       + 0xB) )
  {
    sub_596550(1.0); /*0x596679*/
    sub_58FBA0((int)File, a1, a3, 1.0, 0); /*0x596685*/
    return (BSStringT *)File; /*0x59668a*/
  }
  else
  {
    PrintError("Breath Meter Menu Creation Failed... Are your menu and art resources up to date?"); /*0x59665c*/
    v7->__vftable->Destructor(v7, 1); /*0x59666c*/
    return 0; /*0x59666f*/
  }
}
