TESObjectREFR *__thiscall Character_constr(TESObjectREFR *this)
{
  Actor_constr(this);
  *((float *)this + 0x42) = flt_A30634;
  this->vtbl = (TESObjectREFRVtbl *)&Character::`vftable'{for `Character'};
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Character::`vftable'{for `TESChildCell'};
  *((_DWORD *)this + 0x17) = &Character::`vftable'{for `MagicCaster'};
  *((_DWORD *)this + 0x1A) = &Character::`vftable'{for `MagicTarget'};
  this->member.super.type = kFormType_ACHR;
  *((_DWORD *)this + 0x41) = 0;
  return this;
}
