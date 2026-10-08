double __cdecl sub_8A2AF0(float a1)
{
  long double v1; // st7
  bool v2; // c0
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]

  v1 = a1; /*0x8a2af0*/
  v5 = fabs(a1); /*0x8a2af8*/
  if ( v5 < (double)fConstant_1 ) /*0x8a2b0b*/
  {
    return (float)acos(v1); /*0x8a2b34*/
  }
  else
  {
    v2 = v1 > 0.0; /*0x8a2b0f*/
    v3 = 0.0; /*0x8a2b13*/
    if ( !v2 ) /*0x8a2b18*/
      return flt_A9740C; /*0x8a2b1c*/
    return (float)v3; /*0x8a2b26*/
  }
}
