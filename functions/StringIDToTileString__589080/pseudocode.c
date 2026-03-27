_BYTE *__cdecl StringIDToTileString(signed int a1)
{
  _DWORD *v1; // eax
  _BYTE *result; // eax
  int *v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // ecx

  if ( a1 < 0x2710 )
  {
    v3 = dword_B3B0B4;
    while ( 1 )
    {
      v4 = (_DWORD *)*v3;
      if ( *v3 )
        break;
LABEL_11:
      v3 += 4;
      if ( (int)v3 >= (int)&byte_B3B274 )
        return 0;
    }
    while ( 1 )
    {
      v5 = (_DWORD *)v4[2];
      v4 = (_DWORD *)*v4;
      if ( a1 == *v5 )
      {
        if ( *(_BYTE *)v5[2] )
          return (_BYTE *)v5[2];
      }
      if ( !v4 )
        goto LABEL_11;
    }
  }
  else
  {
    v1 = *(_DWORD **)(dword_B13BC8 + 4 * (a1 % 0x2710));
    if ( !v1 )
      return 0;
    if ( a1 != *v1 )
      return 0;
    result = (_BYTE *)v1[2];
    if ( !*result )
      return 0;
  }
  return result;
}
