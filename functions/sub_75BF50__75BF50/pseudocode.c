int __thiscall sub_75BF50(const char **this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x75bf53*/
  sub_752E40(this, (signed int)a2); /*0x75bf5a*/
  LOBYTE(a2) = *((_BYTE *)this + 0x18); /*0x75bf69*/
  v6 = v2[0x88]; /*0x75bf7a*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8); /*0x75bf7b*/
  v7 = 1; /*0x75bf7e*/
  v4(v6, &a2, 1, &v7, 1); /*0x75bf86*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 7)); /*0x75bf98*/
}
