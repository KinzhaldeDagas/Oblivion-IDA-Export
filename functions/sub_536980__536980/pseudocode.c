_DWORD *__thiscall sub_536980(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edx

  result = a2;
  if ( this == a2 )
    return (_DWORD *)*(this + 1);
  v3 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = (_DWORD *)v3[1];
      if ( this == v4 )
        break;
      v3 = (_DWORD *)v3[1];
      if ( !v4 )
        return result;
    }
    v3[1] = v4[1];
  }
  return result;
}
