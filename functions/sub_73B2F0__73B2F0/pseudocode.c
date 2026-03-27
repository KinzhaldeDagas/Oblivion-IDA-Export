int __thiscall sub_73B2F0(const char **this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, const char **, int, int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_6FE000(this, (_DWORD *)a2);
  v12 = v2[0x88];
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v12 + 8);
  a2 = 4;
  v4(v12, this + 3, 4, &a2, 1);
  v11 = v2[0x88];
  v5 = *(void (__cdecl **)(int, const char **, int, int *, int))(v11 + 8);
  a2 = 4;
  v5(v11, this + 4, 4, &a2, 1);
  v10 = v2[0x88];
  v6 = *(void (__cdecl **)(int, const char **, int, int *, int))(v10 + 8);
  a2 = 4;
  v6(v10, this + 5, 4, &a2, 1);
  v7 = v2[0x88];
  v8 = *(int (__cdecl **)(int, const char **, int, int *, int))(v7 + 8);
  a2 = 4;
  return v8(v7, this + 6, 4, &a2, 1);
}
