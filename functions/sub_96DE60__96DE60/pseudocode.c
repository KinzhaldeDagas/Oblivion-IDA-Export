int *__cdecl sub_96DE60(int a1, int *a2)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // edx
  int *result; // eax
  int v4; // ecx
  int v5; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  a1 = *(_DWORD *)(a1 + 0x21C);
  v5 = v4;
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(a1 + 4);
  v5 = 4;
  v2(a1, &a1, 4, &v5, 1);
  result = a2;
  *a2 = a1;
  return result;
}
