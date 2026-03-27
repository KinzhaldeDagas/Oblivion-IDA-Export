double __thiscall sub_793B90(float *this, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // rt0
  double v6; // rt1
  double v7; // st5
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]

  v4 = a2;
  *(this + 1) = a2;
  v5 = dbl_A49310;
  v9 = a2 * v5 * *(this + 7);
  *(this + 8) = v9;
  v6 = v9;
  *(this + 9) = v4 * dbl_A3F418 * *(this + 6);
  v10 = v5 * a3 * *(this + 7);
  v7 = flt_B42A0C;
  *(this + 0xD) = 0.0;
  *(this + 0xC) = 0.0;
  *this = v10 * v7 + a4 - v6 * v7;
  return *this;
}
