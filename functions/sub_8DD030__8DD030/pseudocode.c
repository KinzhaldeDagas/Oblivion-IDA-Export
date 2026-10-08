int __usercall sub_8DD030@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x110) - 1; i >= 0; --i ) /*0x8dd03e*/
  {
    result = *(_DWORD *)(a2 + 0x10C); /*0x8dd044*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dd04a*/
    if ( v4 ) /*0x8dd04f*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a3); /*0x8dd054*/
  }
  for ( j = *(_DWORD *)(a2 + 0x110) - 1; j >= 0; --j ) /*0x8dd061*/
  {
    result = *(_DWORD *)(a2 + 0x10C); /*0x8dd063*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dd069*/
    {
      v6 = *(_DWORD *)(a2 + 0x110) - 1; /*0x8dd076*/
      *(_DWORD *)(a2 + 0x110) = v6; /*0x8dd07a*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x110); ++result ) /*0x8dd082*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x10C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x10C) + 4 * result + 4); /*0x8dd09d*/
    }
  }
  return result; /*0x8dd0ad*/
}
