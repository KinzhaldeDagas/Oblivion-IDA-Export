void __thiscall SpellItem::~SpellItem(TESForm *this)
{
  TESForm *v2; // ecx

  v2 = (TESForm *)((char *)this + 0x24); /*0x41d1f8*/
  this->vtbl = (TESFormVtbl *)&SpellItem::`vftable'{for `SpellItem'}; /*0x41d1fb*/
  *((_DWORD *)this + 6) = &SpellItem::`vftable'{for `MagicItem'}; /*0x41d201*/
  v2->vtbl = (TESFormVtbl *)&SpellItem::`vftable'{for `EffectItemList'}; /*0x41d208*/
  EffectItemList_Clear(v2); /*0x41d216*/
  j_TESForm_ClearComponentReferences(this); /*0x41d21d*/
  MagicItemForm::~MagicItemForm(this); /*0x41d22c*/
}
