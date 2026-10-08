int __thiscall sub_74F3A0(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v8)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v9)(int, const char **, int, signed int *, int); // eax
  int v10; // eax
  void (__cdecl *v11)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v12)(int, const char **, int, signed int *, int); // eax
  int v13; // edi
  int (__cdecl *v14)(int, const char **, int, signed int *, int); // edx
  int v16; // [esp-50h] [ebp-5Ch]
  int v17; // [esp-3Ch] [ebp-48h]
  int v18; // [esp-3Ch] [ebp-48h]
  int v19; // [esp-28h] [ebp-34h]
  int v20; // [esp-28h] [ebp-34h]
  int v21; // [esp-28h] [ebp-34h]
  int v22; // [esp-14h] [ebp-20h]
  int v23; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x74f3a3*/
  sub_752E40(this, a2); /*0x74f3aa*/
  v22 = *(_DWORD *)(v2 + 0x220); /*0x74f3c6*/
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v22 + 8); /*0x74f3c7*/
  a2 = 4; /*0x74f3ca*/
  v4(v22, this + 6, 4, &a2, 1); /*0x74f3ce*/
  v19 = *(_DWORD *)(v2 + 0x220); /*0x74f3e2*/
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v19 + 8); /*0x74f3e3*/
  a2 = 4; /*0x74f3e6*/
  v5(v19, this + 7, 4, &a2, 1); /*0x74f3ea*/
  v17 = *(_DWORD *)(v2 + 0x220); /*0x74f3fe*/
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v17 + 8); /*0x74f3ff*/
  a2 = 4; /*0x74f402*/
  v6(v17, this + 8, 4, &a2, 1); /*0x74f406*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x74f41a*/
  v7 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v16 + 8); /*0x74f41b*/
  a2 = 4; /*0x74f41e*/
  v7(v16, this + 9, 4, &a2, 1); /*0x74f422*/
  v23 = *(_DWORD *)(v2 + 0x220); /*0x74f439*/
  v8 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v23 + 8); /*0x74f43a*/
  a2 = 4; /*0x74f43d*/
  v8(v23, this + 0xA, 4, &a2, 1); /*0x74f441*/
  v20 = *(_DWORD *)(v2 + 0x220); /*0x74f455*/
  v9 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v20 + 8); /*0x74f456*/
  a2 = 4; /*0x74f459*/
  v9(v20, this + 0xB, 4, &a2, 1); /*0x74f45d*/
  sub_709510((char *)this + 0x30, v2); /*0x74f466*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x74f46b*/
  a2 = 4; /*0x74f471*/
  (*(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8))(v10, this + 0x10, 4, &a2, 1); /*0x74f485*/
  v21 = *(_DWORD *)(v2 + 0x220); /*0x74f499*/
  v11 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v21 + 8); /*0x74f49a*/
  a2 = 4; /*0x74f49d*/
  v11(v21, this + 0x11, 4, &a2, 1); /*0x74f4a1*/
  v18 = *(_DWORD *)(v2 + 0x220); /*0x74f4b5*/
  v12 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v18 + 8); /*0x74f4b6*/
  a2 = 4; /*0x74f4b9*/
  v12(v18, this + 0x12, 4, &a2, 1); /*0x74f4bd*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x74f4bf*/
  v14 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v13 + 8); /*0x74f4c5*/
  a2 = 4; /*0x74f4d5*/
  return v14(v13, this + 0x13, 4, &a2, 1); /*0x74f4de*/
}
