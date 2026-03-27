void __thiscall sub_4A02A0(float *this, float a2, float a3)
{
  double v3; // st7
  float v4; // [esp+0h] [ebp-4h]

  v4 = (float)dword_B07280;
  if ( v4 > (double)a2 )
  {
    a2 = (float)dword_B07280;
    v3 = v4 * dbl_A3FA98;
    if ( a3 < v3 )
      a3 = v3;
  }
  *(this + 0x38) = a2 * a2;
  *(this + 0x39) = a3 * a3;
}
