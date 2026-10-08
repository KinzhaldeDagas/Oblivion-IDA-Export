void __thiscall sub_6E8700(int *this, float a2, float a3)
{
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = (int)this; /*0x6e8700*/
  v4 = *(this + 3); /*0x6e8721*/
  NiAnimationKey_GuaranteeTimeRange(5, *(this + 4), (float **)&v4, this + 2, a2, a3); /*0x6e872c*/
  *(this + 3) = v4; /*0x6e8738*/
}
