int __usercall sub_8DE590@<eax>(int result@<eax>, int a2@<ecx>)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x60) - 1; i >= 0; --i ) /*0x8de598*/
  {
    result = *(_DWORD *)(a2 + 0x5C); /*0x8de5a0*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8de5a3*/
    if ( v4 ) /*0x8de5a8*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a2); /*0x8de5ad*/
  }
  for ( j = *(_DWORD *)(a2 + 0x60) - 1; j >= 0; --j ) /*0x8de5b7*/
  {
    result = *(_DWORD *)(a2 + 0x5C); /*0x8de5c0*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8de5c3*/
    {
      v6 = *(_DWORD *)(a2 + 0x60) - 1; /*0x8de5cd*/
      *(_DWORD *)(a2 + 0x60) = v6; /*0x8de5d1*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x60); ++result ) /*0x8de5d6*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result + 4); /*0x8de5ea*/
    }
  }
  return result; /*0x8de5f7*/
}
