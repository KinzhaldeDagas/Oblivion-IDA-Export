void __cdecl sub_5A5E00(signed int a1)
{
  Tile *OpenMenuTile; // eax
  Tile *v2; // esi
  float a2; // [esp+0h] [ebp-8h]
  float a2a; // [esp+0h] [ebp-8h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EC); /*0x5a5e06*/
  v2 = OpenMenuTile; /*0x5a5e0b*/
  if ( OpenMenuTile ) /*0x5a5e12*/
  {
    a2 = Tile_GetFloat(OpenMenuTile, 0xFB2); /*0x5a5e21*/
    Tile_SetFloat(v2, 0xFB3u, a2); /*0x5a5e2b*/
    a2a = (float)a1; /*0x5a5e37*/
    Tile_SetFloat(v2, 0xFB2u, a2a); /*0x5a5e3f*/
    if ( Tile_GetParentMenu(v2) ) /*0x5a5e46*/
    {
      if ( *(_DWORD *)(Tile_GetParentMenu(v2) + 0x58) ) /*0x5a5e56*/
        *(float *)(*(_DWORD *)(Tile_GetParentMenu(v2) + 0x58) + 0x58) = kTerrainLODQuadRayDirectionZ; /*0x5a5e6c*/
    }
  }
}
