void __thiscall sub_57CE20(_BYTE *this, char a2)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  *(this + 0xB) = a2; /*0x57ce2a*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x57ce2d*/
  if ( OpenMenuTile ) /*0x57ce37*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x57ce3b*/
    if ( ParentMenu ) /*0x57ce42*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)ParentMenu + 0xC))(ParentMenu, a2, 0); /*0x57ce51*/
  }
}
