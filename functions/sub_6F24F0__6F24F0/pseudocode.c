// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_6F24F0(unsigned int *a1, int a2, _DWORD *a3)
{
  unsigned int *v3; // edi
  unsigned int *i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  unsigned int *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x6f2518*/
  v3 = a1; /*0x6f251b*/
  v7 = a1; /*0x6f2524*/
  v9 = 0; /*0x6f2527*/
  while ( a2 ) /*0x6f2532*/
  {
    sub_6F1670(v3, a3); /*0x6f2536*/
    --a2; /*0x6f253e*/
    v3 += 8; /*0x6f2541*/
    a1 = v3; /*0x6f2544*/
  }
  for ( i = v7; i != a1; i += 8 ) /*0x6f2551*/
    sub_556F10(i); /*0x6f2559*/
  ThrowException__(0, 0); /*0x6f2569*/
}
