int __usercall sub_8DC380@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xD4) - 1; i >= 0; --i ) /*0x8dc38e*/
  {
    result = *(_DWORD *)(a2 + 0xD0); /*0x8dc394*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc39a*/
    if ( v4 ) /*0x8dc39f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3); /*0x8dc3a4*/
  }
  for ( j = *(_DWORD *)(a2 + 0xD4) - 1; j >= 0; --j ) /*0x8dc3b1*/
  {
    result = *(_DWORD *)(a2 + 0xD0); /*0x8dc3b3*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc3b9*/
    {
      v6 = *(_DWORD *)(a2 + 0xD4) - 1; /*0x8dc3c6*/
      *(_DWORD *)(a2 + 0xD4) = v6; /*0x8dc3ca*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xD4); ++result ) /*0x8dc3d2*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xD0) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xD0) + 4 * result + 4); /*0x8dc3ed*/
    }
  }
  return result; /*0x8dc3fd*/
}
