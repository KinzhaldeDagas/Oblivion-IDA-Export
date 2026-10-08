BSStringT *__usercall StatsMenu_Create@<eax>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  TileMenu *v8; // eax
  double Float; // st7
  char v11; // al
  float v12; // [esp+4h] [ebp-10h]
  float v13; // [esp+10h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3EB); /*0x5dcb76*/
  if ( OpenMenuTile ) /*0x5dcb80*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5dcb8a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5dcb9a*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5dcb9c*/
  v13 = Depth; /*0x5dcba1*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, a3, Depth, "Data\\Menus\\Main\\stats_menu.xml"); /*0x5dcbb2*/
  ParentMenu = (Menu *)Tile_GetParentMenu(XML); /*0x5dcbbb*/
  sub_584670("Data\\Menus\\Main\\stats_menu.xml", (int)ParentMenu); /*0x5dcbc3*/
  if ( !ParentMenu ) /*0x5dcbcd*/
    return 0; /*0x5dcbcd*/
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x3EB ) /*0x5dcbe1*/
  {
    if ( ParentMenu->members.tile ) /*0x5dcd53*/
      ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5dcd61*/
    return 0; /*0x5dcd64*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x5dcbf6*/
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(ParentMenu, a3, Depth, v8); /*0x5dcc01*/
  if ( sub_5D9B80(ParentMenu) ) /*0x5dcc08*/
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 /*0x5dcc54*/
      || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
    {
      Float = v13; /*0x5dcc56*/
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v13); /*0x5dcc65*/
    }
    v11 = BYTE2(InterfaceManager_GetSingleton(0, 1)->unk008[0]); /*0x5dcc73*/
    if ( v11 != (char)0xFF ) /*0x5dcc7b*/
    {
      Float = (double)v11; /*0x5dcc87*/
      v12 = Float; /*0x5dcc8b*/
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, v12); /*0x5dcc93*/
    }
    StatsMenu_UpdateAttributesAndSkills((Tile **)ParentMenu, (_DWORD *)0xFFFFFFFF); /*0x5dcc9c*/
    StatsMenu_CreateSkillRows((Tile **)ParentMenu, Float); /*0x5dcca3*/
    sub_5D9CB0(ParentMenu); /*0x5dccaa*/
    sub_5DC950(ParentMenu, a1, a3, Float); /*0x5dccb1*/
    sub_5DBB00(ParentMenu); /*0x5dccb8*/
    Tile_SetFloat((Tile *)ParentMenu[1].members.unk18, (_DWORD *)0xFB3, flt_A6B328); /*0x5dcccf*/
    Tile_SetFloat((Tile *)ParentMenu[1].members.unk18, (_DWORD *)0xFB3, 0.0); /*0x5dcce2*/
    Tile_SetFloat((Tile *)ParentMenu[1].members.id, (_DWORD *)0xFB3, flt_A6B328); /*0x5dccf9*/
    Tile_SetFloat((Tile *)ParentMenu[1].members.id, (_DWORD *)0xFB3, 0.0); /*0x5dcd0c*/
    Tile_SetFloat((Tile *)ParentMenu[2].__vftable, (_DWORD *)0xFB3, flt_A6B328); /*0x5dcd23*/
    Tile_SetFloat((Tile *)ParentMenu[2].__vftable, (_DWORD *)0xFB3, 0.0); /*0x5dcd36*/
    EnableMenu(ParentMenu, a1, a3, 0.0, 1); /*0x5dcd3f*/
    ParentMenu->__vftable->Unk_0B(ParentMenu); /*0x5dcd4b*/
    return XML; /*0x5dcd4d*/
  }
  else
  {
    PrintError("Stats Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5dcc16*/
    return 0; /*0x5dcc1f*/
  }
}
