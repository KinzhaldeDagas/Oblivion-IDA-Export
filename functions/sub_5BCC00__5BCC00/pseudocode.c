char __usercall sub_5BCC00@<al>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a4,
        int a5,
        char a6,
        char *a7,
        _DWORD *a8)
{
  char v9; // bl
  int OpenMenuTile; // eax
  Tile *v11; // esi
  double v12; // st7
  NiObject *v14; // [esp-4h] [ebp-14h]

  v9 = sub_5BC8B0(st5_0, st6_0, st7_0, a4, a5, a6, a7, a8);
  OpenMenuTile = Menu_GetOpenMenuTile(0x3E9);
  v11 = (Tile *)OpenMenuTile;
  if ( OpenMenuTile )
  {
    v14 = *(NiObject **)(OpenMenuTile + 0x24);
    InterfaceManager_GetSingleton(0, 1);
    sub_57EA20(v14, 1.0, 0.0);
    Tile_SetFloat(v11, (_DWORD *)0xFA1, fConstant_2);
    v12 = fConstant_2;
    Tile_SetFloat(v11, (_DWORD *)0x1772, fConstant_2);
    *(_DWORD *)(Tile_GetParentMenu(v11) + 0x24) = 1;
    sub_58FBA0((int)v11, st5_0, st6_0, v12, 0);
  }
  return v9;
}
