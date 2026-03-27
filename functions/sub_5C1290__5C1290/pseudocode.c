char __usercall sub_5C1290@<al>(double a1@<st2>, double st6_0@<st1>, double a3@<st0>)
{
  InterfaceManager *Singleton; // ebp
  double Depth; // st7
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  TileMenu *v10; // eax
  Tile **v11; // ebx
  float a2; // [esp+0h] [ebp-18h]
  float v13; // [esp+14h] [ebp-4h]

  if ( Menu_GetOpenMenuTile(0x416) )
    return 1;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v13 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, st6_0, Depth, "Data\\Menus\\Main\\quickkeys_menu.xml");
  ParentMenu = (Menu *)Tile_GetParentMenu(XML);
  if ( !ParentMenu )
    return 0;
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x416 )
  {
    if ( ParentMenu->members.tile )
      ParentMenu->__vftable->Destructor(ParentMenu, 1);
    return 0;
  }
  v10 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(ParentMenu, st6_0, Depth, v10);
  v11 = (Tile **)OblivionDynamicCast(
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &QuickKeysMenu `RTTI Type Descriptor',
                   0);
  if ( sub_5A46B0(v11) )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v13);
    a2 = (float)(LOBYTE(Singleton->unk008[0]) != 1);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a2);
    Tile_SetFloat(v11[0xB], (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v11[0xB], (_DWORD *)0xFA1, 1.0);
    sub_5C1000(st6_0);
    EnableMenu(ParentMenu, a1, st6_0, 1.0, 0);
    return 1;
  }
  else
  {
    PrintError("Quick Keys Menu Creation Failed... Are your menu and art resources up to date?");
    ParentMenu->__vftable->Destructor(ParentMenu, 1);
    return 0;
  }
}
