BSStringT *__usercall EnchMenu_Create@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  Menu *v8; // esi
  TileMenu *v9; // eax
  _DWORD *v10; // edi
  double (__thiscall ***v11)(_DWORD, _DWORD); // ecx
  double (__thiscall *v12)(_DWORD, _DWORD); // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  char *m_data; // ebp
  BSStringT v18; // [esp+1Ch] [ebp-14h] BYREF
  int v19; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x412); /*0x5a1eec*/
  if ( OpenMenuTile ) /*0x5a1ef8*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5a1f02*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a1f0f*/
  Depth = InterfaceManager_GetDepth(a3); /*0x5a1f11*/
  *(float *)&v18.m_data = Depth; /*0x5a1f16*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\dialog\\Enchantment.xml"); /*0x5a1f27*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5a1f2b*/
  v8 = (Menu *)ParentMenu; /*0x5a1f30*/
  if ( !ParentMenu ) /*0x5a1f34*/
    return 0; /*0x5a1f34*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x412 ) /*0x5a1f48*/
  {
    if ( v8->members.tile ) /*0x5a209a*/
      v8->__vftable->Destructor(v8, 1); /*0x5a20a7*/
    return 0; /*0x5a20a7*/
  }
  sub_57DE50(0xF); /*0x5a1f50*/
  v9 = (TileMenu *)OblivionDynamicCast( /*0x5a1f62*/
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, a2, Depth, v9); /*0x5a1f6d*/
  v10 = OblivionDynamicCast( /*0x5a1f84*/
          v8,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &EnchantmentMenu `RTTI Type Descriptor',
          0);
  if ( !sub_5A17B0(v10) ) /*0x5a1f8b*/
  {
    PrintError("Enchantment Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5a1f99*/
    return 0; /*0x5a20a9*/
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5a1fd6*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, *(float *)&v18.m_data); /*0x5a1fe7*/
  unk_B3B718 = 0; /*0x5a1fec*/
  v18.m_data = 0; /*0x5a1ff2*/
  v18.m_dataLen = 0; /*0x5a1ff6*/
  v18.m_bufLen = 0; /*0x5a1ffb*/
  v11 = (double (__thiscall ***)(_DWORD, _DWORD))(v10[0xA] + 0x24); /*0x5a2006*/
  v12 = **v11; /*0x5a2009*/
  v19 = 0; /*0x5a200c*/
  v13 = v12(v11, 0) * flt_B37ED0[0x46]; /*0x5a2012*/
  v14 = Double_To_SInt32(v13); /*0x5a2018*/
  BSStringT_Static_Format(&v18, "%d", v14); /*0x5a2028*/
  Tile_SetString((_DWORD *)v10[0x12], (_DWORD *)0xFDE, v18.m_data); /*0x5a203d*/
  v15 = sub_5E4420((Actor *)reference); /*0x5a2048*/
  BSStringT_Static_Format(&v18, "%d", v15); /*0x5a2058*/
  m_data = v18.m_data; /*0x5a205d*/
  Tile_SetString((_DWORD *)v10[0x13], (_DWORD *)0xFDE, v18.m_data); /*0x5a206d*/
  EnableMenu(v8, a1, a2, v13, 0); /*0x5a2076*/
  FormHeapFree((unsigned int)m_data); /*0x5a207c*/
  return XML; /*0x5a2086*/
}
