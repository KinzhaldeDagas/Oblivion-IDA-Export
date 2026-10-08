BSStringT *__usercall sub_5CE840@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // edi
  int ParentMenu; // eax
  Menu *v8; // esi
  TileMenu *v9; // eax
  Menu *v10; // eax
  Menu *v11; // esi
  float v13; // [esp+10h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x419); /*0x5ce846*/
  if ( OpenMenuTile ) /*0x5ce850*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5ce85a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5ce86a*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5ce86c*/
  v13 = Depth; /*0x5ce871*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\recharge_menu.xml"); /*0x5ce882*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5ce886*/
  v8 = (Menu *)ParentMenu; /*0x5ce88b*/
  if ( !ParentMenu ) /*0x5ce88f*/
    return 0; /*0x5ce88f*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x419 ) /*0x5ce8a3*/
  {
    if ( v8->members.tile ) /*0x5ce991*/
      v8->__vftable->Destructor(v8, 1); /*0x5ce99f*/
    return 0; /*0x5ce9a2*/
  }
  v9 = (TileMenu *)OblivionDynamicCast( /*0x5ce8b8*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, a3, Depth, v9); /*0x5ce8c3*/
  v10 = (Menu *)OblivionDynamicCast( /*0x5ce8d7*/
                  v8,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &RechargeMenu `RTTI Type Descriptor',
                  0);
  v11 = v10; /*0x5ce8dc*/
  if ( v10[1].__vftable /*0x5ce8f9*/
    && v10[1].members.tile
    && v10[1].members.templateHead
    && v10[1].members.templateNext
    && v10[1].members.templateContextTile )
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5ce942*/
      Tile_SetFloat(File, 0xFABu, v13); /*0x5ce953*/
    Tile_SetFloat((Tile *)v11[1].members.templateHead, 0xFB7u, flt_A6906C); /*0x5ce96a*/
    Tile_SetFloat((Tile *)v11[1].members.templateHead, 0xFB7u, 0.0); /*0x5ce97d*/
    EnableMenu(v11, a1, a3, 0.0, 0); /*0x5ce986*/
    return (BSStringT *)File; /*0x5ce98b*/
  }
  else
  {
    PrintError("Recharge Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5ce904*/
    return 0; /*0x5ce90d*/
  }
}
