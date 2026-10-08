void sub_5A6A80()
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v1; // esi
  _DWORD *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x5a6a86*/
  v1 = OpenMenuTile; /*0x5a6a8b*/
  if ( OpenMenuTile ) /*0x5a6a92*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5a6a96*/
    {
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v1); /*0x5a6aa1*/
      sub_5A66A0(ParentMenu); /*0x5a6aa9*/
    }
  }
}
