double __thiscall sub_53C100(float *this)
{
  double v1; // st7
  double v2; // st6
  double v3; // st5
  double v4; // st6
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]

  v7 = *(this + 0x17) - *(this + 0x18);
  v1 = *(this + 0x17);
  v2 = dbl_A3F418;
  v6 = v2 - v1;
  v3 = v2 - v7;
  v4 = v7;
  v8 = v3;
  if ( flt_A3F420 < (double)*(this + 0x1D) )
    return 0.0;
  if ( *(this + 0x1D) > v1 || *(this + 0x1D) < v4 )
  {
    if ( v6 > (double)*(this + 0x1D) || v8 < (double)*(this + 0x1D) )
    {
      if ( *(this + 0x1D) <= v1 || *(this + 0x1D) >= (double)v6 )
        return 0.0;
      return 1.0;
    }
    else
    {
      return (float)((v8 - *(this + 0x1D)) / (v8 - v6));
    }
  }
  else
  {
    return (float)((*(this + 0x1D) - v4) / (v1 - v4));
  }
}
