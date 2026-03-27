_DWORD *__thiscall sub_77D220(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // edx

  result = (_DWORD *)*(this + 0xB);
  if ( !result )
    return 0;
  while ( result[9] < a2 )
  {
    result = (_DWORD *)result[0xF];
    if ( !result )
      return 0;
  }
  v3 = result[0xF];
  if ( v3 )
    *(_DWORD *)(v3 + 0x40) = result[0x10];
  v4 = result[0x10];
  if ( v4 )
    *(_DWORD *)(v4 + 0x3C) = result[0xF];
  if ( result == (_DWORD *)*(this + 0xB) )
    *(this + 0xB) = result[0xF];
  return result;
}
