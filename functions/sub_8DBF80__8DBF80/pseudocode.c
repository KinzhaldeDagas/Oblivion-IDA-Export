int __usercall sub_8DBF80@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int (__thiscall ***v4)(_DWORD, int); // ecx
  int j; // edx
  int v6; // ecx

  *(_DWORD *)(a3 + 0xC) = a2; /*0x8dbf8b*/
  for ( i = *(_DWORD *)(a2 + 0x98) - 1; i >= 0; --i ) /*0x8dbf95*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dbfa0*/
    v4 = *(int (__thiscall ****)(_DWORD, int))(result + 4 * i); /*0x8dbfa6*/
    if ( v4 ) /*0x8dbfab*/
      result = (**v4)(v4, a3); /*0x8dbfb0*/
  }
  for ( j = *(_DWORD *)(a2 + 0x98) - 1; j >= 0; --j ) /*0x8dbfbc*/
  {
    result = *(_DWORD *)(a2 + 0x94); /*0x8dbfc0*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dbfc6*/
    {
      v6 = *(_DWORD *)(a2 + 0x98) - 1; /*0x8dbfd3*/
      *(_DWORD *)(a2 + 0x98) = v6; /*0x8dbfd7*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x98); ++result ) /*0x8dbfdf*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 4 * result + 4); /*0x8dbfee*/
    }
  }
  return result; /*0x8dbffe*/
}
