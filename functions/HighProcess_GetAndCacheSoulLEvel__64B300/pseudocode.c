UInt16 __thiscall HighProcess::GetAndCacheSoulLEvel(HighProcess *this, Actor *a2)
{
  TESForm *ActorBaseForm; // eax

  if ( this->unk138 == 0xFFFF ) /*0x64b30b*/
  {
    ActorBaseForm = Actor_GetActorBaseForm(a2, 0); /*0x64b313*/
    this->unk138 = TESCreature::GetSoulLevel((TESCreature *)ActorBaseForm); /*0x64b31f*/
  }
  return this->unk138; /*0x64b32d*/
}
