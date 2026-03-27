void __usercall sub_5A5E80(double a1@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>)
{
  Tile *OpenMenuTile; // esi
  float a2; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC);
  if ( OpenMenuTile )
  {
    if ( !sub_57A650() )
    {
      sub_57A480(a1, st6_0, a3, a4, 1, 0);
      a2 = Tile_GetFloat(OpenMenuTile, 0xFB2);
      Tile_SetFloat(OpenMenuTile, (_DWORD *)0xFB3, a2);
      Tile_SetFloat(OpenMenuTile, (_DWORD *)0xFB2, 1.0);
      Tile_GetParentMenu(OpenMenuTile);
      sub_57DE50(0xE);
    }
  }
}
