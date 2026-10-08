void __userpurge sub_587550(
        char a1@<bl>,
        char a2@<bpl>,
        double st6_0@<st1>,
        double a4@<st0>,
        double a5@<st2>,
        double a6@<st3>,
        int a7)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int ParentMenu; // eax
  unsigned int *v11; // esi
  int v12; // eax
  _DWORD *v13; // esi
  int v14; // eax
  unsigned int *v15; // esi
  int v16; // eax
  void *v17; // eax
  TESObjectREFR **v18; // eax
  void *v19; // eax
  void *v20; // eax
  double (__thiscall ***v21)(_DWORD, int); // edi
  Tile *v22; // esi
  void *v23; // eax
  void *v24; // ebx
  double v25; // st7
  float Float; // [esp+4h] [ebp-Ch]
  float v27; // [esp+4h] [ebp-Ch]
  float v28; // [esp+4h] [ebp-Ch]
  float v29; // [esp+4h] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(a7); /*0x587557*/
  if ( OpenMenuTile ) /*0x587561*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x58756b*/
  switch ( a7 ) /*0x587575*/
  {
    case 0x3FF: /*0x587575*/
      sub_579F80(a5, st6_0, a4); /*0x587577*/
      v9 = v8; /*0x58757c*/
      Float = Tile_GetFloat(v8, 0xFDB); /*0x58758d*/
      ParentMenu = Tile_GetParentMenu(v9); /*0x587590*/
      InterfaceManager::NewTimer(ParentMenu, Float); /*0x587596*/
      *(_DWORD *)(Tile_GetParentMenu(v9) + 0x24) = 8; /*0x5875a5*/
      break;
    case 0x3FE: /*0x587575*/
      v11 = sub_57A180(a2, a1, a5, st6_0, a4); /*0x5875c0*/
      v27 = Tile_GetFloat(v11, 0xFDB); /*0x5875d1*/
      v12 = Tile_GetParentMenu(v11); /*0x5875d4*/
      InterfaceManager::NewTimer(v12, v27); /*0x5875da*/
      *(_DWORD *)(Tile_GetParentMenu(v11) + 0x24) = 8; /*0x5875e9*/
      break;
    case 0x3EA: /*0x587575*/
      v13 = (_DWORD *)sub_57A2D0(a4, st6_0); /*0x587604*/
      v28 = Tile_GetFloat(v13, 0xFDB); /*0x587615*/
      v14 = Tile_GetParentMenu(v13); /*0x587618*/
      InterfaceManager::NewTimer(v14, v28); /*0x58761e*/
      *(_DWORD *)(Tile_GetParentMenu(v13) + 0x24) = 8; /*0x58762d*/
      break;
    case 0x3EB: /*0x587575*/
      v15 = sub_57A440(a2, 0x3EB, a5, st6_0, a4); /*0x587648*/
      v29 = Tile_GetFloat(v15, 0xFDB); /*0x587659*/
      v16 = Tile_GetParentMenu(v15); /*0x58765c*/
      InterfaceManager::NewTimer(v16, v29); /*0x587662*/
      *(_DWORD *)(Tile_GetParentMenu(v15) + 0x24) = 8; /*0x587671*/
      break;
    case 0x3EC: /*0x587575*/
      HUDMainMenu_Create(a5, a4, st6_0); /*0x587687*/
      break;
    case 0x3ED: /*0x587575*/
      sub_5A4840(a4, st6_0); /*0x58769b*/
      break;
    case 0x3F2: /*0x587575*/
      sub_5A8E30(a5, a4, st6_0); /*0x5876af*/
      break;
    case 0x3EF: /*0x587575*/
      sub_5ADCF0(a2, a5, st6_0, a4, 0); /*0x5876c5*/
      break;
    case 0x414: /*0x587575*/
      MainMenu_Open(a2, st6_0, a4, a5, a6); /*0x5876dc*/
      break;
    case 0x3F0: /*0x587575*/
      v17 = (void *)Menu_GetOpenMenuTile(0x3F0); /*0x5876ff*/
      v18 = (TESObjectREFR **)OblivionDynamicCast( /*0x587708*/
                                v17,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                                &ContainerMenu `RTTI Type Descriptor',
                                0);
      if ( v18 ) /*0x587712*/
        ContainerMenu_Create(a5, a4, st6_0, v18[0x11], 0, 1, 0); /*0x587722*/
      break;
    case 0x402: /*0x587575*/
      v19 = (void *)Menu_GetOpenMenuTile(0x3F0); /*0x58774c*/
      v20 = OblivionDynamicCast( /*0x587755*/
              v19,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
              &BookMenu `RTTI Type Descriptor',
              0);
      v21 = (double (__thiscall ***)(_DWORD, int))v20; /*0x58775a*/
      if ( v20 ) /*0x587761*/
      {
        v22 = *((Tile **)v20 + 0xC); /*0x587763*/
        v23 = (void *)(*(int (__usercall **)@<eax>(Tile *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v22 + 0x170))( /*0x58777f*/
                        v22,
                        0,
                        a4,
                        st6_0,
                        a5);
        v24 = OblivionDynamicCast( /*0x58778c*/
                v23,
                (int)&TESBoundObject `RTTI Type Descriptor',
                (struct _s_RTTICompleteObjectLocator *)&TESObjectBOOK `RTTI Type Descriptor',
                0,
                a1);
        v25 = (**v21)(v21, 1); /*0x587794*/
        BookMenu_Create(a5, v25, st6_0, (int)v24, v22); /*0x587798*/
      }
      break;
    case 0x418: /*0x587575*/
      sub_5D5200(a5, a4, st6_0, 0); /*0x5877b2*/
      break;
  }
}
