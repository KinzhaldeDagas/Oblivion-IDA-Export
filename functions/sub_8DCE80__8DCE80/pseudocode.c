int __usercall sub_8DCE80@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x128) - 1; i >= 0; --i ) /*0x8dce8e*/
  {
    result = *(_DWORD *)(a2 + 0x124); /*0x8dce94*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dce9a*/
    if ( v4 ) /*0x8dce9f*/
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 4))(v4, a2, a3); /*0x8dcea5*/
  }
  for ( j = *(_DWORD *)(a2 + 0x128) - 1; j >= 0; --j ) /*0x8dceb2*/
  {
    result = *(_DWORD *)(a2 + 0x124); /*0x8dceb4*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dceba*/
    {
      v6 = *(_DWORD *)(a2 + 0x128) - 1; /*0x8dcec7*/
      *(_DWORD *)(a2 + 0x128) = v6; /*0x8dcecb*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x128); ++result ) /*0x8dced3*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x124) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x124) + 4 * result + 4); /*0x8dceed*/
    }
  }
  return result; /*0x8dcefd*/
}
