void __thiscall sub_6D8CB0(int *this, float a2, float a3)
{
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = (int)this; /*0x6d8cb0*/
  v4 = *(this + 3); /*0x6d8cd1*/
  NiAnimationKey_GuaranteeTimeRange(1, *(this + 4), (float **)&v4, this + 2, a2, a3); /*0x6d8cdc*/
  *(this + 3) = v4; /*0x6d8ce8*/
}
