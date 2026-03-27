char __cdecl sub_95FB40(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi

  v5 = 0;
  if ( !*(_WORD *)(a2 + 0xE) )
    return 0;
  while ( !(unsigned __int8)sub_95D920(a1, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v5), a3, a4, a5) )
  {
    if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(a2 + 0xE) )
      return 0;
  }
  *(_DWORD *)(a2 + 0x14) = v5;
  return 1;
}
