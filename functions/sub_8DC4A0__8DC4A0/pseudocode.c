int __usercall sub_8DC4A0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xD4) - 1; i >= 0; --i ) /*0x8dc4ae*/
  {
    result = *(_DWORD *)(a2 + 0xD0); /*0x8dc4b4*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc4ba*/
    if ( v4 ) /*0x8dc4bf*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xC))(v4, a3); /*0x8dc4c4*/
  }
  for ( j = *(_DWORD *)(a2 + 0xD4) - 1; j >= 0; --j ) /*0x8dc4d1*/
  {
    result = *(_DWORD *)(a2 + 0xD0); /*0x8dc4d3*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc4d9*/
    {
      v6 = *(_DWORD *)(a2 + 0xD4) - 1; /*0x8dc4e6*/
      *(_DWORD *)(a2 + 0xD4) = v6; /*0x8dc4ea*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xD4); ++result ) /*0x8dc4f2*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xD0) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xD0) + 4 * result + 4); /*0x8dc50d*/
    }
  }
  return result; /*0x8dc51d*/
}
