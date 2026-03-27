BSStringT *__usercall sub_5B6040@<eax>(
        char a1@<bpl>,
        double a2@<st1>,
        double a3@<st0>,
        double a4@<st2>,
        double a5@<st3>)
{
  double (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  double v6; // st7
  double v7; // st7
  _DWORD *v8; // eax
  volatile LONG *v9; // edi
  NiAccumulator *accumulator; // esi
  NiAccumulator **p_accumulator; // ebx
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v16; // esi
  TileMenu *v17; // eax
  Tile **v18; // eax
  Tile **v19; // esi
  Tile *v21; // edi
  DWORD FileVersionInfoSizeA_0; // eax
  DWORD v23; // ebx
  void *v24; // ebp
  double v25; // st7
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  double v29; // st7
  double v30; // st7
  long double v31; // st7
  _DWORD *v32; // eax
  UInt32 v33; // eax
  double v34; // st7
  InterfaceManager *v35; // eax
  double Float; // st7
  int v37; // eax
  double v38; // st7
  float v39; // [esp+10h] [ebp-44h]
  float v40; // [esp+10h] [ebp-44h]
  float v41; // [esp+28h] [ebp-2Ch]
  float v42; // [esp+28h] [ebp-2Ch]
  double v43; // [esp+28h] [ebp-2Ch]
  float v44; // [esp+30h] [ebp-24h]
  DWORD dwHandle; // [esp+34h] [ebp-20h] BYREF
  LPVOID lpBuffer; // [esp+38h] [ebp-1Ch] BYREF
  float v47; // [esp+3Ch] [ebp-18h]
  int v48; // [esp+40h] [ebp-14h]
  unsigned int puLen; // [esp+44h] [ebp-10h] BYREF
  unsigned int v50; // [esp+50h] [ebp-4h]

  OpenMenuTile = (double (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x414);
  if ( OpenMenuTile )
    a3 = (**OpenMenuTile)(OpenMenuTile, 1);
  sub_57CC00(a1, a4, a2, a3);
  v6 = CloseAllMenus(a2, a1, a4, a3);
  v7 = sub_578CF0(a1, a4, a2, v6, a5, 3);
  v8 = (_DWORD *)FormHeapAlloc(0x38u);
  v48 = (int)v8;
  v50 = 0;
  if ( v8 )
    v9 = NiAlphaAccumulator_Constructor(v8);
  else
    v9 = 0;
  accumulator = g_Renderer->member.super.accumulator;
  p_accumulator = &g_Renderer->member.super.accumulator;
  v50 = 0xFFFFFFFF;
  if ( accumulator != (NiAccumulator *)v9 )
  {
    if ( accumulator )
    {
      if ( !InterlockedDecrement((volatile LONG *)accumulator + 1) )
        (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1);
    }
    *p_accumulator = (NiAccumulator *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(v7);
  v41 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a4, a2, Depth, "Data\\Menus\\Options\\main_menu.xml");
  v47 = *(float *)&XML;
  ParentMenu = Tile_GetParentMenu(XML);
  v16 = (Menu *)ParentMenu;
  v48 = ParentMenu;
  if ( ParentMenu )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x414 )
    {
      v17 = (TileMenu *)OblivionDynamicCast(
                          XML,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                          &TileMenu `RTTI Type Descriptor',
                          0);
      Menu_SetTileMenu(v16, a2, Depth, v17);
      v18 = (Tile **)OblivionDynamicCast(
                       v16,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                       &MainMenu `RTTI Type Descriptor',
                       0);
      v19 = v18;
      if ( !v18[0xC] || !v18[0xD] || !v18[0xE] || !v18[0xF] || !v18[0x10] || !v18[0x11] )
      {
        PrintError("Main Menu Creation Failed... Are your menu and art resources up to date?");
        return 0;
      }
      if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v41);
      v21 = sub_58B800(XML, "version");
      FileVersionInfoSizeA_0 = GetFileVersionInfoSizeA_0("Oblivion.EXE", &dwHandle);
      v23 = FileVersionInfoSizeA_0;
      if ( FileVersionInfoSizeA_0 )
      {
        if ( v21 )
        {
          v24 = (void *)FormHeapAlloc(FileVersionInfoSizeA_0);
          GetFileVersionInfoA_0("Oblivion.EXE", dwHandle, v23, v24);
          VerQueryValueA_0(v24, "\\StringFileInfo\\040904b0\\ProductVersion", &lpBuffer, &puLen);
          Tile_SetString(v21, (_DWORD *)0xFDE, (char *)lpBuffer);
          FormHeapFree((unsigned int)v24);
          XML = (BSStringT *)LODWORD(v47);
        }
      }
      if ( byte_B3B408 )
        v25 = 1.0;
      else
        v25 = fConstant_2;
      v39 = v25;
      Tile_SetFloat(v19[0x11], (_DWORD *)0xFA1, v39);
      sub_58FBA0((int)XML, a4, a2, v25, 0);
      if ( (double)nHeight / (double)nWidth != dbl_A31C70 )
      {
        v27 = *((_DWORD *)v19[0x11] + 9);
        v28 = *(_DWORD *)(v27 + 0x58);
        v42 = *(float *)(v27 + 0x54) - dbl_A6B808;
        v29 = *(float *)(v27 + 0x5C);
        *(float *)(v27 + 0x54) = v42;
        v30 = v29 + dbl_A6CBA0;
        *(_DWORD *)(v27 + 0x58) = v28;
        v44 = v30;
        v31 = dbl_A6CB98;
        *(float *)(v27 + 0x5C) = v44;
        v47 = fabs(v31);
        *(float *)(v27 + 0x60) = v47;
        NiAVObject_UpdateNiAVObject((NiAVObject *)v27, 0.0, 0);
      }
      sub_45D450(SaveLoad_CurrentSavegame, v26);
      v32 = (_DWORD *)SaveLoad_CurrentSavegame[1].unk01C[0];
      if ( v32 && *v32 )
      {
        Tile_SetFloat(v19[0xA], (_DWORD *)0xFA1, fConstant_2);
        InterfaceManager_GetSingleton(0, 1);
        v33 = sub_5966F0(1);
        sub_57D300(v19[0xA], (Tile *)0xFF0, v33);
        v34 = 1.0;
      }
      else
      {
        Tile_SetFloat(v19[0xA], (_DWORD *)0xFA1, 1.0);
        InterfaceManager_GetSingleton(0, 1);
        v35 = InterfaceManager_GetSingleton(0, 1);
        v34 = (double)(int)++v35->unk08C;
        if ( (int)v35->unk08C < 0 )
          v34 = v34 + flt_A2FC78;
      }
      v40 = v34;
      Tile_SetFloat(v19[0xC], (_DWORD *)0xFF0, v40);
      if ( v21 )
      {
        Float = Tile_GetFloat(v21, 0xFD2);
        v37 = *((_DWORD *)v21 + 9);
        v47 = Float / fCostant_100;
        v38 = v47;
        v47 = fabs(v47);
        *(float *)(v37 + 0x60) = v47;
        a2 = 1.0;
        v43 = 1.0 / v38;
        v47 = Tile_GetFloat(v21, 0xFAD) * v43;
        Tile_SetFloat(v21, (_DWORD *)0xFAD, v47);
        v47 = Tile_GetFloat(v21, 0xFAC) * v43;
        v34 = v47;
        Tile_SetFloat(v21, (_DWORD *)0xFAC, v47);
      }
      sub_58FBA0((int)XML, a4, a2, v34, 0);
      EnableMenu((Menu *)v48, a4, a2, v34, 0);
    }
    else if ( v16->members.tile )
    {
      v16->__vftable->Destructor(v16, 1);
    }
  }
  return XML;
}
