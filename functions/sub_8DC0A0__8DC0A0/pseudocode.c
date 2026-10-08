int __usercall sub_8DC0A0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 0x10) = a2; /*0x8dc0ab*/
  for ( i = *(_DWORD *)(a2 + 0x98) - 1; i >= 0; --i ) /*0x8dc0b5*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dc0c0*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc0c6*/
    if ( v4 ) /*0x8dc0cb*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dc0d0*/
  }
  for ( j = *(_DWORD *)(a2 + 0x98) - 1; j >= 0; --j ) /*0x8dc0dd*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dc0e0*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc0e6*/
    {
      v6 = *(_DWORD *)(a2 + 0x98) - 1; /*0x8dc0f3*/
      *(_DWORD *)(a2 + 0x98) = v6; /*0x8dc0f7*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x98); ++result ) /*0x8dc0ff*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result + 4); /*0x8dc10e*/
    }
  }
  return result; /*0x8dc11e*/
}
