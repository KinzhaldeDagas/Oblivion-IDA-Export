int __cdecl sub_6BB620(signed int a1, int a2)
{
  int v2; // esi
  int (__cdecl *v3)(int, int, int, int *, int); // edx
  int v5; // [esp-1Ch] [ebp-24h]

  v2 = a2;
  sub_6D3660(a1, a2);
  v3 = *(int (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a1 + 0x220) + 8);
  v5 = *(_DWORD *)(a1 + 0x220);
  a2 = 4;
  return v3(v5, v2 + 4, 4, &a2, 1);
}
