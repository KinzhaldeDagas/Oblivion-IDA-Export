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

  v2 = a2; /*0x8b3181*/
  sub_8A0C80(this, a2); /*0x8b3189*/
  v4 = *(this + 1); /*0x8b318e*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x8b31a4*/
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v15 + 8); /*0x8b31a5*/
  a2 = 0x40; /*0x8b31a8*/
  v5(v15, v4 + 0x20, 0x40, &a2, 1); /*0x8b31b0*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x8b31c5*/
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v14 + 8); /*0x8b31c6*/
  a2 = 0x30; /*0x8b31c9*/
  v6(v14, v4 + 0x60, 0x30, &a2, 1); /*0x8b31d1*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x8b31e6*/
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8); /*0x8b31e7*/
  a2 = 4; /*0x8b31ea*/
  v7(v13, v4 + 0xC, 4, &a2, 1); /*0x8b31f2*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x8b3207*/
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v12 + 8); /*0x8b3208*/
  a2 = 4; /*0x8b320b*/
  v8(v12, v4 + 0x10, 4, &a2, 1); /*0x8b3213*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x8b3215*/
  v10 = *(int (__cdecl **)(int, int, int, signed int *, int))(v9 + 8); /*0x8b321b*/
  a2 = 4; /*0x8b322f*/
  return v10(v9, v4 + 0x14, 4, &a2, 1); /*0x8b323c*/
}
