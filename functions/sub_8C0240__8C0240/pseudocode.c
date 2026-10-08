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

  v2 = a2; /*0x8c0242*/
  sub_8A0C80(this, a2); /*0x8c024a*/
  v4 = *(this + 1); /*0x8c024f*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x8c0265*/
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v16 + 8); /*0x8c0266*/
  a2 = 0x20; /*0x8c0269*/
  v5(v16, v4 + 0x10, 0x20, &a2, 1); /*0x8c0271*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x8c0286*/
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v15 + 8); /*0x8c0287*/
  a2 = 0x60; /*0x8c028a*/
  v6(v15, v4 + 0x30, 0x60, &a2, 1); /*0x8c0292*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x8c02ae*/
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v14 + 8); /*0x8c02af*/
  a2 = 4; /*0x8c02b2*/
  v7(v14, v4 + 0x90, 4, &a2, 1); /*0x8c02b6*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x8c02cd*/
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8); /*0x8c02ce*/
  a2 = 4; /*0x8c02d1*/
  v8(v13, v4 + 0x94, 4, &a2, 1); /*0x8c02d5*/
  v17 = *(_DWORD *)(v2 + 0x220); /*0x8c02ef*/
  v9 = *(void (__cdecl **)(int, int, int, signed int *, int))(v17 + 8); /*0x8c02f0*/
  a2 = 4; /*0x8c02f3*/
  v9(v17, v4 + 0x98, 4, &a2, 1); /*0x8c02f7*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x8c02f9*/
  v11 = *(int (__cdecl **)(int, int, int, signed int *, int))(v10 + 8); /*0x8c02ff*/
  a2 = 4; /*0x8c0312*/
  return v11(v10, v4 + 0x9C, 4, &a2, 1); /*0x8c031b*/
}
