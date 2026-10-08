char __usercall sub_5BC8B0@<al>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a4,
        int a5,
        char a6,
        char *a7,
        _DWORD *a8)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // edi
  double Depth; // st7
  Tile *File; // esi
  int ParentMenu; // eax
  Menu *v13; // ebx
  TileMenu *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ebp
  Tile *v17; // ecx
  int i; // esi
  char *m_data; // ebx
  Tile *v21; // eax
  Tile *v22; // esi
  _DWORD *v23; // ecx
  double v24; // st7
  float a2; // [esp+4h] [ebp-3Ch]
  float v27; // [esp+1Ch] [ebp-24h]
  int v28; // [esp+1Ch] [ebp-24h]
  Menu *v29; // [esp+20h] [ebp-20h]
  Tile *v30; // [esp+24h] [ebp-1Ch]
  BSStringT v31; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v32; // [esp+3Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3E9); /*0x5bc8dc*/
  if ( OpenMenuTile ) /*0x5bc8e6*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5bc8f0*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bc8fb*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5bc904*/
  v27 = Depth; /*0x5bc909*/
  sub_5903E0(st5_0, Depth, st6_0); /*0x5bc90d*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\message_menu.xml"); /*0x5bc91f*/
  v30 = File; /*0x5bc923*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5bc927*/
  v13 = (Menu *)ParentMenu; /*0x5bc92c*/
  v29 = (Menu *)ParentMenu; /*0x5bc930*/
  if ( !ParentMenu ) /*0x5bc934*/
    return 0; /*0x5bc934*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3E9 ) /*0x5bc948*/
  {
    if ( v13->members.tile ) /*0x5bcbce*/
      v13->__vftable->Destructor(v13, 1); /*0x5bcbdc*/
    return 0; /*0x5bcbdc*/
  }
  v14 = (TileMenu *)OblivionDynamicCast( /*0x5bc95d*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v13, st6_0, Depth, v14); /*0x5bc968*/
  v15 = OblivionDynamicCast( /*0x5bc97c*/
          v13,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &MessageMenu `RTTI Type Descriptor',
          0);
  v16 = v15; /*0x5bc981*/
  if ( !v15[0xB] || !v15[0xC] || !v15[0xA] ) /*0x5bc992*/
  {
    sub_404EC0("Message Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5bc99d*/
    return 0; /*0x5bcbde*/
  }
  if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5bc9da*/
    Tile_SetFloat(File, 0xFABu, v27); /*0x5bc9eb*/
  Singleton->msgBoxButtonPressed = 0xFF; /*0x5bc9fa*/
  v16[0x17] = a5; /*0x5bca01*/
  v17 = (Tile *)v16[0xD]; /*0x5bca04*/
  if ( a7 ) /*0x5bca07*/
  {
    if ( *a7 ) /*0x5bca09*/
      Tile_SetString(v17, (_DWORD *)0xFDE, a7); /*0x5bca14*/
    else
      Tile_SetString(v17, (_DWORD *)0xFDE, (char *)MEMORY[0xB38CF0].value); /*0x5bca27*/
  }
  else
  {
    Tile_SetFloat(v17, 0xFA1u, 1.0); /*0x5bca39*/
  }
  if ( a8 )
  {
    *a8 += 4; /*0x5bca4a*/
    BSStringT_constr_str(&v31, *(char **)(*a8 - 4)); /*0x5bca57*/
    v32 = 0; /*0x5bca5c*/
    for ( i = 4; ; i = v28 )
    {
      m_data = v31.m_data; /*0x5bca79*/
      if ( !(v31.m_dataLen == (__int16)0xFFFF ? strlen(v31.m_data) : (unsigned __int16)v31.m_dataLen) )
        break; /*0x5bca96*/
      v28 = i + 1; /*0x5bca9e*/
      v21 = (Tile *)sub_5BC5E0(v16, i + 1); /*0x5bcaa2*/
      v22 = v21; /*0x5bcaa7*/
      if ( v21 ) /*0x5bcaab*/
      {
        Tile_SetString(v21, (_DWORD *)0xFDE, m_data); /*0x5bcab5*/
        Tile_SetFloat(v22, 0xFA1u, fConstant_2); /*0x5bcacb*/
      }
      else
      {
        sub_404EC0("Missing MessageMenu button"); /*0x5bcad7*/
      }
      *a8 += 4; /*0x5bcadf*/
      BSStringT_Set(&v31, *(const char **)(*a8 - 4), 0); /*0x5bcaee*/
    }
    v32 = 0xFFFFFFFF; /*0x5bcafd*/
    FormHeapFree((unsigned int)v31.m_data); /*0x5bcb05*/
    v13 = v29; /*0x5bcb0a*/
    File = v30; /*0x5bcb0e*/
  }
  v23 = (_DWORD *)v16[0xB]; /*0x5bcb1c*/
  if ( *a4 ) /*0x5bcb19*/
    Tile_SetString(v23, (_DWORD *)0xFDE, a4); /*0x5bcb22*/
  else
    Tile_SetString(v23, (_DWORD *)0xFDE, (char *)MEMORY[0xB38E10].value); /*0x5bcb30*/
  *((_BYTE *)v16 + 0x60) = a6; /*0x5bcb3f*/
  v24 = (double)(LOBYTE(Singleton->unk008[0]) != 1); /*0x5bcb4d*/
  a2 = v24; /*0x5bcb54*/
  Tile_SetFloat(File, 0xFAEu, a2); /*0x5bcb5c*/
  if ( sub_572DF0(2) ) /*0x5bcb69*/
    MenuBackground_CaptureWorldToTexture((NiDX9Renderer *)MEMORY[0xB33398], (int)a8, (int)File); /*0x5bcb78*/
  sub_57DE50(0xB); /*0x5bcb7f*/
  sub_58FBA0((int)File, st5_0, st6_0, v24, 0); /*0x5bcb8b*/
  sub_58FBA0((int)File, st5_0, st6_0, v24, 0); /*0x5bcb94*/
  EnableMenu(v13, st5_0, st6_0, v24, 0); /*0x5bcb9d*/
  Tile_SetFloat(File, 0xFA1u, fConstant_2); /*0x5bcbb3*/
  return 1; /*0x5bcbba*/
}
