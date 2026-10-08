char __thiscall sub_5E1030(Actor *this)
{
  Creature *v2; // edi
  int v3; // eax
  ActorAnimData *v5; // eax

  v2 = this->vtbl->GetMountedHorse(this); /*0x5e103e*/
  if ( !v2 || !this->members.super.process ) /*0x5e1044*/
    return 0; /*0x5e1048*/
  v3 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process); /*0x5e1055*/
  if ( v3 == 3 ) /*0x5e105a*/
  {
    if ( !v2->members.super.super.process ) /*0x5e1068*/
      return 0; /*0x5e1068*/
    if ( ((int (__thiscall *)(LowProcess *))v2->members.super.super.process->GetCurrentAction)(v2->members.super.super.process) != 0xB ) /*0x5e107e*/
      return 0; /*0x5e107e*/
    v5 = v2->__vftable->super.super.GetAnimData((TESObjectREFR *)v2); /*0x5e108a*/
    if ( !ActorAnimData_IsCurrentIdleActive(v5) ) /*0x5e108e*/
      return 0; /*0x5e1095*/
  }
  else if ( v3 <= 3 || v3 > 5 ) /*0x5e1061*/
  {
    return 0; /*0x5e1067*/
  }
  return 1; /*0x5e1063*/
}
