void __thiscall EnchantmentItem::~EnchantmentItem(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&EnchantmentItem::`vftable'{for `EnchantmentItem'};
  *((_DWORD *)this + 6) = &EnchantmentItem::`vftable'{for `MagicItem'};
  v2->vtbl = (TESFormVtbl *)&EnchantmentItem::`vftable'{for `EffectItemList'};
  EffectItemList_Clear(v2);
  j_TESForm_ClearComponentReferences(this);
  MagicItemForm::~MagicItemForm(this);
}
