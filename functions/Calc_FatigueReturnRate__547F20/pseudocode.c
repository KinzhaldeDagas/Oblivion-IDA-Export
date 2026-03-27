double __cdecl Calc_FatigueReturnRate(signed int a1)
{
  return (float)((double)a1 * fFatigueReturnMult + fFatigueReturnBase);
}
