// AVU hook site: Calc_MagicTargetResistanceFactor entry. Stack +0x10 is magic-item resistance; +0x14 is effect-specific resistance. AVU applies optional DR to those exact slots before vanilla >=100 checks.
double __cdecl Calc_MagicTargetResistanceFactor(int a1, int a2, int a3, float a4, float a5)
{
  double result; // st7
  double v6; // st6

  result = a4; /*0x548ad1*/
  v6 = fCostant_100; /*0x548ad5*/
  if ( v6 <= a4 ) /*0x548ae2*/
  {
    Calc_MagicTargetResistanceFactor_::Return_0f();// First vanilla threshold check uses arg_C / entry +0x10, the magic-item resistance bucket. /*0x548ae2*/
  }
  else if ( a5 >= v6 ) /*0x548aef*/
  {
    Calc_MagicTargetResistanceFactor_::Return_0f_(result);// Second vanilla threshold check uses arg_10 / entry +0x14, the effect-specific resistance. /*0x548aef*/
  }
  else
  {
    Calc_MagicTargetResistanceFactor_::MultiplyResistances(); /*0x548af0*/
  }
  return result;
}
