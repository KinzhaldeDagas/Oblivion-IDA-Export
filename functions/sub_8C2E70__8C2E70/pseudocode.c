int __thiscall sub_8C2E70(char *this, _DWORD *a2)
{
  int v4; // esi

  sub_8A0C30(this, (int)a2); /*0x8c2e79*/
  v4 = *((_DWORD *)this + 1); /*0x8c2e7e*/
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 0x10, 0x10, 0, 0); /*0x8c2e95*/
  return (*(int (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 0x20, 0x10, 0, 0); /*0x8c2eb0*/
}
