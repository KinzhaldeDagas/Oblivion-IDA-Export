void __thiscall EffectSetting_AbsUnkA0(signed int *this)
{
  float v1; // [esp+4h] [ebp-4h]

  v1 = fabs((double)*(this + 0x28));
  *(this + 0x28) = Double_To_SInt32(v1);
}
