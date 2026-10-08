int __usercall sub_8DC410@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0xD4) - 1; i >= 0; --i ) /*0x8dc41e*/
  {
    result = *(_DWORD *)(a2 + 0xD0); /*0x8dc424*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dc42a*/
    if ( v4 ) /*0x8dc42f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dc434*/
  }
  for ( j = *(_DWORD *)(a2 + 0xD4) - 1; j >= 0; --j ) /*0x8dc441*/
  {
    result = *(_DWORD *)(a2 + 0xD0); /*0x8dc443*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dc449*/
    {
      v6 = *(_DWORD *)(a2 + 0xD4) - 1; /*0x8dc456*/
      *(_DWORD *)(a2 + 0xD4) = v6; /*0x8dc45a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0xD4); ++result ) /*0x8dc462*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0xD0) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0xD0) + 4 * result + 4); /*0x8dc47d*/
    }
  }
  return result; /*0x8dc48d*/
}
