BOOL __thiscall sub_6B8610(_DWORD *this, int a2)
{
  int v2; // edx
  _DWORD *v3; // eax

  v2 = 0;
  if ( this == (_DWORD *)0xFFFFFFFC )
    return 0;
  v3 = (_DWORD *)*(this + 2);
  if ( !v3 )
    return 0;
  while ( v2 < a2 )
  {
    v3 = (_DWORD *)v3[1];
    ++v2;
    if ( !v3 )
      return 0;
  }
  *this = v3;
  return *v3 != 0;
}
