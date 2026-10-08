char __usercall sub_5A3540@<al>(double a1@<st1>, double a2@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // edi
  int ParentMenu; // eax
  Menu *v8; // ebx
  TileMenu *v9; // eax
  Tile **v10; // esi
  double v12; // st5
  double v13; // st6
  Tile *v14; // ecx
  Tile *v15; // ecx
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]
  float v19; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FC); /*0x5a3548*/
  if ( OpenMenuTile ) /*0x5a3552*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5a355c*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a356d*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5a356f*/
  v16 = Depth; /*0x5a3574*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Options\\gameplay_menu.xml"); /*0x5a3585*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5a3589*/
  v8 = (Menu *)ParentMenu; /*0x5a358e*/
  if ( !ParentMenu ) /*0x5a3592*/
    return 0; /*0x5a3592*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3FC ) /*0x5a35a6*/
  {
    if ( v8->members.tile ) /*0x5a37f1*/
      v8->__vftable->Destructor(v8, 1); /*0x5a37ff*/
    return 0; /*0x5a3803*/
  }
  v9 = (TileMenu *)OblivionDynamicCast( /*0x5a35bb*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, a1, Depth, v9); /*0x5a35c6*/
  v10 = (Tile **)OblivionDynamicCast( /*0x5a35df*/
                   v8,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &GameplayMenu `RTTI Type Descriptor',
                   0);
  if ( sub_5A3340(v10) ) /*0x5a35e6*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5a3635*/
      Tile_SetFloat(File, 0xFABu, v16); /*0x5a3646*/
    v12 = MEMORY[0xB37A58][0x46]; /*0x5a365b*/
    v13 = MEMORY[0xB37A58][0x48] - v12; /*0x5a365f*/
    v17 = v13; /*0x5a3661*/
    Tile_SetFloat(v10[0xA], 0xFAFu, MEMORY[0xB37A58][0x46]); /*0x5a366d*/
    Tile_SetFloat(v10[0xA], 0xFB0u, MEMORY[0xB37A58][0x48]); /*0x5a3684*/
    v18 = v17 / fCostant_100; /*0x5a3697*/
    Tile_SetFloat(v10[0xA], 0xFB1u, v18); /*0x5a36a7*/
    v19 = v17 * dbl_A3C770; /*0x5a36ba*/
    Tile_SetFloat(v10[0xA], 0xFB2u, v19); /*0x5a36ca*/
    Tile_SetFloat(v10[0xA], 0xFB3u, reference->gameDifficultyLevel); /*0x5a36e7*/
    Tile_SetFloat(v10[0xA], 0xFB3u, 0.0); /*0x5a36fa*/
    v14 = v10[0xD]; /*0x5a3706*/
    if ( byte_B13200 ) /*0x5a36ff*/
      Tile_SetString(v14, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0].value); /*0x5a3712*/
    else
      Tile_SetString(v14, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8].value); /*0x5a371f*/
    if ( byte_B13208 ) /*0x5a3724*/
      Tile_SetString(v10[0xC], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0].value); /*0x5a3734*/
    else
      Tile_SetString(v10[0xC], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8].value); /*0x5a3745*/
    if ( byte_B13210 ) /*0x5a374a*/
      Tile_SetString(v10[0xE], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0].value); /*0x5a3759*/
    else
      Tile_SetString(v10[0xE], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8].value); /*0x5a376a*/
    v15 = v10[0xF]; /*0x5a3776*/
    if ( byte_B13218 ) /*0x5a376f*/
      Tile_SetString(v15, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0].value); /*0x5a3782*/
    else
      Tile_SetString(v15, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8].value); /*0x5a378f*/
    if ( byte_B13220 ) /*0x5a3794*/
      Tile_SetString(v10[0x10], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0].value); /*0x5a37a4*/
    else
      Tile_SetString(v10[0x10], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8].value); /*0x5a37b5*/
    if ( byte_B13228 ) /*0x5a37ba*/
      Tile_SetString(v10[0x11], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0].value); /*0x5a37c9*/
    else
      Tile_SetString(v10[0x11], (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8].value); /*0x5a37da*/
    EnableMenu(v8, v12, v13, 0.0, 0); /*0x5a37e3*/
    return 1; /*0x5a37ea*/
  }
  else
  {
    PrintError("Gameplay Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5a35f4*/
    return 0; /*0x5a35fe*/
  }
}
