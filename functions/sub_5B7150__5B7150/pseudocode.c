void sub_5B7150()
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  void (__thiscall ***v2)(_DWORD, int); // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x5b7155*/
  if ( OpenMenuTile ) /*0x5b715f*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5b7163*/
    if ( ParentMenu ) /*0x5b716a*/
    {
      v2 = *(void (__thiscall ****)(_DWORD, int))(ParentMenu + 4); /*0x5b716c*/
      if ( v2 ) /*0x5b7171*/
        (**v2)(v2, 1); /*0x5b717b*/
    }
  }
}
