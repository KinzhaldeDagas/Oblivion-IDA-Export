bool __thiscall sub_611BD0(TESObjectREFR *this, TESObjectREFR *friendlyFight_)
{
  int *v3; // eax
  int v4; // eax
  int v5; // eax
  TESObjectREFRMembr *p_member; // eax
  float Distance; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+4h] [ebp-1Ch]

  if ( this->vtbl->HasFatigue(this) )
    return 0;
  if ( friendlyFight_ == (TESObjectREFR *)TESDataHandler_g_PlayerRef && TESDataHandler_g_PlayerRef->unk610 )
    return 0;
  v3 = sub_5E0F50(this);
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v3 + 0x16C))(v3, 0x10) )
    return 0;
  Distance = TesObjectREF_GetDistance(this, friendlyFight_, 0);
  v9 = COERCE_FLOAT(((int (__thiscall *)(TESObjectREFR *, int, _DWORD))this->vtbl[1].Unk_37)(this, 0x21, LODWORD(Distance)));
  v4 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_1F)(this);
  shouldActorFight(v4, (int)friendlyFight_, 0, v9, 0, 0, 0, 0x64);
  if ( v5 > 0 )
    return 0;
  if ( friendlyFight_ )
    p_member = &friendlyFight_[1].member;
  else
    p_member = 0;
  return sub_6A1EE0((char *)this + 0x68, (int)p_member) == 0;
}
