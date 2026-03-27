char __cdecl sub_95FDC0(
        float a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // esi

  v12 = 0;
  if ( !*(_WORD *)(a2 + 0xE) )
    return 0;
  while ( !(unsigned __int8)sub_95DAB0(
                              a1,
                              *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v12),
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              a11,
                              a12) )
  {
    if ( ++v12 >= (unsigned int)*(unsigned __int16 *)(a2 + 0xE) )
      return 0;
  }
  *(_DWORD *)(a2 + 0x14) = v12;
  return 1;
}
