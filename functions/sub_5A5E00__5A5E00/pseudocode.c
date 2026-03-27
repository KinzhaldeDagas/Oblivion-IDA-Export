void __cdecl sub_5A5E00(signed int a1)
{
  Tile *OpenMenuTile; // eax
  Tile *v2; // esi
  float a2; // [esp+0h] [ebp-8h]
  float a2a; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC);
  v2 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    a2 = Tile_GetFloat(OpenMenuTile, 0xFB2);
    Tile_SetFloat(v2, (_DWORD *)0xFB3, a2);
    a2a = (float)a1;
    Tile_SetFloat(v2, (_DWORD *)0xFB2, a2a);
    if ( Tile_GetParentMenu(v2) )
    {
      if ( *(_DWORD *)(Tile_GetParentMenu(v2) + 0x58) )
        *(float *)(*(_DWORD *)(Tile_GetParentMenu(v2) + 0x58) + 0x58) = flt_A30634;
    }
  }
}
