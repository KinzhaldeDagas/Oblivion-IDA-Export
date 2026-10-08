void __thiscall sub_57CE60(_BYTE *this, char a2)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  *(this + 0xC) = a2; /*0x57ce6a*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FE); /*0x57ce6d*/
  if ( OpenMenuTile ) /*0x57ce77*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x57ce7b*/
    if ( ParentMenu ) /*0x57ce82*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)ParentMenu + 0xC))(ParentMenu, a2, 0); /*0x57ce91*/
  }
}
