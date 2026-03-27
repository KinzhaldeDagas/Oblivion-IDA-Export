int __thiscall sub_6E4EF0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_6ED500(this, a2);
  sub_6CBA90(this + 0x1C, v2);
  v10 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v4(v10, this + 0x3C, 4, &a2, 1);
  v9 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 8);
  a2 = 4;
  v5(v9, this + 0x40, 4, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8);
  a2 = 4;
  return v7(v6, this + 0x44, 4, &a2, 1);
}
