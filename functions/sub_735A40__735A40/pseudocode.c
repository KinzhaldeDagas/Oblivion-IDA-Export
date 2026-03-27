int __cdecl sub_735A40(int a1, int a2, int a3)
{
  int v3; // ecx
  int (__cdecl *v4)(int, int, int, int *, int); // ecx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = v3;
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(a1 + 4);
  v6 = 4;
  return v4(a1, a2, 4 * a3, &v6, 1);
}
