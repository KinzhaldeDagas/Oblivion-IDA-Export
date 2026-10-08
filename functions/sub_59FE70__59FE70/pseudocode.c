void __thiscall sub_59FE70(_DWORD *this)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  _DWORD *v4; // eax
  int v5; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x411); /*0x59fe78*/
  if ( OpenMenuTile ) /*0x59fe82*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x59fe86*/
    if ( ParentMenu ) /*0x59fe8d*/
      *(this + 0x1E) = ParentMenu; /*0x59fe8f*/
  }
  else
  {
    v4 = (_DWORD *)Menu_GetOpenMenuTile(0x412); /*0x59fe99*/
    if ( v4 ) /*0x59fea3*/
    {
      v5 = Tile_GetParentMenu(v4); /*0x59fea7*/
      if ( v5 ) /*0x59feae*/
        *(this + 0x1F) = v5; /*0x59feb0*/
    }
  }
}
