int __usercall sub_8DCFA0@<eax>(int result@<eax>, int a2, int a3, int a4)
{
  int i; // edi
  int v5; // ecx
  int j; // edx
  int v7; // ecx

  for ( i = *(_DWORD *)(a2 + 0x140) - 1; i >= 0; --i ) /*0x8dcfae*/
  {
    result = *(_DWORD *)(a2 + 0x13C); /*0x8dcfc0*/
    v5 = *(_DWORD *)(result + 4 * i); /*0x8dcfc6*/
    if ( v5 ) /*0x8dcfcb*/
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 4))(v5, a3, a4); /*0x8dcfd1*/
  }
  for ( j = *(_DWORD *)(a2 + 0x140) - 1; j >= 0; --j ) /*0x8dcfdf*/
  {
    result = *(_DWORD *)(a2 + 0x13C); /*0x8dcfe1*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dcfe7*/
    {
      v7 = *(_DWORD *)(a2 + 0x140) - 1; /*0x8dcff4*/
      *(_DWORD *)(a2 + 0x140) = v7; /*0x8dcff8*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x140); ++result ) /*0x8dd000*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x13C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x13C) + 4 * result + 4); /*0x8dd00f*/
    }
  }
  return result; /*0x8dd01f*/
}
