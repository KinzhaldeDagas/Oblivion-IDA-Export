char __usercall LevelUpMenu_Open@<al>(double a1@<st2>, double st6_0@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // ebp
  double Depth; // st7
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v8; // ebx
  TileMenu *v9; // eax
  TileWindow **v10; // edi
  double v11; // st7
  char *Icon; // eax
  char *Description; // eax
  Actor *v14; // ecx
  unsigned __int16 Level; // ax
  char *sound; // ebp
  double v17; // st7
  float a2; // [esp+4h] [ebp-2Ch]
  BSStringT v20; // [esp+1Ch] [ebp-14h] BYREF
  int v21; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x403); /*0x5ace4c*/
  if ( OpenMenuTile ) /*0x5ace56*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5ace60*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5ace6e*/
  Depth = InterfaceManager_GetDepth(a3); /*0x5ace70*/
  *(float *)&v20.m_data = Depth; /*0x5ace75*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, st6_0, Depth, "Data\\Menus\\levelup_menu.xml"); /*0x5ace86*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5ace8a*/
  v8 = (Menu *)ParentMenu; /*0x5ace8f*/
  if ( !ParentMenu ) /*0x5ace93*/
    return 0; /*0x5ace93*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x403 ) /*0x5acea7*/
  {
    if ( v8->members.tile ) /*0x5ad0a1*/
      v8->__vftable->Destructor(v8, 1); /*0x5ad0af*/
    return 0; /*0x5ad0af*/
  }
  v9 = (TileMenu *)OblivionDynamicCast( /*0x5acebc*/
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, st6_0, Depth, v9); /*0x5acec7*/
  v10 = (TileWindow **)OblivionDynamicCast( /*0x5acee0*/
                         v8,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &LevelUpMenu `RTTI Type Descriptor',
                         0);
  if ( !v10[0xA] ) /*0x5acee5*/
  {
    PrintError("Level Up  Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5acef0*/
    return 0; /*0x5ad0b1*/
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5acf2d*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, *(float *)&v20.m_data); /*0x5acf3e*/
  v11 = (double)(LOBYTE(Singleton->unk008[0]) != 1); /*0x5acf50*/
  a2 = v11; /*0x5acf57*/
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a2); /*0x5acf5f*/
  Icon = (char *)ActorValue_GetIcon(0); /*0x5acf67*/
  Tile_SetString(XML, (_DWORD *)0xFB2, Icon); /*0x5acf77*/
  Description = (char *)ActorValue_GetDescription(0); /*0x5acf7d*/
  Tile_SetString(XML, (_DWORD *)0xFB3, Description); /*0x5acf8d*/
  sub_5AC990(); /*0x5acf94*/
  v20.m_data = 0; /*0x5acf99*/
  *(_DWORD *)&v20.m_dataLen = 0; /*0x5acf9d*/
  v14 = (Actor *)reference; /*0x5acfa7*/
  v21 = 0; /*0x5acfad*/
  Level = Actor_GetLevel(v14); /*0x5acfb1*/
  BSStringT_Static_Format(&v20, "%s %i", *(const char **)stru_B382F8, Level + 1); /*0x5acfce*/
  Tile_SetString(XML, (_DWORD *)0xFB1, v20.m_data); /*0x5acfe2*/
  v10[0xB] = (TileWindow *)3; /*0x5acfe9*/
  LevelUpMenu_CreateAttributeRows(v10, v11); /*0x5acff0*/
  sound = (char *)MEMORY[0xB33398]->sound; /*0x5acffb*/
  if ( sound ) /*0x5ad000*/
  {
    SoundManager_OpenMusicFile(sound, 8, ".\\Data\\Music\\Special\\success.mp3", 0); /*0x5ad00d*/
    SoundManager_PlayMusic((int)sound, (int)v10); /*0x5ad014*/
  }
  sub_57DE50(0x16); /*0x5ad01b*/
  EnableMenu(v8, a1, st6_0, v11, 0); /*0x5ad027*/
  v17 = fConstant_2; /*0x5ad02c*/
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, fConstant_2); /*0x5ad03d*/
  if ( !v10[0xB] ) /*0x5ad042*/
  {
    ShowUIMessageBox( /*0x5ad05e*/
      (char *)stru_B383C0,
      a1,
      st6_0,
      v17,
      (char *)stru_B383C0,
      (int)sub_5ACB40,
      1,
      (char *)MEMORY[0xB38CF0],
      0);
    v8->members.fadeState = 4; /*0x5ad072*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, 1.0); /*0x5ad079*/
  }
  FormHeapFree((unsigned int)v20.m_data); /*0x5ad083*/
  return 1; /*0x5ad08d*/
}
