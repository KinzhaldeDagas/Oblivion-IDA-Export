// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_557A10(int a1, int a2, int a3)
{
  int v3; // edi
  int i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x557a38*/
  v3 = a3; /*0x557a3b*/
  v7 = a3; /*0x557a44*/
  v9 = 0; /*0x557a47*/
  while ( a1 != a2 ) /*0x557a52*/
  {
    sub_557800(v3, a1); /*0x557a56*/
    v3 += 0x40; /*0x557a5b*/
    a3 = v3; /*0x557a61*/
    a1 += 0x40; /*0x557a64*/
  }
  for ( i = v7; i != a3; i += 0x40 ) /*0x557a71*/
    sub_556FC0(i); /*0x557a79*/
  ThrowException__(0, 0); /*0x557a89*/
}
