int __cdecl sub_6D3B40(int a1, int a2)
{
  int v2; // esi
  int result; // eax
  __int16 v4; // cx
  __int16 v5; // cx
  __int16 v6; // si
  __int16 v7; // si

  v2 = *(_BYTE *)(a1 + 8) & 1; /*0x6d3b4c*/
  result = a2; /*0x6d3b4e*/
  v4 = v2 | *(_WORD *)(a2 + 8) & 0xFFFE; /*0x6d3b5b*/
  *(_WORD *)(a2 + 8) = v4; /*0x6d3b60*/
  if ( v2 ) /*0x6d3b64*/
    v5 = v4 & 0xFFF7; /*0x6d3b6b*/
  else
    v5 = v4 | 8; /*0x6d3b66*/
  *(_WORD *)(a2 + 8) = v5; /*0x6d3b71*/
  *(_WORD *)(a2 + 8) ^= (*(_BYTE *)(a1 + 8) ^ (unsigned __int8)v5) & 6; /*0x6d3b7e*/
  v6 = *(_WORD *)(a2 + 8); /*0x6d3b86*/
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 ) /*0x6d3b90*/
    v7 = v6 | 0x10; /*0x6d3b92*/
  else
    v7 = v6 & 0xFFEF; /*0x6d3b97*/
  *(_WORD *)(a2 + 8) = v7; /*0x6d3b9d*/
  *(float *)(a2 + 0xC) = *(float *)(a1 + 0xC); /*0x6d3ba4*/
  *(float *)(a2 + 0x14) = *(float *)(a1 + 0x14); /*0x6d3bab*/
  *(float *)(a2 + 0x18) = *(float *)(a1 + 0x18); /*0x6d3bb1*/
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 ) /*0x6d3bbd*/
    *(_WORD *)(a2 + 8) |= 8u; /*0x6d3bbf*/
  else
    *(_WORD *)(a2 + 8) &= ~8u; /*0x6d3bc5*/
  return result; /*0x6d3bc4*/
}
