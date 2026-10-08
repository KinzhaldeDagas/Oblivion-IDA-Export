// Applies one selected level-up attribute: current base plus the multiplier derived from the oldest bucket's skill-increase count, clamped to 100. Invalid/sentinel attribute AVs are ignored.
void __thiscall Player_LevelUpAttribute(PlayerCharacter *this, unsigned int attributeAV)
{
  int v2; // edi
  int BaseCalcAVi; // edi
  int AttributeBonusSkillIncreaseCount; // eax
  int v6; // edi
  TESForm *ActorBaseForm; // eax

  if ( attributeAV <= 7 ) /*0x66844b*/
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)this, (int)this, v2, attributeAV, attributeAV); /*0x668457*/
    AttributeBonusSkillIncreaseCount = Player_GetAttributeBonusSkillIncreaseCount(this, attributeAV); /*0x668459*/
    v6 = LevelUp_GetAttributeMultiplierFromCount(AttributeBonusSkillIncreaseCount) + BaseCalcAVi; /*0x668464*/
    if ( v6 > 0x64 )                            // Clamp the computed final attribute value to Oblivion's native cap of 100 before writing the actor-base value. /*0x66846c*/
      v6 = 0x64; /*0x66846e*/
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 0); /*0x668477*/
    ((void (__thiscall *)(TESForm *, unsigned int, int))ActorBaseForm->vtbl[1].Unk_16)(ActorBaseForm, attributeAV, v6); /*0x668488*/
    UI_UpdateActorValueDisplays(attributeAV); /*0x66848b*/
    Player_OnActorValueBaseChanged(this, attributeAV, 1); /*0x668498*/
  }
}
