double __thiscall sub_8908E0(float *this, float a2, float a3)
{
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v3 = a2;
  if ( *(this + 0xC2) <= 0.0 )
  {
    *(this + 0xC1) = 0.0;
    return a2;
  }
  else
  {
    if ( *(this + 0xC2) <= (double)a3 )
      v5 = *(this + 0xC2);
    else
      v5 = a3;
    v6 = v3 + *(this + 0xC1) * v5;
    *(this + 0xC2) = *(this + 0xC2) - a3;
    *(this + 0xC1) = *(this + 0xC1) - dbl_A68610;
    return v6;
  }
}
