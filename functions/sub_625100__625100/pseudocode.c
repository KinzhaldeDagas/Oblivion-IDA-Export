TESObjectREFR *__thiscall sub_625100(TESObjectREFR *this, char a2)
{
  sub_5E1880(this, a2); /*0x625108*/
  this->vtbl = (TESObjectREFRVtbl *)&Creature::`vftable'{for `Creature'}; /*0x62510d*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Creature::`vftable'{for `TESChildCell'}; /*0x625113*/
  *((_DWORD *)this + 0x17) = &Creature::`vftable'{for `MagicCaster'}; /*0x62511a*/
  *((_DWORD *)this + 0x1A) = &Creature::`vftable'{for `MagicTarget'}; /*0x625121*/
  this->member.super.type = kFormType_ACRE; /*0x625128*/
  *((_BYTE *)this + 0x104) = 0; /*0x62512c*/
  return this; /*0x625135*/
}
