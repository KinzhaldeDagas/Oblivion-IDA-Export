int __thiscall sub_74E4A0(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, const char **, int, signed int *, int); // eax
  int v8; // eax
  void (__cdecl *v9)(int, signed int *, int, int *, int); // edx
  void (__cdecl *v10)(int, signed int *, int, int *, int); // eax
  int v12; // [esp-50h] [ebp-60h]
  int v13; // [esp-3Ch] [ebp-4Ch]
  int v14; // [esp-28h] [ebp-38h]
  int v15; // [esp-28h] [ebp-38h]
  int v16; // [esp-14h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x74e4a4*/
  sub_752E40(this, a2); /*0x74e4ab*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x74e4c7*/
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v16 + 8); /*0x74e4c8*/
  a2 = 4; /*0x74e4cb*/
  v4(v16, this + 6, 4, &a2, 1); /*0x74e4cf*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x74e4e3*/
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v14 + 8); /*0x74e4e4*/
  a2 = 4; /*0x74e4e7*/
  v5(v14, this + 7, 4, &a2, 1); /*0x74e4eb*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x74e4ff*/
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v13 + 8); /*0x74e500*/
  a2 = 4; /*0x74e503*/
  v6(v13, this + 8, 4, &a2, 1); /*0x74e507*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x74e51b*/
  v7 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v12 + 8); /*0x74e51c*/
  a2 = 4; /*0x74e51f*/
  v7(v12, this + 9, 4, &a2, 1); /*0x74e523*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x74e528*/
  LOBYTE(a2) = *((_BYTE *)this + 0x35); /*0x74e538*/
  v9 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v8 + 8); /*0x74e53c*/
  v17 = 1; /*0x74e547*/
  v9(v8, &a2, 1, &v17, 1); /*0x74e54f*/
  LOBYTE(a2) = *((_BYTE *)this + 0x34); /*0x74e55b*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x74e56c*/
  v10 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v15 + 8); /*0x74e56d*/
  v17 = 1; /*0x74e570*/
  v10(v15, &a2, 1, &v17, 1); /*0x74e578*/
  return sub_7094A0((char *)this + 0x28, v2); /*0x74e586*/
}
