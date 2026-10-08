int __usercall sub_8DC9B0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 8) = 0; /*0x8dc9bb*/
  for ( i = *(_DWORD *)(a2 + 0x14C) - 1; i >= 0; --i ) /*0x8dc9c9*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc9d0*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc9d6*/
    if ( v4 ) /*0x8dc9db*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xC))(v4, a3); /*0x8dc9e0*/
  }
  for ( j = *(_DWORD *)(a2 + 0x14C) - 1; j >= 0; --j ) /*0x8dc9ed*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc9f0*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc9f6*/
    {
      v6 = *(_DWORD *)(a2 + 0x14C) - 1; /*0x8dca03*/
      *(_DWORD *)(a2 + 0x14C) = v6; /*0x8dca07*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x14C); ++result ) /*0x8dca0f*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result + 4); /*0x8dca1e*/
    }
  }
  return result; /*0x8dca2e*/
}
