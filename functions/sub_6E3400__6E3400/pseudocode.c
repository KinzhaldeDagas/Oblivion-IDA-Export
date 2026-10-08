void __thiscall sub_6E3400(int *this, float a2, float a3)
{
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = (int)this; /*0x6e3400*/
  v4 = *(this + 3); /*0x6e3421*/
  NiAnimationKey_GuaranteeTimeRange(0, *(this + 4), (float **)&v4, this + 2, a2, a3); /*0x6e342c*/
  *(this + 3) = v4; /*0x6e3438*/
}
