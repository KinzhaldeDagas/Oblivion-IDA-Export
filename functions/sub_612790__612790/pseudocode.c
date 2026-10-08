BOOL __thiscall sub_612790(float *this, float a2, bool *a3)
{
  double v3; // st7

  v3 = a2; /*0x612794*/
  if ( a3 ) /*0x61279a*/
  {
    if ( *(this + 2) > 0.0 ) /*0x6127a6*/
      *a3 = *(this + 2) < v3 - *this; /*0x6127c1*/
  }
  return *(this + 1) < v3 - *this; /*0x6127d6*/
}
