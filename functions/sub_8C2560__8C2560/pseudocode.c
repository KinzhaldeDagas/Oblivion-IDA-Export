int __thiscall sub_8C2560(char *this, _DWORD *a2)
{
  int v4; // esi

  sub_8A0C30(this, (int)a2);
  v4 = *((_DWORD *)this + 1);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 0x10, 0x30, 0, 0);
  return (*(int (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 0x40, 0x20, 0, 0);
}
