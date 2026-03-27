char __thiscall sub_5E1030(Actor *this)
{
  Creature *v2; // edi
  int v3; // eax
  ActorAnimData *v5; // eax

  v2 = this->vtbl->GetMountedHorse(this);
  if ( !v2 || !this->members.super.process )
    return 0;
  v3 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process);
  if ( v3 == 3 )
  {
    if ( !v2->members.super.super.process )
      return 0;
    if ( ((int (__thiscall *)(LowProcess *))v2->members.super.super.process->GetCurrentAction)(v2->members.super.super.process) != 0xB )
      return 0;
    v5 = v2->__vftable->super.super.GetAnimData((TESObjectREFR *)v2);
    if ( !sub_471210(v5) )
      return 0;
  }
  else if ( v3 <= 3 || v3 > 5 )
  {
    return 0;
  }
  return 1;
}
