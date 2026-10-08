int __thiscall sub_8C0170(char *this, int a2)
{
  int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  void (__cdecl *v7)(int, int, int, int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, int, int, int *, int); // edx
  int v11; // [esp-50h] [ebp-5Ch]
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x8c0172*/
  sub_8A0C30(this, a2); /*0x8c017a*/
  v4 = *((_DWORD *)this + 1); /*0x8c017f*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c0196*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x10,
    0x20,
    0,
    0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8c01ac*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x30,
    0x60,
    0,
    0);
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x8c01c8*/
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v12 + 4); /*0x8c01c9*/
  a2 = 4; /*0x8c01cc*/
  v5(v12, v4 + 0x90, 4, &a2, 1); /*0x8c01d0*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x8c01e7*/
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 4); /*0x8c01e8*/
  a2 = 4; /*0x8c01eb*/
  v6(v11, v4 + 0x94, 4, &a2, 1); /*0x8c01ef*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x8c0209*/
  v7 = *(void (__cdecl **)(int, int, int, int *, int))(v13 + 4); /*0x8c020a*/
  a2 = 4; /*0x8c020d*/
  v7(v13, v4 + 0x98, 4, &a2, 1); /*0x8c0211*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x8c0213*/
  v9 = *(int (__cdecl **)(int, int, int, int *, int))(v8 + 4); /*0x8c0219*/
  a2 = 4; /*0x8c022c*/
  return v9(v8, v4 + 0x9C, 4, &a2, 1); /*0x8c0235*/
}
