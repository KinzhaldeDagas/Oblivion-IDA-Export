BSStringT *__usercall sub_5A4840@<eax>(double a1@<st0>, double a2@<st2>)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  InterfaceManager *Singleton; // ebx
  double Depth; // st6
  Tile *File; // edi
  Menu *ParentMenu; // esi
  TileMenu *v8; // eax
  _DWORD *v9; // eax
  double Float; // st7
  float v12; // [esp+14h] [ebp-4h]

  if ( dword_B3B0B4[0xA2] ) /*0x5a4841*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(dword_B3B0B4[0xA2] + 4); /*0x5a484a*/
    if ( v3 ) /*0x5a484f*/
      (**v3)(v3, 1); /*0x5a4857*/
  }
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a4868*/
  Depth = InterfaceManager_GetDepth(a1); /*0x5a486a*/
  v12 = a1; /*0x5a486f*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Main\\hud_info_menu.xml"); /*0x5a4880*/
  ParentMenu = (Menu *)Tile_GetParentMenu(File); /*0x5a4889*/
  if ( !ParentMenu ) /*0x5a488d*/
    return 0; /*0x5a488d*/
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x3ED ) /*0x5a48a1*/
  {
    if ( ParentMenu->members.tile ) /*0x5a495f*/
      ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5a496d*/
    return 0; /*0x5a4971*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x5a48b6*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(ParentMenu, Depth, a1, v8); /*0x5a48c1*/
  v9 = OblivionDynamicCast( /*0x5a48d5*/
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &HUDInfoMenu `RTTI Type Descriptor',
         0);
  if ( !sub_5A46B0(v9) ) /*0x5a48df*/
    sub_404EC0("HUD-Info Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5a48ed*/
  if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5a4925*/
    Tile_SetFloat(File, 0xFABu, v12); /*0x5a4936*/
  Float = Tile_GetFloat(File, 0xFAF); /*0x5a4942*/
  Singleton->unk008[2] = Double_To_SInt32(Float); /*0x5a4950*/
  EnableMenu(ParentMenu, a2, Depth, Float, 0); /*0x5a4953*/
  return (BSStringT *)File; /*0x5a495e*/
}
