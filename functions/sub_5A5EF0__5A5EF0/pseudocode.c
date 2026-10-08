void __usercall sub_5A5EF0(double a1@<st1>, double st5_0@<st2>, char a3@<bpl>, double a4@<st0>)
{
  Tile *OpenMenuTile; // esi
  float a2; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC); /*0x5a5efb*/
  if ( OpenMenuTile ) /*0x5a5f02*/
  {
    if ( !sub_57A310() ) /*0x5a5f04*/
    {
      sub_57C7C0(a1, st5_0, a3, a4, 1, 0); /*0x5a5f11*/
      a2 = Tile_GetFloat(OpenMenuTile, 0xFB2); /*0x5a5f26*/
      Tile_SetFloat(OpenMenuTile, 0xFB3u, a2); /*0x5a5f30*/
      Tile_SetFloat(OpenMenuTile, 0xFB2u, fConstant_2); /*0x5a5f46*/
      Tile_GetParentMenu(OpenMenuTile); /*0x5a5f4d*/
      sub_57DE50(0xE); /*0x5a5f54*/
    }
  }
}
