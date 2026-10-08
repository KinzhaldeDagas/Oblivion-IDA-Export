int __usercall sub_941CE0@<eax>(const void **Args@<ecx>, _DWORD *a2@<eax>, int a3, int a4, void *a5)
{
  int i; // esi
  const char **v8; // eax
  const void *v9; // esi
  const void *v10; // edx
  const char *v12; // [esp-4h] [ebp-14h]

  sub_8BBEE0(a4, "\n%s<hkobject>", (const char *)*Args); /*0x941cf9*/
  sub_941B90(1, Args); /*0x941d06*/
  for ( i = 0; i < sub_90D240(a2); ++i ) /*0x941d16*/
  {
    v8 = (const char **)sub_90D260(a2, i); /*0x941d2e*/
    sub_942170((const char **)Args, v8, a3, a4, a5); /*0x941d35*/
  }
  v9 = Args[1]; /*0x941d49*/
  v10 = *Args; /*0x941d83*/
  Args[1] = v9; /*0x941d89*/
  *((_BYTE *)v9 + (_DWORD)v10 - 1) = 0; /*0x941d8c*/
  v12 = (const char *)*Args; /*0x941d96*/
  Args[1] = (char *)Args[1] + 0xFFFFFFFF; /*0x941d9e*/
  sub_8BBEE0(a4, "\n%s</hkobject>", v12); /*0x941da1*/
  return 0; /*0x941da9*/
}
