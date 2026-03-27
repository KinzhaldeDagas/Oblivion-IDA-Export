bool __thiscall sub_4FB5F0(_DWORD *this, int a2, int a3)
{
  int i; // eax
  _DWORD *v4; // edx

  for ( i = *(this + 2); i; i = *(_DWORD *)(i + 4) )
  {
    v4 = *(_DWORD **)i;
    if ( !*(_DWORD *)i )
      break;
    if ( *v4 == a2 )
      return (a3 & v4[1]) != 0;
  }
  sub_4FB510(this, a2);
  return 0;
}
