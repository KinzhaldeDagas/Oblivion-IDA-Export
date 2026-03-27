void __usercall sub_5C1B80(double st5_0@<st2>, double st6_0@<st1>, double st7_0@<st0>, int a4)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  Tile **v8; // esi
  double v9; // st7
  int v10; // ebp
  int *v11; // ebx
  Tile **v12; // edi
  TESForm *v13; // esi
  const char *v14; // eax
  CHAR *v15; // eax
  float a2; // [esp+0h] [ebp-120h]
  float a2a; // [esp+0h] [ebp-120h]
  char a3[260]; // [esp+18h] [ebp-108h] BYREF

  sub_5C1900();
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416);
  if ( OpenMenuTile || (sub_5C1290(st5_0, st6_0, st7_0), (OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416)) != 0) )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v8 = (Tile **)ParentMenu;
    if ( ParentMenu && *(_DWORD *)(ParentMenu + 0x24) == 2 || *(_DWORD *)(ParentMenu + 0x24) == 4 )
      sub_584390(ParentMenu);
    a2 = flt_A40098;
    byte_B3B43D = 1;
    Tile_SetFloat(v8[0xA], (_DWORD *)0xFA7, a2);
    if ( a4 >= 0 )
    {
      a2a = (float)(a4 + 1);
      Tile_SetFloat(v8[0xB], (_DWORD *)0xFAE, a2a);
    }
    Tile_SetFloat(v8[0xB], (_DWORD *)0xFA1, fConstant_2);
    Tile_SetFloat(v8[0xB], (_DWORD *)0xFB0, 1.0);
    v9 = fConstant_2;
    Tile_SetFloat(v8[0xB], (_DWORD *)0xFB1, fConstant_2);
    sub_58FBA0((int)v8[0xB], st5_0, st6_0, v9, 0);
    v10 = 0;
    v11 = dword_B3B444;
    v12 = v8 + 0xC;
    do
    {
      if ( v11[2] )
      {
        v13 = *(TESForm **)(*v11 + 8);
        if ( OblivionDynamicCast(
               v13,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &SpellItem `RTTI Type Descriptor',
               0) )
        {
          v14 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);
          if ( !v14 )
            v14 = EmptyString;
          _sprintf(a3, "%s\\%s\\%s", "Menus", "Icons", v14);
        }
        else
        {
          v15 = sub_5C0C50(v13);
          _sprintf(a3, "%s\\%s\\%s", "Menus", "Icons", v15);
        }
        Tile_SetString(*v12, (_DWORD *)0xFE6, a3);
        if ( v10 == a4 )
          sub_5C16E0(v10, v13, 0, 1);
        Tile_SetFloat(*v12, (_DWORD *)0xFA7, flt_A40098);
        Tile_SetFloat(*v12, (_DWORD *)0xFA1, fConstant_2);
      }
      else
      {
        Tile_SetFloat(*v12, (_DWORD *)0xFA7, 0.0);
        Tile_SetFloat(*v12, (_DWORD *)0xFA1, 1.0);
        if ( v10 == sub_5C1100() )
          sub_5C16E0(v10, 0, 0, 1);
      }
      v11 += 4;
      ++v10;
      ++v12;
    }
    while ( (int)v11 < (int)&dword_B3B4C4 );
  }
}
