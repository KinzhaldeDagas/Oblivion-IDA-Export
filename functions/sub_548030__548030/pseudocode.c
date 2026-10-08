// Compute Oblivion's precomputed skill-use requirement: pow(baseSkillValue * g_fSkillUseFactor, g_fSkillUseExp), multiplied by g_fSkillUseSpecMult only for a class-specialization match, then by g_fSkillUseMajorMult for a strict major match or g_fSkillUseMinorMult for every fallback/non-major skill. With native defaults the factors are 0.5625 (major+specialized), 0.75 (major), 0.9375 (non-major+specialized), and 1.25 (non-major).
float __cdecl Calc_RequiredSkillUseExperience(
        UInt32 baseSkillValue,
        bool matchesClassSpecialization,
        bool isMajorSkill)
{
  double value; // st7
  double v4; // st7
  float baseSkillValuea; // [esp+4h] [ebp+4h]
  float baseSkillValueb; // [esp+4h] [ebp+4h]
  float specializationSkill; // [esp+8h] [ebp+8h]
  float majorSkill; // [esp+Ch] [ebp+Ch]

  if ( matchesClassSpecialization ) /*0x548035*/
    value = g_fSkillUseSpecMult.value; /*0x548037*/
  else
    value = 1.0; /*0x54803f*/
  specializationSkill = value; /*0x548046*/
  if ( isMajorSkill )                           // Strict major match selects g_fSkillUseMajorMult; false selects g_fSkillUseMinorMult. No minor membership lookup occurs. /*0x54804a*/
    v4 = g_fSkillUseMajorMult.value; /*0x54804c*/
  else
    v4 = g_fSkillUseMinorMult.value; /*0x548054*/
  majorSkill = v4; /*0x54805a*/
  baseSkillValuea = (double)(int)baseSkillValue * g_fSkillUseFactor.value; /*0x548068*/
  baseSkillValueb = pow(baseSkillValuea, g_fSkillUseExp.value); /*0x54807b*/
  return baseSkillValueb * specializationSkill * majorSkill; /*0x548093*/
}
