BSStringT *__usercall sub_5ADCF0@<eax>(char a1@<bpl>, double a2@<st2>, double st6_0@<st1>, double st7_0@<st0>, int a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v10; // edi
  TileMenu *v11; // eax
  int *v12; // edi
  double Float; // st7
  void *v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // eax
  float a3; // [esp+4h] [ebp-10h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3EF);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  sub_5A8FD0();
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  __asm { fstp    [esp+0Ch+var_4] }
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a2, st6_0, Depth, "Data\\Menus\\loading_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3EF )
  {
    if ( v10->members.tile )
      v10->__vftable->Destructor(v10, 1);
    return 0;
  }
  sub_583DF0(0);
  v11 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v10, st6_0, Depth, v11);
  v12 = (int *)OblivionDynamicCast(
                 v10,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &LoadingMenu `RTTI Type Descriptor',
                 0);
  Float = Tile_GetFloat(XML, 0xFA5);
  __asm
  {
    fcomp   dword ptr ds:0A69770h
    fnstsw  ax
  }
  if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
    goto LABEL_7;
  Float = Tile_GetFloat(XML, 0xFA5);
  __asm
  {
    fcomp   qword ptr ds:0A69778h
    fnstsw  ax
  }
  if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
  {
LABEL_7:
    __asm { fld     [esp+0Ch+var_4] }
    __asm { fstp    [esp+10h+a3]; a3 }
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
  }
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) = 2;
  sub_5A6040(a2, st6_0, 1, 1);
  sub_5A4980(a2, st6_0, Float, 0, 0, 0);
  sub_578D50(0);
  v12[0x11] = a5;
  Tile_SetString(XML, (_DWORD *)0xFB3, word_A36430);
  sub_5AD440(v12, (TESObjectCELL *)v12[0x11]);
  sub_5AD780(v12, (Tile *)XML);
  if ( TESDataHandler_g_PlayerRef )
  {
    if ( !sub_40FDA0(v16) )
      sub_410B00();
  }
  sub_58FBA0((int)XML[2].m_data, a2, st6_0, Float, 0);
  sub_58FBA0((int)XML, a2, st6_0, Float, 0);
  v17 = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F4);
  if ( v17 )
    (**v17)(v17, 1);
  sub_579260(a2, st6_0, 0);
  sub_5792B0();
  sub_579260(a2, st6_0, 0);
  sub_5792B0();
  nullsub_returnTrue_0arg();
  return XML;
}
