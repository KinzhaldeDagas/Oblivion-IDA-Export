int __thiscall sub_74E390(int *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  void (__cdecl *v8)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v9)(int, char *, int, signed int *, int); // edx
  int v11; // [esp-50h] [ebp-64h]
  int v12; // [esp-3Ch] [ebp-50h]
  int v13; // [esp-28h] [ebp-3Ch]
  int v14; // [esp-14h] [ebp-28h]
  int v15; // [esp-14h] [ebp-28h]
  int v16; // [esp-14h] [ebp-28h]
  char v17; // [esp+Fh] [ebp-5h] BYREF
  int v18; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_752DC0(this, a2);
  v14 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v14 + 4);
  a2 = 4;
  v4(v14, this + 6, 4, &a2, 1);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14000002u )
  {
    v15 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 4);
    v18 = 4;
    v5(v15, this + 7, 4, &v18, 1);
    v13 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v13 + 4);
    v18 = 4;
    v6(v13, this + 8, 4, &v18, 1);
    v12 = *(_DWORD *)(v2 + 0x21C);
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v12 + 4);
    v18 = 4;
    v7(v12, this + 9, 4, &v18, 1);
    v11 = *(_DWORD *)(v2 + 0x21C);
    v8 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v11 + 4);
    v18 = 1;
    v8(v11, &a2, 1, &v18, 1);
    *((_BYTE *)this + 0x35) = (_BYTE)a2 != 0;
  }
  v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v16 = *(_DWORD *)(v2 + 0x21C);
  a2 = 1;
  v9(v16, &v17, 1, &a2, 1);
  *((_BYTE *)this + 0x34) = v17 != 0;
  return sub_709430((char *)this + 0x28, v2);
}
