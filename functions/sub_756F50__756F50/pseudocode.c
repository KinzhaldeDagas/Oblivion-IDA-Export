int __thiscall sub_756F50(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, const char **, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-44h]
  int v11; // [esp-28h] [ebp-30h]
  int v12; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_752E40(this, a2);
  v12 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v4(v12, this + 6, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v11 + 8);
  a2 = 2;
  v5(v11, this + 7, 2, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v6(v10, this + 8, 4, &a2, 1);
  v7 = *(_DWORD *)(v2 + 0x220);
  v8 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v7 + 8);
  a2 = 2;
  return v8(v7, this + 9, 2, &a2, 1);
}
