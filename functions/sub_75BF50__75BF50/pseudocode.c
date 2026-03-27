int __thiscall sub_75BF50(const char **this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_752E40(this, (signed int)a2);
  LOBYTE(a2) = *((_BYTE *)this + 0x18);
  v6 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8);
  v7 = 1;
  v4(v6, &a2, 1, &v7, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 7));
}
