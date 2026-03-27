int __thiscall sub_75CE30(int *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v7)(int, signed int *, int, int *, int); // edx
  void (__cdecl *v8)(int, signed int *, int, int *, int); // eax
  int v9; // edi
  int (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v12; // [esp-50h] [ebp-60h]
  int v13; // [esp-3Ch] [ebp-4Ch]
  int v14; // [esp-28h] [ebp-38h]
  int v15; // [esp-14h] [ebp-24h]
  int v16; // [esp-14h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_75E920(this, a2);
  sub_709430((char *)this + 0x40, v2);
  sub_75C1C0((float *)this, (float *)this + 0x10);
  v15 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v15 + 4);
  v17 = 4;
  v4(v15, this + 0x16, 4, &v17, 1);
  v14 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v14 + 4);
  v17 = 4;
  v5(v14, this + 0x17, 4, &v17, 1);
  v13 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v13 + 4);
  v17 = 1;
  v6(v13, &a2, 1, &v17, 1);
  *((_BYTE *)this + 0x60) = (_BYTE)a2 != 0;
  v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v12 = *(_DWORD *)(v2 + 0x21C);
  v17 = 1;
  v7(v12, &a2, 1, &v17, 1);
  *((_BYTE *)this + 0x61) = (_BYTE)a2 != 0;
  v16 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v16 + 4);
  v17 = 1;
  v8(v16, &a2, 1, &v17, 1);
  *((_BYTE *)this + 0x62) = (_BYTE)a2 != 0;
  v9 = *(_DWORD *)(v2 + 0x21C);
  v10 = *(int (__cdecl **)(int, int *, int, int *, int))(v9 + 4);
  v17 = 4;
  return v10(v9, this + 0x19, 4, &v17, 1);
}
