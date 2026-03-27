int __thiscall sub_575610(int this, int a2, int a3, int a4, int a5, char a6)
{
  *(_DWORD *)this = 0;
  *(_WORD *)(this + 4) = 0;
  *(_WORD *)(this + 6) = 0;
  *(_DWORD *)(this + 0x20) = 0;
  *(_DWORD *)(this + 0x24) = 0;
  BSStringT_Set((BSStringT *)this, EmptyString, 0);
  *(_DWORD *)(this + 8) = a2;
  *(_DWORD *)(this + 0xC) = a3;
  *(_DWORD *)(this + 0x14) = a5;
  *(_DWORD *)(this + 0x10) = a4;
  *(_DWORD *)(this + 0x18) = 0;
  *(_BYTE *)(this + 0x1C) = a6;
  return this;
}
