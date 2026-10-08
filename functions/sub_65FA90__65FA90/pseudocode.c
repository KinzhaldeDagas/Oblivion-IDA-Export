// Return raw PlayerCharacter::skillExp for one native Oblivion skill; return 0 outside SkillActorValue 0x0C..0x20. Major/minor affects the separate requirement array, not this numerator.
float __thiscall Player_GetSkillProgress(PlayerCharacter *this, SkillActorValue actorValue)
{
  float v4; // [esp+4h] [ebp-4h]

  v4 = 0.0; /*0x65fa98*/
  if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x65faa4*/
    return this->skillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)];// Oblivion group 2 maps the native skill AV to skillExp index 0..20. /*0x65fabb*/
  return v4; /*0x65fac3*/
}
