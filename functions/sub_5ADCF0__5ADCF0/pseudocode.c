BSStringT *__usercall sub_5ADCF0@<eax>(
        char a1@<bpl>,
        double a2@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        int a9)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // esi
  int ParentMenu; // eax
  Menu *v14; // edi
  TileMenu *v15; // eax
  int *v16; // edi
  double Float; // st7
  double v20; // st7
  void *v21; // ecx
  void (__thiscall ***v22)(_DWORD, int); // eax
  float a3; // [esp+4h] [ebp-10h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3EF); /*0x5adcf6*/
  if ( OpenMenuTile ) /*0x5add00*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5add0a*/
  sub_5A8FD0(); /*0x5add0e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5add1f*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5add21*/
  __asm { fstp    [esp+0Ch+var_4] } /*0x5add26*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\loading_menu.xml"); /*0x5add37*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5add3b*/
  v14 = (Menu *)ParentMenu; /*0x5add40*/
  if ( !ParentMenu ) /*0x5add44*/
    return 0; /*0x5add44*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3EF ) /*0x5add58*/
  {
    if ( v14->members.tile ) /*0x5adea6*/
      v14->__vftable->Destructor(v14, 1); /*0x5adeb4*/
    return 0; /*0x5adeb7*/
  }
  sub_583DF0(0); /*0x5add60*/
  v15 = (TileMenu *)OblivionDynamicCast( /*0x5add74*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v14, st6_0, Depth, v15); /*0x5add7f*/
  v16 = (int *)OblivionDynamicCast( /*0x5adda2*/
                 v14,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &LoadingMenu `RTTI Type Descriptor',
                 0);
  Float = Tile_GetFloat(File, 0xFA5); /*0x5adda4*/
  __asm /*0x5adda9*/
  {
    fcomp   dword ptr ds:0A69770h
    fnstsw  ax
  }
  if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5addb1*/
    goto LABEL_7; /*0x5addb1*/
  Float = Tile_GetFloat(File, 0xFA5); /*0x5addbd*/
  __asm /*0x5addc2*/
  {
    fcomp   qword ptr ds:0A69778h
    fnstsw  ax
  }
  if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5addcd*/
  {
LABEL_7:
    __asm { fld     [esp+0Ch+var_4] } /*0x5addcf*/
    __asm { fstp    [esp+10h+a3]; value }
    Tile_SetFloat(File, 0xFABu, a3); /*0x5addde*/
  }
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) = 2; /*0x5addf0*/
  v20 = sub_5A6040(a2, a5, a6, a7, a8, Float, 1, 1); /*0x5addf4*/
  sub_5A4980(a2, st6_0, v20, 0, 0, 0); /*0x5addff*/
  sub_578D50(0); /*0x5ade06*/
  v16[0x11] = a9; /*0x5ade17*/
  Tile_SetString(File, (_DWORD *)0xFB3, word_A36430); /*0x5ade21*/
  sub_5AD440(v16, (TESObjectCELL *)v16[0x11]); /*0x5ade2c*/
  sub_5AD780(v16, File); /*0x5ade34*/
  if ( reference ) /*0x5ade39*/
  {
    if ( !sub_40FDA0(v21) ) /*0x5ade42*/
      sub_410B00(); /*0x5ade4b*/
  }
  sub_58FBA0(*((_DWORD *)File + 4), a2, st6_0, v20, 0); /*0x5ade55*/
  sub_58FBA0((int)File, a2, st6_0, v20, 0); /*0x5ade5e*/
  v22 = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F4); /*0x5ade68*/
  if ( v22 ) /*0x5ade72*/
    (**v22)(v22, 1); /*0x5ade7c*/
  sub_579260(a2, st6_0, 0); /*0x5ade80*/
  sub_5792B0(); /*0x5ade85*/
  sub_579260(a2, st6_0, 0); /*0x5ade8c*/
  sub_5792B0(); /*0x5ade91*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5ade98*/
  return (BSStringT *)File; /*0x5adea5*/
}
