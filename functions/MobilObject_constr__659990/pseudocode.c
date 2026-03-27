TESObjectREFR *__thiscall MobilObject_constr(TESObjectREFR *this)
{
  TESObjectREFR_constr((TESChildCELL *)this);
  this->vtbl = (TESObjectREFRVtbl *)&MobileObject::`vftable'{for `MobileObject'};
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MobileObject::`vftable'{for `TESChildCell'};
  return this;
}
