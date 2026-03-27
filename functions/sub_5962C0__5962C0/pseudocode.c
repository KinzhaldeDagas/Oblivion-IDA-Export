BSStringT *__usercall sub_5962C0@<eax>(double st5_0@<st2>, double a2@<st0>, double st6_0@<st1>, UInt32 a4, Tile *a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  UInt32 (__thiscall *GetID)(Menu *); // eax
  TileMenu *v14; // eax
  Tile **v15; // eax
  Tile **v16; // ebx
  double Float; // st7
  float a3; // [esp+1Ch] [ebp+4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x402);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  if ( !a4 )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a2);
  a3 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\book_menu.xml");
  ParentMenu = (Menu *)Tile_GetParentMenu(XML);
  GetID = ParentMenu->__vftable->GetID;
  ParentMenu[1].members.unk0C = a4;
  if ( GetID(ParentMenu) == 0x402 )
  {
    v14 = (TileMenu *)OblivionDynamicCast(
                        XML,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &TileMenu `RTTI Type Descriptor',
                        0);
    Menu_SetTileMenu(ParentMenu, st6_0, Depth, v14);
    v15 = (Tile **)OblivionDynamicCast(
                     ParentMenu,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                     &BookMenu `RTTI Type Descriptor',
                     0);
    v16 = v15;
    if ( v15[0xA] && v15[0xB] )
    {
      if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
        || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
      {
        Float = a3;
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
      }
      sub_596020(v16, a4, a5);
      if ( (*((_BYTE *)v16[0xD] + 0x88) & 1) != 0 )
        sub_57DE50(0x19);
      else
        sub_57DE50(0x1B);
      EnableMenu(ParentMenu, st5_0, st6_0, Float, 0);
      return XML;
    }
    else
    {
      PrintError("Book Menu Creation Failed... Are your menu and art resources up to date?");
      return 0;
    }
  }
  else
  {
    if ( ParentMenu->members.tile )
      ParentMenu->__vftable->Destructor(ParentMenu, 1);
    return 0;
  }
}
