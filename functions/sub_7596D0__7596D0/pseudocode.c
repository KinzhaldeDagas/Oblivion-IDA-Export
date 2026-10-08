int __thiscall sub_7596D0(const char **this, _DWORD *a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = (signed int)a2; /*0x7596d3*/
  sub_75E9E0(this, a2); /*0x7596da*/
  LOBYTE(a2) = *((_BYTE *)this + 0x30); /*0x7596e9*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x7596fa*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8); /*0x7596fb*/
  v7 = 1; /*0x7596fe*/
  v4(v6, &a2, 1, &v7, 1); /*0x759706*/
  return sub_7094A0((char *)this + 0x34, v2); /*0x759714*/
}
