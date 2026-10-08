void __userpurge sub_5A68C0(char a1@<bpl>, double a2@<st2>, double a3@<st1>, int a4, int a5)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  double Float; // st7

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x5a68c6*/
  v6 = OpenMenuTile; /*0x5a68cb*/
  if ( OpenMenuTile ) /*0x5a68d2*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5a68d6*/
    {
      v7 = sub_589390(v6); /*0x5a68e6*/
      Float = Tile_GetFloat(v7, 0xFB1); /*0x5a68ed*/
      if ( Float == *(float *)&SrcStr ) /*0x5a68fd*/
      {
        switch ( a4 ) /*0x5a6906*/
        {
          case 9: /*0x5a6906*/
            sub_5A5E80(a2, a3, a1, Float); /*0x5a6908*/
            break;
          case 0xA: /*0x5a6906*/
            sub_5A5EF0(a3, a2, a1, Float); /*0x5a6916*/
            break;
          case 0xB: /*0x5a6906*/
            sub_5A5F60(a2, a3, a1, Float); /*0x5a6924*/
            break;
          case 0xC: /*0x5a6906*/
            sub_5A5FD0(a2, a3, a1, Float); /*0x5a6932*/
            break;
        }
      }
    }
  }
}
