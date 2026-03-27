int __thiscall sub_483630(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  v4 = *(this + 4) + 0x10 * (a3 + a2 * *(this + 3));
  v5 = sub_4EF1D0(*(_WORD *)(v4 + 8), *(_WORD *)(v4 + 0xC));
  sub_7B3A40(v5);
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x1C))(this, a2, a3);
}
