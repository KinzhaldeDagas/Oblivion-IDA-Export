UInt16 __thiscall HighProcess::GetAndCacheSoulLEvel(HighProcess *this, Actor *a2)
{
  TESForm *ActorBaseForm; // eax

  if ( this->unk138 == 0xFFFF )
  {
    ActorBaseForm = Actor_GetActorBaseForm(a2, 0);
    this->unk138 = TESCreature::GetSoulLevel((TESCreature *)ActorBaseForm);
  }
  return this->unk138;
}
