int __cdecl sub_6BB620(signed int a1, int a2)
{
  int v2; // esi
  int (__cdecl *v3)(int, int, int, int *, int); // edx
  int v5; // [esp-1Ch] [ebp-24h]

  v2 = a2; /*0x6bb621*/
  sub_6D3660(a1, a2); /*0x6bb62c*/
  v3 = *(int (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a1 + 0x220) + 8); /*0x6bb637*/
  v5 = *(_DWORD *)(a1 + 0x220); /*0x6bb647*/
  a2 = 4; /*0x6bb648*/
  return v3(v5, v2 + 4, 4, &a2, 1); /*0x6bb655*/
}
