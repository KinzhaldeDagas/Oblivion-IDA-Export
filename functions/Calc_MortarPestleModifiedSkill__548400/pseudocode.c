// AVU decode: Calc_MortarPestleModifiedSkill(mortarQuality, effectiveAlchemy) returns fPotionMortPestleMult * mortarQuality + effectiveAlchemy.
double __cdecl Calc_MortarPestleModifiedSkill(float a1, float a2)
{
  return (float)(MEMORY[0xB379D8] * a1 + a2); /*0x548416*/
}
