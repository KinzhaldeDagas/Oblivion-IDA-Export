void __cdecl __noreturn sub_6F3310(OB_stString28_010201A0 *a1, OB_stString28_010201A0 *a2, unsigned int *a3)
{
  unsigned int *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  unsigned int *v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x6f3338*/
  v3 = a3; /*0x6f333b*/
  v8 = a3; /*0x6f3343*/
  v10 = 0; /*0x6f3346*/
  while ( a1 != a2 ) /*0x6f3353*/
  {
    v7 = v3; /*0x6f3358*/
    LOBYTE(v10) = 1; /*0x6f335d*/
    if ( v3 ) /*0x6f3361*/
      sub_6F2D30((int)v3, a1); /*0x6f3366*/
    v3 += 0xB; /*0x6f336b*/
    LOBYTE(v10) = 0; /*0x6f336e*/
    a3 = v3; /*0x6f3371*/
    a1 = (OB_stString28_010201A0 *)((char *)a1 + 0x2C); /*0x6f3374*/
  }
  for ( i = v8; i != a3; i += 0xB ) /*0x6f3381*/
    sub_557130(i); /*0x6f3389*/
  ThrowException__(0, 0); /*0x6f3399*/
}
