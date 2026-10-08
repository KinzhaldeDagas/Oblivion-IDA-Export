char __usercall sub_595380@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // edi
  int ParentMenu; // eax
  Menu *v8; // ebx
  TileMenu *v9; // eax
  Tile **v10; // esi
  float *sound; // edi
  double v13; // st7
  float v14; // [esp+4h] [ebp-14h]
  float v15; // [esp+4h] [ebp-14h]
  float v16; // [esp+4h] [ebp-14h]
  float v17; // [esp+4h] [ebp-14h]
  float v18; // [esp+4h] [ebp-14h]
  float v19; // [esp+14h] [ebp-4h]
  _DWORD *v20; // [esp+14h] [ebp-4h]
  _DWORD *v21; // [esp+14h] [ebp-4h]
  _DWORD *v22; // [esp+14h] [ebp-4h]
  _DWORD *v23; // [esp+14h] [ebp-4h]
  _DWORD *v24; // [esp+14h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F9); /*0x595386*/
  if ( OpenMenuTile ) /*0x595390*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x59539a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5953ab*/
  Depth = InterfaceManager_GetDepth(a3); /*0x5953ad*/
  v19 = Depth; /*0x5953b2*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Options\\audio_menu.xml"); /*0x5953c3*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5953c7*/
  v8 = (Menu *)ParentMenu; /*0x5953cc*/
  if ( !ParentMenu ) /*0x5953d0*/
    return 0; /*0x5953d0*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F9 ) /*0x5953e4*/
  {
    if ( v8->members.tile ) /*0x595720*/
      v8->__vftable->Destructor(v8, 1); /*0x59572e*/
    return 0; /*0x595732*/
  }
  sub_58FBA0((int)File, a1, a2, Depth, 0); /*0x5953ee*/
  v9 = (TileMenu *)OblivionDynamicCast( /*0x595402*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, a2, Depth, v9); /*0x59540d*/
  v10 = (Tile **)OblivionDynamicCast( /*0x595426*/
                   v8,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &AudioMenu `RTTI Type Descriptor',
                   0);
  if ( sub_595300(v10) ) /*0x59542d*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x59547a*/
      Tile_SetFloat(File, 0xFABu, v19); /*0x59548b*/
    sound = (float *)MEMORY[0xB33398]->sound; /*0x595496*/
    v20 = (_DWORD *)Double_To_SInt32(sound[0x2E] * fCostant_100); /*0x5954b8*/
    Tile_SetFloat(v10[0xA], 0xFAFu, 0.0); /*0x5954bc*/
    Tile_SetFloat(v10[0xA], 0xFB0u, flt_A2FE7C); /*0x5954d3*/
    Tile_SetFloat(v10[0xA], 0xFB2u, flt_A379CC); /*0x5954ea*/
    v14 = (float)(int)v20; /*0x5954f7*/
    Tile_SetFloat(v10[0xA], 0xFB3u, v14); /*0x5954ff*/
    Tile_SetFloat(v10[0xA], 0xFB3u, 0.0); /*0x595512*/
    v13 = sub_6A8E00(sound); /*0x595519*/
    v21 = (_DWORD *)Double_To_SInt32(v13 * fCostant_100); /*0x595537*/
    Tile_SetFloat(v10[0x12], 0xFAFu, 0.0); /*0x59553b*/
    Tile_SetFloat(v10[0x12], 0xFB0u, flt_A2FE7C); /*0x595552*/
    Tile_SetFloat(v10[0x12], 0xFB2u, flt_A379CC); /*0x595569*/
    v15 = (float)(int)v21; /*0x595576*/
    Tile_SetFloat(v10[0x12], 0xFB3u, v15); /*0x59557e*/
    Tile_SetFloat(v10[0x12], 0xFB3u, 0.0); /*0x595591*/
    v22 = (_DWORD *)Double_To_SInt32(sound[0x2F] * fCostant_100); /*0x5955b5*/
    Tile_SetFloat(v10[0x10], 0xFAFu, 0.0); /*0x5955b9*/
    Tile_SetFloat(v10[0x10], 0xFB0u, flt_A2FE7C); /*0x5955d0*/
    Tile_SetFloat(v10[0x10], 0xFB2u, flt_A379CC); /*0x5955e7*/
    v16 = (float)(int)v22; /*0x5955f4*/
    Tile_SetFloat(v10[0x10], 0xFB3u, v16); /*0x5955fc*/
    Tile_SetFloat(v10[0x10], 0xFB3u, 0.0); /*0x59560f*/
    v23 = (_DWORD *)Double_To_SInt32(sound[0x30] * fCostant_100); /*0x595633*/
    Tile_SetFloat(v10[0xC], 0xFAFu, 0.0); /*0x595637*/
    Tile_SetFloat(v10[0xC], 0xFB0u, flt_A2FE7C); /*0x59564e*/
    Tile_SetFloat(v10[0xC], 0xFB2u, flt_A379CC); /*0x595665*/
    v17 = (float)(int)v23; /*0x595672*/
    Tile_SetFloat(v10[0xC], 0xFB3u, v17); /*0x59567a*/
    Tile_SetFloat(v10[0xC], 0xFB3u, 0.0); /*0x59568d*/
    v24 = (_DWORD *)Double_To_SInt32(sound[0x31] * fCostant_100); /*0x5956b1*/
    Tile_SetFloat(v10[0xE], 0xFAFu, 0.0); /*0x5956b5*/
    Tile_SetFloat(v10[0xE], 0xFB0u, flt_A2FE7C); /*0x5956cc*/
    Tile_SetFloat(v10[0xE], 0xFB2u, flt_A379CC); /*0x5956e3*/
    v18 = (float)(int)v24; /*0x5956f0*/
    Tile_SetFloat(v10[0xE], 0xFB3u, v18); /*0x5956f8*/
    Tile_SetFloat(v10[0xE], 0xFB3u, 0.0); /*0x59570b*/
    EnableMenu(v8, a1, a2, 0.0, 0); /*0x595714*/
    return 1; /*0x59571b*/
  }
  else
  {
    PrintError("Audio Menu Creation Failed... Are your menu and art resources up to date?"); /*0x59543b*/
    return 0; /*0x595445*/
  }
}
