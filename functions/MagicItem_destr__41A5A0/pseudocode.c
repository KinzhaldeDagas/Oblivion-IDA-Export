void __thiscall MagicItem_destr(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = this + 3;
  *this = &MagicItem::`vftable'{for `MagicItem'};
  *v2 = &MagicItem::`vftable'{for `EffectItemList'};
  EffectItemList_Clear(v2);
  FormHeapFree(*(this + 1));
  *(this + 1) = 0;
  *((_WORD *)this + 5) = 0;
  *((_WORD *)this + 4) = 0;
}
