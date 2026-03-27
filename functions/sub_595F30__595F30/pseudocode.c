void __usercall sub_595F30(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v6; // esi
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x402);
  v6 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      Tile_SetFloat(v6, (_DWORD *)0x1772, fConstant_2);
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v6);
      sub_584740(ParentMenu, a2, a3);
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 0x34) + 0x88) & 1) != 0 )
        sub_57DE50(0x1A);
      else
        sub_57DE50(0x1C);
    }
  }
}
