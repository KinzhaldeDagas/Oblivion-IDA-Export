int __thiscall sub_6D4DF0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, _DWORD *, int, signed int *, int); // eax
  int (__cdecl *v10)(int, _DWORD *, int, signed int *, int); // eax
  int result; // eax
  void (__cdecl *v12)(int, _DWORD *, int, signed int *, int); // eax
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-14h] [ebp-24h]
  int v16; // [esp-14h] [ebp-24h]
  int v17; // [esp-14h] [ebp-24h]
  int v18; // [esp-14h] [ebp-24h]
  int v19; // [esp-14h] [ebp-24h]
  int v20; // [esp-14h] [ebp-24h]

  v2 = a2; /*0x6d4df4*/
  nullsub_returnvVoid_1arg(a2); /*0x6d4dfb*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6d4e06*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x6d4e1a*/
  a2 = 4; /*0x6d4e1b*/
  v4(v13, this + 2, 4, &a2, 1); /*0x6d4e1f*/
  if ( *(this + 2) ) /*0x6d4e24*/
  {
    v14 = *(_DWORD *)(v2 + 0x220); /*0x6d4e3b*/
    v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v14 + 8); /*0x6d4e3c*/
    a2 = 4; /*0x6d4e3f*/
    v5(v14, this + 4, 4, &a2, 1); /*0x6d4e43*/
    (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 4) + 0xB3D5C0))(v2, *(this + 3), *(this + 2)); /*0x6d4e57*/
  }
  v15 = *(_DWORD *)(v2 + 0x220); /*0x6d4e6e*/
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v15 + 8); /*0x6d4e6f*/
  a2 = 4; /*0x6d4e72*/
  v6(v15, this + 5, 4, &a2, 1); /*0x6d4e76*/
  if ( *(this + 5) ) /*0x6d4e7b*/
  {
    v16 = *(_DWORD *)(v2 + 0x220); /*0x6d4e92*/
    v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v16 + 8); /*0x6d4e93*/
    a2 = 4; /*0x6d4e96*/
    v7(v16, this + 7, 4, &a2, 1); /*0x6d4e9a*/
    (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 7) + 0xB3D5C0))(v2, *(this + 6), *(this + 5)); /*0x6d4eae*/
  }
  v17 = *(_DWORD *)(v2 + 0x220); /*0x6d4ec5*/
  v8 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v17 + 8); /*0x6d4ec6*/
  a2 = 4; /*0x6d4ec9*/
  v8(v17, this + 8, 4, &a2, 1); /*0x6d4ecd*/
  if ( *(this + 8) ) /*0x6d4ed2*/
  {
    v18 = *(_DWORD *)(v2 + 0x220); /*0x6d4ee9*/
    v9 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v18 + 8); /*0x6d4eea*/
    a2 = 4; /*0x6d4eed*/
    v9(v18, this + 0xA, 4, &a2, 1); /*0x6d4ef1*/
    (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 0xA) + 0xB3D5C0))(v2, *(this + 9), *(this + 8)); /*0x6d4f05*/
  }
  v19 = *(_DWORD *)(v2 + 0x220); /*0x6d4f1c*/
  v10 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v19 + 8); /*0x6d4f1d*/
  a2 = 4; /*0x6d4f20*/
  result = v10(v19, this + 0xB, 4, &a2, 1); /*0x6d4f24*/
  if ( *(this + 0xB) ) /*0x6d4f29*/
  {
    v20 = *(_DWORD *)(v2 + 0x220); /*0x6d4f40*/
    v12 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v20 + 8); /*0x6d4f41*/
    a2 = 4; /*0x6d4f44*/
    v12(v20, this + 0xD, 4, &a2, 1); /*0x6d4f48*/
    return (*(int (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 0xD) + 0xB3D5C0))( /*0x6d4f5c*/
             v2,
             *(this + 0xC),
             *(this + 0xB));
  }
  return result; /*0x6d4f61*/
}
