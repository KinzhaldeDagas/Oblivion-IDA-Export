// Player float base-AV setter. Write actor-base storage, refresh UI, and notify with rebuild=true; direct skill writes do not increment majorSkillAdvances.
void __thiscall Player_Actor_SetAVfBase(Actor *this, UInt32 a2, float a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x65d226*/
  ActorBaseForm->vtbl[1].LoadGame(ActorBaseForm, a2, LODWORD(a3)); /*0x65d242*/
  UI_UpdateActorValueDisplays(a2); /*0x65d245*/
  Player_OnActorValueBaseChanged((PlayerCharacter *)this, a2, 1); /*0x65d252*/
}
