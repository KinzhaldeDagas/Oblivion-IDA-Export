int __usercall sub_8DC6E0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xEC) - 1; i >= 0; --i ) /*0x8dc6ee*/
  {
    result = *(_DWORD *)(a2 + 0xE8); /*0x8dc6f4*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc6fa*/
    if ( v4 ) /*0x8dc6ff*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a3); /*0x8dc704*/
  }
  for ( j = *(_DWORD *)(a2 + 0xEC) - 1; j >= 0; --j ) /*0x8dc711*/
  {
    result = *(_DWORD *)(a2 + 0xE8); /*0x8dc713*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc719*/
    {
      v6 = *(_DWORD *)(a2 + 0xEC) - 1; /*0x8dc726*/
      *(_DWORD *)(a2 + 0xEC) = v6; /*0x8dc72a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xEC); ++result ) /*0x8dc732*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xE8) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xE8) + 4 * result + 4); /*0x8dc74d*/
    }
  }
  return result; /*0x8dc75d*/
}
