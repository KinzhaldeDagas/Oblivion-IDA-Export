TESForm *__thiscall MagicItemObject_constr(TESForm *this)
{
  TESBoundObject_constr(this); /*0x412b79*/
  MagicItem_constr((_DWORD *)this + 9); /*0x412b8b*/
  this->vtbl = (TESFormVtbl *)&MagicItemObject::`vftable'{for `MagicItemObject'}; /*0x412b90*/
  *((_DWORD *)this + 9) = &MagicItemObject::`vftable'{for `MagicItem'}; /*0x412b96*/
  *((_DWORD *)this + 0xC) = &MagicItemObject::`vftable'{for `EffectItemList'}; /*0x412b9c*/
  return this; /*0x412ba5*/
}
