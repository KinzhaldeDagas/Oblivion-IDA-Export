int __thiscall sub_709510(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v3)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, char *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  v2 = a2;
  v3 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8);
  v12 = *(_DWORD *)(a2 + 0x220);
  a2 = 4;
  v3(v12, this, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 8);
  a2 = 4;
  v5(v11, this + 4, 4, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v6(v10, this + 8, 4, &a2, 1);
  v7 = *(_DWORD *)(v2 + 0x220);
  v8 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v7 + 8);
  a2 = 4;
  return v8(v7, this + 0xC, 4, &a2, 1);
}
