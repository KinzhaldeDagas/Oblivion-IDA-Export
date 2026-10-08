double __usercall sub_5C1000@<st0>(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st2>,
        double result@<st0>)
{
  Tile *v7; // eax
  Tile *v8; // esi
  _DWORD *v9; // edi
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v12; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416); /*0x5c1005*/
  if ( OpenMenuTile ) /*0x5c100f*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5c1014*/
    v12 = ParentMenu; /*0x5c1019*/
    if ( ParentMenu ) /*0x5c101d*/
    {
      if ( *(_DWORD *)(ParentMenu + 0x24) != 2 ) /*0x5c1023*/
      {
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x2C), 0xFA1u, 1.0); /*0x5c1033*/
        Tile_SetFloat(*(Tile **)(v12 + 0x28), 0xFA7u, 0.0); /*0x5c1046*/
        unk_B3B43D = 0; /*0x5c104b*/
        v7 = (Tile *)Menu_GetOpenMenuTile(0x416); /*0x5c0d26*/
        v8 = v7; /*0x5c0d2b*/
        if ( v7 ) /*0x5c0d32*/
        {
          v9 = (_DWORD *)Tile_GetParentMenu(v7); /*0x5c0d3c*/
          if ( v9 ) /*0x5c0d40*/
          {
            Tile_SetFloat(v8, 0x1772u, 1.0); /*0x5c0d4f*/
            return Menu::StartFadeOut(v9, a1, a2, a3, a4, a5, result); /*0x5c0d58*/
          }
        }
      }
    }
  }
  return result; /*0x5c1059*/
}
