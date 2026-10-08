void __cdecl __noreturn sub_6EE1C0(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  unsigned int *v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x6ee1e8*/
  v3 = a3; /*0x6ee1eb*/
  v8 = a3; /*0x6ee1f3*/
  v10 = 0; /*0x6ee1f6*/
  while ( a1 != a2 ) /*0x6ee203*/
  {
    v7 = v3; /*0x6ee208*/
    LOBYTE(v10) = 1; /*0x6ee20d*/
    if ( v3 ) /*0x6ee211*/
      sub_6EDC20(v3, a1); /*0x6ee216*/
    v3 += 0xD; /*0x6ee21b*/
    LOBYTE(v10) = 0; /*0x6ee21e*/
    a3 = v3; /*0x6ee221*/
    a1 += 0xD; /*0x6ee224*/
  }
  for ( i = v8; i != a3; i += 0xD ) /*0x6ee231*/
    sub_552090(i); /*0x6ee239*/
  ThrowException__(0, 0); /*0x6ee249*/
}
