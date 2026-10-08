double __thiscall sub_53C030(float *this)
{
  double v1; // st5
  double v3; // st7
  bool v4; // c0
  bool v5; // c3
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]
  float v9; // [esp+4h] [ebp-4h]

  v1 = dbl_A3F418; /*0x53c03c*/
  v7 = v1 - *(this + 0x16); /*0x53c042*/
  v9 = v1 - *(this + 0x17); /*0x53c048*/
  if ( flt_A3F420 < (double)*(this + 0x1D) ) /*0x53c05a*/
    return 0.0; /*0x53c05a*/
  if ( *(this + 0x16) >= (double)*(this + 0x1D) && *(this + 0x17) <= (double)*(this + 0x1D) ) /*0x53c07c*/
    return (float)((*(this + 0x1D) - *(this + 0x17)) / (*(this + 0x16) - *(this + 0x17))); /*0x53c095*/
  v3 = *(this + 0x1D); /*0x53c096*/
  v4 = v7 < v3; /*0x53c09c*/
  v5 = v7 == v3; /*0x53c09c*/
  v6 = v7; /*0x53c0a0*/
  if ( (v4 || v5) && v9 >= (double)*(this + 0x1D) ) /*0x53c0b7*/
    return (float)((v9 - *(this + 0x1D)) / (v9 - v6)); /*0x53c0cf*/
  if ( *(this + 0x16) >= (double)*(this + 0x1D) || *(this + 0x1D) >= v6 ) /*0x53c0eb*/
    return 0.0; /*0x53c0f5*/
  else
    return 1.0; /*0x53c0ed*/
}
