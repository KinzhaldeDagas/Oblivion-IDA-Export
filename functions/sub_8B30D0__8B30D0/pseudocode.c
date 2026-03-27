int __thiscall sub_8B30D0(char *this, int a2)
{
  _DWORD *v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v7; // esi
  int (__cdecl *v8)(int, int, int, int *, int); // edx
  int v10; // [esp-50h] [ebp-58h]
  int v11; // [esp-3Ch] [ebp-44h]

  v2 = (_DWORD *)a2;
  sub_8A0C30(this, a2);
  v4 = *((_DWORD *)this + 1);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x20, 0x40, 0, 0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x60, 0x30, 0, 0);
  v11 = v2[0x87];
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 4);
  a2 = 4;
  v5(v11, v4 + 0xC, 4, &a2, 1);
  v10 = v2[0x87];
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v10 + 4);
  a2 = 4;
  v6(v10, v4 + 0x10, 4, &a2, 1);
  v7 = v2[0x87];
  v8 = *(int (__cdecl **)(int, int, int, int *, int))(v7 + 4);
  a2 = 4;
  return v8(v7, v4 + 0x14, 4, &a2, 1);
}
