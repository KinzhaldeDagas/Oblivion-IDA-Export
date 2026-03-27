void __usercall sub_57CEE0(int *this@<ecx>, double a2@<st1>, double a3@<st0>, char a4@<bpl>, double a5@<st2>)
{
  int v6; // edi
  int *v7; // esi
  _DWORD *OpenMenuTile; // eax
  void (__thiscall ***ParentMenu)(_DWORD, int); // eax

  v6 = 9;
  v7 = this + 0x41;
  do
  {
    if ( *v7 )
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(*v7);
      if ( OpenMenuTile )
      {
        ParentMenu = (void (__thiscall ***)(_DWORD, int))Tile_GetParentMenu(OpenMenuTile);
        if ( ParentMenu )
          (**ParentMenu)(ParentMenu, 1);
      }
      *v7 = 0;
    }
    --v6;
    v7 += 0xFFFFFFFF;
  }
  while ( v6 >= 0 );
  sub_5B41E0(a5, a2, a4);
  sub_57CC00(a4, a5, a2, a3);
  sub_5964B0(a5, a2, a4);
  sub_59D890();
  *((_BYTE *)this + 8) = 4;
}
