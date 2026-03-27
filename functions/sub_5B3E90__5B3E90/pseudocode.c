void __usercall sub_5B3E90(double a1@<st2>, double a2@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x400);
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      ParentMenu[0x16] = 3;
      sub_584740(ParentMenu, a1, a2);
    }
  }
}
