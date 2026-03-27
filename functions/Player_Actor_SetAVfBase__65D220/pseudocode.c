int __thiscall Player_Actor_SetAVfBase(Actor *this, int a2, float a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  ActorBaseForm->vtbl[1].LoadGame(ActorBaseForm, a2, LODWORD(a3));
  sub_57A6F0(a2);
  return sub_5E2670((PlayerCharacter *)this, a2, 1);
}
