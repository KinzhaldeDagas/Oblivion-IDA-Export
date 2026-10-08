BSStringT *__usercall BookMenu_Create@<eax>(double st5_0@<st2>, double a2@<st0>, double st6_0@<st1>, int a4, Tile *a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  UInt32 (__thiscall *GetID)(Menu *); // eax
  TileMenu *v13; // eax
  Tile **v14; // eax
  Tile **v15; // ebx
  double Float; // st7
  float a3; // [esp+1Ch] [ebp+4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x402); /*0x5962c5*/
  if ( OpenMenuTile ) /*0x5962cf*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5962d9*/
  if ( !a4 ) /*0x5962e2*/
    return 0; /*0x5962e4*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5962f6*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5962f8*/
  a3 = Depth; /*0x5962fd*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\book_menu.xml"); /*0x59630e*/
  ParentMenu = (Menu *)Tile_GetParentMenu(XML); /*0x596317*/
  GetID = ParentMenu->__vftable->GetID; /*0x59631b*/
  ParentMenu[1].members.templateNext = a4; /*0x596320*/
  if ( GetID(ParentMenu) == 0x402 ) /*0x59632a*/
  {
    v13 = (TileMenu *)OblivionDynamicCast( /*0x596340*/
                        XML,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &TileMenu `RTTI Type Descriptor',
                        0);
    Menu_SetTileMenu(ParentMenu, st6_0, Depth, v13); /*0x59634b*/
    v14 = (Tile **)OblivionDynamicCast( /*0x59635f*/
                     ParentMenu,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                     &BookMenu `RTTI Type Descriptor',
                     0);
    v15 = v14; /*0x596364*/
    if ( v14[0xA] && v14[0xB] ) /*0x59636f*/
    {
      if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 /*0x5963b9*/
        || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
      {
        Float = a3; /*0x5963bb*/
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3); /*0x5963ca*/
      }
      sub_596020(v15, a4, a5); /*0x5963d7*/
      if ( (*((_BYTE *)v15[0xD] + 0x88) & 1) != 0 ) /*0x5963e6*/
        sub_57DE50(0x19); /*0x5963ea*/
      else
        sub_57DE50(0x1B); /*0x5963ee*/
      EnableMenu(ParentMenu, st5_0, st6_0, Float, 0); /*0x5963fa*/
      return XML; /*0x596400*/
    }
    else
    {
      PrintError("Book Menu Creation Failed... Are your menu and art resources up to date?"); /*0x59637a*/
      return 0; /*0x596385*/
    }
  }
  else
  {
    if ( ParentMenu->members.tile ) /*0x596406*/
      ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x596414*/
    return 0; /*0x596418*/
  }
}
