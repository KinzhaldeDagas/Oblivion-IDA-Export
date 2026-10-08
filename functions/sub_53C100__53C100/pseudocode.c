double __thiscall sub_53C100(float *this)
{
  double v1; // st7
  double v2; // st6
  double v3; // st5
  double v4; // st6
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]

  v7 = *(this + 0x17) - *(this + 0x18); /*0x53c10f*/
  v1 = *(this + 0x17); /*0x53c113*/
  v2 = dbl_A3F418; /*0x53c122*/
  v6 = v2 - v1; /*0x53c124*/
  v3 = v2 - v7; /*0x53c12f*/
  v4 = v7; /*0x53c12f*/
  v8 = v3; /*0x53c131*/
  if ( flt_A3F420 < (double)*(this + 0x1D) ) /*0x53c143*/
    return 0.0; /*0x53c143*/
  if ( *(this + 0x1D) > v1 || *(this + 0x1D) < v4 ) /*0x53c165*/
  {
    if ( v6 > (double)*(this + 0x1D) || v8 < (double)*(this + 0x1D) ) /*0x53c1a1*/
    {
      if ( *(this + 0x1D) <= v1 || *(this + 0x1D) >= (double)v6 ) /*0x53c1da*/
        return 0.0; /*0x53c14e*/
      return 1.0; /*0x53c1e0*/
    }
    else
    {
      return (float)((v8 - *(this + 0x1D)) / (v8 - v6)); /*0x53c1b4*/
    }
  }
  else
  {
    return (float)((*(this + 0x1D) - v4) / (v1 - v4)); /*0x53c176*/
  }
}
