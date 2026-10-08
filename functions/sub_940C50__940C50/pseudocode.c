int __thiscall sub_940C50(int this)
{
  unsigned __int8 v2; // al
  int v4; // ebx
  int i; // edi
  int v6; // eax
  int v7; // eax

  v2 = *(_BYTE *)(this + 0xC); /*0x940c53*/
  if ( v2 == 0x18 ) /*0x940c58*/
    return *(unsigned __int16 *)(this + 0x10) >> 3; /*0x940c5e*/
  if ( v2 == 0x13 ) /*0x940c65*/
    return *(__int16 *)(0xC * *(unsigned __int8 *)(this + 0xD) + 0xAA1ED2); /*0x940c6e*/
  if ( v2 != 0x19 ) /*0x940c7a*/
    return *(__int16 *)(0xC * v2 + 0xAA1ED2); /*0x940cd0*/
  v4 = 1; /*0x940c81*/
  for ( i = 0; i < sub_90D240(*(_DWORD **)(this + 4)); ++i ) /*0x940c8f*/
  {
    v6 = sub_90D260(*(_DWORD **)(this + 4), i); /*0x940c95*/
    if ( sub_940C50(v6) > v4 ) /*0x940ca3*/
    {
      v7 = sub_90D260(*(_DWORD **)(this + 4), i); /*0x940ca9*/
      v4 = sub_940C50(v7); /*0x940cb5*/
    }
  }
  return v4; /*0x940c61*/
}
