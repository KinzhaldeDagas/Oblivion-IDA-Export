void __thiscall sub_77AF70(float *this, float a2)
{
  double v2; // st7

  v2 = a2;
  if ( a2 <= 0.0 )
    v2 = flt_A3C778;
  *(this + 0x22) = v2;
  *(this + 0x21) = 1.0 / v2 - 1.0;
}
