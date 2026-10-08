int __thiscall sub_7265F0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, char *, int, signed int *, int); // eax
  int v10; // edi
  int v12; // [esp-50h] [ebp-5Ch]
  int v13; // [esp-3Ch] [ebp-48h]
  int v14; // [esp-28h] [ebp-34h]
  int v15; // [esp-28h] [ebp-34h]
  int v16; // [esp-14h] [ebp-20h]
  int v17; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x7265f3*/
  v16 = *(_DWORD *)(a2 + 0x220); /*0x726610*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v16 + 8); /*0x726611*/
  a2 = 4; /*0x726614*/
  v4(v16, this + 4, 4, &a2, 1); /*0x726618*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x72662c*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8); /*0x72662d*/
  a2 = 4; /*0x726630*/
  v5(v14, this + 8, 4, &a2, 1); /*0x726634*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x726648*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 8); /*0x726649*/
  a2 = 4; /*0x72664c*/
  v6(v13, this + 0xC, 4, &a2, 1); /*0x726650*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x726664*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 8); /*0x726665*/
  a2 = 4; /*0x726668*/
  v7(v12, this + 0x10, 4, &a2, 1); /*0x72666c*/
  v17 = *(_DWORD *)(v2 + 0x220); /*0x726683*/
  v8 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v17 + 8); /*0x726684*/
  a2 = 4; /*0x726687*/
  v8(v17, this + 0x14, 4, &a2, 1); /*0x72668b*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x72669f*/
  v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v15 + 8); /*0x7266a0*/
  a2 = 4; /*0x7266a3*/
  v9(v15, this + 0x18, 4, &a2, 1); /*0x7266a7*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x7266a9*/
  a2 = 1; /*0x7266b9*/
  return (*(int (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8))(v10, this, 1, &a2, 1); /*0x7266ca*/
}
