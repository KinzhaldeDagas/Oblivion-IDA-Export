void __thiscall sub_88FEE0(float *this, int a2, float a3)
{
  float v3; // [esp+8h] [ebp+8h]

  if ( flt_A96588 == *(this + a2 + 0x14) )
  {
    *(this + a2 + 0x14) = a3;
  }
  else
  {
    v3 = *(this + a2 + 0x14) + a3;
    *(this + a2 + 0x14) = v3 * dbl_A2FAA0;
  }
}
