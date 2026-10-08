double __thiscall sub_499020(float *this)
{
  double v1; // st7
  bool v2; // c0
  bool v3; // c3
  double result; // st7
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+4h] [ebp-4h]

  v5 = *(this + 1) * *(this + 1) + *this * *this; /*0x499031*/
  v6 = sqrt(v5); /*0x49903e*/
  v1 = flt_A372CC; /*0x49904a*/
  v2 = v6 < v1; /*0x499054*/
  v3 = v6 == v1; /*0x499054*/
  result = v6; /*0x499058*/
  if ( v2 || v3 ) /*0x49905a*/
  {
    *this = 0.0; /*0x499084*/
    *(this + 1) = 0.0; /*0x499086*/
    return (float)0.0; /*0x49908e*/
  }
  else
  {
    v7 = 1.0 / result; /*0x499065*/
    *this = *this * v7; /*0x499075*/
    *(this + 1) = v7 * *(this + 1); /*0x49907a*/
  }
  return result; /*0x49907d*/
}
