char __cdecl sub_95FC90(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // esi

  v10 = 0;
  if ( !*(_WORD *)(a2 + 0xE) )
    return 0;
  while ( !(unsigned __int8)sub_95D9B0(a1, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v10), a3, a4, a5, a6, a7, a8, a9, a10) )
  {
    if ( ++v10 >= (unsigned int)*(unsigned __int16 *)(a2 + 0xE) )
      return 0;
  }
  *(_DWORD *)(a2 + 0x14) = v10;
  return 1;
}
