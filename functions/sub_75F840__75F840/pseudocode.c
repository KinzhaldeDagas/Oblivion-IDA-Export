int __thiscall sub_75F840(char *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, char *, int, signed int *, int); // edx
  int v11; // [esp-50h] [ebp-68h]
  int v12; // [esp-3Ch] [ebp-54h]
  int v13; // [esp-28h] [ebp-40h]
  int v14; // [esp-14h] [ebp-2Ch]
  char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2; /*0x75f845*/
  sub_709430(this, a2); /*0x75f84d*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA030005u ) /*0x75f85c*/
    sub_709430(v15, v2); /*0x75f863*/
  v14 = *(_DWORD *)(v2 + 0x21C); /*0x75f87f*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 4); /*0x75f880*/
  a2 = 4; /*0x75f883*/
  v4(v14, this + 0xC, 4, &a2, 1); /*0x75f887*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x75f89b*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 4); /*0x75f89c*/
  a2 = 4; /*0x75f89f*/
  v5(v13, this + 0x10, 4, &a2, 1); /*0x75f8a3*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x75f8b7*/
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 4); /*0x75f8b8*/
  a2 = 4; /*0x75f8bb*/
  v6(v12, this + 0x14, 4, &a2, 1); /*0x75f8bf*/
  v11 = *(_DWORD *)(v2 + 0x21C); /*0x75f8d8*/
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 4); /*0x75f8d9*/
  a2 = 2; /*0x75f8dc*/
  v7(v11, this + 0x18, 2, &a2, 1); /*0x75f8e0*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x75f8e2*/
  v9 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v8 + 4); /*0x75f8e8*/
  a2 = 2; /*0x75f8fb*/
  return v9(v8, this + 0x1A, 2, &a2, 1); /*0x75f904*/
}
