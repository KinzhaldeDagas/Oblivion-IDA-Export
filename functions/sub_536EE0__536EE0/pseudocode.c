void __thiscall sub_536EE0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)a2[4]; i; i = (_DWORD *)i[1] ) /*0x536eed*/
  {
    if ( i[3] == a3 ) /*0x536ef6*/
      break; /*0x536ef6*/
  }
  sub_536A10(a2, i); /*0x536f02*/
  if ( !a2[4] ) /*0x536f07*/
    sub_536D30(this, a2); /*0x536f10*/
}
