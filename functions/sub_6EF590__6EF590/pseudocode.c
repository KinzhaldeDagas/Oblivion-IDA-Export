// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_6EF590(int a1, int a2, int a3)
{
  int v3; // edi
  int i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x6ef5b8*/
  v3 = a1; /*0x6ef5bb*/
  v7 = a1; /*0x6ef5c4*/
  v9 = 0; /*0x6ef5c7*/
  while ( a2 ) /*0x6ef5d2*/
  {
    sub_557800(v3, a3); /*0x6ef5d6*/
    --a2; /*0x6ef5de*/
    v3 += 0x40; /*0x6ef5e1*/
    a1 = v3; /*0x6ef5e4*/
  }
  for ( i = v7; i != a1; i += 0x40 ) /*0x6ef5f1*/
    sub_556FC0(i); /*0x6ef5f9*/
  ThrowException__(0, 0); /*0x6ef609*/
}
