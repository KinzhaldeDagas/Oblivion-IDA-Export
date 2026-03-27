int __thiscall sub_74F240(int *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, int *, int, signed int *, int); // eax
  int v10; // eax
  void (__cdecl *v11)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v12)(int, int *, int, signed int *, int); // eax
  int v13; // edi
  int (__cdecl *v14)(int, int *, int, signed int *, int); // edx
  int v16; // [esp-50h] [ebp-5Ch]
  int v17; // [esp-3Ch] [ebp-48h]
  int v18; // [esp-28h] [ebp-34h]
  int v19; // [esp-28h] [ebp-34h]
  int v20; // [esp-14h] [ebp-20h]
  int v21; // [esp-14h] [ebp-20h]
  int v22; // [esp-14h] [ebp-20h]
  int v23; // [esp-14h] [ebp-20h]

  v2 = a2;
  sub_752DC0(this, a2);
  v20 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v20 + 4);
  a2 = 4;
  v4(v20, this + 6, 4, &a2, 1);
  v18 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 4);
  a2 = 4;
  v5(v18, this + 7, 4, &a2, 1);
  v17 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v17 + 4);
  a2 = 4;
  v6(v17, this + 8, 4, &a2, 1);
  v16 = *(_DWORD *)(v2 + 0x21C);
  v7 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v16 + 4);
  a2 = 4;
  v7(v16, this + 9, 4, &a2, 1);
  v21 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v21 + 4);
  a2 = 4;
  v8(v21, this + 0xA, 4, &a2, 1);
  v19 = *(_DWORD *)(v2 + 0x21C);
  v9 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v19 + 4);
  a2 = 4;
  v9(v19, this + 0xB, 4, &a2, 1);
  sub_715420((char *)this + 0x30, v2);
  v10 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  (*(void (__cdecl **)(int, int *, int, signed int *, int))(v10 + 4))(v10, this + 0x10, 4, &a2, 1);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA030002u )
  {
    v22 = *(_DWORD *)(v2 + 0x21C);
    v11 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v22 + 4);
    a2 = 4;
    v11(v22, this + 0x11, 4, &a2, 1);
  }
  v23 = *(_DWORD *)(v2 + 0x21C);
  v12 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v23 + 4);
  a2 = 4;
  v12(v23, this + 0x12, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x21C);
  v14 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v13 + 4);
  a2 = 4;
  return v14(v13, this + 0x13, 4, &a2, 1);
}
