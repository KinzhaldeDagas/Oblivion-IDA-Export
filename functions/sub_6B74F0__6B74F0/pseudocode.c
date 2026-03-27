_DWORD *__thiscall sub_6B74F0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // edx

  result = this;
  if ( this )
  {
    do
    {
      v3 = result[1];
      if ( !v3 && !*result )
        break;
      if ( a2 == *result )
      {
        *(this + 2) = result;
        return result;
      }
      result = (_DWORD *)result[1];
    }
    while ( v3 );
  }
  return result;
}
