void __usercall sub_5B5960(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  _DWORD *ParentMenu; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x414);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
    }
  }
}
