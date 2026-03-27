char __usercall sub_5ACE20@<al>(double a1@<st2>, double st6_0@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // ebp
  double Depth; // st7
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v9; // ebx
  TileMenu *v10; // eax
  TileWindow **v11; // edi
  double v12; // st7
  char *Icon; // eax
  char *Description; // eax
  Actor *v15; // ecx
  unsigned __int16 Level; // ax
  const char *sound; // ebp
  double v18; // st7
  float a2; // [esp+4h] [ebp-2Ch]
  int v21; // [esp+8h] [ebp-28h]
  BSStringT v22; // [esp+1Ch] [ebp-14h] BYREF
  int v23; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x403);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  *(float *)&v22.m_data = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, st6_0, Depth, "Data\\Menus\\levelup_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v9 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x403 )
  {
    if ( v9->members.tile )
      v9->__vftable->Destructor(v9, 1);
    return 0;
  }
  v10 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, st6_0, Depth, v10);
  v11 = (TileWindow **)OblivionDynamicCast(
                         v9,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &LevelUpMenu `RTTI Type Descriptor',
                         0);
  if ( !v11[0xA] )
  {
    PrintError("Level Up  Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, *(float *)&v22.m_data);
  v12 = (double)(LOBYTE(Singleton->unk008[0]) != 1);
  a2 = v12;
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a2);
  Icon = (char *)ActorValue_GetIcon(0);
  Tile_SetString(XML, (_DWORD *)0xFB2, Icon);
  Description = (char *)ActorValue_GetDescription(0);
  Tile_SetString(XML, (_DWORD *)0xFB3, Description);
  sub_5AC990();
  v22.m_data = 0;
  *(_DWORD *)&v22.m_dataLen = 0;
  v15 = (Actor *)TESDataHandler_g_PlayerRef;
  v23 = 0;
  Level = Actor_GetLevel(v15, v21);
  BSStringT_Static_Format(&v22, "%s %i", *(const char **)dword_B382F8, Level + 1);
  Tile_SetString(XML, (_DWORD *)0xFB1, v22.m_data);
  v11[0xB] = (TileWindow *)3;
  sub_5ACB60(v11, a1, st6_0, v12);
  sound = (const char *)OSGlobals->sound;
  if ( sound )
  {
    SoundManager_OpenMusicFile(sound, 8, (int)".\\Data\\Music\\Special\\success.mp3", 0);
    SoundManager_PlayMusic((int)sound, (int)v11);
  }
  sub_57DE50(0x16);
  EnableMenu(v9, a1, st6_0, v12, 0);
  v18 = fConstant_2;
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, fConstant_2);
  if ( !v11[0xB] )
  {
    ShowUIMessageBox(
      (char *)dword_B383C0,
      (char)sound,
      a1,
      st6_0,
      v18,
      (const char *)dword_B383C0,
      (int)sub_5ACB40,
      1,
      (const char *)sOk,
      0);
    v9->members.unk24 = 4;
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, 1.0);
  }
  FormHeapFree((unsigned int)v22.m_data);
  return 1;
}
