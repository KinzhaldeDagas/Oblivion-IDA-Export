int __cdecl sub_6ED6A0(int a1, int a2)
{
  int v2; // ecx
  int (__cdecl *v3)(int, int, int, int *, int); // edx
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v2; /*0x6ed6a0*/
  v3 = *(int (__cdecl **)(int, int, int, int *, int))(a1 + 4); /*0x6ed6b0*/
  v5 = 4; /*0x6ed6b7*/
  return v3(a1, a2, 4, &v5, 1); /*0x6ed6c4*/
}
