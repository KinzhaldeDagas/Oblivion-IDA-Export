int __usercall sub_8DC890@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 8) = 0; /*0x8dc89b*/
  for ( i = *(_DWORD *)(a2 + 0x14C) - 1; i >= 0; --i ) /*0x8dc8a9*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc8b0*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc8b6*/
    if ( v4 ) /*0x8dc8bb*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3); /*0x8dc8c0*/
  }
  for ( j = *(_DWORD *)(a2 + 0x14C) - 1; j >= 0; --j ) /*0x8dc8cd*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc8d0*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc8d6*/
    {
      v6 = *(_DWORD *)(a2 + 0x14C) - 1; /*0x8dc8e3*/
      *(_DWORD *)(a2 + 0x14C) = v6; /*0x8dc8e7*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x14C); ++result ) /*0x8dc8ef*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result + 4); /*0x8dc8fe*/
    }
  }
  return result; /*0x8dc90e*/
}
