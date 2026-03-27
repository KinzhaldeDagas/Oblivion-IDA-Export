void __thiscall sub_57CEA0(_BYTE *this, char a2)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  *(this + 0xD) = a2;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)ParentMenu + 0xC))(ParentMenu, a2, 0);
  }
}
