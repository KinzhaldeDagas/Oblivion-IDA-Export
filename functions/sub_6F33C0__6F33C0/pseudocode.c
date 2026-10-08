void __cdecl __noreturn sub_6F33C0(OB_stString28_010201A0 *a1, OB_stString28_010201A0 *a2, OB_stString28_010201A0 *a3)
{
  OB_stString28_010201A0 *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  unsigned int *p_allocatorState; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF

  v9 = &v6; /*0x6f33e8*/
  v3 = a3; /*0x6f33eb*/
  p_allocatorState = &a3->allocatorState; /*0x6f33f3*/
  v10 = 0; /*0x6f33f6*/
  while ( a1 != a2 ) /*0x6f3403*/
  {
    v7 = v3; /*0x6f3408*/
    LOBYTE(v10) = 1; /*0x6f340d*/
    if ( v3 ) /*0x6f3411*/
      sub_6F2DB0(v3, (int)&savedregs, a1); /*0x6f3416*/
    v3 = (OB_stString28_010201A0 *)((char *)v3 + 0x30); /*0x6f341b*/
    LOBYTE(v10) = 0; /*0x6f341e*/
    a3 = v3; /*0x6f3421*/
    a1 = (OB_stString28_010201A0 *)((char *)a1 + 0x30); /*0x6f3424*/
  }
  for ( i = p_allocatorState; i != (unsigned int *)a3; i += 0xC ) /*0x6f3431*/
    sub_556F70(i); /*0x6f3439*/
  ThrowException__(0, 0); /*0x6f3449*/
}
