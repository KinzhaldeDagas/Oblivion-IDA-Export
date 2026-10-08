// Oblivion Normal::Density. Returns zero outside |x| <= 8; otherwise evaluates 0.398942280 * exp(-x*x/2).
float __thiscall OB_Normal_Density_010201A0(OB_Normal_010201A0 *this, float x)
{
  double v2; // st7
  float xa; // [esp+4h] [ebp+4h]
  float xb; // [esp+4h] [ebp+4h]
  float xc; // [esp+4h] [ebp+4h]

  v2 = x; /*0x7a6e90*/
  xa = fabs(x); /*0x7a6e98*/
  if ( xa <= (double)flt_A58E1C ) /*0x7a6eab*/
  {
    xb = v2 * -v2 * dbl_A2FAA0; /*0x7a6ec8*/
    xc = exp(xb); /*0x7a6ed5*/
    return xc * dbl_A8CA00; /*0x7a6ee7*/
  }
  else
  {
    return 0.0; /*0x7a6eb5*/
  }
}
