int __thiscall sub_926860(char *this, int a2)
{
  _DWORD *v2; // esi
  int v4; // edi
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // eax
  int v8; // [esp-28h] [ebp-30h]
  int v9; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_8A0C30(this, a2);
  v4 = *((_DWORD *)this + 1);
  v9 = v2[0x87];
  v5 = *(void (__cdecl **)(int, int, int, int *, int))(v9 + 4);
  a2 = 4;
  v5(v9, v4 + 0x10, 4, &a2, 1);
  v8 = v2[0x87];
  v6 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 4);
  a2 = 1;
  v6(v8, v4 + 0x14, 1, &a2, 1);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x20, 0x40, 0, 0);
  return (*(int (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x60, 0x40, 0, 0);
}
