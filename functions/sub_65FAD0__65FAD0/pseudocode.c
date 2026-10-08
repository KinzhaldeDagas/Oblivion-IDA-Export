// Return the precomputed required-use threshold for a TESSkill. Null skill, absent base class, or a non-native actor value falls back to 1.0; otherwise read requiredSkillExp[0..20]. Major/minor and specialization multipliers are already baked into this array.
float __thiscall Player_GetRequiredSkillProgress(PlayerCharacter *this, TESSkill_RecordView *skill)
{
  SkillActorValue actorValue; // eax
  float v6; // [esp+8h] [ebp-4h]
  float skilla; // [esp+10h] [ebp+4h]

  v6 = 1.0; /*0x65fad5*/
  if ( skill ) /*0x65fae1*/
  {
    if ( Actor_GetBaseClass((Actor *)this) ) /*0x65fae3*/
    {
      actorValue = skill->data.actorValue; /*0x65faec*/
      skilla = 1.0; /*0x65faf4*/
      if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x65fafb*/
        return this->requiredSkillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)];// Oblivion group 2 maps TESSkill_Data::actorValue to requiredSkillExp index 0..20. /*0x65fb12*/
      return skilla; /*0x65fb1a*/
    }
  }
  return v6; /*0x65fb22*/
}
