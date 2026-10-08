int __cdecl _FindPESection(int a1, unsigned int a2)
{
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // edx
  int result; // eax
  unsigned int v6; // ecx

  v2 = a1 + *(_DWORD *)(a1 + 0x3C); /*0x98d867*/
  v3 = *(unsigned __int16 *)(v2 + 6); /*0x98d86f*/
  v4 = 0; /*0x98d873*/
  result = *(unsigned __int16 *)(v2 + 0x14) + v2 + 0x18; /*0x98d878*/
  if ( !*(_WORD *)(v2 + 6) ) /*0x98d86f*/
    return 0; /*0x98d89c*/
  while ( 1 ) /*0x98d882*/
  {
    v6 = *(_DWORD *)(result + 0xC); /*0x98d882*/
    if ( a2 >= v6 && a2 < v6 + *(_DWORD *)(result + 8) ) /*0x98d890*/
      break; /*0x98d890*/
    ++v4; /*0x98d892*/
    result += 0x28; /*0x98d895*/
    if ( v4 >= v3 ) /*0x98d89a*/
      return 0; /*0x98d89a*/
  }
  return result; /*0x98d89e*/
}
