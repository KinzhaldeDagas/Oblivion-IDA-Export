int __thiscall sub_74D390(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, const char **, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_753060(this, a2);
  v10 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v4(v10, this + 0x15, 4, &a2, 1);
  v9 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v9 + 8);
  a2 = 4;
  v5(v9, this + 0x16, 4, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v6 + 8);
  a2 = 4;
  return v7(v6, this + 0x17, 4, &a2, 1);
}
