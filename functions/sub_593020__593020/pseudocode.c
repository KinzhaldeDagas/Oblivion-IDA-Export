double __thiscall sub_593020(float *this)
{
  double result; // st7
  double v3; // [esp+4h] [ebp-8h]

  v3 = sub_57D7F0();
  result = v3 - (sub_57D7F0() * dbl_A2FAA0 + *(this + 0xA));
  Double_To_SInt32(result);
  return result;
}
