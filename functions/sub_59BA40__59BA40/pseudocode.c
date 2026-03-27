char __usercall sub_59BA40@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  signed int v5; // ebp
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v10; // esi
  TileMenu *v11; // eax
  _DWORD *v12; // ebx
  int v13; // eax
  _DWORD *v14; // ecx
  double v15; // st7
  unsigned int *TileFromTemplate; // eax
  Tile *v17; // esi
  char **v18; // eax
  char *v19; // eax
  double v21; // st7
  float v22; // [esp+4h] [ebp-20h]
  float v23; // [esp+4h] [ebp-20h]
  float Float; // [esp+4h] [ebp-20h]
  float v25; // [esp+4h] [ebp-20h]
  float v26; // [esp+4h] [ebp-20h]
  float v27; // [esp+4h] [ebp-20h]
  float v28; // [esp+18h] [ebp-Ch]
  float v29; // [esp+18h] [ebp-Ch]
  _DWORD *v30; // [esp+18h] [ebp-Ch]
  Menu *v31; // [esp+1Ch] [ebp-8h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FD);
  v5 = 0;
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v28 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\Options\\controls_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  v31 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3FD )
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
  v12 = OblivionDynamicCast(
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ControlsMenu `RTTI Type Descriptor',
          0);
  if ( !sub_59B920(v12) )
    ShowUIMessageBox((char *)sOk, 0, a1, a2, Depth, (const char *)dword_B38EC8, 0, 1, (const char *)sOk, 0);
  v13 = 0;
  v14 = v12 + 0xA;
  do
  {
    if ( !*v14 )
    {
      PrintError("Controls Menu Creation Failed... Are your menu and art resources up to date?");
      return 0;
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 0xD );
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v28);
  v29 = (flt_B14EE8 - dbl_A59B38) / dbl_A6B760 * fCostant_100;
  Tile_SetFloat((Tile *)v12[0xE], (_DWORD *)0xFB3, v29);
  v15 = 0.0;
  Tile_SetFloat((Tile *)v12[0xE], (_DWORD *)0xFB3, 0.0);
  sub_59B640((_DWORD *)v12[0x10], byte_B14F38);
  if ( !OSGlobals->input->numJoysticks )
  {
    v15 = 1.0;
    Tile_SetFloat((Tile *)v12[0x11], (_DWORD *)0xFC9, 1.0);
  }
  v30 = 0;
  do
  {
    if ( sub_59B670(v5) )
    {
      TileFromTemplate = Menu_CreateTileFromTemplate(v12, a1, a2, v15, (TileWindow *)v12[0xD], "controls_template", 0);
      v17 = (Tile *)TileFromTemplate;
      if ( TileFromTemplate )
      {
        v22 = (float)(v5 + 0xE);
        Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, v22);
        v23 = (float)(int)v30;
        Tile_SetFloat(v17, (_DWORD *)0xFAE, v23);
        v18 = *(char ***)(4 * v5 + 0xB399D0);
        v30 = (_DWORD *)((char *)v30 + 1);
        if ( v18 )
          v19 = *v18;
        else
          v19 = 0;
        Tile_SetString(v17, (_DWORD *)0xFAF, v19);
        Float = Tile_GetFloat(XML, 0xFAF);
        Tile_SetFloat(v17, (_DWORD *)0xFCA, Float);
        v25 = Tile_GetFloat(XML, 0xFCC);
        Tile_SetFloat(v17, (_DWORD *)0xFCC, v25);
        v26 = Tile_GetFloat(XML, 0xFCD);
        Tile_SetFloat(v17, (_DWORD *)0xFCD, v26);
        v15 = Tile_GetFloat(XML, 0xFCE);
        v27 = v15;
        Tile_SetFloat(v17, (_DWORD *)0xFCE, v27);
      }
      v10 = v31;
    }
    ++v5;
  }
  while ( v5 < 0x1D );
  Tile_SetFloat((Tile *)v12[0xB], (_DWORD *)0xFB3, flt_A6B618);
  Tile_SetFloat((Tile *)v12[0xB], (_DWORD *)0xFB3, 0.0);
  *((float *)v12 + 0x37) = Tile_GetFloat((_DWORD *)v12[0xB], 0xFB1);
  v21 = Tile_GetFloat((_DWORD *)v12[0xB], 0xFB2);
  *((float *)v12 + 0x38) = v21;
  *((_BYTE *)v12 + 0xD4) = 1;
  EnableMenu(v10, a1, a2, v21, 0);
  return 1;
}
