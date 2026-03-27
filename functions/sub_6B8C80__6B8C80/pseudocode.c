int __thiscall sub_6B8C80(int this)
{
  *(_DWORD *)this = 0;
  *(_WORD *)(this + 4) = 0;
  *(_WORD *)(this + 6) = 0;
  *(_DWORD *)(this + 0xC) = 0;
  *(_DWORD *)(this + 0x10) = 0;
  *(_DWORD *)(this + 0x1C) = 0;
  *(_DWORD *)(this + 0x14) = 0;
  *(_DWORD *)(this + 0x24) = 0;
  *(_DWORD *)(this + 0x18) = 0;
  BSStringT_Set((BSStringT *)this, EmptyString, 0);
  return this;
}
