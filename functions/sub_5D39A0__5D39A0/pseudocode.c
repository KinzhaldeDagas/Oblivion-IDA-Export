BSStringT *__usercall SaveMenu_Open@<eax>(
        double a1@<st7>,
        double a2@<st6>,
        double st2_0@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v13; // esi
  TileMenu *v14; // eax
  _DWORD *v15; // ebx
  double Float; // st7
  int v17; // edx
  int *v18; // esi
  int v19; // ebp
  signed int v20; // edi
  int *v21; // eax
  Menu *v23; // [esp+18h] [ebp-13Ch]
  BSStringT *v24; // [esp+1Ch] [ebp-138h]
  float a3; // [esp+20h] [ebp-134h]
  char v26[300]; // [esp+24h] [ebp-130h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40F); /*0x5d39b9*/
  if ( OpenMenuTile ) /*0x5d39c3*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5d39cd*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d39dd*/
  Depth = InterfaceManager_GetDepth(a8); /*0x5d39df*/
  a3 = Depth; /*0x5d39e4*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a6, a7, Depth, "Data\\Menus\\Options\\save_menu.xml"); /*0x5d39f5*/
  v24 = XML; /*0x5d39f9*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5d39fd*/
  v13 = (Menu *)ParentMenu; /*0x5d3a02*/
  v23 = (Menu *)ParentMenu; /*0x5d3a06*/
  if ( !ParentMenu ) /*0x5d3a0a*/
    return 0; /*0x5d3a0a*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40F ) /*0x5d3a1e*/
  {
    if ( v13->members.tile ) /*0x5d3b3d*/
      v13->__vftable->Destructor(v13, 1); /*0x5d3b4b*/
    return 0; /*0x5d3b58*/
  }
  v14 = (TileMenu *)OblivionDynamicCast( /*0x5d3a35*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v13, a7, Depth, v14); /*0x5d3a40*/
  v15 = OblivionDynamicCast( /*0x5d3a63*/
          v13,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SaveMenu `RTTI Type Descriptor',
          0);
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 /*0x5d3a8e*/
    || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
  {
    Float = a3; /*0x5d3a90*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3); /*0x5d3a9f*/
  }
  sub_45E6A0(); /*0x5d3aaa*/
  SaveMenu_AddSaveRow(v15, a1, a2, st2_0, a4, a5, a6, a7, Float, (char *)stru_B38708, 0, 0, 0); /*0x5d3abe*/
  TESSaveLoadGame_EnumerateSaveFiles(g_TESSaveLoadGame, v17);// Save-menu enumeration call site hooked by CharacterSpecificSaves; filtered before row construction. /*0x5d3ac9*/
  v18 = (int *)g_TESSaveLoadGame[1].unk01C[0]; /*0x5d3ad4*/
  v19 = 0; /*0x5d3ad7*/
  v15[0x13] = v18; /*0x5d3adb*/
  v20 = 1; /*0x5d3ade*/
  v21 = v18; /*0x5d3ae3*/
  if ( v18 ) /*0x5d3ae5*/
  {
    do /*0x5d3af4*/
    {
      if ( *v21 ) /*0x5d3ae7*/
        ++v19; /*0x5d3aec*/
      v21 = (int *)v21[1]; /*0x5d3aef*/
    }
    while ( v21 ); /*0x5d3af4*/
    do /*0x5d3b13*/
    {
      if ( !*v18 ) /*0x5d3af6*/
        break; /*0x5d3afa*/
      SaveMenu_AddSaveRow(v15, a1, a2, st2_0, a4, a5, a6, a7, Float, v26, v20, *v18, v19); /*0x5d3b06*/
      v18 = (int *)v18[1]; /*0x5d3b0b*/
      ++v20; /*0x5d3b0e*/
    }
    while ( v18 ); /*0x5d3b13*/
  }
  EnableMenu(v23, a6, a7, Float, 0); /*0x5d3b1b*/
  return v24; /*0x5d3b28*/
}
