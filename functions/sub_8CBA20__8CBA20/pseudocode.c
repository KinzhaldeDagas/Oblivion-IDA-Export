char __cdecl sub_8CBA20(int a1, int a2)
{
  int v2; // eax
  int v3; // ebx

  if ( *(_DWORD *)(a1 + 0x3C) == (*(_DWORD *)(a1 + 0x40) & 0x3FFFFFFF) ) /*0x8cba37*/
    sub_8A6EE0((const void **)(a1 + 0x38), 4); /*0x8cba3c*/
  *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * (*(_DWORD *)(a1 + 0x3C))++) = a2; /*0x8cba4d*/
  *(_DWORD *)(*(_DWORD *)(a1 + 0x44) + 4 * *(unsigned __int16 *)(a2 + 0x20)) = *(_DWORD *)(*(_DWORD *)(a1 + 0x44) /*0x8cba61*/
                                                                                         + 4 * *(_DWORD *)(a1 + 0x48)
                                                                                         - 4);
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x44) + 4 * *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20); /*0x8cba71*/
  --*(_DWORD *)(a1 + 0x48); /*0x8cba75*/
  *(_WORD *)(a2 + 0x20) = *(_WORD *)(a1 + 0x3C) - 1; /*0x8cba7e*/
  *(_BYTE *)(a2 + 0x29) = 1; /*0x8cba82*/
  v2 = *(_DWORD *)(a2 + 0x38); /*0x8cba86*/
  v3 = 0; /*0x8cba89*/
  *(_DWORD *)(a2 + 0x2C) = 0; /*0x8cba8d*/
  *(_DWORD *)(a2 + 0x30) = 0; /*0x8cba94*/
  if ( v2 > 0 ) /*0x8cba9b*/
  {
    do /*0x8cbabf*/
      sub_8DD0C0(0.0, 0, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * v3++) + 0x50) + 0x10); /*0x8cbab1*/
    while ( v3 < *(_DWORD *)(a2 + 0x38) ); /*0x8cbabf*/
  }
  sub_8E77F0(a2, *(float *)(a2 + 0x68), *(_DWORD *)(a1 + 0x160), *(_DWORD **)(a1 + 0x74)); /*0x8cbad1*/
  return sub_8DCAC0(a1, a2); /*0x8cbae0*/
}
