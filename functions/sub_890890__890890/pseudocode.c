void __thiscall sub_890890(float *this, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v3 = a2;
  v5 = fabs(a2);
  v4 = v5;
  v6 = fabs(*(this + 0xC1));
  if ( v6 < v4 )
  {
    *(this + 0xC1) = v3;
    *(this + 0xC2) = a3;
  }
}
