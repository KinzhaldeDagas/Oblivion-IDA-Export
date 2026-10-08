int __usercall sub_8DC010@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 8) = a2; /*0x8dc01b*/
  for ( i = *(_DWORD *)(a2 + 0x98) - 1; i >= 0; --i ) /*0x8dc025*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dc030*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc036*/
    if ( v4 ) /*0x8dc03b*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3); /*0x8dc040*/
  }
  for ( j = *(_DWORD *)(a2 + 0x98) - 1; j >= 0; --j ) /*0x8dc04d*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dc050*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc056*/
    {
      v6 = *(_DWORD *)(a2 + 0x98) - 1; /*0x8dc063*/
      *(_DWORD *)(a2 + 0x98) = v6; /*0x8dc067*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x98); ++result ) /*0x8dc06f*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result + 4); /*0x8dc07e*/
    }
  }
  return result; /*0x8dc08e*/
}
