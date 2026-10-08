int __cdecl sub_734C80(int a1, int a2, int a3)
{
  int v3; // ecx
  int (__cdecl *v4)(int, int, int, int *, int); // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = v3; /*0x734c80*/
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(a1 + 4); /*0x734c97*/
  v6 = 1; /*0x734c9a*/
  return v4(a1, a2, a3, &v6, 1); /*0x734ca7*/
}
