int __usercall sub_8DC130@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 8) = a2; /*0x8dc13b*/
  for ( i = *(_DWORD *)(a2 + 0x98) - 1; i >= 0; --i ) /*0x8dc145*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dc150*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc156*/
    if ( v4 ) /*0x8dc15b*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xC))(v4, a3); /*0x8dc160*/
  }
  for ( j = *(_DWORD *)(a2 + 0x98) - 1; j >= 0; --j ) /*0x8dc16d*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dc170*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc176*/
    {
      v6 = *(_DWORD *)(a2 + 0x98) - 1; /*0x8dc183*/
      *(_DWORD *)(a2 + 0x98) = v6; /*0x8dc187*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x98); ++result ) /*0x8dc18f*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result + 4); /*0x8dc19e*/
    }
  }
  return result; /*0x8dc1ae*/
}
