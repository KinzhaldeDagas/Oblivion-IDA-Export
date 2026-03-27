char __usercall sub_5A3540@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v10; // ebx
  TileMenu *v11; // eax
  Tile **v12; // esi
  double v14; // st5
  double v15; // st6
  Tile *v16; // ecx
  Tile *v17; // ecx
  float v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+14h] [ebp-8h]
  float v20; // [esp+18h] [ebp-4h]
  float v21; // [esp+18h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FC);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v18 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\Options\\gameplay_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3FC )
  {
    if ( v10->members.tile )
      v10->__vftable->Destructor(v10, 1);
    return 0;
  }
  v11 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v10, a2, Depth, v11);
  v12 = (Tile **)OblivionDynamicCast(
                   v10,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &GameplayMenu `RTTI Type Descriptor',
                   0);
  if ( sub_5A3340(v12) )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v18);
    v14 = fDifficultyMinValue;
    v15 = fDifficultyMaxValue - v14;
    v19 = v15;
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFAF, fDifficultyMinValue);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB0, fDifficultyMaxValue);
    v20 = v19 / fCostant_100;
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB1, v20);
    v21 = v19 * dbl_A3C770;
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB2, v21);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB3, TESDataHandler_g_PlayerRef->gameDifficultyLevel);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB3, 0.0);
    v16 = v12[0xD];
    if ( byte_B13200 )
      Tile_SetString(v16, (_DWORD *)0xFDE, (char *)sOnButtonText);
    else
      Tile_SetString(v16, (_DWORD *)0xFDE, (char *)sOffButtonText);
    if ( byte_B13208 )
      Tile_SetString(v12[0xC], (_DWORD *)0xFDE, (char *)sOnButtonText);
    else
      Tile_SetString(v12[0xC], (_DWORD *)0xFDE, (char *)sOffButtonText);
    if ( byte_B13210 )
      Tile_SetString(v12[0xE], (_DWORD *)0xFDE, (char *)sOnButtonText);
    else
      Tile_SetString(v12[0xE], (_DWORD *)0xFDE, (char *)sOffButtonText);
    v17 = v12[0xF];
    if ( byte_B13218 )
      Tile_SetString(v17, (_DWORD *)0xFDE, (char *)sOnButtonText);
    else
      Tile_SetString(v17, (_DWORD *)0xFDE, (char *)sOffButtonText);
    if ( byte_B13220 )
      Tile_SetString(v12[0x10], (_DWORD *)0xFDE, (char *)sOnButtonText);
    else
      Tile_SetString(v12[0x10], (_DWORD *)0xFDE, (char *)sOffButtonText);
    if ( byte_B13228 )
      Tile_SetString(v12[0x11], (_DWORD *)0xFDE, (char *)sOnButtonText);
    else
      Tile_SetString(v12[0x11], (_DWORD *)0xFDE, (char *)sOffButtonText);
    EnableMenu(v10, v14, v15, 0.0, 0);
    return 1;
  }
  else
  {
    PrintError("Gameplay Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
