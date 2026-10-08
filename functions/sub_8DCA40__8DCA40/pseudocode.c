int __usercall sub_8DCA40@<eax>(int result@<eax>, int a2)
{
  int i; // edi
  int v3; // ecx
  int j; // edx
  int v5; // ecx

  for ( i = *(_DWORD *)(a2 + 0xF8) - 1; i >= 0; --i ) /*0x8dca4d*/
  {
    result = *(_DWORD *)(a2 + 0xF4); /*0x8dca50*/
    v3 = *(_DWORD *)(result + 4 * i); /*0x8dca56*/
    if ( v3 ) /*0x8dca5b*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a2); /*0x8dca60*/
  }
  for ( j = *(_DWORD *)(a2 + 0xF8) - 1; j >= 0; --j ) /*0x8dca6d*/
  {
    result = *(_DWORD *)(a2 + 0xF4); /*0x8dca70*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dca76*/
    {
      v5 = *(_DWORD *)(a2 + 0xF8) - 1; /*0x8dca83*/
      *(_DWORD *)(a2 + 0xF8) = v5; /*0x8dca87*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xF8); ++result ) /*0x8dca8f*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xF4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xF4) + 4 * result + 4); /*0x8dca9e*/
    }
  }
  return result; /*0x8dcaae*/
}
