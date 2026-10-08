int __usercall sub_8DC800@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int (__thiscall ***v4)(_DWORD, int); // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 0xC) = 0; /*0x8dc80b*/
  for ( i = *(_DWORD *)(a2 + 0x14C) - 1; i >= 0; --i ) /*0x8dc819*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc820*/
    v4 = *(int (__thiscall ****)(_DWORD, int))(result + 4 * i); /*0x8dc826*/
    if ( v4 ) /*0x8dc82b*/
      result = (**v4)(v4, a3); /*0x8dc830*/
  }
  for ( j = *(_DWORD *)(a2 + 0x14C) - 1; j >= 0; --j ) /*0x8dc83c*/
  {
    result = *(_DWORD *)(a2 + 0x148); /*0x8dc840*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc846*/
    {
      v6 = *(_DWORD *)(a2 + 0x14C) - 1; /*0x8dc853*/
      *(_DWORD *)(a2 + 0x14C) = v6; /*0x8dc857*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x14C); ++result ) /*0x8dc85f*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x148) + 4 * result + 4); /*0x8dc86e*/
    }
  }
  return result; /*0x8dc87e*/
}
