int __thiscall sub_6E06A0(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_716050(this, a2);
  v6 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v6 + 8);
  a2 = 2;
  v4(v6, this + 0xF, 2, &a2, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x10));
}
