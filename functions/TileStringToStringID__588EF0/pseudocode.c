int __cdecl TileStringToStringID(unsigned __int8 *a1)
{
  signed __int8 v1; // al
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  const unsigned __int8 *v5; // eax
  int v7; // edi
  _DWORD *v8; // esi
  const unsigned __int8 *v9; // ecx

  if ( !a1 )
    return 0;
  v1 = *a1;
  if ( !*a1 )
    return 0;
  if ( v1 == 0x26 )
  {
    v2 = 0x1B;
    goto LABEL_5;
  }
  if ( v1 != 0x5F )
  {
    v2 = v1 - 0x40;
    if ( v2 > 0x20 )
      v2 -= 0x20;
    if ( (unsigned int)v2 > 0x1A )
      v2 = 0;
LABEL_5:
    v3 = (_DWORD *)dword_B3B0B4[4 * v2];
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = (_DWORD *)v3[2];
        v5 = (const unsigned __int8 *)v4[2];
        v3 = (_DWORD *)*v3;
        if ( *v5 )
        {
          if ( !_mbsicmp(v5, a1) )
            break;
        }
        if ( !v3 )
          return 0;
      }
      ++v4[1];
      return *v4;
    }
    return 0;
  }
  v7 = 0;
  if ( !word_B13BCE )
    return 0;
  while ( 1 )
  {
    v8 = *(_DWORD **)(dword_B13BC8 + 4 * v7);
    v9 = (const unsigned __int8 *)v8[2];
    if ( *v9 )
    {
      if ( !_mbsicmp(v9, a1) )
        break;
    }
    if ( ++v7 >= (unsigned int)(unsigned __int16)word_B13BCE )
      return 0;
  }
  ++v8[1];
  return *v8;
}
