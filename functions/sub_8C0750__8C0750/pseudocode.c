int __thiscall sub_8C0750(char *this, int a2)
{
  _DWORD *v2; // esi
  int v4; // edi
  int v5; // esi
  int (__cdecl *v6)(int, int, int, int *, int); // ecx

  v2 = (_DWORD *)a2;
  sub_8A0C30(this, a2);
  v4 = *((_DWORD *)this + 1);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x10, 0x10, 0, 0);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(v2[0x87] + 4))(v2[0x87], v4 + 0x20, 0x10, 0, 0);
  v5 = v2[0x87];
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 4);
  a2 = 4;
  return v6(v5, v4 + 0xC, 4, &a2, 1);
}
