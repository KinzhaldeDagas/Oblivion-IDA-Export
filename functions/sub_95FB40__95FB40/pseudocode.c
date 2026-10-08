char __cdecl sub_95FB40(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi

  v5 = 0; /*0x95fb48*/
  if ( !*(_WORD *)(a2 + 0xE) ) /*0x95fb4a*/
    return 0; /*0x95fb8d*/
  while ( !(unsigned __int8)sub_95D920(a1, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v5), a3, a4, a5) ) /*0x95fb80*/
  {
    if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(a2 + 0xE) ) /*0x95fb8b*/
      return 0; /*0x95fb8b*/
  }
  *(_DWORD *)(a2 + 0x14) = v5; /*0x95fb94*/
  return 1; /*0x95fb8d*/
}
