float *__thiscall sub_8D2C90(float *this, float a2, float a3)
{
  double v3; // st7
  float *result; // eax

  v3 = a3 - a2; /*0x8d2c98*/
  *this = a2; /*0x8d2ca0*/
  *(this + 1) = a3; /*0x8d2ca2*/
  *(this + 2) = v3; /*0x8d2ca5*/
  result = this; /*0x8d2cbb*/
  if ( v3 == *(float *)&SrcStr ) /*0x8d2cb7*/
    *(this + 3) = *(float *)&SrcStr; /*0x8d2cc3*/
  else
    *(this + 3) = fConstant_1 / v3; /*0x8d2cd1*/
  return result; /*0x8d2cc6*/
}
