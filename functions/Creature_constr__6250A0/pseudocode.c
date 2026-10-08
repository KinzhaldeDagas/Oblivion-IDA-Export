TESObjectREFR *__thiscall Creature_constr(TESObjectREFR *this)
{
  Actor_constr(this); /*0x6250a3*/
  this->vtbl = (TESObjectREFRVtbl *)&Creature::`vftable'{for `Creature'}; /*0x6250a8*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Creature::`vftable'{for `TESChildCell'}; /*0x6250ae*/
  *((_DWORD *)this + 0x17) = &Creature::`vftable'{for `MagicCaster'}; /*0x6250b5*/
  *((_DWORD *)this + 0x1A) = &Creature::`vftable'{for `MagicTarget'}; /*0x6250bc*/
  this->member.super.type = kFormType_ACRE; /*0x6250c3*/
  *((_BYTE *)this + 0x104) = 0; /*0x6250c7*/
  return this; /*0x6250d0*/
}
