int __thiscall sub_8C0F20(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int, int, signed int *, int); // eax
  void (__cdecl *v8)(int, int, int, signed int *, int); // eax
  void (__cdecl *v9)(int, int, int, signed int *, int); // eax
  void (__cdecl *v10)(int, int, int, signed int *, int); // eax
  int v11; // eax
  int v12; // esi
  int (__cdecl *v13)(int, int, int, signed int *, int); // edx
  int v15; // [esp-50h] [ebp-5Ch]
  int v16; // [esp-3Ch] [ebp-48h]
  int v17; // [esp-28h] [ebp-34h]
  int v18; // [esp-28h] [ebp-34h]
  int v19; // [esp-14h] [ebp-20h]
  int v20; // [esp-14h] [ebp-20h]

  v2 = a2;
  sub_8A0C80(this, a2);
  v4 = *(this + 1);
  v19 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v19 + 8);
  a2 = 0x30;
  v5(v19, v4 + 0x10, 0x30, &a2, 1);
  v17 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v17 + 8);
  a2 = 0x30;
  v6(v17, v4 + 0x40, 0x30, &a2, 1);
  v16 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v16 + 8);
  a2 = 4;
  v7(v16, v4 + 0x70, 4, &a2, 1);
  v15 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v15 + 8);
  a2 = 4;
  v8(v15, v4 + 0x74, 4, &a2, 1);
  v20 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(v20 + 8);
  a2 = 4;
  v9(v20, v4 + 0x78, 4, &a2, 1);
  v18 = *(_DWORD *)(v2 + 0x220);
  v10 = *(void (__cdecl **)(int, int, int, signed int *, int))(v18 + 8);
  a2 = 4;
  v10(v18, v4 + 0x7C, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  (*(void (__cdecl **)(int, int, int, signed int *, int))(v11 + 8))(v11, v4 + 0x80, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x220);
  v13 = *(int (__cdecl **)(int, int, int, signed int *, int))(v12 + 8);
  a2 = 4;
  return v13(v12, v4 + 0x84, 4, &a2, 1);
}
