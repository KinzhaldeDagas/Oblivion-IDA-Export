TESObjectREFR *__thiscall sub_60E540(TESObjectREFR *this, char a2)
{
  sub_5E1880(this, a2); /*0x60e548*/
  this->vtbl = (TESObjectREFRVtbl *)&Character::`vftable'{for `Character'}; /*0x60e54d*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Character::`vftable'{for `TESChildCell'}; /*0x60e553*/
  *((_DWORD *)this + 0x17) = &Character::`vftable'{for `MagicCaster'}; /*0x60e55a*/
  *((_DWORD *)this + 0x1A) = &Character::`vftable'{for `MagicTarget'}; /*0x60e561*/
  this->member.super.type = kFormType_ACHR; /*0x60e568*/
  *((_DWORD *)this + 0x41) = 0; /*0x60e56c*/
  return this; /*0x60e578*/
}
