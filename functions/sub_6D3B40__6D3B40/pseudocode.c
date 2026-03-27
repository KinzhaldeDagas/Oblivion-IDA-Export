int __cdecl sub_6D3B40(int a1, int a2)
{
  int v2; // esi
  int result; // eax
  __int16 v4; // cx
  __int16 v5; // cx
  __int16 v6; // si
  __int16 v7; // si

  v2 = *(_BYTE *)(a1 + 8) & 1;
  result = a2;
  v4 = v2 | *(_WORD *)(a2 + 8) & 0xFFFE;
  *(_WORD *)(a2 + 8) = v4;
  if ( v2 )
    v5 = v4 & 0xFFF7;
  else
    v5 = v4 | 8;
  *(_WORD *)(a2 + 8) = v5;
  *(_WORD *)(a2 + 8) ^= (*(_BYTE *)(a1 + 8) ^ (unsigned __int8)v5) & 6;
  v6 = *(_WORD *)(a2 + 8);
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
    v7 = v6 | 0x10;
  else
    v7 = v6 & 0xFFEF;
  *(_WORD *)(a2 + 8) = v7;
  *(float *)(a2 + 0xC) = *(float *)(a1 + 0xC);
  *(float *)(a2 + 0x14) = *(float *)(a1 + 0x14);
  *(float *)(a2 + 0x18) = *(float *)(a1 + 0x18);
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
    *(_WORD *)(a2 + 8) |= 8u;
  else
    *(_WORD *)(a2 + 8) &= ~8u;
  return result;
}
