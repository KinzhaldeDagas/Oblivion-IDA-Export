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
  char v8; // bl
  int OpenMenuTile; // eax
  Tile *v10; // esi
  double v11; // st7
  NiObject *v13; // [esp-4h] [ebp-14h]

  v8 = sub_5BC8B0(st5_0, st6_0, st7_0, a4, a5, a6, a7, a8); /*0x5bcc25*/
  OpenMenuTile = Menu_GetOpenMenuTile(0x3E9); /*0x5bcc27*/
  v10 = (Tile *)OpenMenuTile; /*0x5bcc2c*/
  if ( OpenMenuTile ) /*0x5bcc33*/
  {
    v13 = *(NiObject **)(OpenMenuTile + 0x24); /*0x5bcc46*/
    InterfaceManager_GetSingleton(0, 1); /*0x5bcc4b*/
    sub_57EA20(v13, 1.0, 0.0); /*0x5bcc55*/
    Tile_SetFloat(v10, 0xFA1u, fConstant_2); /*0x5bcc6b*/
    v11 = fConstant_2; /*0x5bcc70*/
    Tile_SetFloat(v10, 0x1772u, fConstant_2); /*0x5bcc81*/
    *(_DWORD *)(Tile_GetParentMenu(v10) + 0x24) = 1; /*0x5bcc91*/
    sub_58FBA0((int)v10, st5_0, st6_0, v11, 0); /*0x5bcc98*/
  }
  return v8; /*0x5bcc9d*/
}
