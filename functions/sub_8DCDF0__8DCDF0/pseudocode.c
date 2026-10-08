int __usercall sub_8DCDF0@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x11C) - 1; i >= 0; --i ) /*0x8dcdfe*/
  {
    result = *(_DWORD *)(a2 + 0x118); /*0x8dce04*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dce0a*/
    if ( v4 ) /*0x8dce0f*/
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 4))(v4, a2, a3); /*0x8dce15*/
  }
  for ( j = *(_DWORD *)(a2 + 0x11C) - 1; j >= 0; --j ) /*0x8dce22*/
  {
    result = *(_DWORD *)(a2 + 0x118); /*0x8dce24*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dce2a*/
    {
      v6 = *(_DWORD *)(a2 + 0x11C) - 1; /*0x8dce37*/
      *(_DWORD *)(a2 + 0x11C) = v6; /*0x8dce3b*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x11C); ++result ) /*0x8dce43*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x118) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x118) + 4 * result + 4); /*0x8dce5d*/
    }
  }
  return result; /*0x8dce6d*/
}
