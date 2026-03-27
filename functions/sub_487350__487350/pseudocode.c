_DWORD *__thiscall sub_487350(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  char v4; // dl

  result = (_DWORD *)*this;
  v4 = 1;
  if ( *this )
  {
    while ( v4 )
    {
      if ( *result && *(_DWORD *)(*result + 8) == a2 )
        v4 = 0;
      else
        result = (_DWORD *)result[1];
      if ( !result )
        return result;
    }
    if ( result )
    {
      result = (_DWORD *)*result;
      if ( result )
        result[1] += a3;
    }
  }
  return result;
}
