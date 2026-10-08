int __usercall sub_8DC770@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xEC) - 1; i >= 0; --i ) /*0x8dc77e*/
  {
    result = *(_DWORD *)(a2 + 0xE8); /*0x8dc784*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc78a*/
    if ( v4 ) /*0x8dc78f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dc794*/
  }
  for ( j = *(_DWORD *)(a2 + 0xEC) - 1; j >= 0; --j ) /*0x8dc7a1*/
  {
    result = *(_DWORD *)(a2 + 0xE8); /*0x8dc7a3*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc7a9*/
    {
      v6 = *(_DWORD *)(a2 + 0xEC) - 1; /*0x8dc7b6*/
      *(_DWORD *)(a2 + 0xEC) = v6; /*0x8dc7ba*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xEC); ++result ) /*0x8dc7c2*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xE8) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xE8) + 4 * result + 4); /*0x8dc7dd*/
    }
  }
  return result; /*0x8dc7ed*/
}
