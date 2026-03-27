int __thiscall sub_752890(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v9)(int, const char **, int, signed int *, int); // eax
  int v10; // eax
  int v11; // edi
  int (__cdecl *v12)(int, const char **, int, signed int *, int); // edx
  int v14; // [esp-50h] [ebp-5Ch]
  int v15; // [esp-3Ch] [ebp-48h]
  int v16; // [esp-28h] [ebp-34h]
  int v17; // [esp-28h] [ebp-34h]
  int v18; // [esp-14h] [ebp-20h]
  int v19; // [esp-14h] [ebp-20h]

  v2 = a2;
  sub_752E40(this, a2);
  v18 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v18 + 8);
  a2 = 2;
  v4(v18, this + 6, 2, &a2, 1);
  v16 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v16 + 8);
  a2 = 4;
  v5(v16, this + 7, 4, &a2, 1);
  v15 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v15 + 8);
  a2 = 2;
  v6(v15, this + 8, 2, &a2, 1);
  v14 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8);
  a2 = 2;
  v7(v14, (char *)this + 0x22, 2, &a2, 1);
  v19 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v19 + 8);
  a2 = 4;
  v8(v19, this + 9, 4, &a2, 1);
  v17 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v17 + 8);
  a2 = 4;
  v9(v17, this + 0xA, 4, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  (*(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8))(v10, this + 0xB, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  v12 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v11 + 8);
  a2 = 4;
  return v12(v11, this + 0xC, 4, &a2, 1);
}
