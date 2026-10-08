// Handles player base actor-value changes. For native skill AVs, optional UI refresh also recalculates required experience for all 21 skills; major/non-major membership affects the recomputed requirement through TESClass_IsMajorSkillAV.
void __thiscall Player_OnActorValueBaseChanged(PlayerCharacter *this, unsigned int actorValue, char updatePlayerUI)
{
  float *ContainerChanges; // eax

  if ( actorValue - 0xC <= 0x14 ) /*0x5e267d*/
  {
    if ( actorValue == 0x12 || actorValue == 0x1B ) /*0x5e2687*/
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&this->super.super.super.super.baseExtraList); /*0x5e268c*/
      if ( ContainerChanges ) /*0x5e2693*/
        sub_484310(ContainerChanges); /*0x5e2697*/
      this->vtbl->super.Unk_B0((Actor *)this); /*0x5e26a6*/
    }
    if ( this == reference ) /*0x5e26b0*/
    {
      if ( updatePlayerUI ) /*0x5e26b7*/
        Player_RecalculateAllRequiredSkillExperience(reference);// A player skill base-value mutation with updatePlayerUI set rebuilds all 21 requiredSkillExp entries, not only the changed skill. /*0x5e26b9*/
    }
  }
  sub_5E26BE(actorValue, updatePlayerUI); /*0x5e26ba*/
}
