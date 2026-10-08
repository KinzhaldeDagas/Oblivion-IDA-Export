int __usercall sub_8DC920@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 0x10) = 0; /*0x8dc92b*/
  for ( i = *(_DWORD *)(a2 + 0x14C) - 1; i >= 0; --i ) /*0x8dc939*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc940*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc946*/
    if ( v4 ) /*0x8dc94b*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dc950*/
  }
  for ( j = *(_DWORD *)(a2 + 0x14C) - 1; j >= 0; --j ) /*0x8dc95d*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc960*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc966*/
    {
      v6 = *(_DWORD *)(a2 + 0x14C) - 1; /*0x8dc973*/
      *(_DWORD *)(a2 + 0x14C) = v6; /*0x8dc977*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x14C); ++result ) /*0x8dc97f*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result + 4); /*0x8dc98e*/
    }
  }
  return result; /*0x8dc99e*/
}
