TESObjectREFR *__thiscall Creature_constr(TESObjectREFR *this)
{
  Actor_constr(this);
  this->vtbl = (TESObjectREFRVtbl *)&Creature::`vftable'{for `Creature'};
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Creature::`vftable'{for `TESChildCell'};
  *((_DWORD *)this + 0x17) = &Creature::`vftable'{for `MagicCaster'};
  *((_DWORD *)this + 0x1A) = &Creature::`vftable'{for `MagicTarget'};
  this->member.super.type = kFormType_ACRE;
  *((_BYTE *)this + 0x104) = 0;
  return this;
}
