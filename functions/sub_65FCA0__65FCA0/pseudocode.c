// Return skillExp[index] / requiredSkillExp[index] for native SkillActorValue 0x0C..0x20, else 0. There is no direct major/minor branch here because classification already changed the denominator.
float __thiscall Player_GetSkillProgressFraction(PlayerCharacter *this, SkillActorValue actorValue)
{
  char v2; // di
  float actorValuea; // [esp+10h] [ebp+4h]

  v2 = actorValue; /*0x65fca3*/
  if ( (unsigned int)(actorValue - 0xC) > 0x14 ) /*0x65fcaf*/
  {
    return 0.0; /*0x65fcf4*/
  }
  else
  {
    actorValuea = this->skillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)];// Map the native skill AV to the raw skillExp numerator index. /*0x65fcc6*/
    return actorValuea / this->requiredSkillExp[ActorValue_GetGroupOffsetFromAV(2, v2)];// Map the same native skill AV to the requiredSkillExp denominator index. /*0x65fcec*/
  }
}
