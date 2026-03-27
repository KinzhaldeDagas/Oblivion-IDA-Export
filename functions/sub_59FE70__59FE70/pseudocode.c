void __thiscall sub_59FE70(_DWORD *this)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  _DWORD *v4; // eax
  int v5; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x411);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
      *(this + 0x1E) = ParentMenu;
  }
  else
  {
    v4 = (_DWORD *)Menu_GetOpenMenuTile(0x412);
    if ( v4 )
    {
      v5 = Tile_GetParentMenu(v4);
      if ( v5 )
        *(this + 0x1F) = v5;
    }
  }
}
