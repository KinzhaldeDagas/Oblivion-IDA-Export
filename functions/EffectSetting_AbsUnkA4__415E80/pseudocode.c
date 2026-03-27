void __thiscall EffectSetting_AbsUnkA4(signed int *this)
{
  float v1; // [esp+4h] [ebp-4h]

  v1 = fabs((double)*(this + 0x29));
  *(this + 0x29) = Double_To_SInt32(v1);
}
