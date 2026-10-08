char __usercall sub_5DEB80@<al>(double a1@<st2>, double st6_0@<st1>, double st7_0@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  unsigned int v4; // ebx
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v9; // esi
  TileMenu *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v15; // eax
  bool v16; // zf
  _DWORD *v17; // ecx
  _DWORD *v18; // ebp
  _DWORD *v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // edi
  _DWORD *v22; // eax
  double v23; // st7
  char v24; // dl
  _DWORD *v25; // ecx
  _DWORD *v26; // esi
  float a2; // [esp+24h] [ebp-34h]
  float a2a; // [esp+24h] [ebp-34h]
  float a2b; // [esp+24h] [ebp-34h]
  float a2c; // [esp+24h] [ebp-34h]
  float a2d; // [esp+24h] [ebp-34h]
  float a2e; // [esp+24h] [ebp-34h]
  _DWORD *v33; // [esp+28h] [ebp-30h]
  float v34; // [esp+38h] [ebp-20h]
  _DWORD *v35; // [esp+38h] [ebp-20h]
  Menu *v36; // [esp+3Ch] [ebp-1Ch]
  _DWORD a3[2]; // [esp+40h] [ebp-18h] BYREF
  int v38; // [esp+48h] [ebp-10h] BYREF
  int v39; // [esp+4Ch] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FA); /*0x5deb8b*/
  v4 = 0; /*0x5deb90*/
  if ( OpenMenuTile ) /*0x5deb97*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5deba1*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5debae*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5debb0*/
  v34 = Depth; /*0x5debb5*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, st6_0, Depth, "Data\\Menus\\Options\\video_menu.xml"); /*0x5debc6*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5debca*/
  v9 = (Menu *)ParentMenu; /*0x5debcf*/
  v36 = (Menu *)ParentMenu; /*0x5debd3*/
  if ( !ParentMenu ) /*0x5debd7*/
    return 0; /*0x5debd7*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3FA ) /*0x5debeb*/
  {
    if ( v9->members.tile ) /*0x5df143*/
      v9->__vftable->Destructor(v9, 1); /*0x5df150*/
    return 0; /*0x5df154*/
  }
  v10 = (TileMenu *)OblivionDynamicCast( /*0x5debfe*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, st6_0, Depth, v10); /*0x5dec09*/
  v11 = OblivionDynamicCast( /*0x5dec20*/
          v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &VideoMenu `RTTI Type Descriptor',
          0);
  v12 = 0; /*0x5dec25*/
  v13 = v11 + 0xA; /*0x5dec27*/
  do /*0x5dec41*/
  {
    if ( !*v13 ) /*0x5dec32*/
    {
      PrintError("Video Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5dedce*/
      return 0; /*0x5dedde*/
    }
    ++v12; /*0x5dec38*/
    ++v13; /*0x5dec3b*/
  }
  while ( v12 < 0x30 ); /*0x5dec41*/
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5dec73*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v34); /*0x5dec84*/
  *((_BYTE *)v11 + 0x115) = 1; /*0x5dec89*/
  if ( !byte_B06CB4 ) /*0x5dec90*/
  {
    g_bDoStaticAndArchShadowsSetting = 0;       // Display master-disable path clears the native caster-category mask. /*0x5dec98*/
    g_bDoActorShadowsSetting = 0; /*0x5dec9e*/
  }
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x12], OB_RendererGlobalState_010201A0[0x1DE]); /*0x5decb2*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x13], g_bShadowSourceAsReceiverSetting); /*0x5decc5*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x1E], byte_B06F14); /*0x5decd8*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x14], byte_B06CBC); /*0x5deceb*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x2F], bIsHDR); /*0x5ded01*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x31], byte_B07060); /*0x5ded17*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x27], bDisplayLODBuildings); /*0x5ded2d*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x28], bDisplayLODTrees); /*0x5ded43*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x32], byte_B07090); /*0x5ded59*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x33], OB_RendererGlobalState_010201A0[0x214]); /*0x5ded6f*/
  ControlsMenu::SetInvertYButtonLabel((_DWORD *)v11[0x38], bUseBlurShader); /*0x5ded85*/
  sub_5DE9C0((Tile **)v11, OB_RendererGlobalState_010201A0[0x1DE]); /*0x5ded94*/
  v11[0x3B] = LODWORD(MEMORY[0xB3F9B0][0x9AB]); /*0x5deda0*/
  if ( g_fDecalLifetime_Display <= 0.0 ) /*0x5dedb1*/
    v11[0x3C] = 0; /*0x5deddf*/
  else
    v11[0x3C] = (g_bDecalsOnSkinnedGeometry_Display != 0) + 1; /*0x5dedc1*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 5 ) /*0x5dedec*/
  {
    if ( dword_B06F2C == 2 ) /*0x5dee14*/
      v11[0x3D] = 2; /*0x5dee16*/
    else
      v11[0x3D] = dword_B06F2C == 1; /*0x5dee26*/
  }
  else
  {
    Tile_SetFloat((Tile *)v11[0x39], (_DWORD *)0xFAF, 1.0); /*0x5dedff*/
    v11[0x3D] = 0; /*0x5dee04*/
  }
  v11[0x3E] = bUseWaterHiRes != 0; /*0x5dee39*/
  v33 = iMultiSample <= 1 ? 0 : (_DWORD *)iMultiSample;
  v11[0x3F] = v33; /*0x5dee50*/
  if ( !sub_497D50((int)v33) ) /*0x5dee56*/
    v11[0x3F] = 0; /*0x5dee62*/
  sub_5DE920(v11); /*0x5dee6b*/
  v35 = (_DWORD *)(*(int (__stdcall **)(int, int, int))(*(_DWORD *)g_Direct3D9 + 0x18))(g_Direct3D9, dword_B06C54, 0x16); /*0x5dee88*/
  if ( v35 ) /*0x5dee8c*/
  {
    do /*0x5def03*/
    {
      (*(void (__stdcall **)(int, int, int, unsigned int, int *))(*(_DWORD *)g_Direct3D9 + 0x1C))( /*0x5deeaa*/
        g_Direct3D9,
        dword_B06C54,
        0x16,
        v4,
        &v38);
      v15 = (_DWORD *)v11[0x41]; /*0x5deeac*/
      a3[0] = v38; /*0x5deebc*/
      a3[1] = v39; /*0x5deec0*/
      if ( v15 ) /*0x5deec4*/
      {
        while ( 1 ) /*0x5deec6*/
        {
          v16 = v38 == v15[2]; /*0x5deec6*/
          v17 = v15 + 2; /*0x5deec9*/
          v15 = (_DWORD *)*v15; /*0x5deece*/
          if ( v16 && v39 == v17[1] ) /*0x5deed5*/
            break; /*0x5deed5*/
          if ( !v15 ) /*0x5deed9*/
            goto LABEL_31; /*0x5deed9*/
        }
      }
      else
      {
LABEL_31:
        if ( (unsigned int)(v38 * v39) >= 0x4B000 ) /*0x5deeea*/
          sub_5DEA80(v11 + 0x40, a3); /*0x5deef7*/
      }
      ++v4; /*0x5deefc*/
    }
    while ( v4 < (unsigned int)v35 ); /*0x5def03*/
  }
  v18 = (_DWORD *)v11[0x41]; /*0x5def05*/
  v19 = v18; /*0x5def17*/
  if ( v18 ) /*0x5def1b*/
  {
    while ( 1 ) /*0x5def20*/
    {
      v16 = nWidth == v19[2]; /*0x5def20*/
      v20 = v19 + 2; /*0x5def23*/
      v21 = v19; /*0x5def26*/
      v19 = (_DWORD *)*v19; /*0x5def28*/
      if ( v16 && nHeight == v20[1] ) /*0x5def2f*/
        break; /*0x5def2f*/
      if ( !v19 ) /*0x5def37*/
        goto LABEL_38; /*0x5def37*/
    }
    v22 = v21; /*0x5df13c*/
  }
  else
  {
LABEL_38:
    v22 = 0; /*0x5def39*/
  }
  v11[0x44] = v22; /*0x5def3d*/
  if ( !v22 ) /*0x5def43*/
    v11[0x44] = v18; /*0x5def45*/
  sub_5DEAD0(v11); /*0x5def4d*/
  a2 = (float)dword_B1487C; /*0x5def5f*/
  Tile_SetFloat((Tile *)v11[0x29], (_DWORD *)0xFAF, a2); /*0x5def67*/
  a2a = (float)dword_B14884; /*0x5def79*/
  Tile_SetFloat((Tile *)v11[0x29], (_DWORD *)0xFB0, a2a); /*0x5def81*/
  Tile_SetFloat((Tile *)v11[0x29], (_DWORD *)0xFB1, 1.0); /*0x5def97*/
  a2b = (float)((dword_B14884 - dword_B1487C) / 4); /*0x5defbf*/
  Tile_SetFloat((Tile *)v11[0x29], (_DWORD *)0xFB2, a2b); /*0x5defc7*/
  a2c = (float)dword_B1486C; /*0x5defd9*/
  Tile_SetFloat((Tile *)v11[0x2B], (_DWORD *)0xFAF, a2c); /*0x5defe1*/
  a2d = (float)dword_B14874; /*0x5deff3*/
  Tile_SetFloat((Tile *)v11[0x2B], (_DWORD *)0xFB0, a2d); /*0x5deffb*/
  Tile_SetFloat((Tile *)v11[0x2B], (_DWORD *)0xFB1, 1.0); /*0x5df011*/
  a2e = (float)((dword_B14874 - dword_B1486C) / 4); /*0x5df039*/
  Tile_SetFloat((Tile *)v11[0x2B], (_DWORD *)0xFB2, a2e); /*0x5df041*/
  if ( !MEMORY[0xB33E90][0x1115] ) /*0x5df046*/
    Tile_SetFloat((Tile *)v11[0xE], (_DWORD *)0xFBB, 1.0); /*0x5df05e*/
  sub_5DE2E0((int)v11); /*0x5df065*/
  Tile_SetFloat((Tile *)v11[0xB], (_DWORD *)0xFB3, flt_A6B328); /*0x5df07c*/
  v23 = 0.0; /*0x5df081*/
  Tile_SetFloat((Tile *)v11[0xB], (_DWORD *)0xFB3, 0.0); /*0x5df08f*/
  v24 = bDisplayLODLand; /*0x5df094*/
  unk_B3B740 = 0; /*0x5df09a*/
  *((_BYTE *)v11 + 0x114) = v24; /*0x5df0a1*/
  v16 = bDoImageSpaceEffect == 0; /*0x5df0a7*/
  LOWORD(dword_B3B744[0]) = 0; /*0x5df0ae*/
  if ( v16 || !MEMORY[0xB33E90][0x1246] ) /*0x5df0b9*/
  {
    v23 = 1.0; /*0x5df0c2*/
    Tile_SetFloat((Tile *)v11[0x2F], (_DWORD *)0xFAF, 1.0); /*0x5df0d3*/
    v25 = (_DWORD *)v11[0x2F]; /*0x5df0d8*/
    if ( v25 ) /*0x5df0e0*/
      Tile_SetString(v25, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8]); /*0x5df0ed*/
  }
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 5 ) /*0x5df0f9*/
  {
    v23 = 1.0; /*0x5df0fb*/
    Tile_SetFloat((Tile *)v11[0x1E], (_DWORD *)0xFAF, 1.0); /*0x5df109*/
    v26 = (_DWORD *)v11[0x1E]; /*0x5df10e*/
    if ( v26 ) /*0x5df113*/
      Tile_SetString(v26, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8]); /*0x5df123*/
  }
  EnableMenu(v36, a1, st6_0, v23, 0); /*0x5df12e*/
  return 1; /*0x5dedd6*/
}
