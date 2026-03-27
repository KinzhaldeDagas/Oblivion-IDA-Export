void sub_5B7150()
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  void (__thiscall ***v2)(_DWORD, int); // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v2 = *(void (__thiscall ****)(_DWORD, int))(ParentMenu + 4);
      if ( v2 )
        (**v2)(v2, 1);
    }
  }
}
