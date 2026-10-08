// Player_GetAttributeLevelingBonus: for attribute AV 0..7, read the attribute's skill-increase count and convert it through LevelUp_GetAttributeMultiplierFromCount; otherwise return 1.
signed int __thiscall Player_GetAttributeLevelingBonus(PlayerCharacter *this, unsigned int attributeAV)
{
  signed int result; // eax
  int AttributeBonusSkillIncreaseCount; // eax

  result = 1; /*0x664a27*/
  if ( attributeAV <= 7 ) /*0x664a2c*/
  {
    AttributeBonusSkillIncreaseCount = Player_GetAttributeBonusSkillIncreaseCount(this, attributeAV); /*0x664a2f*/
    return LevelUp_GetAttributeMultiplierFromCount(AttributeBonusSkillIncreaseCount); /*0x664a35*/
  }
  return result; /*0x664a3d*/
}
