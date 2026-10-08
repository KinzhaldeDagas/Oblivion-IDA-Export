void __thiscall EnchantmentItem::~EnchantmentItem(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = (TESForm *)((char *)this + 0x24); /*0x418f78*/
  this->vtbl = (TESFormVtbl *)&EnchantmentItem::`vftable'{for `EnchantmentItem'}; /*0x418f7b*/
  *((_DWORD *)this + 6) = &EnchantmentItem::`vftable'{for `MagicItem'}; /*0x418f81*/
  v2->vtbl = (TESFormVtbl *)&EnchantmentItem::`vftable'{for `EffectItemList'}; /*0x418f88*/
  EffectItemList_Clear(v2); /*0x418f96*/
  j_TESForm_ClearComponentReferences(this); /*0x418f9d*/
  MagicItemForm::~MagicItemForm(this); /*0x418fac*/
}
