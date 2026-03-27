_DWORD *__thiscall MagicItem_constr(_DWORD *this)
{
  _DWORD *v2; // edi

  *this = &TESFullName::`vftable';
  *(this + 1) = 0;
  *((_WORD *)this + 4) = 0;
  *((_WORD *)this + 5) = 0;
  v2 = this + 3;
  EffectItemList_constr(this + 3);
  *this = &MagicItem::`vftable'{for `MagicItem'};
  *v2 = &MagicItem::`vftable'{for `EffectItemList'};
  return this;
}
