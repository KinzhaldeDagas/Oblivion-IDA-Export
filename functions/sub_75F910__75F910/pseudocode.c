int __thiscall sub_75F910(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  int v8; // edi
  int (__cdecl *v9)(int, char *, int, signed int *, int); // edx
  int v11; // [esp-50h] [ebp-5Ch]
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-28h] [ebp-34h]
  int v14; // [esp-14h] [ebp-20h]

  v2 = a2;
  sub_7094A0(this, a2);
  v14 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8);
  a2 = 4;
  v4(v14, this + 0xC, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 8);
  a2 = 4;
  v5(v13, this + 0x10, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v6(v12, this + 0x14, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 8);
  a2 = 2;
  v7(v11, this + 0x18, 2, &a2, 1);
  v8 = *(_DWORD *)(v2 + 0x220);
  v9 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8);
  a2 = 2;
  return v9(v8, this + 0x1A, 2, &a2, 1);
}
