BSStringT *__usercall sub_5A4840@<eax>(double a1@<st0>, double a2@<st1>)
{
  void (__thiscall ***v4)(_DWORD, int); // ecx
  InterfaceManager *Singleton; // ebx
  double Depth; // st5
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  TileMenu *v9; // eax
  _DWORD *v10; // eax
  double Float; // st7
  float a3; // [esp+14h] [ebp-4h]

  if ( g_HUDInfoMenu )
  {
    v4 = *(void (__thiscall ****)(_DWORD, int))(g_HUDInfoMenu + 4);
    if ( v4 )
      (**v4)(v4, 1);
  }
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a1);
  a3 = a1;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, Depth, a2, a1, "Data\\Menus\\Main\\hud_info_menu.xml");
  ParentMenu = (Menu *)Tile_GetParentMenu(XML);
  if ( !ParentMenu )
    return 0;
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x3ED )
  {
    if ( ParentMenu->members.tile )
      ParentMenu->__vftable->Destructor(ParentMenu, 1);
    return 0;
  }
  v9 = (TileMenu *)OblivionDynamicCast(
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(ParentMenu, a2, a1, v9);
  v10 = OblivionDynamicCast(
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &HUDInfoMenu `RTTI Type Descriptor',
          0);
  if ( !sub_5A46B0(v10) )
    sub_404EC0("HUD-Info Menu Creation Failed... Are your menu and art resources up to date?");
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
  Float = Tile_GetFloat(XML, 0xFAF);
  Singleton->unk008[2] = Double_To_SInt32(Float);
  EnableMenu(ParentMenu, Depth, a2, Float, 0);
  return XML;
}
