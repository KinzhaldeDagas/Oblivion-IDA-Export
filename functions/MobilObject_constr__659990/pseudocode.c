TESObjectREFR *__thiscall MobilObject_constr(TESObjectREFR *this)
{
  TESObjectREFR_constr((TESChildCELL *)this); /*0x659993*/
  this->vtbl = (TESObjectREFRVtbl *)&MobileObject::`vftable'{for `MobileObject'}; /*0x659998*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MobileObject::`vftable'{for `TESChildCell'}; /*0x65999e*/
  return this; /*0x6599a7*/
}
