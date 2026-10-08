int __thiscall sub_8C1BC0(_DWORD *this, signed int a2)
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

  v2 = a2; /*0x8c1bc1*/
  sub_8A0C80(this, a2); /*0x8c1bc9*/
  v4 = *(this + 1); /*0x8c1bce*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x8c1be4*/
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v15 + 8); /*0x8c1be5*/
  a2 = 0x50; /*0x8c1be8*/
  v5(v15, v4 + 0x10, 0x50, &a2, 1); /*0x8c1bf0*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x8c1c05*/
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v14 + 8); /*0x8c1c06*/
  a2 = 0x30; /*0x8c1c09*/
  v6(v14, v4 + 0x60, 0x30, &a2, 1); /*0x8c1c11*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x8c1c29*/
  v7 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8); /*0x8c1c2a*/
  a2 = 4; /*0x8c1c2d*/
  v7(v13, v4 + 0x90, 4, &a2, 1); /*0x8c1c35*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x8c1c4d*/
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v12 + 8); /*0x8c1c4e*/
  a2 = 4; /*0x8c1c51*/
  v8(v12, v4 + 0x94, 4, &a2, 1); /*0x8c1c59*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x8c1c5b*/
  v10 = *(int (__cdecl **)(int, int, int, signed int *, int))(v9 + 8); /*0x8c1c61*/
  a2 = 4; /*0x8c1c78*/
  return v10(v9, v4 + 0x98, 4, &a2, 1); /*0x8c1c85*/
}
