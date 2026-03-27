int __thiscall sub_75CF40(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, signed int *, int, int *, int); // edx
  void (__cdecl *v8)(int, signed int *, int, int *, int); // eax
  int v9; // eax
  void (__cdecl *v10)(int, signed int *, int, int *, int); // edx
  int v11; // edi
  int (__cdecl *v12)(int, const char **, int, int *, int); // ecx
  int v14; // [esp-50h] [ebp-5Ch]
  int v15; // [esp-28h] [ebp-34h]
  int v16; // [esp-14h] [ebp-20h]
  int v17; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_75E9E0(this, a2);
  sub_7094A0((char *)this + 0x40, v2);
  v16 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v16 + 8);
  v17 = 4;
  v4(v16, this + 0x16, 4, &v17, 1);
  v15 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, const char **, int, int *, int))(v15 + 8);
  v17 = 4;
  v5(v15, this + 0x17, 4, &v17, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  LOBYTE(a2) = *((_BYTE *)this + 0x60);
  v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v6 + 8);
  v17 = 1;
  v7(v6, &a2, 1, &v17, 1);
  LOBYTE(a2) = *((_BYTE *)this + 0x61);
  v14 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v14 + 8);
  v17 = 1;
  v8(v14, &a2, 1, &v17, 1);
  v9 = *(_DWORD *)(v2 + 0x220);
  LOBYTE(a2) = *((_BYTE *)this + 0x62);
  v10 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8);
  v17 = 1;
  v10(v9, &a2, 1, &v17, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  v12 = *(int (__cdecl **)(int, const char **, int, int *, int))(v11 + 8);
  v17 = 4;
  return v12(v11, this + 0x19, 4, &v17, 1);
}
