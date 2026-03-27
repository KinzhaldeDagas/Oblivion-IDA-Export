TESForm *__thiscall MagicItemForm_constr(TESForm *this)
{
  TESForm_constr(this);
  MagicItem_constr((_DWORD *)this + 6);
  this->vtbl = (TESFormVtbl *)&MagicItemForm::`vftable'{for `MagicItemForm'};
  *((_DWORD *)this + 6) = &MagicItemForm::`vftable'{for `MagicItem'};
  *((_DWORD *)this + 9) = &MagicItemForm::`vftable'{for `EffectItemList'};
  return this;
}
