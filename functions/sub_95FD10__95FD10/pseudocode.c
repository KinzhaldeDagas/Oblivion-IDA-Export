char __cdecl sub_95FD10(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ebx
  int v13; // esi
  unsigned int v15; // [esp+38h] [ebp-4h]

  v10 = a2;
  v11 = 0;
  v15 = 0;
  if ( !*(_WORD *)(a2 + 0xE) )
    return 0;
  while ( 1 )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4 * v11);
    v13 = 0;
    if ( *(_WORD *)(a4 + 0xE) )
      break;
LABEL_6:
    v15 = ++v11;
    if ( v11 >= *(unsigned __int16 *)(v10 + 0xE) )
      return 0;
  }
  while ( !(unsigned __int8)sub_95D9B0(a1, v12, a3, *(_DWORD *)(*(_DWORD *)(a4 + 8) + 4 * v13), a5, a6, a7, a8, a9, a10) )
  {
    if ( ++v13 >= (unsigned int)*(unsigned __int16 *)(a4 + 0xE) )
    {
      v11 = v15;
      v10 = a2;
      goto LABEL_6;
    }
  }
  *(_DWORD *)(a2 + 0x14) = v15;
  *(_DWORD *)(a4 + 0x14) = v13;
  return 1;
}
