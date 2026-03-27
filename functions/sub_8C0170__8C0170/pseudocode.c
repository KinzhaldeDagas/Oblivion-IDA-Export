int __thiscall sub_8C0170(char *this, int a2)
{
  _DWORD *v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  void (__cdecl *v7)(int, int, int, int *, int); // eax
  int v8; // esi
  int (__cdecl *v9)(int, int, int, int *, int); // edx
  int v11; // [esp-50h] [ebp-5Ch]
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_8A0C30(this, a2);
  v4 = *((_DWORD *)this + 1);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x10, 0x20, 0, 0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x30, 0x60, 0, 0);
  v12 = v2[0x87];
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v12 + 4);
  a2 = 4;
  v5(v12, v4 + 0x90, 4, &a2, 1);
  v11 = v2[0x87];
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 4);
  a2 = 4;
  v6(v11, v4 + 0x94, 4, &a2, 1);
  v13 = v2[0x87];
  v7 = *(void (__cdecl **)(int, int, int, int *, int))(v13 + 4);
  a2 = 4;
  v7(v13, v4 + 0x98, 4, &a2, 1);
  v8 = v2[0x87];
  v9 = *(int (__cdecl **)(int, int, int, int *, int))(v8 + 4);
  a2 = 4;
  return v9(v8, v4 + 0x9C, 4, &a2, 1);
}
