// [Controller decode 2026-07-09] Opens Controls menu.
char __usercall ControlsMenu_Open@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  signed int v4; // ebp
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // edi
  int ParentMenu; // eax
  Menu *v9; // esi
  TileMenu *v10; // eax
  char *v11; // ebx
  int v12; // eax
  _DWORD *v13; // ecx
  Tile *v14; // eax
  Tile *v15; // esi
  char **v16; // eax
  char *v17; // eax
  double v19; // st7
  float v20; // [esp+4h] [ebp-20h]
  float v21; // [esp+4h] [ebp-20h]
  float Float; // [esp+4h] [ebp-20h]
  float v23; // [esp+4h] [ebp-20h]
  float v24; // [esp+4h] [ebp-20h]
  float v25; // [esp+4h] [ebp-20h]
  float v26; // [esp+18h] [ebp-Ch]
  float v27; // [esp+18h] [ebp-Ch]
  _DWORD *v28; // [esp+18h] [ebp-Ch]
  Menu *v29; // [esp+1Ch] [ebp-8h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FD); /*0x59ba4b*/
  v4 = 0; /*0x59ba50*/
  if ( OpenMenuTile ) /*0x59ba57*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x59ba61*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x59ba6e*/
  Depth = InterfaceManager_GetDepth(a3); /*0x59ba70*/
  v26 = Depth; /*0x59ba75*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Options\\controls_menu.xml"); /*0x59ba86*/
  ParentMenu = Tile_GetParentMenu(File); /*0x59ba8a*/
  v9 = (Menu *)ParentMenu; /*0x59ba8f*/
  v29 = (Menu *)ParentMenu; /*0x59ba93*/
  if ( !ParentMenu ) /*0x59ba97*/
    return 0; /*0x59ba97*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3FD ) /*0x59baab*/
  {
    if ( v9->members.tile ) /*0x59bd68*/
      v9->__vftable->Destructor(v9, 1); /*0x59bd75*/
    return 0; /*0x59bd79*/
  }
  v10 = (TileMenu *)OblivionDynamicCast( /*0x59babf*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, a2, Depth, v10); /*0x59baca*/
  v11 = (char *)OblivionDynamicCast( /*0x59bae1*/
                  v9,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &ControlsMenu `RTTI Type Descriptor',
                  0);
  if ( !ControlsMenu::SelectNextAvailableScheme(v11) ) /*0x59bae8*/
    ShowUIMessageBox( /*0x59bb03*/
      (char *)MEMORY[0xB38CF0].value,
      a1,
      a2,
      Depth,
      (char *)stru_B38EC8.value,
      0,
      1,
      (char *)MEMORY[0xB38CF0].value,
      0);
  v12 = 0; /*0x59bb0b*/
  v13 = v11 + 0x28; /*0x59bb0d*/
  do /*0x59bb21*/
  {
    if ( !*v13 ) /*0x59bb12*/
    {
      PrintError("Controls Menu Creation Failed... Are your menu and art resources up to date?"); /*0x59bc5d*/
      return 0; /*0x59bc6e*/
    }
    ++v12; /*0x59bb18*/
    ++v13; /*0x59bb1b*/
  }
  while ( v12 < 0xD ); /*0x59bb21*/
  if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x59bb53*/
    Tile_SetFloat(File, 0xFABu, v26); /*0x59bb64*/
  v27 = (flt_B14EE8 - dbl_A59B38) / dbl_A6B760 * fCostant_100; /*0x59bb85*/
  Tile_SetFloat(*((Tile **)v11 + 0xE), 0xFB3u, v27); /*0x59bb95*/
  Tile_SetFloat(*((Tile **)v11 + 0xE), 0xFB3u, 0.0); /*0x59bba8*/
  ControlsMenu::SetInvertYButtonLabel(*((_DWORD **)v11 + 0x10), bInvertYValues); /*0x59bbbb*/
  if ( !MEMORY[0xB33398]->input->numJoysticks ) /*0x59bbc9*/
    Tile_SetFloat(*((Tile **)v11 + 0x11), 0xFC9u, 1.0); /*0x59bbdf*/
  v28 = 0; /*0x59bbe4*/
  do /*0x59bcf8*/
  {
    if ( ControlsMenu::ShouldShowControlRow(v4) ) /*0x59bbe9*/
    {
      v14 = Menu::RenderTemplate((Menu *)v11, *((Tile **)v11 + 0xD), "controls_template", 0); /*0x59bc06*/
      v15 = v14; /*0x59bc0b*/
      if ( v14 ) /*0x59bc0f*/
      {
        v20 = (float)(v4 + 0xE); /*0x59bc23*/
        Tile_SetFloat(v14, 0xFA8u, v20); /*0x59bc2b*/
        v21 = (float)(int)v28; /*0x59bc37*/
        Tile_SetFloat(v15, 0xFAEu, v21); /*0x59bc3f*/
        v16 = *(char ***)(4 * v4 + 0xB399D0); /*0x59bc44*/
        v28 = (_DWORD *)((char *)v28 + 1); /*0x59bc4b*/
        if ( v16 ) /*0x59bc52*/
          v17 = *v16; /*0x59bc54*/
        else
          v17 = 0; /*0x59bc6f*/
        Tile_SetString(v15, (_DWORD *)0xFAF, v17); /*0x59bc79*/
        Float = Tile_GetFloat(File, 0xFAF); /*0x59bc8b*/
        Tile_SetFloat(v15, 0xFCAu, Float); /*0x59bc95*/
        v23 = Tile_GetFloat(File, 0xFCC); /*0x59bca7*/
        Tile_SetFloat(v15, 0xFCCu, v23); /*0x59bcb1*/
        v24 = Tile_GetFloat(File, 0xFCD); /*0x59bcc3*/
        Tile_SetFloat(v15, 0xFCDu, v24); /*0x59bccd*/
        v25 = Tile_GetFloat(File, 0xFCE); /*0x59bcdf*/
        Tile_SetFloat(v15, 0xFCEu, v25); /*0x59bce9*/
      }
      v9 = v29; /*0x59bcee*/
    }
    ++v4; /*0x59bcf2*/
  }
  while ( v4 < 0x1D ); /*0x59bcf8*/
  Tile_SetFloat(*((Tile **)v11 + 0xB), 0xFB3u, flt_A6B618); /*0x59bd10*/
  Tile_SetFloat(*((Tile **)v11 + 0xB), 0xFB3u, 0.0); /*0x59bd23*/
  *((float *)v11 + 0x37) = Tile_GetFloat((_DWORD *)*((_DWORD *)v11 + 0xB), 0xFB1); /*0x59bd35*/
  v19 = Tile_GetFloat((_DWORD *)*((_DWORD *)v11 + 0xB), 0xFB2); /*0x59bd43*/
  *((float *)v11 + 0x38) = v19; /*0x59bd48*/
  v11[0xD4] = 1; /*0x59bd52*/
  EnableMenu(v9, a1, a2, v19, 0); /*0x59bd59*/
  return 1; /*0x59bc66*/
}
