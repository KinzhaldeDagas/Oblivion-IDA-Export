double __cdecl Calc_CreatureAttackDamage(float a1, int a2)
{
  return (float)(Calc_FatigueFactor(a1) * (double)a2);
}
