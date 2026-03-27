char __usercall sub_595380@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v10; // ebx
  TileMenu *v11; // eax
  Tile **v12; // esi
  float *sound; // edi
  double v15; // st7
  float v16; // [esp+4h] [ebp-14h]
  float v17; // [esp+4h] [ebp-14h]
  float v18; // [esp+4h] [ebp-14h]
  float v19; // [esp+4h] [ebp-14h]
  float v20; // [esp+4h] [ebp-14h]
  float v21; // [esp+14h] [ebp-4h]
  _DWORD *v22; // [esp+14h] [ebp-4h]
  _DWORD *v23; // [esp+14h] [ebp-4h]
  _DWORD *v24; // [esp+14h] [ebp-4h]
  _DWORD *v25; // [esp+14h] [ebp-4h]
  _DWORD *v26; // [esp+14h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F9);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v21 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\Options\\audio_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F9 )
  {
    if ( v10->members.tile )
      v10->__vftable->Destructor(v10, 1);
    return 0;
  }
  sub_58FBA0((int)XML, a1, a2, Depth, 0);
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
                   &AudioMenu `RTTI Type Descriptor',
                   0);
  if ( sub_595300(v12) )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v21);
    sound = (float *)OSGlobals->sound;
    v22 = (_DWORD *)Double_To_SInt32(sound[0x2E] * fCostant_100);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB0, flt_A2FE7C);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB2, flt_A379CC);
    v16 = (float)(int)v22;
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB3, v16);
    Tile_SetFloat(v12[0xA], (_DWORD *)0xFB3, 0.0);
    v15 = sub_6A8E00(sound);
    v23 = (_DWORD *)Double_To_SInt32(v15 * fCostant_100);
    Tile_SetFloat(v12[0x12], (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v12[0x12], (_DWORD *)0xFB0, flt_A2FE7C);
    Tile_SetFloat(v12[0x12], (_DWORD *)0xFB2, flt_A379CC);
    v17 = (float)(int)v23;
    Tile_SetFloat(v12[0x12], (_DWORD *)0xFB3, v17);
    Tile_SetFloat(v12[0x12], (_DWORD *)0xFB3, 0.0);
    v24 = (_DWORD *)Double_To_SInt32(sound[0x2F] * fCostant_100);
    Tile_SetFloat(v12[0x10], (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v12[0x10], (_DWORD *)0xFB0, flt_A2FE7C);
    Tile_SetFloat(v12[0x10], (_DWORD *)0xFB2, flt_A379CC);
    v18 = (float)(int)v24;
    Tile_SetFloat(v12[0x10], (_DWORD *)0xFB3, v18);
    Tile_SetFloat(v12[0x10], (_DWORD *)0xFB3, 0.0);
    v25 = (_DWORD *)Double_To_SInt32(sound[0x30] * fCostant_100);
    Tile_SetFloat(v12[0xC], (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v12[0xC], (_DWORD *)0xFB0, flt_A2FE7C);
    Tile_SetFloat(v12[0xC], (_DWORD *)0xFB2, flt_A379CC);
    v19 = (float)(int)v25;
    Tile_SetFloat(v12[0xC], (_DWORD *)0xFB3, v19);
    Tile_SetFloat(v12[0xC], (_DWORD *)0xFB3, 0.0);
    v26 = (_DWORD *)Double_To_SInt32(sound[0x31] * fCostant_100);
    Tile_SetFloat(v12[0xE], (_DWORD *)0xFAF, 0.0);
    Tile_SetFloat(v12[0xE], (_DWORD *)0xFB0, flt_A2FE7C);
    Tile_SetFloat(v12[0xE], (_DWORD *)0xFB2, flt_A379CC);
    v20 = (float)(int)v26;
    Tile_SetFloat(v12[0xE], (_DWORD *)0xFB3, v20);
    Tile_SetFloat(v12[0xE], (_DWORD *)0xFB3, 0.0);
    EnableMenu(v10, a1, a2, 0.0, 0);
    return 1;
  }
  else
  {
    PrintError("Audio Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
