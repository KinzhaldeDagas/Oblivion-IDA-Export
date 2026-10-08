SpellItem *__thiscall SpellItem::SpellItem(SpellItem *this)
{
  MagicItemForm_constr((TESForm *)this); /*0x41d448*/
  *(_DWORD *)this = &SpellItem::`vftable'{for `SpellItem'}; /*0x41d455*/
  *((_DWORD *)this + 6) = &SpellItem::`vftable'{for `MagicItem'}; /*0x41d45b*/
  *((_DWORD *)this + 9) = &SpellItem::`vftable'{for `EffectItemList'}; /*0x41d462*/
  *((_BYTE *)this + 4) = 0x10; /*0x41d469*/
  *((_DWORD *)this + 0xD) = 0; /*0x41d46d*/
  *((_DWORD *)this + 0xE) = 0xFFFFFFFF; /*0x41d470*/
  *((_DWORD *)this + 0xF) = 0; /*0x41d477*/
  *((_BYTE *)this + 0x40) = 0; /*0x41d47a*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x41d47d*/
  return this; /*0x41d484*/
}
