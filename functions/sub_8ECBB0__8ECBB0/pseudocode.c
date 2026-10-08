long double __cdecl sub_8ECBB0(float a1, float a2)
{
  long double v2; // st7
  long double v3; // st6
  long double v4; // st7
  long double v5; // st6
  long double v6; // st7
  long double result; // st7

  v2 = fabs(a1); /*0x8ecbb4*/
  v3 = fabs(a2); /*0x8ecbba*/
  if ( v2 > v3 ) /*0x8ecbc5*/
  {
    v6 = v3 / (v2 + flt_A9AFE0); /*0x8ecbf3*/
    v5 = flt_A3F3E0 - (v6 - flt_A9AFF0 * (v6 * v6) - v6 * v6 * v6 * flt_A9AFEC); /*0x8ecc0f*/
  }
  else
  {
    v4 = v2 / (v3 + flt_A9AFE0); /*0x8ecbcd*/
    v5 = v4 - flt_A9AFF0 * (v4 * v4) - v4 * v4 * v4 * flt_A9AFEC; /*0x8ecbe7*/
  }
  result = v5; /*0x8ecc15*/
  if ( a2 < (double)*(float *)&SrcStr ) /*0x8ecc26*/
    result = flt_A9AFE4 - v5; /*0x8ecc28*/
  if ( a1 < (double)*(float *)&SrcStr ) /*0x8ecc3d*/
    return -result; /*0x8ecc3f*/
  return result; /*0x8ecc41*/
}
