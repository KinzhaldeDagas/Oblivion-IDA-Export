void __cdecl sub_5BEA90(char a1)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  Tile **v3; // esi
  float a3; // [esp+8h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A); /*0x5bea96*/
  if ( OpenMenuTile ) /*0x5beaa0*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5beaa9*/
    v3 = (Tile **)ParentMenu; /*0x5beaae*/
    if ( ParentMenu ) /*0x5beab2*/
    {
      if ( a1 != (Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x98), 0xFA1) == fConstant_2) ) /*0x5beae7*/
      {
        a3 = (float)(2 - (a1 != 1)); /*0x5beb01*/
        Tile_SetFloat(v3[0x26], 0xFA1u, a3); /*0x5beb11*/
        Tile_SetFloat(v3[0x27], 0xFA1u, a3); /*0x5beb29*/
        Tile_SetFloat(v3[0x28], 0xFA1u, a3); /*0x5beb41*/
        Tile_SetFloat(v3[0x29], 0xFA1u, a3); /*0x5beb59*/
      }
    }
  }
}
