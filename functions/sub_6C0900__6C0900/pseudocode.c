int __cdecl sub_6C0900(signed int a1, int a2)
{
  int v2; // esi
  void (__cdecl *v3)(int, int, int, int *, int); // eax
  void (__cdecl *v4)(int, int, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int, int, int *, int); // edx
  int v8; // [esp-30h] [ebp-38h]
  int v9; // [esp-1Ch] [ebp-24h]

  v2 = a2; /*0x6c0901*/
  sub_6BC1E0(a1, a2); /*0x6c090c*/
  v9 = *(_DWORD *)(a1 + 0x220); /*0x6c0924*/
  v3 = *(void (__cdecl **)(int, int, int, int *, int))(v9 + 8); /*0x6c0925*/
  a2 = 4; /*0x6c0928*/
  v3(v9, v2 + 0x10, 4, &a2, 1); /*0x6c0930*/
  v8 = *(_DWORD *)(a1 + 0x220); /*0x6c0945*/
  v4 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 8); /*0x6c0946*/
  a2 = 4; /*0x6c0949*/
  v4(v8, v2 + 0x14, 4, &a2, 1); /*0x6c0951*/
  v5 = *(_DWORD *)(a1 + 0x220); /*0x6c0953*/
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 8); /*0x6c0959*/
  a2 = 4; /*0x6c096a*/
  return v6(v5, v2 + 0x18, 4, &a2, 1); /*0x6c0977*/
}
