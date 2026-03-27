_DWORD *__thiscall sub_77D270(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi

  result = (_DWORD *)*(this + 0xB);
  if ( result )
  {
    v3 = 0;
    while ( result[9] <= a2[9] )
    {
      v3 = result;
      result = (_DWORD *)result[0xF];
      if ( !result )
      {
        v3[0xF] = a2;
        a2[0x10] = v3;
        a2[0xF] = 0;
        return result;
      }
    }
    if ( v3 )
      v3[0xF] = a2;
    result[0x10] = a2;
    a2[0xF] = result;
    a2[0x10] = v3;
    if ( result == (_DWORD *)*(this + 0xB) )
      *(this + 0xB) = a2;
  }
  else
  {
    *(this + 0xB) = a2;
    a2[0xF] = 0;
    result = (_DWORD *)*(this + 0xB);
    result[0x10] = 0;
  }
  return result;
}
