float *__thiscall sub_715000(float *this, float *a2, float *a3)
{
  long double v4; // st7
  double v5; // st7
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+10h] [ebp+4h]

  v8 = *(this + 2) * *(this + 2) + *(this + 1) * *(this + 1) + *(this + 3) * *(this + 3); /*0x71501f*/
  v9 = sqrt(v8); /*0x71502c*/
  if ( flt_A7EAB0 <= (double)v9 ) /*0x715047*/
  {
    v4 = *this; /*0x71506a*/
    if ( v4 <= dbl_A3D360 ) /*0x715079*/
    {
      v5 = unk_B3F9A4; /*0x71509d*/
    }
    else if ( v4 >= 1.0 ) /*0x715084*/
    {
      v5 = 0.0; /*0x715097*/
    }
    else
    {
      v6 = acos(v4); /*0x71508b*/
      v5 = v6; /*0x71508f*/
    }
    v7 = v5; /*0x7150a7*/
    *a2 = v7 + v7; /*0x7150b5*/
    v10 = 1.0 / v9; /*0x7150bf*/
    *a3 = *(this + 1) * v10; /*0x7150d0*/
    a3[1] = v10 * *(this + 2); /*0x7150d7*/
    a3[2] = v10 * *(this + 3); /*0x7150de*/
    return a3; /*0x7150af*/
  }
  else
  {
    *a2 = 0.0; /*0x71504f*/
    *a3 = 0.0; /*0x715056*/
    a3[1] = 0.0; /*0x715058*/
    a3[2] = 0.0; /*0x71505b*/
    return a3; /*0x715052*/
  }
}
