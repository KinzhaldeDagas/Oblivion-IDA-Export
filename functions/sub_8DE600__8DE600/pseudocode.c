int __usercall sub_8DE600@<eax>(int result@<eax>, int a2@<ecx>)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x60) - 1; i >= 0; --i ) /*0x8de608*/
  {
    result = *(_DWORD *)(a2 + 0x5C); /*0x8de610*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8de613*/
    if ( v4 ) /*0x8de618*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0xC))(v4, a2); /*0x8de61d*/
  }
  for ( j = *(_DWORD *)(a2 + 0x60) - 1; j >= 0; --j ) /*0x8de627*/
  {
    result = *(_DWORD *)(a2 + 0x5C); /*0x8de630*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8de633*/
    {
      v6 = *(_DWORD *)(a2 + 0x60) - 1; /*0x8de63d*/
      *(_DWORD *)(a2 + 0x60) = v6; /*0x8de641*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x60); ++result ) /*0x8de646*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result + 4); /*0x8de65a*/
    }
  }
  return result; /*0x8de667*/
}
