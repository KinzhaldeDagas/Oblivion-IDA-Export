int __thiscall sub_940C50(int this)
{
  unsigned __int8 v2; // al
  signed int v4; // ebx
  int i; // edi
  int v6; // eax
  int v7; // eax

  v2 = *(_BYTE *)(this + 0xC);
  if ( v2 == 0x18 )
    return *(unsigned __int16 *)(this + 0x10) >> 3;
  if ( v2 == 0x13 )
    return *(__int16 *)(0xC * *(unsigned __int8 *)(this + 0xD) + 0xAA1ED2);
  if ( v2 != 0x19 )
    return *(__int16 *)(0xC * v2 + 0xAA1ED2);
  v4 = 1;
  for ( i = 0; i < sub_90D240(*(_DWORD **)(this + 4)); ++i )
  {
    v6 = sub_90D260(*(_DWORD **)(this + 4), i);
    if ( (int)sub_940C50(v6) > v4 )
    {
      v7 = sub_90D260(*(_DWORD **)(this + 4), i);
      v4 = sub_940C50(v7);
    }
  }
  return v4;
}
