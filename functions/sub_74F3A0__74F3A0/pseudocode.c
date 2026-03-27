int __thiscall sub_74F3A0(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v8)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v9)(int, const char **, int, signed int *, int); // eax
  int v10; // eax
  void (__cdecl *v11)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v12)(int, const char **, int, signed int *, int); // eax
  int v13; // edi
  int (__cdecl *v14)(int, const char **, int, signed int *, int); // edx
  int v16; // [esp-50h] [ebp-5Ch]
  int v17; // [esp-3Ch] [ebp-48h]
  int v18; // [esp-3Ch] [ebp-48h]
  int v19; // [esp-28h] [ebp-34h]
  int v20; // [esp-28h] [ebp-34h]
  int v21; // [esp-28h] [ebp-34h]
  int v22; // [esp-14h] [ebp-20h]
  int v23; // [esp-14h] [ebp-20h]

  v2 = a2;
  sub_752E40(this, a2);
  v22 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v22 + 8);
  a2 = 4;
  v4(v22, this + 6, 4, &a2, 1);
  v19 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v19 + 8);
  a2 = 4;
  v5(v19, this + 7, 4, &a2, 1);
  v17 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v17 + 8);
  a2 = 4;
  v6(v17, this + 8, 4, &a2, 1);
  v16 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v16 + 8);
  a2 = 4;
  v7(v16, this + 9, 4, &a2, 1);
  v23 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v23 + 8);
  a2 = 4;
  v8(v23, this + 0xA, 4, &a2, 1);
  v20 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v20 + 8);
  a2 = 4;
  v9(v20, this + 0xB, 4, &a2, 1);
  sub_709510((char *)this + 0x30, v2);
  v10 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  (*(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8))(v10, this + 0x10, 4, &a2, 1);
  v21 = *(_DWORD *)(v2 + 0x220);
  v11 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v21 + 8);
  a2 = 4;
  v11(v21, this + 0x11, 4, &a2, 1);
  v18 = *(_DWORD *)(v2 + 0x220);
  v12 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v18 + 8);
  a2 = 4;
  v12(v18, this + 0x12, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x220);
  v14 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v13 + 8);
  a2 = 4;
  return v14(v13, this + 0x13, 4, &a2, 1);
}
