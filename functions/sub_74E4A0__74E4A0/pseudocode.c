int __thiscall sub_74E4A0(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, const char **, int, signed int *, int); // eax
  int v8; // eax
  void (__cdecl *v9)(int, signed int *, int, int *, int); // edx
  void (__cdecl *v10)(int, signed int *, int, int *, int); // eax
  int v12; // [esp-50h] [ebp-60h]
  int v13; // [esp-3Ch] [ebp-4Ch]
  int v14; // [esp-28h] [ebp-38h]
  int v15; // [esp-28h] [ebp-38h]
  int v16; // [esp-14h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_752E40(this, a2);
  v16 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v16 + 8);
  a2 = 4;
  v4(v16, this + 6, 4, &a2, 1);
  v14 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v14 + 8);
  a2 = 4;
  v5(v14, this + 7, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v13 + 8);
  a2 = 4;
  v6(v13, this + 8, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v7(v12, this + 9, 4, &a2, 1);
  v8 = *(_DWORD *)(v2 + 0x220);
  LOBYTE(a2) = *((_BYTE *)this + 0x35);
  v9 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v8 + 8);
  v17 = 1;
  v9(v8, &a2, 1, &v17, 1);
  LOBYTE(a2) = *((_BYTE *)this + 0x34);
  v15 = *(_DWORD *)(v2 + 0x220);
  v10 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v15 + 8);
  v17 = 1;
  v10(v15, &a2, 1, &v17, 1);
  return sub_7094A0((char *)this + 0x28, v2);
}
