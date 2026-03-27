int __thiscall sub_960180(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a2 + 0xC);
  *(_DWORD *)(this + 0x10) = *(_DWORD *)(a2 + 0x10);
  *(_DWORD *)(this + 0x14) = *(_DWORD *)(a2 + 0x14);
  *(_DWORD *)(this + 0x18) = *(_DWORD *)(a2 + 0x18);
  *(float *)(this + 0x1C) = *(float *)(a2 + 0x1C);
  *(float *)(this + 0x38) = *(float *)(a2 + 0x38);
  return sub_9600B0((float *)this);
}
