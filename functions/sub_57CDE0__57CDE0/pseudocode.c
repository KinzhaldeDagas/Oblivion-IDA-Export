void __thiscall sub_57CDE0(_BYTE *this, char a2)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  *(this + 0xA) = a2; /*0x57cdea*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57cded*/
  if ( OpenMenuTile ) /*0x57cdf7*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x57cdfb*/
    if ( ParentMenu ) /*0x57ce02*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)ParentMenu + 0xC))(ParentMenu, a2, 0); /*0x57ce11*/
  }
}
