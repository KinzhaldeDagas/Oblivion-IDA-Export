char __usercall sub_5DEB80@<al>(double a1@<st2>, double st6_0@<st1>, double st7_0@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  unsigned int v5; // ebx
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v10; // esi
  TileMenu *v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v16; // eax
  bool v17; // zf
  _DWORD *v18; // ecx
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // edi
  _DWORD *v23; // eax
  double v24; // st7
  char v25; // dl
  _DWORD *v26; // ecx
  _DWORD *v27; // esi
  float a2; // [esp+24h] [ebp-34h]
  float a2a; // [esp+24h] [ebp-34h]
  float a2b; // [esp+24h] [ebp-34h]
  float a2c; // [esp+24h] [ebp-34h]
  float a2d; // [esp+24h] [ebp-34h]
  float a2e; // [esp+24h] [ebp-34h]
  _DWORD *v34; // [esp+28h] [ebp-30h]
  float v35; // [esp+38h] [ebp-20h]
  _DWORD *v36; // [esp+38h] [ebp-20h]
  Menu *v37; // [esp+3Ch] [ebp-1Ch]
  _DWORD a3[2]; // [esp+40h] [ebp-18h] BYREF
  int v39; // [esp+48h] [ebp-10h] BYREF
  int v40; // [esp+4Ch] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3FA);
  v5 = 0;
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v35 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, st6_0, Depth, "Data\\Menus\\Options\\video_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  v37 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3FA )
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
  Menu_SetTileMenu(v10, st6_0, Depth, v11);
  v12 = OblivionDynamicCast(
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &VideoMenu `RTTI Type Descriptor',
          0);
  v13 = 0;
  v14 = v12 + 0xA;
  do
  {
    if ( !*v14 )
    {
      PrintError("Video Menu Creation Failed... Are your menu and art resources up to date?");
      return 0;
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 0x30 );
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v35);
  *((_BYTE *)v12 + 0x115) = 1;
  if ( !byte_B06CB4 )
  {
    DoStaticAndArchShadows = 0;
    byte_B06CEC = 0;
  }
  sub_59B640((_DWORD *)v12[0x12], byte_B43077);
  sub_59B640((_DWORD *)v12[0x13], byte_B06F0C);
  sub_59B640((_DWORD *)v12[0x1E], byte_B06F14);
  sub_59B640((_DWORD *)v12[0x14], byte_B06CBC);
  sub_59B640((_DWORD *)v12[0x2F], bIsHDR);
  sub_59B640((_DWORD *)v12[0x31], byte_B07060);
  sub_59B640((_DWORD *)v12[0x27], byte_B09AE8);
  sub_59B640((_DWORD *)v12[0x28], byte_B09AF0);
  sub_59B640((_DWORD *)v12[0x32], byte_B07090);
  sub_59B640((_DWORD *)v12[0x33], bDynWinRelfections_);
  sub_59B640((_DWORD *)v12[0x38], byte_B06D34);
  sub_5DE9C0((Tile **)v12, byte_B43077);
  v12[0x3B] = textMipmapStuff_;
  if ( flt_B097C8 <= 0.0 )
    v12[0x3C] = 0;
  else
    v12[0x3C] = (byte_B06F5C != 0) + 1;
  if ( ShaderPackage >= 5 )
  {
    if ( dword_B06F2C == 2 )
      v12[0x3D] = 2;
    else
      v12[0x3D] = dword_B06F2C == 1;
  }
  else
  {
    Tile_SetFloat((Tile *)v12[0x39], (_DWORD *)0xFAF, 1.0);
    v12[0x3D] = 0;
  }
  v12[0x3E] = bUseWaterHiRes != 0;
  v34 = iMultiSample <= 1 ? 0 : (_DWORD *)iMultiSample;
  v12[0x3F] = v34;
  if ( !sub_497D50((int)v34) )
    v12[0x3F] = 0;
  sub_5DE920(v12);
  v36 = (_DWORD *)(*(int (__stdcall **)(int, int, int))(*(_DWORD *)dword_B42154 + 0x18))(
                    dword_B42154,
                    dword_B06C54,
                    0x16);
  if ( v36 )
  {
    do
    {
      (*(void (__stdcall **)(int, int, int, unsigned int, int *))(*(_DWORD *)dword_B42154 + 0x1C))(
        dword_B42154,
        dword_B06C54,
        0x16,
        v5,
        &v39);
      v16 = (_DWORD *)v12[0x41];
      a3[0] = v39;
      a3[1] = v40;
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = v39 == v16[2];
          v18 = v16 + 2;
          v16 = (_DWORD *)*v16;
          if ( v17 && v40 == v18[1] )
            break;
          if ( !v16 )
            goto LABEL_31;
        }
      }
      else
      {
LABEL_31:
        if ( (unsigned int)(v39 * v40) >= 0x4B000 )
          sub_5DEA80(v12 + 0x40, a3);
      }
      ++v5;
    }
    while ( v5 < (unsigned int)v36 );
  }
  v19 = (_DWORD *)v12[0x41];
  v20 = v19;
  if ( v19 )
  {
    while ( 1 )
    {
      v17 = nWidth == v20[2];
      v21 = v20 + 2;
      v22 = v20;
      v20 = (_DWORD *)*v20;
      if ( v17 && nHeight == v21[1] )
        break;
      if ( !v20 )
        goto LABEL_38;
    }
    v23 = v22;
  }
  else
  {
LABEL_38:
    v23 = 0;
  }
  v12[0x44] = v23;
  if ( !v23 )
    v12[0x44] = v19;
  sub_5DEAD0(v12);
  a2 = (float)dword_B1487C;
  Tile_SetFloat((Tile *)v12[0x29], (_DWORD *)0xFAF, a2);
  a2a = (float)dword_B14884;
  Tile_SetFloat((Tile *)v12[0x29], (_DWORD *)0xFB0, a2a);
  Tile_SetFloat((Tile *)v12[0x29], (_DWORD *)0xFB1, 1.0);
  a2b = (float)((dword_B14884 - dword_B1487C) / 4);
  Tile_SetFloat((Tile *)v12[0x29], (_DWORD *)0xFB2, a2b);
  a2c = (float)dword_B1486C;
  Tile_SetFloat((Tile *)v12[0x2B], (_DWORD *)0xFAF, a2c);
  a2d = (float)dword_B14874;
  Tile_SetFloat((Tile *)v12[0x2B], (_DWORD *)0xFB0, a2d);
  Tile_SetFloat((Tile *)v12[0x2B], (_DWORD *)0xFB1, 1.0);
  a2e = (float)((dword_B14874 - dword_B1486C) / 4);
  Tile_SetFloat((Tile *)v12[0x2B], (_DWORD *)0xFB2, a2e);
  if ( !byte_B34FA5 )
    Tile_SetFloat((Tile *)v12[0xE], (_DWORD *)0xFBB, 1.0);
  sub_5DE2E0((int)v12);
  Tile_SetFloat((Tile *)v12[0xB], (_DWORD *)0xFB3, flt_A6B328);
  v24 = 0.0;
  Tile_SetFloat((Tile *)v12[0xB], (_DWORD *)0xFB3, 0.0);
  v25 = byte_B02D70;
  byte_B3B740 = 0;
  *((_BYTE *)v12 + 0x114) = v25;
  v17 = bDoImageSpaceEffect == 0;
  LOWORD(dword_B3B744) = 0;
  if ( v17 || !byte_B350D6 )
  {
    v24 = 1.0;
    Tile_SetFloat((Tile *)v12[0x2F], (_DWORD *)0xFAF, 1.0);
    v26 = (_DWORD *)v12[0x2F];
    if ( v26 )
      Tile_SetString(v26, (_DWORD *)0xFDE, (char *)sOffButtonText);
  }
  if ( ShaderPackage < 5 )
  {
    v24 = 1.0;
    Tile_SetFloat((Tile *)v12[0x1E], (_DWORD *)0xFAF, 1.0);
    v27 = (_DWORD *)v12[0x1E];
    if ( v27 )
      Tile_SetString(v27, (_DWORD *)0xFDE, (char *)sOffButtonText);
  }
  EnableMenu(v37, a1, st6_0, v24, 0);
  return 1;
}
