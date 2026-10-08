void __usercall sub_5A5F60(double a1@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>)
{
  Tile *OpenMenuTile; // esi
  float a2; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC); /*0x5a5f6b*/
  if ( OpenMenuTile ) /*0x5a5f72*/
  {
    if ( !sub_57A1C0() ) /*0x5a5f74*/
    {
      sub_57C5F0(a1, st6_0, a3, a4, 1, 0); /*0x5a5f81*/
      a2 = Tile_GetFloat(OpenMenuTile, 0xFB2); /*0x5a5f96*/
      Tile_SetFloat(OpenMenuTile, 0xFB3u, a2); /*0x5a5fa0*/
      Tile_SetFloat(OpenMenuTile, 0xFB2u, *(float *)&dword_A46C30); /*0x5a5fb6*/
      Tile_GetParentMenu(OpenMenuTile); /*0x5a5fbd*/
      sub_57DE50(0xE); /*0x5a5fc4*/
    }
  }
}
