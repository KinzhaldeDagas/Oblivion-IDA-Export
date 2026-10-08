// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_6F18A0(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int *v3; // edi
  unsigned int *i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  unsigned int *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x6f18c8*/
  v3 = a3; /*0x6f18cb*/
  v7 = a3; /*0x6f18d4*/
  v9 = 0; /*0x6f18d7*/
  while ( a1 != a2 ) /*0x6f18e2*/
  {
    sub_6F16F0(v3, a1); /*0x6f18e6*/
    v3 += 0xB; /*0x6f18eb*/
    a3 = v3; /*0x6f18f1*/
    a1 += 0xB; /*0x6f18f4*/
  }
  for ( i = v7; i != a3; i += 0xB ) /*0x6f1901*/
    sub_556F40(i); /*0x6f1909*/
  ThrowException__(0, 0); /*0x6f1919*/
}
