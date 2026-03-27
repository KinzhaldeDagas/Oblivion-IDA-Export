int __thiscall sub_54EA00(int this, int a2, unsigned int a3)
{
  *(float *)(this + 8) = 0.0;
  *(_DWORD *)(this + 4) = a2;
  *(_DWORD *)this = &BSFaceGenKeyframeMultiple::`vftable';
  *(_DWORD *)(this + 0xC) = 0;
  *(_DWORD *)(this + 0x10) = 0;
  sub_54E860((unsigned int *)this, a3, 1);
  return this;
}
