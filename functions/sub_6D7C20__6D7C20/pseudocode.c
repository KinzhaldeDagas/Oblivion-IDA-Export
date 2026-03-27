int __cdecl sub_6D7C20(signed int a1, int a2, int a3)
{
  int (__cdecl *v3)(int, int, int, signed int *, int); // edx
  int v5; // [esp-14h] [ebp-14h]

  v3 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(a1 + 0x21C) + 4);
  v5 = *(_DWORD *)(a1 + 0x21C);
  a1 = 1;
  return v3(v5, a2, a3, &a1, 1);
}
