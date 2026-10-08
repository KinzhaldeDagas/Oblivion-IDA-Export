int __thiscall sub_8BF9F0(_DWORD *this, signed int a2)
{
  int v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  int v7; // esi
  int (__cdecl *v8)(int, int, int, signed int *, int); // edx
  int v10; // [esp-30h] [ebp-38h]
  int v11; // [esp-1Ch] [ebp-24h]

  v2 = a2; /*0x8bf9f1*/
  sub_8A0C80(this, a2); /*0x8bf9f9*/
  v4 = *(this + 1); /*0x8bf9fe*/
  sub_8E80C0(v2, *(_DWORD *)(v4 + 0xC)); /*0x8bfa06*/
  v11 = *(_DWORD *)(v2 + 0x220); /*0x8bfa1e*/
  v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v11 + 8); /*0x8bfa1f*/
  a2 = 4; /*0x8bfa22*/
  v5(v11, v4 + 0x14, 4, &a2, 1); /*0x8bfa2a*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x8bfa3f*/
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(v10 + 8); /*0x8bfa40*/
  a2 = 1; /*0x8bfa43*/
  v6(v10, v4 + 0x19, 1, &a2, 1); /*0x8bfa4b*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x8bfa4d*/
  v8 = *(int (__cdecl **)(int, int, int, signed int *, int))(v7 + 8); /*0x8bfa53*/
  a2 = 1; /*0x8bfa64*/
  return v8(v7, v4 + 0x1A, 1, &a2, 1); /*0x8bfa71*/
}
