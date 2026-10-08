int __thiscall sub_8C1B00(char *this, int a2)
{
  int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v7; // esi
  int (__cdecl *v8)(int, int, int, int *, int); // edx
  int v10; // [esp-50h] [ebp-58h]
  int v11; // [esp-3Ch] [ebp-44h]

  v2 = a2; /*0x8c1b01*/
  sub_8A0C30(this, a2); /*0x8c1b09*/
  v4 = *((_DWORD *)this + 1); /*0x8c1b0e*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c1b25*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x10,
    0x50,
    0,
    0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c1b3b*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x60,
    0x30,
    0,
    0);
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x8c1b53*/
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 4); /*0x8c1b54*/
  a2 = 4; /*0x8c1b57*/
  v5(v11, v4 + 0x90, 4, &a2, 1); /*0x8c1b5f*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x8c1b77*/
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v10 + 4); /*0x8c1b78*/
  a2 = 4; /*0x8c1b7b*/
  v6(v10, v4 + 0x94, 4, &a2, 1); /*0x8c1b83*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x8c1b85*/
  v8 = *(int (__cdecl **)(int, int, int, int *, int))(v7 + 4); /*0x8c1b8b*/
  a2 = 4; /*0x8c1ba2*/
  return v8(v7, v4 + 0x98, 4, &a2, 1); /*0x8c1baf*/
}
