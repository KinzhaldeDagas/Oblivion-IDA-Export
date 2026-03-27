int __thiscall sub_6CDC10(char *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  char *v6; // ebp
  int (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  int result; // eax
  void (__cdecl *v9)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v10)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v11)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v12)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v13)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v14)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v15)(int, char *, int, signed int *, int); // eax
  int v16; // eax
  unsigned __int8 i; // bl
  int v18; // [esp-50h] [ebp-60h]
  int v19; // [esp-3Ch] [ebp-4Ch]
  int v20; // [esp-3Ch] [ebp-4Ch]
  int v21; // [esp-3Ch] [ebp-4Ch]
  int v22; // [esp-28h] [ebp-38h]
  int v23; // [esp-28h] [ebp-38h]
  int v24; // [esp-28h] [ebp-38h]
  int v25; // [esp-14h] [ebp-24h]
  int v26; // [esp-14h] [ebp-24h]
  int v27; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  j_nullsub_3(a2);
  v25 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v25 + 8);
  a2 = 1;
  v4(v25, this + 0xC, 1, &a2, 1);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v2[0x88] + 8);
  v6 = this + 0xD;
  v22 = v2[0x88];
  a2 = 1;
  v5(v22, this + 0xD, 1, &a2, 1);
  v19 = v2[0x88];
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v19 + 8);
  a2 = 4;
  result = v7(v19, this + 0x1C, 4, &a2, 1);
  if ( (*(this + 0xC) & 1) == 0 )
  {
    v26 = v2[0x88];
    v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v26 + 8);
    a2 = 1;
    v9(v26, this + 0xE, 1, &a2, 1);
    v23 = v2[0x88];
    v10 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v23 + 8);
    a2 = 1;
    v10(v23, this + 0xF, 1, &a2, 1);
    v20 = v2[0x88];
    v11 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v20 + 8);
    a2 = 1;
    v11(v20, this + 0x10, 1, &a2, 1);
    v18 = v2[0x88];
    v12 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v18 + 8);
    a2 = 1;
    v12(v18, this + 0x11, 1, &a2, 1);
    v27 = v2[0x88];
    v13 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v27 + 8);
    a2 = 4;
    v13(v27, this + 0x20, 4, &a2, 1);
    v24 = v2[0x88];
    v14 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 8);
    a2 = 4;
    v14(v24, this + 0x24, 4, &a2, 1);
    v21 = v2[0x88];
    v15 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v21 + 8);
    a2 = 4;
    v15(v21, this + 0x28, 4, &a2, 1);
    v16 = v2[0x88];
    a2 = 4;
    (*(void (__cdecl **)(int, char *, int, signed int *, int))(v16 + 8))(v16, this + 0x2C, 4, &a2, 1);
    for ( i = 0; i < (unsigned __int8)*v6; ++i )
      sub_6CD680((_DWORD *)(*((_DWORD *)this + 5) + 0x18 * i), (signed int)v2);
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 6));
  }
  return result;
}
