void __thiscall SpellItem::~SpellItem(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&SpellItem::`vftable'{for `SpellItem'};
  *((_DWORD *)this + 6) = &SpellItem::`vftable'{for `MagicItem'};
  v2->vtbl = (TESFormVtbl *)&SpellItem::`vftable'{for `EffectItemList'};
  EffectItemList_Clear(v2);
  j_TESForm_ClearComponentReferences(this);
  MagicItemForm::~MagicItemForm(this);
}
