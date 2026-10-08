int __thiscall sub_726510(char *this, signed int a2)
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

  v2 = a2; /*0x726513*/
  v16 = *(_DWORD *)(a2 + 0x21C); /*0x726530*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v16 + 4); /*0x726531*/
  a2 = 4; /*0x726534*/
  v4(v16, this + 4, 4, &a2, 1); /*0x726538*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x72654c*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 4); /*0x72654d*/
  a2 = 4; /*0x726550*/
  v5(v14, this + 8, 4, &a2, 1); /*0x726554*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x726568*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 4); /*0x726569*/
  a2 = 4; /*0x72656c*/
  v6(v13, this + 0xC, 4, &a2, 1); /*0x726570*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x726584*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 4); /*0x726585*/
  a2 = 4; /*0x726588*/
  v7(v12, this + 0x10, 4, &a2, 1); /*0x72658c*/
  v17 = *(_DWORD *)(v2 + 0x21C); /*0x7265a3*/
  v8 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v17 + 4); /*0x7265a4*/
  a2 = 4; /*0x7265a7*/
  v8(v17, this + 0x14, 4, &a2, 1); /*0x7265ab*/
  v15 = *(_DWORD *)(v2 + 0x21C); /*0x7265bf*/
  v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v15 + 4); /*0x7265c0*/
  a2 = 4; /*0x7265c3*/
  v9(v15, this + 0x18, 4, &a2, 1); /*0x7265c7*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x7265c9*/
  a2 = 1; /*0x7265d9*/
  return (*(int (__cdecl **)(int, char *, int, signed int *, int))(v10 + 4))(v10, this, 1, &a2, 1); /*0x7265ea*/
}
