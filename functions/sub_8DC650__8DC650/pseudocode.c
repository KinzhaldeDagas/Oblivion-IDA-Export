int __usercall sub_8DC650@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xE0) - 1; i >= 0; --i ) /*0x8dc65e*/
  {
    result = *(_DWORD *)(a2 + 0xDC); /*0x8dc664*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc66a*/
    if ( v4 ) /*0x8dc66f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xC))(v4, a3); /*0x8dc674*/
  }
  for ( j = *(_DWORD *)(a2 + 0xE0) - 1; j >= 0; --j ) /*0x8dc681*/
  {
    result = *(_DWORD *)(a2 + 0xDC); /*0x8dc683*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc689*/
    {
      v6 = *(_DWORD *)(a2 + 0xE0) - 1; /*0x8dc696*/
      *(_DWORD *)(a2 + 0xE0) = v6; /*0x8dc69a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xE0); ++result ) /*0x8dc6a2*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xDC) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xDC) + 4 * result + 4); /*0x8dc6bd*/
    }
  }
  return result; /*0x8dc6cd*/
}
