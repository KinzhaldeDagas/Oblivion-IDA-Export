void __thiscall sub_88FEE0(float *this, int a2, float a3)
{
  float v3; // [esp+8h] [ebp+8h]

  if ( flt_A96588 == *(this + a2 + 0x14) ) /*0x88fef3*/
  {
    *(this + a2 + 0x14) = a3; /*0x88fef9*/
  }
  else
  {
    v3 = *(this + a2 + 0x14) + a3; /*0x88ff08*/
    *(this + a2 + 0x14) = v3 * dbl_A2FAA0; /*0x88ff16*/
  }
}
