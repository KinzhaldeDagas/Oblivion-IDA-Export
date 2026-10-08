int __cdecl sub_8CB580(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  int i; // ebp
  unsigned int *v6; // edi
  int v7; // esi
  const void *v8; // edi
  const void *v9; // edi

  result = a2[0xF]; /*0x8cb585*/
  for ( i = 0; i < result; ++i ) /*0x8cb58d*/
  {
    v6 = (unsigned int *)(a2[0xE] + 8 * i); /*0x8cb594*/
    v7 = v6[1] + *(_DWORD *)(v6[1] + 0x10); /*0x8cb59d*/
    if ( *(_BYTE *)(v7 + 0x91) ) /*0x8cb59f*/
    {
      v8 = (const void *)*v6; /*0x8cb5a9*/
      sub_8E68A0(a3, v8); /*0x8cb5b1*/
      sub_8E67F0(a1, (int)v8); /*0x8cb5bc*/
    }
    else if ( a4 == 7 && sub_8E7740(*v6, a2[0x15], *(_DWORD *)(v7 + 0x54)) == a2[0x15] ) /*0x8cb5dd*/
    {
      v9 = (const void *)*v6; /*0x8cb5df*/
      sub_8E68A0(*(_DWORD *)(v7 + 0x54) + 0x44, v9); /*0x8cb5e9*/
      sub_8E67F0(a1, (int)v9); /*0x8cb5f4*/
    }
    result = a2[0xF]; /*0x8cb5fc*/
  }
  return result; /*0x8cb606*/
}
