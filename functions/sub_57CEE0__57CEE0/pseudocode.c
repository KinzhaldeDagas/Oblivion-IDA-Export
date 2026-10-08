void __usercall sub_57CEE0(
        int *this@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        char a4@<bpl>,
        double a5@<st2>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        double a9@<st4>)
{
  int v10; // edi
  int *v11; // esi
  _DWORD *OpenMenuTile; // eax
  void (__thiscall ***ParentMenu)(_DWORD, int); // eax

  v10 = 9; /*0x57cee5*/
  v11 = this + 0x41; /*0x57ceea*/
  do /*0x57cf26*/
  {
    if ( *v11 ) /*0x57cef0*/
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(*v11); /*0x57cef7*/
      if ( OpenMenuTile ) /*0x57cf01*/
      {
        ParentMenu = (void (__thiscall ***)(_DWORD, int))Tile_GetParentMenu(OpenMenuTile); /*0x57cf05*/
        if ( ParentMenu ) /*0x57cf0c*/
          (**ParentMenu)(ParentMenu, 1); /*0x57cf16*/
      }
      *v11 = 0; /*0x57cf18*/
    }
    --v10; /*0x57cf1e*/
    v11 += 0xFFFFFFFF; /*0x57cf21*/
  }
  while ( v10 >= 0 ); /*0x57cf26*/
  sub_5B41E0(a5, a2); /*0x57cf28*/
  sub_57CC00(a4, a5, a2, a3, a6, a7, a8, a9); /*0x57cf2d*/
  sub_5964B0(a5, a2); /*0x57cf32*/
  sub_59D890(); /*0x57cf37*/
  *((_BYTE *)this + 8) = 4; /*0x57cf3e*/
}
