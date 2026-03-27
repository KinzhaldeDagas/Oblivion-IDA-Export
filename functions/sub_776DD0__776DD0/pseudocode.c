_DWORD *__stdcall sub_776DD0(
        int a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *result; // eax
  __int16 v10; // dx
  unsigned int v11; // edx

  result = a4;
  v10 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( a2 )
    v10 = *(_WORD *)(a2 + 0x20);
  *a5 = 0;
  *a4 += 0xC;
  *a6 = *a4;
  if ( v10 )
  {
    *a3 = 0xA;
    *a4 += 0xC;
  }
  else
  {
    *a3 |= 2u;
  }
  if ( *(_DWORD *)(a1 + 0x20) )
  {
    *a3 |= 0x10u;
    *a7 = *a4;
    *a4 += 0xC;
  }
  if ( *(_DWORD *)(a1 + 0x24) )
  {
    *a3 |= 0x40u;
    *a8 = *a4;
    *a4 += 4;
  }
  v11 = *(_BYTE *)(a1 + 0x2C) & 0x3F;
  if ( (*(_BYTE *)(a1 + 0x2C) & 0x3F) == 0 )
  {
    v11 = 1;
LABEL_15:
    *a3 |= v11 << 8;
    *a9 = *a4;
    *a4 += 8 * v11;
    return result;
  }
  if ( v11 > dword_B28CB0 )
    v11 = dword_B28CB0;
  if ( v11 )
    goto LABEL_15;
  return result;
}
