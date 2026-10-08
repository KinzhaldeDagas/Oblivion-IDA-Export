void __usercall sub_5A5E80(double a1@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>)
{
  Tile *OpenMenuTile; // esi
  float a2; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC); /*0x5a5e8b*/
  if ( OpenMenuTile ) /*0x5a5e92*/
  {
    if ( !sub_57A650() ) /*0x5a5e94*/
    {
      sub_57A480(a1, st6_0, a3, a4, 1, 0); /*0x5a5ea1*/
      a2 = Tile_GetFloat(OpenMenuTile, 0xFB2); /*0x5a5eb6*/
      Tile_SetFloat(OpenMenuTile, 0xFB3u, a2); /*0x5a5ec0*/
      Tile_SetFloat(OpenMenuTile, 0xFB2u, 1.0); /*0x5a5ed2*/
      Tile_GetParentMenu(OpenMenuTile); /*0x5a5ed9*/
      sub_57DE50(0xE); /*0x5a5ee0*/
    }
  }
}
