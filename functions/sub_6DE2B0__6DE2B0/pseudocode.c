int __cdecl sub_6DE2B0(signed int a1, int a2, int a3)
{
  int (__cdecl *v3)(int, int, int, signed int *, int); // eax
  int v5; // [esp-14h] [ebp-14h]

  v5 = *(_DWORD *)(a1 + 0x220);
  v3 = *(int (__cdecl **)(int, int, int, signed int *, int))(v5 + 8);
  a1 = 4;
  return v3(v5, a2, 4 * a3, &a1, 1);
}
