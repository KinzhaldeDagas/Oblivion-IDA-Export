// Player integer base-AV setter. Write the actor-base value, refresh UI, and call Player_OnActorValueBaseChanged with rebuild=true. For skills this rebuilds all requiredSkillExp entries but bypasses normal advancement counters.
void __thiscall Player_Actor_SetAViBase(Actor *this, unsigned int a2, int a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x65d1e6*/
  ((void (__thiscall *)(TESForm *, unsigned int, int))ActorBaseForm->vtbl[1].Unk_16)(ActorBaseForm, a2, a3); /*0x65d1ff*/
  UI_UpdateActorValueDisplays(a2); /*0x65d202*/
  Player_OnActorValueBaseChanged((PlayerCharacter *)this, a2, 1); /*0x65d20f*/
}
