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
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v14; // ebx
  TileMenu *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ebp
  Tile *v18; // ecx
  int i; // esi
  char *m_data; // ebx
  Tile *v22; // eax
  Tile *v23; // esi
  _DWORD *v24; // ecx
  double v25; // st7
  float a2; // [esp+4h] [ebp-3Ch]
  float v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+1Ch] [ebp-24h]
  Menu *v30; // [esp+20h] [ebp-20h]
  BSStringT *v31; // [esp+24h] [ebp-1Ch]
  BSStringT v32; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v33; // [esp+3Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3E9);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v28 = Depth;
  sub_5903E0(st5_0, Depth, st6_0);
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\message_menu.xml");
  v31 = XML;
  ParentMenu = Tile_GetParentMenu(XML);
  v14 = (Menu *)ParentMenu;
  v30 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3E9 )
  {
    if ( v14->members.tile )
      v14->__vftable->Destructor(v14, 1);
    return 0;
  }
  v15 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v14, st6_0, Depth, v15);
  v16 = OblivionDynamicCast(
          v14,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &MessageMenu `RTTI Type Descriptor',
          0);
  v17 = v16;
  if ( !v16[0xB] || !v16[0xC] || !v16[0xA] )
  {
    sub_404EC0("Message Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v28);
  Singleton->msgBoxButtonPressed = 0xFF;
  v17[0x17] = a5;
  v18 = (Tile *)v17[0xD];
  if ( a7 )
  {
    if ( *a7 )
      Tile_SetString(v18, (_DWORD *)0xFDE, a7);
    else
      Tile_SetString(v18, (_DWORD *)0xFDE, (char *)sOk);
  }
  else
  {
    Tile_SetFloat(v18, (_DWORD *)0xFA1, 1.0);
  }
  if ( a8 )
  {
    *a8 += 4;
    BSStringT_constr_str(&v32, *(char **)(*a8 - 4));
    v33 = 0;
    for ( i = 4; ; i = v29 )
    {
      m_data = v32.m_data;
      if ( !(v32.m_dataLen == (__int16)0xFFFF ? strlen(v32.m_data) : (unsigned __int16)v32.m_dataLen) )
        break;
      v29 = i + 1;
      v22 = (Tile *)sub_5BC5E0(v17, i + 1);
      v23 = v22;
      if ( v22 )
      {
        Tile_SetString(v22, (_DWORD *)0xFDE, m_data);
        Tile_SetFloat(v23, (_DWORD *)0xFA1, fConstant_2);
      }
      else
      {
        sub_404EC0("Missing MessageMenu button");
      }
      *a8 += 4;
      BSStringT_Set(&v32, *(const char **)(*a8 - 4), 0);
    }
    v33 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)v32.m_data);
    v14 = v30;
    XML = v31;
  }
  v24 = (_DWORD *)v17[0xB];
  if ( *a4 )
    Tile_SetString(v24, (_DWORD *)0xFDE, a4);
  else
    Tile_SetString(v24, (_DWORD *)0xFDE, (char *)sDefaultMessage);
  *((_BYTE *)v17 + 0x60) = a6;
  v25 = (double)(LOBYTE(Singleton->unk008[0]) != 1);
  a2 = v25;
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, a2);
  if ( sub_572DF0(2) )
    sub_40D160((NiDX9Renderer *)OSGlobals, (int)a8, (int)XML);
  sub_57DE50(0xB);
  sub_58FBA0((int)XML, st5_0, st6_0, v25, 0);
  sub_58FBA0((int)XML, st5_0, st6_0, v25, 0);
  EnableMenu(v14, st5_0, st6_0, v25, 0);
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, fConstant_2);
  return 1;
}
