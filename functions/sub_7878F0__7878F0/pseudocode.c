float *__thiscall sub_7878F0(float *this, float a2, float a3)
{
  float *result; // eax
  double v4; // st7

  result = this;
  if ( !*((_BYTE *)this + 0x30) )
  {
    *this = flt_B2BA7C * a2;
    *(this + 1) = flt_B2BA80 * a2;
    *(this + 2) = flt_B2BA84 * a3;
    *(this + 3) = flt_B2BA88 * a2;
    *(this + 4) = flt_B2BA8C * a2;
    *(this + 5) = flt_B2BA90 * a3;
    *(this + 6) = flt_B2BA94 * a2;
    *(this + 7) = flt_B2BA98 * a2;
    *(this + 8) = flt_B2BA9C * a3;
    *(this + 9) = flt_B2BAA0 * a2;
    *(this + 0xA) = a2 * flt_B2BAA4;
    v4 = a3 * flt_B2BAA8;
    *((_BYTE *)this + 0x30) = 1;
    *(this + 0xB) = v4;
  }
  return result;
}
