int __cdecl sub_6C1A50(signed int a1, int a2)
{
  int v2; // esi
  void (__cdecl *v3)(int, int, int, int *, int); // eax
  void (__cdecl *v4)(int, int, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int, int, int *, int); // edx
  int v8; // [esp-30h] [ebp-38h]
  int v9; // [esp-1Ch] [ebp-24h]

  v2 = a2; /*0x6c1a51*/
  sub_6BB620(a1, a2); /*0x6c1a5c*/
  v9 = *(_DWORD *)(a1 + 0x220); /*0x6c1a74*/
  v3 = *(void (__cdecl **)(int, int, int, int *, int))(v9 + 8); /*0x6c1a75*/
  a2 = 4; /*0x6c1a78*/
  v3(v9, v2 + 8, 4, &a2, 1); /*0x6c1a80*/
  v8 = *(_DWORD *)(a1 + 0x220); /*0x6c1a95*/
  v4 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 8); /*0x6c1a96*/
  a2 = 4; /*0x6c1a99*/
  v4(v8, v2 + 0xC, 4, &a2, 1); /*0x6c1aa1*/
  v5 = *(_DWORD *)(a1 + 0x220); /*0x6c1aa3*/
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 8); /*0x6c1aa9*/
  a2 = 4; /*0x6c1aba*/
  return v6(v5, v2 + 0x10, 4, &a2, 1); /*0x6c1ac7*/
}
