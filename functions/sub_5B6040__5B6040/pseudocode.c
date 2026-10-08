BSStringT *__usercall MainMenu_Open@<eax>(
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

  OpenMenuTile = (double (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x414); /*0x5b606c*/
  if ( OpenMenuTile ) /*0x5b6076*/
    a3 = (**OpenMenuTile)(OpenMenuTile, 1); /*0x5b6080*/
  sub_57CC00(a1, a4, a2, a3); /*0x5b6082*/
  v6 = CloseAllMenus(a2, a1, a4, a3); /*0x5b6087*/
  v7 = sub_578CF0(a1, a4, a2, v6, a5, 3); /*0x5b608e*/
  v8 = (_DWORD *)FormHeapAlloc(0x38u); /*0x5b6095*/
  v48 = (int)v8; /*0x5b609d*/
  v50 = 0; /*0x5b60a3*/
  if ( v8 ) /*0x5b60ab*/
    v9 = NiAlphaAccumulator_Constructor(v8); /*0x5b60b4*/
  else
    v9 = 0; /*0x5b60b8*/
  accumulator = renderer->member.super.accumulator; /*0x5b60c0*/
  p_accumulator = &renderer->member.super.accumulator; /*0x5b60c3*/
  v50 = 0xFFFFFFFF; /*0x5b60c8*/
  if ( accumulator != (NiAccumulator *)v9 ) /*0x5b60d0*/
  {
    if ( accumulator ) /*0x5b60d4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)accumulator + 1) ) /*0x5b60da*/
        (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1); /*0x5b60f0*/
    }
    *p_accumulator = (NiAccumulator *)v9; /*0x5b60f4*/
    if ( v9 ) /*0x5b60f6*/
      InterlockedIncrement(v9 + 1); /*0x5b60fc*/
  }
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b610e*/
  Depth = InterfaceManager_GetDepth(v7); /*0x5b6110*/
  v41 = Depth; /*0x5b6115*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a4, a2, Depth, "Data\\Menus\\Options\\main_menu.xml"); /*0x5b6126*/
  v47 = *(float *)&XML; /*0x5b612a*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5b612e*/
  v16 = (Menu *)ParentMenu; /*0x5b6133*/
  v48 = ParentMenu; /*0x5b6137*/
  if ( ParentMenu ) /*0x5b613b*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x414 ) /*0x5b614f*/
    {
      v17 = (TileMenu *)OblivionDynamicCast( /*0x5b6164*/
                          XML,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                          &TileMenu `RTTI Type Descriptor',
                          0);
      Menu_SetTileMenu(v16, a2, Depth, v17); /*0x5b616f*/
      v18 = (Tile **)OblivionDynamicCast( /*0x5b6183*/
                       v16,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                       &MainMenu `RTTI Type Descriptor',
                       0);
      v19 = v18; /*0x5b6188*/
      if ( !v18[0xC] || !v18[0xD] || !v18[0xE] || !v18[0xF] || !v18[0x10] || !v18[0x11] ) /*0x5b61ab*/
      {
        PrintError("Main Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5b61b6*/
        return 0; /*0x5b61d3*/
      }
      if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5b6204*/
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v41); /*0x5b6215*/
      v21 = Tile::GetTileByName(XML, "version"); /*0x5b6232*/
      FileVersionInfoSizeA_0 = GetFileVersionInfoSizeA_0("Oblivion.EXE", &dwHandle); /*0x5b6234*/
      v23 = FileVersionInfoSizeA_0; /*0x5b6239*/
      if ( FileVersionInfoSizeA_0 ) /*0x5b623d*/
      {
        if ( v21 ) /*0x5b6241*/
        {
          v24 = (void *)FormHeapAlloc(FileVersionInfoSizeA_0); /*0x5b6250*/
          GetFileVersionInfoA_0("Oblivion.EXE", dwHandle, v23, v24); /*0x5b625a*/
          VerQueryValueA_0(v24, "\\StringFileInfo\\040904b0\\ProductVersion", &lpBuffer, &puLen); /*0x5b626f*/
          Tile_SetString(v21, (_DWORD *)0xFDE, (char *)lpBuffer); /*0x5b6280*/
          FormHeapFree((unsigned int)v24); /*0x5b6286*/
          XML = (BSStringT *)LODWORD(v47); /*0x5b628b*/
        }
      }
      if ( unk_B3B408 ) /*0x5b6292*/
        v25 = 1.0; /*0x5b629f*/
      else
        v25 = fConstant_2; /*0x5b62a3*/
      v39 = v25; /*0x5b62a9*/
      Tile_SetFloat(v19[0x11], (_DWORD *)0xFA1, v39); /*0x5b62b1*/
      sub_58FBA0((int)XML, a4, a2, v25, 0); /*0x5b62ba*/
      if ( (double)nHeight / (double)nWidth != dbl_A31C70 ) /*0x5b62d6*/
      {
        v27 = *((_DWORD *)v19[0x11] + 9); /*0x5b62db*/
        v28 = *(_DWORD *)(v27 + 0x58); /*0x5b62e1*/
        v42 = *(float *)(v27 + 0x54) - dbl_A6B808; /*0x5b62fb*/
        v29 = *(float *)(v27 + 0x5C); /*0x5b6303*/
        *(float *)(v27 + 0x54) = v42; /*0x5b6307*/
        v30 = v29 + dbl_A6CBA0; /*0x5b630a*/
        *(_DWORD *)(v27 + 0x58) = v28; /*0x5b6310*/
        v44 = v30; /*0x5b6314*/
        v31 = dbl_A6CB98; /*0x5b631c*/
        *(float *)(v27 + 0x5C) = v44; /*0x5b6322*/
        v47 = fabs(v31); /*0x5b6327*/
        *(float *)(v27 + 0x60) = v47; /*0x5b632f*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)v27, 0.0, 0); /*0x5b6337*/
      }
      TESSaveLoadGame_EnumerateSaveFiles(g_TESSaveLoadGame, v26);// Main menu enumerates the complete save set here. CharacterSpecificSaves intentionally leaves this call unfiltered so every character remains selectable at startup. /*0x5b6342*/
      v32 = (_DWORD *)g_TESSaveLoadGame[1].unk01C[0]; /*0x5b634d*/
      if ( v32 && *v32 ) /*0x5b6354*/
      {
        Tile_SetFloat(v19[0xA], (_DWORD *)0xFA1, fConstant_2); /*0x5b636b*/
        InterfaceManager_GetSingleton(0, 1); /*0x5b6374*/
        v33 = sub_5966F0(1); /*0x5b637b*/
        sub_57D300(v19[0xA], (Tile *)0xFF0, v33); /*0x5b638c*/
        v34 = 1.0; /*0x5b6391*/
      }
      else
      {
        Tile_SetFloat(v19[0xA], (_DWORD *)0xFA1, 1.0); /*0x5b63a4*/
        InterfaceManager_GetSingleton(0, 1); /*0x5b63ad*/
        v35 = InterfaceManager_GetSingleton(0, 1); /*0x5b63b6*/
        v34 = (double)(int)++v35->unk08C; /*0x5b63c2*/
        if ( (int)v35->unk08C < 0 ) /*0x5b63d5*/
          v34 = v34 + flt_A2FC78; /*0x5b63d7*/
      }
      v40 = v34; /*0x5b63e3*/
      Tile_SetFloat(v19[0xC], (_DWORD *)0xFF0, v40); /*0x5b63eb*/
      if ( v21 ) /*0x5b63f2*/
      {
        Float = Tile_GetFloat(v21, 0xFD2); /*0x5b63ff*/
        v37 = *((_DWORD *)v21 + 9); /*0x5b640a*/
        v47 = Float / fCostant_100; /*0x5b6414*/
        v38 = v47; /*0x5b6418*/
        v47 = fabs(v47); /*0x5b6420*/
        *(float *)(v37 + 0x60) = v47; /*0x5b6428*/
        a2 = 1.0; /*0x5b642b*/
        v43 = 1.0 / v38; /*0x5b642f*/
        v47 = Tile_GetFloat(v21, 0xFAD) * v43; /*0x5b643f*/
        Tile_SetFloat(v21, (_DWORD *)0xFAD, v47); /*0x5b644f*/
        v47 = Tile_GetFloat(v21, 0xFAC) * v43; /*0x5b6467*/
        v34 = v47; /*0x5b646b*/
        Tile_SetFloat(v21, (_DWORD *)0xFAC, v47); /*0x5b6477*/
      }
      sub_58FBA0((int)XML, a4, a2, v34, 0); /*0x5b6480*/
      EnableMenu((Menu *)v48, a4, a2, v34, 0); /*0x5b648b*/
    }
    else if ( v16->members.tile ) /*0x5b6492*/
    {
      v16->__vftable->Destructor(v16, 1); /*0x5b64a0*/
    }
  }
  return XML; /*0x5b61c0*/
}
