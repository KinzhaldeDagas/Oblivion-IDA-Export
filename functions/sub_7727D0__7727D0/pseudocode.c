_DWORD *__thiscall sub_7727D0(_DWORD *this, int a2, _BYTE *a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 2);
  if ( result )
  {
    while ( *result != a2 )
    {
      result = (_DWORD *)result[2];
      if ( !result )
        goto LABEL_4;
    }
    *a3 = 0;
  }
  else
  {
LABEL_4:
    result = (_DWORD *)*(this + 4);
    if ( result )
    {
      while ( *result != a2 )
      {
        result = (_DWORD *)result[2];
        if ( !result )
          return 0;
      }
      *a3 = 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
