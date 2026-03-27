int __thiscall sub_4A63E0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  if ( !this )
    return 0;
  v2 = this + 1;
  if ( this == (_DWORD *)0xFFFFFFFC )
    return 0;
  while ( !*v2 || *(_DWORD *)(*v2 + 0xC) != a2 )
  {
    v2 = (_DWORD *)v2[1];
    if ( !v2 )
      return 0;
  }
  return *v2;
}
