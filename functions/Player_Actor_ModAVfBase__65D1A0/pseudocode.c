int __thiscall Player_Actor_ModAVfBase(Actor *this, int a2, float a3)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  ((void (__thiscall *)(TESForm *, int, _DWORD))ActorBaseForm->vtbl[1].Unk_17)(ActorBaseForm, a2, LODWORD(a3));
  sub_57A6F0(a2);
  return sub_5E2670((PlayerCharacter *)this, a2, 1);
}
