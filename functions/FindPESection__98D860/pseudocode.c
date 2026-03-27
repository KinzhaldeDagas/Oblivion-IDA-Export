int __cdecl _FindPESection(int a1, unsigned int a2)
{
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // edx
  int result; // eax
  unsigned int v6; // ecx

  v2 = a1 + *(_DWORD *)(a1 + 0x3C);
  v3 = *(unsigned __int16 *)(v2 + 6);
  v4 = 0;
  result = *(unsigned __int16 *)(v2 + 0x14) + v2 + 0x18;
  if ( !*(_WORD *)(v2 + 6) )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(result + 0xC);
    if ( a2 >= v6 && a2 < v6 + *(_DWORD *)(result + 8) )
      break;
    ++v4;
    result += 0x28;
    if ( v4 >= v3 )
      return 0;
  }
  return result;
}
