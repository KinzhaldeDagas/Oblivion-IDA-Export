int __usercall sub_941CE0@<eax>(const void **Args@<ecx>, _DWORD *a2@<eax>, int a3, int a4, int a5)
{
  int i; // esi
  int v8; // eax
  const void *v9; // esi
  const void *v10; // edx
  const char *v12; // [esp-4h] [ebp-14h]

  sub_8BBEE0(a4, "\n%s<hkobject>", (const char *)*Args);
  sub_941B90(1, Args);
  for ( i = 0; i < sub_90D240(a2); ++i )
  {
    v8 = sub_90D260(a2, i);
    sub_942170((int)Args, v8, a3, a4, a5);
  }
  v9 = Args[1];
  v10 = *Args;
  Args[1] = v9;
  *((_BYTE *)v9 + (_DWORD)v10 - 1) = 0;
  v12 = (const char *)*Args;
  Args[1] = (char *)Args[1] + 0xFFFFFFFF;
  sub_8BBEE0(a4, "\n%s</hkobject>", v12);
  return 0;
}
