void __thiscall sub_57CEA0(_BYTE *this, char a2)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  *(this + 0xD) = a2; /*0x57ceaa*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57cead*/
  if ( OpenMenuTile ) /*0x57ceb7*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x57cebb*/
    if ( ParentMenu ) /*0x57cec2*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)ParentMenu + 0xC))(ParentMenu, a2, 0); /*0x57ced1*/
  }
}
