double __cdecl Calc_FatigueFactor(float a1)
{
  return (float)(fFatigueBase - (1.0 - a1) * fFatigueMult);
}
