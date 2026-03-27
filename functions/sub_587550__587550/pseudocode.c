void __userpurge sub_587550(char a1@<bl>, char a2@<bpl>, double st6_0@<st1>, double a4@<st0>, double a5@<st2>, int a6)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int ParentMenu; // eax
  unsigned int *v10; // esi
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  unsigned int *v14; // esi
  int v15; // eax
  void *v16; // eax
  TESObjectREFR **v17; // eax
  void *v18; // eax
  void *v19; // eax
  double (__thiscall ***v20)(_DWORD, int); // edi
  int v21; // esi
  void *v22; // eax
  void *v23; // ebx
  double v24; // st7
  float Float; // [esp+4h] [ebp-Ch]
  float v26; // [esp+4h] [ebp-Ch]
  float v27; // [esp+4h] [ebp-Ch]
  float v28; // [esp+4h] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(a6);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  switch ( a6 )
  {
    case 0x3FF:
      sub_579F80(a2, a5, st6_0);
      v8 = v7;
      Float = Tile_GetFloat(v7, 0xFDB);
      ParentMenu = Tile_GetParentMenu(v8);
      sub_584300(ParentMenu, Float);
      *(_DWORD *)(Tile_GetParentMenu(v8) + 0x24) = 8;
      break;
    case 0x3FE:
      v10 = sub_57A180(a2, a1, a5, st6_0, a4);
      v26 = Tile_GetFloat(v10, 0xFDB);
      v11 = Tile_GetParentMenu(v10);
      sub_584300(v11, v26);
      *(_DWORD *)(Tile_GetParentMenu(v10) + 0x24) = 8;
      break;
    case 0x3EA:
      v12 = (_DWORD *)sub_57A2D0(a4, st6_0);
      v27 = Tile_GetFloat(v12, 0xFDB);
      v13 = Tile_GetParentMenu(v12);
      sub_584300(v13, v27);
      *(_DWORD *)(Tile_GetParentMenu(v12) + 0x24) = 8;
      break;
    case 0x3EB:
      v14 = sub_57A440(a2, 0x3EB, a5, st6_0, a4);
      v28 = Tile_GetFloat(v14, 0xFDB);
      v15 = Tile_GetParentMenu(v14);
      sub_584300(v15, v28);
      *(_DWORD *)(Tile_GetParentMenu(v14) + 0x24) = 8;
      break;
    case 0x3EC:
      sub_5A6B00(a1, a2, a5, a4, st6_0);
      break;
    case 0x3ED:
      sub_5A4840(a2, a5, a4, st6_0);
      break;
    case 0x3F2:
      sub_5A8E30(a2, a5, a4, st6_0);
      break;
    case 0x3EF:
      sub_5ADCF0(a2, a5, st6_0, a4, 0);
      break;
    case 0x414:
      sub_5B6040(a2, st6_0, a4, a5);
      break;
    case 0x3F0:
      v16 = (void *)Menu_GetOpenMenuTile(0x3F0);
      v17 = (TESObjectREFR **)OblivionDynamicCast(
                                v16,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                                &ContainerMenu `RTTI Type Descriptor',
                                0);
      if ( v17 )
        sub_599EE0(0xF0, a5, a4, st6_0, v17[0x11], 0, 1, 0);
      break;
    case 0x402:
      v18 = (void *)Menu_GetOpenMenuTile(0x3F0);
      v19 = OblivionDynamicCast(
              v18,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
              &BookMenu `RTTI Type Descriptor',
              0);
      v20 = (double (__thiscall ***)(_DWORD, int))v19;
      if ( v19 )
      {
        v21 = *((_DWORD *)v19 + 0xC);
        v22 = (void *)(*(int (__usercall **)@<eax>(int@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v21 + 0x170))(
                        v21,
                        0,
                        a4,
                        st6_0,
                        a5);
        v23 = OblivionDynamicCast(
                v22,
                (int)&TESBoundObject `RTTI Type Descriptor',
                (struct _s_RTTICompleteObjectLocator *)&TESObjectBOOK `RTTI Type Descriptor',
                0,
                a1);
        v24 = (**v20)(v20, 1);
        sub_5962C0((char)v23, a5, v24, st6_0, (int)v23, v21);
      }
      break;
    case 0x418:
      sub_5D5200(a5, a4, st6_0, 0);
      break;
  }
}
