double __thiscall sub_593020(float *this)
{
  double result; // st7
  double VirtualScreenHeight; // [esp+4h] [ebp-8h]

  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x59302b*/
  result = VirtualScreenHeight - (UI_GetVirtualScreenHeight() * dbl_A2FAA0 + *(this + 0xA)); /*0x59303e*/
  Double_To_SInt32(result); /*0x593044*/
  return result; /*0x593041*/
}
