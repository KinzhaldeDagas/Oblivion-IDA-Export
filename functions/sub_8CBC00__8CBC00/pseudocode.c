char __cdecl sub_8CBC00(int a1, int a2)
{
  int v2; // eax
  bool v3; // zf
  const void **v4; // esi

  *(_BYTE *)(a2 + 0x28) = 1; /*0x8cbc05*/
  LOBYTE(v2) = 0; /*0x8cbc09*/
  v3 = *(_WORD *)(a2 + 0x22) == 0xFFFF; /*0x8cbc0b*/
  *(_BYTE *)(a2 + 0x25) = 0; /*0x8cbc11*/
  *(_BYTE *)(a2 + 0x24) = 0; /*0x8cbc14*/
  if ( v3 ) /*0x8cbc17*/
  {
    v4 = (const void **)(a1 + 0x50); /*0x8cbc22*/
    *(_WORD *)(a2 + 0x22) = *(_WORD *)(a1 + 0x54); /*0x8cbc25*/
    if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) ) /*0x8cbc37*/
      sub_8A6EE0(v4, 4); /*0x8cbc3c*/
    v2 = *(_DWORD *)(a1 + 0x54); /*0x8cbc44*/
    *((_DWORD *)*v4 + v2) = a2; /*0x8cbc49*/
    ++*(_DWORD *)(a1 + 0x54); /*0x8cbc4c*/
  }
  return v2; /*0x8cbc50*/
}
