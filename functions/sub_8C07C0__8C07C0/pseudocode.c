int __thiscall sub_8C07C0(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  int v7; // esi
  int (__cdecl *v8)(int, int, int, signed int *, int); // edx
  int v10; // [esp-28h] [ebp-30h]
  int v11; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x8c07c1*/
  sub_8A0C80(this, a2); /*0x8c07c9*/
  v4 = *(this + 1); /*0x8c07ce*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x8c07e4*/
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v11 + 8); /*0x8c07e5*/
  a2 = 0x10; /*0x8c07e8*/
  v5(v11, v4 + 0x10, 0x10, &a2, 1); /*0x8c07f0*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x8c0805*/
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v10 + 8); /*0x8c0806*/
  a2 = 0x10; /*0x8c0809*/
  v6(v10, v4 + 0x20, 0x10, &a2, 1); /*0x8c0811*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x8c0813*/
  v8 = *(int (__cdecl **)(int, int, int, signed int *, int))(v7 + 8); /*0x8c0819*/
  a2 = 4; /*0x8c082a*/
  return v8(v7, v4 + 0xC, 4, &a2, 1); /*0x8c0837*/
}
