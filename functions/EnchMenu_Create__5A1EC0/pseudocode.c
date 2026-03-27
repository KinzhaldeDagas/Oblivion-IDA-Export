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

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x412);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  *(float *)&v18.m_data = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\dialog\\Enchantment.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v8 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x412 )
  {
    if ( v8->members.tile )
      v8->__vftable->Destructor(v8, 1);
    return 0;
  }
  sub_57DE50(0xF);
  v9 = (TileMenu *)OblivionDynamicCast(
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v8, a2, Depth, v9);
  v10 = OblivionDynamicCast(
          v8,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &EnchantmentMenu `RTTI Type Descriptor',
          0);
  if ( !sub_5A17B0(v10) )
  {
    PrintError("Enchantment Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, *(float *)&v18.m_data);
  dword_B3B718 = 0;
  v18.m_data = 0;
  v18.m_dataLen = 0;
  v18.m_bufLen = 0;
  v11 = (double (__thiscall ***)(_DWORD, _DWORD))(v10[0xA] + 0x24);
  v12 = **v11;
  v19 = 0;
  v13 = v12(v11, 0) * fEnchantmentGoldMult;
  v14 = Double_To_SInt32(v13);
  BSStringT_Static_Format(&v18, "%d", v14);
  Tile_SetString((_DWORD *)v10[0x12], (_DWORD *)0xFDE, v18.m_data);
  v15 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
  BSStringT_Static_Format(&v18, "%d", v15);
  m_data = v18.m_data;
  Tile_SetString((_DWORD *)v10[0x13], (_DWORD *)0xFDE, v18.m_data);
  EnableMenu(v8, a1, a2, v13, 0);
  FormHeapFree((unsigned int)m_data);
  return XML;
}
