int __usercall sub_8DC2F0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xC8) - 1; i >= 0; --i ) /*0x8dc2fe*/
  {
    result = *(_DWORD *)(a2 + 0xC4); /*0x8dc304*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc30a*/
    if ( v4 ) /*0x8dc30f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dc314*/
  }
  for ( j = *(_DWORD *)(a2 + 0xC8) - 1; j >= 0; --j ) /*0x8dc321*/
  {
    result = *(_DWORD *)(a2 + 0xC4); /*0x8dc323*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc329*/
    {
      v6 = *(_DWORD *)(a2 + 0xC8) - 1; /*0x8dc336*/
      *(_DWORD *)(a2 + 0xC8) = v6; /*0x8dc33a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xC8); ++result ) /*0x8dc342*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xC4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xC4) + 4 * result + 4); /*0x8dc35d*/
    }
  }
  return result; /*0x8dc36d*/
}
