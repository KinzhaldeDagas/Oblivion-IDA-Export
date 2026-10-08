void __thiscall EffectSetting_AbsUnkA4(signed int *this)
{
  float v1; // [esp+4h] [ebp-4h]

  v1 = fabs((double)*(this + 0x29)); /*0x415e8c*/
  *(this + 0x29) = Double_To_SInt32(v1); /*0x415e99*/
}
