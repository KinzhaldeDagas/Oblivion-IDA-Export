void __usercall sub_5C07D0(double a1@<st2>, double a2@<st1>)
{
  _DWORD *v3; // eax
  int v4; // eax
  Tile *OpenMenuTile; // eax
  Tile *v6; // esi
  _DWORD *ParentMenu; // edi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F8);
  v6 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      Tile_SetFloat(v6, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
      v3 = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
      if ( v3 )
      {
        v4 = Tile_GetParentMenu(v3);
        if ( v4 )
          *(_BYTE *)(v4 + 0x54) = 0;
      }
    }
  }
}
