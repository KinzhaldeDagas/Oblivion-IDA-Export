void __usercall sub_5B41E0(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x400);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v4);
      sub_584740(ParentMenu, a1, a2);
    }
  }
}
