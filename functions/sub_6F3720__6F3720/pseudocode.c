void __cdecl __noreturn sub_6F3720(OB_stString28_010201A0 *a1, unsigned int a2, OB_stString28_010201A0 *a3)
{
  OB_stString28_010201A0 *v3; // esi
  unsigned int *i; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  unsigned int *p_allocatorState; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF

  v9 = &v6; /*0x6f3748*/
  v3 = a1; /*0x6f374b*/
  p_allocatorState = &a1->allocatorState; /*0x6f3753*/
  v10 = 0; /*0x6f3756*/
  while ( a2 ) /*0x6f3762*/
  {
    v7 = v3; /*0x6f3767*/
    LOBYTE(v10) = 1; /*0x6f376c*/
    if ( v3 ) /*0x6f3770*/
      sub_6F2DB0(v3, (int)&savedregs, a3); /*0x6f3778*/
    --a2; /*0x6f377d*/
    v3 = (OB_stString28_010201A0 *)((char *)v3 + 0x30); /*0x6f3780*/
    LOBYTE(v10) = 0; /*0x6f3783*/
    a1 = v3; /*0x6f3786*/
  }
  for ( i = p_allocatorState; i != (unsigned int *)a1; i += 0xC ) /*0x6f3793*/
    sub_556F70(i); /*0x6f379b*/
  ThrowException__(0, 0); /*0x6f37ab*/
}
