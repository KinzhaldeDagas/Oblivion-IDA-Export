// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn sub_6F1800(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int *v3; // edi
  unsigned int *i; // esi
  int v6; // [esp-4h] [ebp-28h] BYREF
  unsigned int *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6; /*0x6f1828*/
  v3 = a3; /*0x6f182b*/
  v7 = a3; /*0x6f1834*/
  v9 = 0; /*0x6f1837*/
  while ( a1 != a2 ) /*0x6f1842*/
  {
    sub_6F1670(v3, a1); /*0x6f1846*/
    v3 += 8; /*0x6f184b*/
    a3 = v3; /*0x6f1851*/
    a1 += 8; /*0x6f1854*/
  }
  for ( i = v7; i != a3; i += 8 ) /*0x6f1861*/
    sub_556F10(i); /*0x6f1869*/
  ThrowException__(0, 0); /*0x6f1879*/
}
