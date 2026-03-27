int __thiscall sub_9604C0(int this, float a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  *(float *)(this + 0x1C) = a3;
  *(_DWORD *)(this + 4) = a4;
  *(float *)(this + 0x38) = a2;
  *(_DWORD *)(this + 8) = a5;
  *(_DWORD *)(this + 0x10) = a7;
  *(_DWORD *)(this + 0xC) = a6;
  *(_DWORD *)(this + 0x14) = a8;
  *(_DWORD *)this = &NiCapsuleBV::`vftable';
  *(_DWORD *)(this + 0x18) = a9;
  sub_9600B0((float *)this);
  return this;
}
