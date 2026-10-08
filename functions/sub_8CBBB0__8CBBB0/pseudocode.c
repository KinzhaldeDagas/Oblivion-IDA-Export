int __cdecl sub_8CBBB0(int a1, int a2)
{
  const void **v2; // esi
  int result; // eax

  *(_BYTE *)(a2 + 0x28) = 0; /*0x8cbbb5*/
  if ( *(_WORD *)(a2 + 0x22) == 0xFFFF ) /*0x8cbbbf*/
  {
    v2 = (const void **)(a1 + 0x50); /*0x8cbbca*/
    *(_WORD *)(a2 + 0x22) = *(_WORD *)(a1 + 0x54); /*0x8cbbcd*/
    if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) ) /*0x8cbbdf*/
      sub_8A6EE0(v2, 4); /*0x8cbbe4*/
    result = *(_DWORD *)(a1 + 0x54); /*0x8cbbec*/
    *((_DWORD *)*v2 + result) = a2; /*0x8cbbf1*/
    ++*(_DWORD *)(a1 + 0x54); /*0x8cbbf4*/
  }
  return result; /*0x8cbbf8*/
}
