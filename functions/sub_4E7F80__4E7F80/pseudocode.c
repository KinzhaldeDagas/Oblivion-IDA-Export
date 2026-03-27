char __thiscall sub_4E7F80(_DWORD *this, int a2)
{
  char result; // al
  _DWORD *v3; // ecx

  result = 0;
  if ( a2 )
  {
    v3 = this + 8;
    if ( v3 )
    {
      while ( *v3 != a2 )
      {
        v3 = (_DWORD *)v3[1];
        if ( !v3 )
          return result;
      }
      return 1;
    }
  }
  return result;
}
