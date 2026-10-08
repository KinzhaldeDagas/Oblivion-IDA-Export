int __cdecl sub_497DD0(int a1, int a2)
{
  int v3; // eax

  if ( !a2 ) /*0x497dd7*/
    return 0; /*0x497dd9*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x10))(a2); /*0x497de4*/
  if ( !v3 ) /*0x497de8*/
    return 0; /*0x497dfb*/
  while ( v3 != a1 ) /*0x497df2*/
  {
    v3 = *(_DWORD *)(v3 + 4); /*0x497df4*/
    if ( !v3 ) /*0x497df9*/
      return 0; /*0x497df9*/
  }
  return a2; /*0x497ddb*/
}
