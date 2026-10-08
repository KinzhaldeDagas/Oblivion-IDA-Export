// Spell magicka cost uses luck-modified magic skill. AVU replacement must preserve vanilla lower clamp and fractional precision before configurable cap/DR handling.
double __cdecl Calc_SkillModifiedMagickaCost(float a1, SInt32 skillValue, SInt32 luckValue)
{
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]

  v4 = Calc_LuckModifiedSkill(skillValue, luckValue) / fCostant_100; /*0x548c16*/
  v5 = (1.0 - v4) * MEMORY[0xB37DF0] + MEMORY[0xB37DE8]; /*0x548c2e*/
  return (float)(v5 * a1); /*0x548c45*/
}
