int __usercall sub_8DC5C0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xE0) - 1; i >= 0; --i ) /*0x8dc5ce*/
  {
    result = *(_DWORD *)(a2 + 0xDC); /*0x8dc5d4*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc5da*/
    if ( v4 ) /*0x8dc5df*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dc5e4*/
  }
  for ( j = *(_DWORD *)(a2 + 0xE0) - 1; j >= 0; --j ) /*0x8dc5f1*/
  {
    result = *(_DWORD *)(a2 + 0xDC); /*0x8dc5f3*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc5f9*/
    {
      v6 = *(_DWORD *)(a2 + 0xE0) - 1; /*0x8dc606*/
      *(_DWORD *)(a2 + 0xE0) = v6; /*0x8dc60a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xE0); ++result ) /*0x8dc612*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xDC) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xDC) + 4 * result + 4); /*0x8dc62d*/
    }
  }
  return result; /*0x8dc63d*/
}
