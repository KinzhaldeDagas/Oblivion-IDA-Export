int __thiscall sub_88F2D0(char *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  int result; // eax
  void (__cdecl *v7)(int, _BYTE *, int, signed int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, _BYTE *, int, signed int *, int); // eax
  int v10; // [esp-28h] [ebp-38h]
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp-14h] [ebp-24h]
  _BYTE v13[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_89E940(a2);
  v11 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v11 + 4);
  a2 = 4;
  v4(v11, this + 0x14, 4, &a2, 1);
  v5 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v10 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  result = v5(v10, this + 0x18, 4, &a2, 1);
  if ( *(_DWORD *)(v2 + 4) < 8u )
  {
    v12 = *(_DWORD *)(v2 + 0x21C);
    v7 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v12 + 4);
    a2 = 4;
    v7(v12, v13, 4, &a2, 1);
    v8 = *(_DWORD *)(v2 + 0x21C);
    v9 = *(int (__cdecl **)(int, _BYTE *, int, signed int *, int))(v8 + 4);
    a2 = 4;
    return v9(v8, v13, 4, &a2, 1);
  }
  return result;
}
