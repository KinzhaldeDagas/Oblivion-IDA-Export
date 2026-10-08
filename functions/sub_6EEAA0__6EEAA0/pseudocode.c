void __cdecl __noreturn sub_6EEAA0(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  unsigned int *v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x6eeac8*/
  v3 = a1; /*0x6eeacb*/
  v8 = a1; /*0x6eead3*/
  v10 = 0; /*0x6eead6*/
  while ( a2 ) /*0x6eeae2*/
  {
    v7 = v3; /*0x6eeae7*/
    LOBYTE(v10) = 1; /*0x6eeaec*/
    if ( v3 ) /*0x6eeaf0*/
      sub_6EDC20(v3, a3); /*0x6eeaf8*/
    --a2; /*0x6eeafd*/
    v3 += 0xD; /*0x6eeb00*/
    LOBYTE(v10) = 0; /*0x6eeb03*/
    a1 = v3; /*0x6eeb06*/
  }
  for ( i = v8; i != a1; i += 0xD ) /*0x6eeb13*/
    sub_552090(i); /*0x6eeb1b*/
  ThrowException__(0, 0); /*0x6eeb2b*/
}
