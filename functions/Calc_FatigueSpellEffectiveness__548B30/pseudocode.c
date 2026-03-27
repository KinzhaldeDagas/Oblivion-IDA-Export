double __cdecl Calc_FatigueSpellEffectiveness(float a1)
{
  return (float)(fMagicFatigueDrainMult * a1 + fMagicFatigueDrainBase);
}
