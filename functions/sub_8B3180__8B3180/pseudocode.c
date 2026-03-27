int __thiscall sub_8B3180(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int, int, signed int *, int); // eax
  void (__cdecl *v8)(int, int, int, signed int *, int); // eax
  int v9; // esi
  int (__cdecl *v10)(int, int, int, signed int *, int); // edx
  int v12; // [esp-50h] [ebp-58h]
  int v13; // [esp-3Ch] [ebp-44h]
  int v14; // [esp-28h] [ebp-30h]
  int v15; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_8A0C80(this, a2);
  v4 = *(this + 1);
  v15 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v15 + 8);
  a2 = 0x40;
  v5(v15, v4 + 0x20, 0x40, &a2, 1);
  v14 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v14 + 8);
  a2 = 0x30;
  v6(v14, v4 + 0x60, 0x30, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8);
  a2 = 4;
  v7(v13, v4 + 0xC, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v8(v12, v4 + 0x10, 4, &a2, 1);
  v9 = *(_DWORD *)(v2 + 0x220);
  v10 = *(int (__cdecl **)(int, int, int, signed int *, int))(v9 + 8);
  a2 = 4;
  return v10(v9, v4 + 0x14, 4, &a2, 1);
}
