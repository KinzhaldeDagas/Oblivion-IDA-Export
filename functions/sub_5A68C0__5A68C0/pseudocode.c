void __userpurge sub_5A68C0(char a1@<bpl>, double a2@<st2>, double a3@<st1>, int a4, int a5)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  double Float; // st7

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  v6 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      v7 = sub_589390(v6);
      Float = Tile_GetFloat(v7, 0xFB1);
      if ( Float == *(float *)&SrcStr )
      {
        switch ( a4 )
        {
          case 9:
            sub_5A5E80(a2, a3, a1, Float);
            break;
          case 0xA:
            sub_5A5EF0(a3, a2, a1, Float);
            break;
          case 0xB:
            sub_5A5F60(a2, a3, a1, Float);
            break;
          case 0xC:
            sub_5A5FD0(a2, a3, a1, Float);
            break;
        }
      }
    }
  }
}
