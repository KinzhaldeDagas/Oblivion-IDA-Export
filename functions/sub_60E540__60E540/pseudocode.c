TESObjectREFR *__thiscall sub_60E540(TESObjectREFR *this, char a2)
{
  sub_5E1880(this, a2);
  this->vtbl = (TESObjectREFRVtbl *)&Character::`vftable'{for `Character'};
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Character::`vftable'{for `TESChildCell'};
  *((_DWORD *)this + 0x17) = &Character::`vftable'{for `MagicCaster'};
  *((_DWORD *)this + 0x1A) = &Character::`vftable'{for `MagicTarget'};
  this->member.super.type = kFormType_ACHR;
  *((_DWORD *)this + 0x41) = 0;
  return this;
}
