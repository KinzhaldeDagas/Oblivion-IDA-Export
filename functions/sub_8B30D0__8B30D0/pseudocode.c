int __thiscall sub_8B30D0(char *this, int a2)
{
  int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v7; // esi
  int (__cdecl *v8)(int, int, int, int *, int); // edx
  int v10; // [esp-50h] [ebp-58h]
  int v11; // [esp-3Ch] [ebp-44h]

  v2 = a2; /*0x8b30d1*/
  sub_8A0C30(this, a2); /*0x8b30d9*/
  v4 = *((_DWORD *)this + 1); /*0x8b30de*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8b30f5*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x20,
    0x40,
    0,
    0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 0x21C) + 4))( /*0x8b310b*/
    *(_DWORD *)(v2 + 0x21C),
    v4 + 0x60,
    0x30,
    0,
    0);
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x8b3120*/
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 4); /*0x8b3121*/
  a2 = 4; /*0x8b3124*/
  v5(v11, v4 + 0xC, 4, &a2, 1); /*0x8b312c*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x8b3141*/
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v10 + 4); /*0x8b3142*/
  a2 = 4; /*0x8b3145*/
  v6(v10, v4 + 0x10, 4, &a2, 1); /*0x8b314d*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x8b314f*/
  v8 = *(int (__cdecl **)(int, int, int, int *, int))(v7 + 4); /*0x8b3155*/
  a2 = 4; /*0x8b3169*/
  return v8(v7, v4 + 0x14, 4, &a2, 1); /*0x8b3176*/
}
