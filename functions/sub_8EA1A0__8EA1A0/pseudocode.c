int __thiscall sub_8EA1A0(_OWORD *this, int a2, int a3)
{
  *(_BYTE *)a3 = 1;
  *(_OWORD *)(a3 + 0x30) = 0;
  *(_OWORD *)(a3 + 0x40) = *(this + 6);
  *(_OWORD *)(a3 + 0x20) = *(this + 0xE);
  *(_OWORD *)(a3 + 0x10) = *(this + 0xD);
  *(_OWORD *)(a3 + 0x50) = 0;
  *(_OWORD *)(a3 + 0x60) = 0;
  *(_OWORD *)(a3 + 0x70) = 0;
  *(_DWORD *)(a3 + 0x50) = 0x3F800000;
  *(_DWORD *)(a3 + 0x64) = 0x3F800000;
  *(_DWORD *)(a3 + 0x78) = 0x3F800000;
  *(_BYTE *)(a3 + 0xC) = 1;
  return a3 + 0x80;
}
