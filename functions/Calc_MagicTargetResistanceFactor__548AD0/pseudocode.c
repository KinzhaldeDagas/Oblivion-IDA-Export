int __cdecl Calc_MagicTargetResistanceFactor(int a1, int a2, int a3, int a4, float a5)
{
  double v5; // st6

  v5 = fCostant_100;
  if ( v5 <= *(float *)&a4 )
    return Calc_MagicTargetResistanceFactor_::Return_0f();
  if ( a5 >= v5 )
    return Calc_MagicTargetResistanceFactor_::Return_0f_();
  return Calc_MagicTargetResistanceFactor_::MultiplyResistances(a1, a2, a3, a4, a5);
}
