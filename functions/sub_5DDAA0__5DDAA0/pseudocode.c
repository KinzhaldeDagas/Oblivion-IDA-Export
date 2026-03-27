void __userpurge sub_5DDAA0(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  Tile *OpenMenuTile; // eax
  char *v7; // ecx
  Tile *v8; // esi
  _DWORD *ParentMenu; // edi

  sub_497C10(a5, a6);
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FB);
  v8 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      a4 = fConstant_2;
      Tile_SetFloat(v8, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a2, a3);
    }
  }
  ShowUIMessageBox(v7, a1, a2, a3, a4, (const char *)dword_B38CE0, 0, 1, (const char *)sOk, 0);
  sub_5DDCA0(a1, a2, a3);
}
