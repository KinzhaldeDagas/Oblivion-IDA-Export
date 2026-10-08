void sub_5A8FD0()
{
  Tile *OpenMenuTile; // eax
  Tile *v1; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F2); /*0x5a8fd6*/
  v1 = OpenMenuTile; /*0x5a8fdb*/
  if ( OpenMenuTile ) /*0x5a8fe2*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5a8fe6*/
      Tile_SetFloat(v1, 0xFA1u, 1.0); /*0x5a8ffc*/
  }
}
