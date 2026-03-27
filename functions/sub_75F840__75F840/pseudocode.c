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

  v2 = a2;
  sub_709430(this, a2);
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA030005u )
    sub_709430(v15, v2);
  v14 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 4);
  a2 = 4;
  v4(v14, this + 0xC, 4, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v13 + 4);
  a2 = 4;
  v5(v13, this + 0x10, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v6(v12, this + 0x14, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x21C);
  v7 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 4);
  a2 = 2;
  v7(v11, this + 0x18, 2, &a2, 1);
  v8 = *(_DWORD *)(v2 + 0x21C);
  v9 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v8 + 4);
  a2 = 2;
  return v9(v8, this + 0x1A, 2, &a2, 1);
}
