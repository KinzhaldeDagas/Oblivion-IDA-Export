bool *__stdcall sub_8A8090(bool *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int i; // ecx
  unsigned int v8; // edx
  int v9; // eax
  int j; // ecx

  v6 = a4; /*0x8a8090*/
  for ( i = *(_DWORD *)(a4 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x8a8099*/
    v6 = i; /*0x8a80a0*/
  v8 = *(_DWORD *)(v6 + 0x1C); /*0x8a80a9*/
  v9 = a3; /*0x8a80ac*/
  for ( j = *(_DWORD *)(a3 + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x8a80b5*/
    v9 = j; /*0x8a80b7*/
  *a1 = sub_8A7F70(*(_DWORD *)(v9 + 0x1C), v8); /*0x8a80ce*/
  return a1; /*0x8a80d5*/
}
