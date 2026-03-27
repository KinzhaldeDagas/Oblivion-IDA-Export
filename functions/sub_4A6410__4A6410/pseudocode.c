bool __thiscall sub_4A6410(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax

  if ( this )
    v2 = this + 1;
  else
    v2 = 0;
  if ( a2 )
    v3 = (_DWORD *)(a2 + 4);
  else
    v3 = 0;
  if ( v2 && v3 )
  {
    while ( *v2 == *v3 )
    {
      v2 = (_DWORD *)v2[1];
      v3 = (_DWORD *)v3[1];
      if ( !v2 )
        return !v3;
      if ( !v3 )
        return 0;
    }
  }
  return 0;
}
