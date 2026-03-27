int __thiscall sub_775DF0(int this, int a2, int a3)
{
  *(_WORD *)(this + 0xC) = 0;
  *(_WORD *)(this + 0xE) = 0;
  *(_WORD *)(this + 0x10) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 4) = &NiTArray<NiDX9AdapterDesc *>::`vftable';
  *(_WORD *)(this + 0x12) = 1;
  *(_DWORD *)this = 0;
  sub_775CC0((unsigned __int16 *)this, a2, a3);
  return this;
}
