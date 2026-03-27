SpellItem *__thiscall SpellItem::SpellItem(SpellItem *this)
{
  MagicItemForm_constr((TESForm *)this);
  *(_DWORD *)this = &SpellItem::`vftable'{for `SpellItem'};
  *((_DWORD *)this + 6) = &SpellItem::`vftable'{for `MagicItem'};
  *((_DWORD *)this + 9) = &SpellItem::`vftable'{for `EffectItemList'};
  *((_BYTE *)this + 4) = 0x10;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xF) = 0;
  *((_BYTE *)this + 0x40) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
