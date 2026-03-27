int __thiscall sub_7F13B0(void *this, float a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this);
  sub_7F0BC0((_DWORD **)this, a2, a3, a4, a5, a6, a7, a8);
  sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0xE5);
  ++*((_DWORD *)this + 0xE);
  return 0;
}
