int __cdecl sub_96DE80(int a1, int a2)
{
  int (__cdecl *v2)(int, int, int, int *, int); // edx
  int v5; // [esp+0h] [ebp-4h] BYREF
  int v6; // [esp+8h] [ebp+4h]

  v6 = *(_DWORD *)(a1 + 0x220);
  v5 = a1;
  v2 = *(int (__cdecl **)(int, int, int, int *, int))(v6 + 8);
  v5 = 4;
  return v2(v6, a2, 4, &v5, 1);
}
