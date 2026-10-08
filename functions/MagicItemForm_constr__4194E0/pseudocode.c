TESForm *__thiscall MagicItemForm_constr(TESForm *this)
{
  TESForm_constr(this); /*0x419509*/
  MagicItem_constr((_DWORD *)this + 6); /*0x41951b*/
  this->vtbl = (TESFormVtbl *)&MagicItemForm::`vftable'{for `MagicItemForm'}; /*0x419520*/
  *((_DWORD *)this + 6) = &MagicItemForm::`vftable'{for `MagicItem'}; /*0x419526*/
  *((_DWORD *)this + 9) = &MagicItemForm::`vftable'{for `EffectItemList'}; /*0x41952c*/
  return this; /*0x419535*/
}
