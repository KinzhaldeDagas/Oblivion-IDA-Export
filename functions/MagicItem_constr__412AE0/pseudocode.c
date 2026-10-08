_DWORD *__thiscall MagicItem_constr(_DWORD *this)
{
  _DWORD *v2; // edi

  *this = &TESFullName::`vftable'; /*0x412b0b*/
  *(this + 1) = 0; /*0x412b11*/
  *((_WORD *)this + 4) = 0; /*0x412b14*/
  *((_WORD *)this + 5) = 0; /*0x412b18*/
  v2 = this + 3; /*0x412b1c*/
  EffectItemList_constr(this + 3); /*0x412b25*/
  *this = &MagicItem::`vftable'{for `MagicItem'}; /*0x412b2a*/
  *v2 = &MagicItem::`vftable'{for `EffectItemList'}; /*0x412b30*/
  return this; /*0x412b38*/
}
