char __cdecl sub_95FC90(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // esi

  v10 = 0; /*0x95fc98*/
  if ( !*(_WORD *)(a2 + 0xE) ) /*0x95fc9a*/
    return 0; /*0x95fcf6*/
  while ( !(unsigned __int8)sub_95D9B0(a1, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v10), a3, a4, a5, a6, a7, a8, a9, a10) ) /*0x95fce9*/
  {
    if ( ++v10 >= (unsigned int)*(unsigned __int16 *)(a2 + 0xE) ) /*0x95fcf4*/
      return 0; /*0x95fcf4*/
  }
  *(_DWORD *)(a2 + 0x14) = v10; /*0x95fcfd*/
  return 1; /*0x95fcf6*/
}
