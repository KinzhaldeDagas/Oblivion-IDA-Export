int __thiscall sub_758E00(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, const char **, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_752E40(this, a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 6));
  sub_7094A0((char *)this + 0x1C, (signed int)v2);
  v10 = v2[0x88];
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v4(v10, this + 0xA, 4, &a2, 1);
  v9 = v2[0x88];
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v9 + 8);
  a2 = 4;
  v5(v9, this + 0xB, 4, &a2, 1);
  v6 = v2[0x88];
  v7 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v6 + 8);
  a2 = 4;
  return v7(v6, this + 0xC, 4, &a2, 1);
}
