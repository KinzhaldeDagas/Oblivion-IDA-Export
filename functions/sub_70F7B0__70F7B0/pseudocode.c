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

  v2 = a2;
  v24 = *(_DWORD *)(a2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 8);
  a2 = 4;
  v4(v24, this + 4, 4, &a2, 1);
  v21 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v21 + 8);
  a2 = 1;
  v5(v21, this + 1, 1, &a2, 1);
  v19 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v19 + 8);
  a2 = 4;
  v6(v19, this + 0xC, 4, &a2, 1);
  v18 = *(_DWORD *)(v2 + 0x220);
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v18 + 8);
  a2 = 4;
  v7(v18, this + 0x10, 4, &a2, 1);
  v8 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v25 = *(_DWORD *)(v2 + 0x220);
  a2 = 1;
  v8(v25, this, 1, &a2, 1);
  v22 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v22 + 8);
  a2 = 4;
  v9(v22, this + 8, 4, &a2, 1);
  v10 = this + 0x18;
  v11 = 4;
  do
  {
    v26 = *(_DWORD *)(v2 + 0x220);
    v12 = *(void (__cdecl **)(int, char *, int, int *, int))(v26 + 8);
    v27 = 4;
    v12(v26, v10 + 0xFFFFFFFC, 4, &v27, 1);
    v13 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v23 = *(_DWORD *)(v2 + 0x220);
    v27 = 4;
    v13(v23, v10, 4, &v27, 1);
    v20 = *(_DWORD *)(v2 + 0x220);
    v14 = *(void (__cdecl **)(int, char *, int, int *, int))(v20 + 8);
    v27 = 1;
    v14(v20, v10 + 4, 1, &v27, 1);
    v15 = *(_DWORD *)(v2 + 0x220);
    LOBYTE(a2) = v10[5];
    v16 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v15 + 8);
    v27 = 1;
    result = v16(v15, &a2, 1, &v27, 1);
    v10 += 0xC;
    --v11;
  }
  while ( v11 );
  return result;
}
