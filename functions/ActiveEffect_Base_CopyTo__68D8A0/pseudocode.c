int __thiscall ActiveEffect_Base_CopyTo(int this, int a2)
{
  *(float *)(a2 + 4) = *(float *)(this + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(this + 8);
  *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(this + 0xC);
  *(_BYTE *)(a2 + 0x10) = *(_BYTE *)(this + 0x10);
  *(_BYTE *)(a2 + 0x11) = *(_BYTE *)(this + 0x11);
  *(_BYTE *)(a2 + 0x12) = *(_BYTE *)(this + 0x12);
  *(_BYTE *)(a2 + 0x13) = *(_BYTE *)(this + 0x13);
  *(float *)(a2 + 0x18) = *(float *)(this + 0x18);
  *(float *)(a2 + 0x1C) = *(float *)(this + 0x1C);
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(this + 0x20);
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(this + 0x24);
  *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(this + 0x28);
  *(_DWORD *)(a2 + 0x30) = *(_DWORD *)(this + 0x30);
  *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(this + 0x14);
  return a2;
}
