int __thiscall sub_6F2D30(int this, _DWORD *a2)
{
  *(_DWORD *)(this + 0x18) = 0xF;
  *(_DWORD *)(this + 0x14) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_414420(this, a2, 0, 0xFFFFFFFF);
  sub_6F22C0((_DWORD *)(this + 0x1C), (int)(a2 + 7));
  return this;
}
