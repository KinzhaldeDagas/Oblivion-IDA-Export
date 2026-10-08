// Player float base-AV modifier. Mutate the actor-base value, refresh UI, and notify with rebuild=true; skill thresholds are rebuilt without awarding skill-level side effects.
void __thiscall Player_Actor_ModAVfBase(Actor *this, unsigned int a2, float a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x65d1a6*/
  ((void (__thiscall *)(TESForm *, unsigned int, _DWORD))ActorBaseForm->vtbl[1].Unk_17)(ActorBaseForm, a2, LODWORD(a3)); /*0x65d1c2*/
  UI_UpdateActorValueDisplays(a2); /*0x65d1c5*/
  Player_OnActorValueBaseChanged((PlayerCharacter *)this, a2, 1); /*0x65d1d2*/
}
