int __thiscall sub_709430(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v3)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  v3 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
  v10 = *(_DWORD *)(a2 + 0x21C);
  a2 = 4;
  v3(v10, this, 4, &a2, 1);
  v9 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4);
  a2 = 4;
  v5(v9, this + 4, 4, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x21C);
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 4);
  a2 = 4;
  return v7(v6, this + 8, 4, &a2, 1);
}
