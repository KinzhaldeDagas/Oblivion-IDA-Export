_DWORD *__userpurge sub_8988A0@<eax>(int a1@<ecx>, int a2@<ebp>, _DWORD *a3)
{
  char **v3; // ecx
  char v5[4]; // [esp+0h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+4h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 0x88) ) /*0x8988a0*/
    return sub_8CB450(a2, a1, a3, 1); /*0x8988d5*/
  v3 = *(char ***)(a1 + 0x80); /*0x8988b1*/
  v5[0] = 8; /*0x8988bb*/
  v6 = a3; /*0x8988c0*/
  sub_8D8830(v3, (int)v5); /*0x8988c4*/
  return 0; /*0x8988cb*/
}
