int __thiscall sub_54EA00(int this, int a2, unsigned int a3)
{
  *(float *)(this + 8) = 0.0; /*0x54ea2e*/
  *(_DWORD *)(this + 4) = a2; /*0x54ea31*/
  *(_DWORD *)this = &BSFaceGenKeyframeMultiple::`vftable'; /*0x54ea43*/
  *(_DWORD *)(this + 0xC) = 0; /*0x54ea49*/
  *(_DWORD *)(this + 0x10) = 0; /*0x54ea4c*/
  sub_54E860((unsigned int *)this, a3, 1); /*0x54ea4f*/
  return this; /*0x54ea56*/
}
