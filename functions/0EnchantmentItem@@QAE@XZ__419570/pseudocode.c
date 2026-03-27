EnchantmentItem *__thiscall EnchantmentItem::EnchantmentItem(EnchantmentItem *this)
{
  MagicItemForm_constr((TESForm *)this);
  *((_BYTE *)this + 0x40) = 0;
  *(_DWORD *)this = &EnchantmentItem::`vftable'{for `EnchantmentItem'};
  *((_DWORD *)this + 6) = &EnchantmentItem::`vftable'{for `MagicItem'};
  *((_DWORD *)this + 9) = &EnchantmentItem::`vftable'{for `EffectItemList'};
  *((_BYTE *)this + 4) = 0xF;
  *((_DWORD *)this + 0xF) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xE) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xD) = 2;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
