int __thiscall sub_8C0240(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int, int, signed int *, int); // eax
  void (__cdecl *v8)(int, int, int, signed int *, int); // eax
  void (__cdecl *v9)(int, int, int, signed int *, int); // eax
  int v10; // esi
  int (__cdecl *v11)(int, int, int, signed int *, int); // edx
  int v13; // [esp-50h] [ebp-5Ch]
  int v14; // [esp-3Ch] [ebp-48h]
  int v15; // [esp-28h] [ebp-34h]
  int v16; // [esp-14h] [ebp-20h]
  int v17; // [esp-14h] [ebp-20h]

  v2 = a2;
  sub_8A0C80(this, a2);
  v4 = *(this + 1);
  v16 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v16 + 8);
  a2 = 0x20;
  v5(v16, v4 + 0x10, 0x20, &a2, 1);
  v15 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v15 + 8);
  a2 = 0x60;
  v6(v15, v4 + 0x30, 0x60, &a2, 1);
  v14 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v14 + 8);
  a2 = 4;
  v7(v14, v4 + 0x90, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8);
  a2 = 4;
  v8(v13, v4 + 0x94, 4, &a2, 1);
  v17 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(v17 + 8);
  a2 = 4;
  v9(v17, v4 + 0x98, 4, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x220);
  v11 = *(int (__cdecl **)(int, int, int, signed int *, int))(v10 + 8);
  a2 = 4;
  return v11(v10, v4 + 0x9C, 4, &a2, 1);
}
