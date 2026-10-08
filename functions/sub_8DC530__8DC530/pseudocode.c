int __usercall sub_8DC530@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xE0) - 1; i >= 0; --i ) /*0x8dc53e*/
  {
    result = *(_DWORD *)(a2 + 0xDC); /*0x8dc544*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc54a*/
    if ( v4 ) /*0x8dc54f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3); /*0x8dc554*/
  }
  for ( j = *(_DWORD *)(a2 + 0xE0) - 1; j >= 0; --j ) /*0x8dc561*/
  {
    result = *(_DWORD *)(a2 + 0xDC); /*0x8dc563*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc569*/
    {
      v6 = *(_DWORD *)(a2 + 0xE0) - 1; /*0x8dc576*/
      *(_DWORD *)(a2 + 0xE0) = v6; /*0x8dc57a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xE0); ++result ) /*0x8dc582*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xDC) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xDC) + 4 * result + 4); /*0x8dc59d*/
    }
  }
  return result; /*0x8dc5ad*/
}
