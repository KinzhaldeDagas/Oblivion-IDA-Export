int __thiscall sub_7265F0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, char *, int, signed int *, int); // eax
  int v10; // edi
  int v12; // [esp-50h] [ebp-5Ch]
  int v13; // [esp-3Ch] [ebp-48h]
  int v14; // [esp-28h] [ebp-34h]
  int v15; // [esp-28h] [ebp-34h]
  int v16; // [esp-14h] [ebp-20h]
  int v17; // [esp-14h] [ebp-20h]

  v2 = a2;
  v16 = *(_DWORD *)(a2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v16 + 8);
  a2 = 4;
  v4(v16, this + 4, 4, &a2, 1);
  v14 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8);
  a2 = 4;
  v5(v14, this + 8, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 8);
  a2 = 4;
  v6(v13, this + 0xC, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v7(v12, this + 0x10, 4, &a2, 1);
  v17 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v17 + 8);
  a2 = 4;
  v8(v17, this + 0x14, 4, &a2, 1);
  v15 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v15 + 8);
  a2 = 4;
  v9(v15, this + 0x18, 4, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x220);
  a2 = 1;
  return (*(int (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8))(v10, this, 1, &a2, 1);
}
