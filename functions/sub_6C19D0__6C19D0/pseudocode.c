int __thiscall sub_6C19D0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_6BB5E0(this, a2);
  v10 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 4);
  a2 = 4;
  v4(v10, this + 8, 4, &a2, 1);
  v9 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4);
  a2 = 4;
  v5(v9, this + 0xC, 4, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x21C);
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 4);
  a2 = 4;
  return v7(v6, this + 0x10, 4, &a2, 1);
}
