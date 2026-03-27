TESForm *__thiscall MagicItemObject_constr(TESForm *this)
{
  TESBoundObject_constr(this);
  MagicItem_constr((_DWORD *)this + 9);
  this->vtbl = (TESFormVtbl *)&MagicItemObject::`vftable'{for `MagicItemObject'};
  *((_DWORD *)this + 9) = &MagicItemObject::`vftable'{for `MagicItem'};
  *((_DWORD *)this + 0xC) = &MagicItemObject::`vftable'{for `EffectItemList'};
  return this;
}
