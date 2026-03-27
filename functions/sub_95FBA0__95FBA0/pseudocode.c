char __cdecl sub_95FBA0(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // esi

  v5 = a2;
  v6 = 0;
  if ( !*(_WORD *)(a2 + 0xE) )
    return 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v6);
    v8 = 0;
    if ( *(_WORD *)(a4 + 0xE) )
      break;
LABEL_6:
    if ( ++v6 >= (unsigned int)*(unsigned __int16 *)(v5 + 0xE) )
      return 0;
  }
  while ( !(unsigned __int8)sub_95D920(a1, v7, a3, *(_DWORD *)(*(_DWORD *)(a4 + 8) + 4 * v8), a5) )
  {
    if ( ++v8 >= (unsigned int)*(unsigned __int16 *)(a4 + 0xE) )
    {
      v5 = a2;
      goto LABEL_6;
    }
  }
  *(_DWORD *)(a2 + 0x14) = v6;
  *(_DWORD *)(a4 + 0x14) = v8;
  return 1;
}
