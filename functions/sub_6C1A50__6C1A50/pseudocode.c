int __cdecl sub_6C1A50(signed int a1, int a2)
{
  int v2; // esi
  void (__cdecl *v3)(int, int, int, int *, int); // eax
  void (__cdecl *v4)(int, int, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int, int, int *, int); // edx
  int v8; // [esp-30h] [ebp-38h]
  int v9; // [esp-1Ch] [ebp-24h]

  v2 = a2;
  sub_6BB620(a1, a2);
  v9 = *(_DWORD *)(a1 + 0x220);
  v3 = *(void (__cdecl **)(int, int, int, int *, int))(v9 + 8);
  a2 = 4;
  v3(v9, v2 + 8, 4, &a2, 1);
  v8 = *(_DWORD *)(a1 + 0x220);
  v4 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 8);
  a2 = 4;
  v4(v8, v2 + 0xC, 4, &a2, 1);
  v5 = *(_DWORD *)(a1 + 0x220);
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 8);
  a2 = 4;
  return v6(v5, v2 + 0x10, 4, &a2, 1);
}
