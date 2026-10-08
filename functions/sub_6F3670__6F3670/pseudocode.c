void __cdecl __noreturn sub_6F3670(unsigned int *a1, unsigned int a2, OB_stString28_010201A0 *a3)
{
  unsigned int *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  unsigned int *v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x6f3698*/
  v3 = a1; /*0x6f369b*/
  v8 = a1; /*0x6f36a3*/
  v10 = 0; /*0x6f36a6*/
  while ( a2 ) /*0x6f36b2*/
  {
    v7 = v3; /*0x6f36b7*/
    LOBYTE(v10) = 1; /*0x6f36bc*/
    if ( v3 ) /*0x6f36c0*/
      sub_6F2D30((int)v3, a3); /*0x6f36c8*/
    --a2; /*0x6f36cd*/
    v3 += 0xB; /*0x6f36d0*/
    LOBYTE(v10) = 0; /*0x6f36d3*/
    a1 = v3; /*0x6f36d6*/
  }
  for ( i = v8; i != a1; i += 0xB ) /*0x6f36e3*/
    sub_557130(i); /*0x6f36eb*/
  ThrowException__(0, 0); /*0x6f36fb*/
}
