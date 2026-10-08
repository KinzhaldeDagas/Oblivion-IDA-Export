int __usercall sub_8DCD60@<eax>(int result@<eax>, int a2, int a3)
{
  int i; // edi
  int v4; // ecx
  int j; // edx
  int v6; // ecx

  for ( i = *(_DWORD *)(a2 + 0x110) - 1; i >= 0; --i ) /*0x8dcd6e*/
  {
    result = *(_DWORD *)(a2 + 0x10C); /*0x8dcd74*/
    v4 = *(_DWORD *)(result + 4 * i); /*0x8dcd7a*/
    if ( v4 ) /*0x8dcd7f*/
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 4))(v4, a2, a3); /*0x8dcd85*/
  }
  for ( j = *(_DWORD *)(a2 + 0x110) - 1; j >= 0; --j ) /*0x8dcd92*/
  {
    result = *(_DWORD *)(a2 + 0x10C); /*0x8dcd94*/
    if ( !*(_DWORD *)(result + 4 * j) ) /*0x8dcd9a*/
    {
      v6 = *(_DWORD *)(a2 + 0x110) - 1; /*0x8dcda7*/
      *(_DWORD *)(a2 + 0x110) = v6; /*0x8dcdab*/
      for ( result = j; result < *(_DWORD *)(a2 + 0x110); ++result ) /*0x8dcdb3*/
        *(_DWORD *)(*(_DWORD *)(a2 + 0x10C) + 4 * result) = *(_DWORD *)(*(_DWORD *)(a2 + 0x10C) + 4 * result + 4); /*0x8dcdcd*/
    }
  }
  return result; /*0x8dcddd*/
}
