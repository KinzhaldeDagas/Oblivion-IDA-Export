int __thiscall sub_73B2F0(const char **this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, const char **, int, int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x73b2f3*/
  sub_6FE000(this, (_DWORD *)a2); /*0x73b2fa*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x73b316*/
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v12 + 8); /*0x73b317*/
  a2 = 4; /*0x73b31a*/
  v4(v12, this + 3, 4, &a2, 1); /*0x73b31e*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x73b332*/
  v5 = *(void (__cdecl **)(int, const char **, int, int *, int))(v11 + 8); /*0x73b333*/
  a2 = 4; /*0x73b336*/
  v5(v11, this + 4, 4, &a2, 1); /*0x73b33a*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x73b34e*/
  v6 = *(void (__cdecl **)(int, const char **, int, int *, int))(v10 + 8); /*0x73b34f*/
  a2 = 4; /*0x73b352*/
  v6(v10, this + 5, 4, &a2, 1); /*0x73b356*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x73b358*/
  v8 = *(int (__cdecl **)(int, const char **, int, int *, int))(v7 + 8); /*0x73b35e*/
  a2 = 4; /*0x73b36e*/
  return v8(v7, this + 6, 4, &a2, 1); /*0x73b377*/
}
