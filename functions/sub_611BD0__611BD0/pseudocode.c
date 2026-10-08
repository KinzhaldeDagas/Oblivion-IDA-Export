bool __thiscall sub_611BD0(TESObjectREFR *this, TESObjectREFR *friendlyFight_)
{
  int *EffectiveCombatStyle; // eax
  int v4; // eax
  int v5; // eax
  TESObjectREFRMembr *p_member; // eax
  float Distance; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+4h] [ebp-1Ch]

  if ( this->vtbl->HasFatigue(this) ) /*0x611bdc*/
    return 0; /*0x611bdc*/
  if ( friendlyFight_ == (TESObjectREFR *)reference && reference->unk610 ) /*0x611bf3*/
    return 0; /*0x611bf3*/
  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(this); /*0x611bfe*/
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*EffectiveCombatStyle + 0x16C))(EffectiveCombatStyle, 0x10) ) /*0x611c0f*/
    return 0; /*0x611c0f*/
  Distance = TesObjectREF_GetDistance(this, friendlyFight_, 0); /*0x611c30*/
  v9 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *, int, _DWORD))this->vtbl[1].Unk_37)(this, 0x21, LODWORD(Distance))); /*0x611c3b*/
  v4 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_1F)(this); /*0x611c47*/
  shouldActorFight(v4, (int)friendlyFight_, 0, v9, 0, 0, 0, 0x64); /*0x611c4a*/
  if ( v5 > 0 ) /*0x611c54*/
    return 0; /*0x611c77*/
  if ( friendlyFight_ ) /*0x611c58*/
    p_member = &friendlyFight_[1].member; /*0x611c5a*/
  else
    p_member = 0; /*0x611c5f*/
  return sub_6A1EE0((char *)this + 0x68, (int)p_member) == 0; /*0x611c6c*/
}
