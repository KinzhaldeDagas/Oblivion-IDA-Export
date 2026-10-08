int __usercall sub_8DC260@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xC8) - 1; i >= 0; --i ) /*0x8dc26e*/
  {
    result = *(_DWORD *)(a2 + 0xC4); /*0x8dc274*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc27a*/
    if ( v4 ) /*0x8dc27f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3); /*0x8dc284*/
  }
  for ( j = *(_DWORD *)(a2 + 0xC8) - 1; j >= 0; --j ) /*0x8dc291*/
  {
    result = *(_DWORD *)(a2 + 0xC4); /*0x8dc293*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc299*/
    {
      v6 = *(_DWORD *)(a2 + 0xC8) - 1; /*0x8dc2a6*/
      *(_DWORD *)(a2 + 0xC8) = v6; /*0x8dc2aa*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xC8); ++result ) /*0x8dc2b2*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xC4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xC4) + 4 * result + 4); /*0x8dc2cd*/
    }
  }
  return result; /*0x8dc2dd*/
}
