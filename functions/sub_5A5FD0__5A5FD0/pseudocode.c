void __usercall sub_5A5FD0(double a1@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>)
{
  Tile *OpenMenuTile; // esi
  float a2; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC); /*0x5a5fdb*/
  if ( OpenMenuTile ) /*0x5a5fe2*/
  {
    if ( !sub_579FC0() ) /*0x5a5fe4*/
    {
      sub_57C420(a1, st6_0, a3, a4, 1, 0); /*0x5a5ff1*/
      a2 = Tile_GetFloat(OpenMenuTile, 0xFB2); /*0x5a6006*/
      Tile_SetFloat(OpenMenuTile, 0xFB3u, a2); /*0x5a6010*/
      Tile_SetFloat(OpenMenuTile, 0xFB2u, flt_A46B10); /*0x5a6026*/
      Tile_GetParentMenu(OpenMenuTile); /*0x5a602d*/
      sub_57DE50(0xE); /*0x5a6034*/
    }
  }
}
