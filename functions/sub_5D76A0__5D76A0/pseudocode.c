double __usercall sub_5D76A0@<st0>(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  _DWORD *ParentMenu; // edi
  double result; // st7

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x411);
  v4 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      sub_57DE50(0x15);
      result = fConstant_2;
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
    }
  }
  return result;
}
