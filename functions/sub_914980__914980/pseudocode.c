int __thiscall sub_914980(int this, int a2)
{
  *(_OWORD *)a2 = *(_OWORD *)(this + 0x10);
  *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(this + 0xC);
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x20);
  *(_DWORD *)(a2 + 0x1C) = *(_DWORD *)(this + 0xC);
  *(_OWORD *)(a2 + 0x20) = *(_OWORD *)(this + 0x30);
  *(_DWORD *)(a2 + 0x2C) = *(_DWORD *)(this + 0xC);
  return a2;
}
