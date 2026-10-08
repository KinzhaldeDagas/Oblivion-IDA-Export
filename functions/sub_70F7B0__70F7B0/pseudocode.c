int __thiscall sub_70F7B0(char *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v9)(int, char *, int, signed int *, int); // eax
  char *v10; // edi
  int v11; // ebp
  void (__cdecl *v12)(int, char *, int, int *, int); // eax
  void (__cdecl *v13)(int, char *, int, int *, int); // edx
  void (__cdecl *v14)(int, char *, int, int *, int); // eax
  int v15; // eax
  int (__cdecl *v16)(int, signed int *, int, int *, int); // edx
  int result; // eax
  int v18; // [esp-50h] [ebp-64h]
  int v19; // [esp-3Ch] [ebp-50h]
  int v20; // [esp-3Ch] [ebp-50h]
  int v21; // [esp-28h] [ebp-3Ch]
  int v22; // [esp-28h] [ebp-3Ch]
  int v23; // [esp-28h] [ebp-3Ch]
  int v24; // [esp-14h] [ebp-28h]
  int v25; // [esp-14h] [ebp-28h]
  int v26; // [esp-14h] [ebp-28h]
  int v27; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x70f7b4*/
  v24 = *(_DWORD *)(a2 + 0x220); /*0x70f7d6*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 8); /*0x70f7d7*/
  a2 = 4; /*0x70f7da*/
  v4(v24, this + 4, 4, &a2, 1); /*0x70f7de*/
  v21 = *(_DWORD *)(v2 + 0x220); /*0x70f7f1*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v21 + 8); /*0x70f7f2*/
  a2 = 1; /*0x70f7f5*/
  v5(v21, this + 1, 1, &a2, 1); /*0x70f7f9*/
  v19 = *(_DWORD *)(v2 + 0x220); /*0x70f80c*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v19 + 8); /*0x70f80d*/
  a2 = 4; /*0x70f810*/
  v6(v19, this + 0xC, 4, &a2, 1); /*0x70f814*/
  v18 = *(_DWORD *)(v2 + 0x220); /*0x70f827*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v18 + 8); /*0x70f828*/
  a2 = 4; /*0x70f82b*/
  v7(v18, this + 0x10, 4, &a2, 1); /*0x70f82f*/
  v8 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x70f837*/
  v25 = *(_DWORD *)(v2 + 0x220); /*0x70f845*/
  a2 = 1; /*0x70f846*/
  v8(v25, this, 1, &a2, 1); /*0x70f84a*/
  v22 = *(_DWORD *)(v2 + 0x220); /*0x70f85d*/
  v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v22 + 8); /*0x70f85e*/
  a2 = 4; /*0x70f861*/
  v9(v22, this + 8, 4, &a2, 1); /*0x70f865*/
  v10 = this + 0x18; /*0x70f86a*/
  v11 = 4; /*0x70f86d*/
  do /*0x70f8f8*/
  {
    v26 = *(_DWORD *)(v2 + 0x220); /*0x70f882*/
    v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v26 + 8); /*0x70f883*/
    v27 = 4; /*0x70f886*/
    v12(v26, v10 + 0xFFFFFFFC, 4, &v27, 1); /*0x70f88a*/
    v13 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x70f892*/
    v23 = *(_DWORD *)(v2 + 0x220); /*0x70f89e*/
    v27 = 4; /*0x70f89f*/
    v13(v23, v10, 4, &v27, 1); /*0x70f8a3*/
    v20 = *(_DWORD *)(v2 + 0x220); /*0x70f8b8*/
    v14 = *(void (__cdecl **)(int, char *, int, int *, int))(v20 + 8); /*0x70f8b9*/
    v27 = 1; /*0x70f8bc*/
    v14(v20, v10 + 4, 1, &v27, 1); /*0x70f8c4*/
    v15 = *(_DWORD *)(v2 + 0x220); /*0x70f8c9*/
    LOBYTE(a2) = v10[5]; /*0x70f8d6*/
    v16 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v15 + 8); /*0x70f8da*/
    v27 = 1; /*0x70f8e5*/
    result = v16(v15, &a2, 1, &v27, 1); /*0x70f8ed*/
    v10 += 0xC; /*0x70f8f2*/
    --v11; /*0x70f8f5*/
  }
  while ( v11 ); /*0x70f8f8*/
  return result; /*0x70f8fe*/
}
