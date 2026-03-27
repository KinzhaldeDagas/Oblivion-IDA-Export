float *__thiscall sub_76A110(unsigned __int8 *this, float *a2)
{
  double v3; // rt0

  v3 = dbl_A3F398;
  a2[3] = (double)*(this + 0x5D7) * v3;
  *a2 = (double)*(this + 0x5D6) * v3;
  a2[1] = (double)*(this + 0x5D5) * v3;
  a2[2] = v3 * (double)*(this + 0x5D4);
  return a2;
}
