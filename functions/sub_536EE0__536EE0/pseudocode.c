void __thiscall sub_536EE0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)a2[4]; i; i = (_DWORD *)i[1] )
  {
    if ( i[3] == a3 )
      break;
  }
  sub_536A10(a2, i);
  if ( !a2[4] )
    sub_536D30(this, a2);
}
