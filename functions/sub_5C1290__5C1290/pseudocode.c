char __usercall sub_5C1290@<al>(
        double a1@<st2>,
        double st6_0@<st1>,
        double a3@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>)
{
  InterfaceManager *Singleton; // ebp
  double Depth; // st7
  Tile *File; // edi
  Menu *ParentMenu; // esi
  TileMenu *v12; // eax
  Tile **v13; // ebx
  double v14; // st7
  float a2; // [esp+0h] [ebp-18h]
  float v16; // [esp+14h] [ebp-4h]

  if ( Menu_GetOpenMenuTile(0x416) ) /*0x5c1296*/
    return 1; /*0x5c12a5*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5c12b5*/
  Depth = InterfaceManager_GetDepth(a3); /*0x5c12b7*/
  v16 = Depth; /*0x5c12bc*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Main\\quickkeys_menu.xml"); /*0x5c12cd*/
  ParentMenu = (Menu *)Tile_GetParentMenu(File); /*0x5c12d6*/
  if ( !ParentMenu ) /*0x5c12da*/
    return 0; /*0x5c12da*/
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x416 ) /*0x5c12ee*/
  {
    if ( ParentMenu->members.tile ) /*0x5c13fa*/
      ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5c1408*/
    return 0; /*0x5c140c*/
  }
  v12 = (TileMenu *)OblivionDynamicCast( /*0x5c1304*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(ParentMenu, st6_0, Depth, v12); /*0x5c130f*/
  v13 = (Tile **)OblivionDynamicCast( /*0x5c1328*/
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &QuickKeysMenu `RTTI Type Descriptor',
                   0);
  if ( sub_5A46B0(v13) ) /*0x5c132f*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5c1387*/
      Tile_SetFloat(File, 0xFABu, v16); /*0x5c1398*/
    a2 = (float)(LOBYTE(Singleton->unk008[0]) != 1); /*0x5c13b1*/
    Tile_SetFloat(File, 0xFAEu, a2); /*0x5c13b9*/
    Tile_SetFloat(v13[0xB], 0xFAFu, 0.0); /*0x5c13cc*/
    Tile_SetFloat(v13[0xB], 0xFA1u, 1.0); /*0x5c13df*/
    v14 = sub_5C1000(a4, a5, a6, a7, a1, 1.0); /*0x5c13e4*/
    EnableMenu(ParentMenu, a1, st6_0, v14, 0); /*0x5c13ed*/
    return 1; /*0x5c13f5*/
  }
  else
  {
    PrintError("Quick Keys Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5c133d*/
    ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5c134d*/
    return 0; /*0x5c1352*/
  }
}
