int __thiscall Player_Actor_SetAViBase(Actor *this, int a2, int a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  ((void (__thiscall *)(TESForm *, int, int))ActorBaseForm->vtbl[1].Unk_16)(ActorBaseForm, a2, a3);
  sub_57A6F0(a2);
  return sub_5E2670((PlayerCharacter *)this, a2, 1);
}
