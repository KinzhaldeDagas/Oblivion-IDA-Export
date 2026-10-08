void __usercall sub_5BF7D0(double a1@<st1>, int a2, int a3, int a4, int a5, int a6, int a7, unsigned int a8)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v10; // esi
  Tile *v11; // ecx

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A); /*0x5bf7fc*/
  if ( !OpenMenuTile || (ParentMenu = Tile_GetParentMenu(OpenMenuTile), (v10 = ParentMenu) == 0) ) /*0x5bf819*/
    JUMPOUT(0x5BFB0B); /*0x5bfb0b*/
  v11 = *(Tile **)(ParentMenu + 0x3C); /*0x5bf827*/
  *(_DWORD *)(ParentMenu + 0x34) = 0xFFFFFFFF; /*0x5bf839*/
  *(_DWORD *)(ParentMenu + 0x2C) = 0; /*0x5bf840*/
  *(_BYTE *)(ParentMenu + 0x38) = 0; /*0x5bf843*/
  Tile_SetFloat(v11, 0xFA7u, 0.0); /*0x5bf846*/
  *(_DWORD *)(v10 + 0x30) = 0; /*0x5bf857*/
  def_5BF850(0, v10, a1); /*0x5bf85a*/
}
