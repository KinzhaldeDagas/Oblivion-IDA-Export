bool __cdecl sub_548330(SInt32 skillValue, SInt32 luckValue)
{
  int v3; // ecx
  float v4; // [esp+4h] [ebp-8h]

  if ( Calc_MasteryFromSkill(skillValue) >= kSkillMastery_Master ) /*0x548346*/
    return 0; /*0x548348*/
  v4 = Calc_LuckModifiedSkill(skillValue, luckValue) * MEMORY[0xB379C0] + MEMORY[0xB379B8]; /*0x54836c*/
  if ( v3 >= 1 ) /*0x548370*/
    v4 = MEMORY[0xB379C8] * v4; /*0x54837c*/
  return v4 > (double)(Game_RandomLargeInteger(0) % 0x64); /*0x54834a*/
}
