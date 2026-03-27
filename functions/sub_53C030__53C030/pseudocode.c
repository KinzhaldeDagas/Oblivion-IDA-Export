double __thiscall sub_53C030(float *this)
{
  double v1; // st5
  double v3; // st7
  bool v4; // c0
  bool v5; // c3
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]
  float v9; // [esp+4h] [ebp-4h]

  v1 = dbl_A3F418;
  v7 = v1 - *(this + 0x16);
  v9 = v1 - *(this + 0x17);
  if ( flt_A3F420 < (double)*(this + 0x1D) )
    return 0.0;
  if ( *(this + 0x16) >= (double)*(this + 0x1D) && *(this + 0x17) <= (double)*(this + 0x1D) )
    return (float)((*(this + 0x1D) - *(this + 0x17)) / (*(this + 0x16) - *(this + 0x17)));
  v3 = *(this + 0x1D);
  v4 = v7 < v3;
  v5 = v7 == v3;
  v6 = v7;
  if ( (v4 || v5) && v9 >= (double)*(this + 0x1D) )
    return (float)((v9 - *(this + 0x1D)) / (v9 - v6));
  if ( *(this + 0x16) >= (double)*(this + 0x1D) || *(this + 0x1D) >= v6 )
    return 0.0;
  else
    return 1.0;
}
