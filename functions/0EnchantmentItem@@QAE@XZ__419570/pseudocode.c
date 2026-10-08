EnchantmentItem *__thiscall EnchantmentItem::EnchantmentItem(EnchantmentItem *this)
{
  MagicItemForm_constr((TESForm *)this); /*0x419598*/
  *((_BYTE *)this + 0x40) = 0; /*0x4195a6*/
  *(_DWORD *)this = &EnchantmentItem::`vftable'{for `EnchantmentItem'}; /*0x4195ab*/
  *((_DWORD *)this + 6) = &EnchantmentItem::`vftable'{for `MagicItem'}; /*0x4195b1*/
  *((_DWORD *)this + 9) = &EnchantmentItem::`vftable'{for `EffectItemList'}; /*0x4195b8*/
  *((_BYTE *)this + 4) = 0xF; /*0x4195bf*/
  *((_DWORD *)this + 0xF) = 0xFFFFFFFF; /*0x4195c3*/
  *((_DWORD *)this + 0xE) = 0xFFFFFFFF; /*0x4195c6*/
  *((_DWORD *)this + 0xD) = 2; /*0x4195c9*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4195d0*/
  return this; /*0x4195d7*/
}
