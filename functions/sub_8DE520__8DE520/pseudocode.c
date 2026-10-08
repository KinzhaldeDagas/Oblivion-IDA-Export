int __usercall sub_8DE520@<eax>(int result@<eax>, int a2@<ecx>)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x60) - 1; i >= 0; --i ) /*0x8de528*/
  {
    result = *(_DWORD *)(a2 + 0x5C); /*0x8de530*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8de533*/
    if ( v4 ) /*0x8de538*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a2); /*0x8de53d*/
  }
  for ( j = *(_DWORD *)(a2 + 0x60) - 1; j >= 0; --j ) /*0x8de547*/
  {
    result = *(_DWORD *)(a2 + 0x5C); /*0x8de550*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8de553*/
    {
      v6 = *(_DWORD *)(a2 + 0x60) - 1; /*0x8de55d*/
      *(_DWORD *)(a2 + 0x60) = v6; /*0x8de561*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x60); ++result ) /*0x8de566*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * result + 4); /*0x8de57a*/
    }
  }
  return result; /*0x8de587*/
}
