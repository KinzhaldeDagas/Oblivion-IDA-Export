// Player integer base-AV modifier. Mutate actor-base storage directly, refresh UI, and notify with rebuild=true. This is not Player_SkillLevelIncrease.
void __thiscall Player_Actor_ModAViBase(Actor *this, unsigned int a2, int a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x65d166*/
  ((void (__thiscall *)(TESForm *, unsigned int, int))ActorBaseForm->vtbl[1].Unk_18)(ActorBaseForm, a2, a3); /*0x65d17f*/
  UI_UpdateActorValueDisplays(a2); /*0x65d182*/
  Player_OnActorValueBaseChanged((PlayerCharacter *)this, a2, 1); /*0x65d18f*/
}
