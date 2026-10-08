void __thiscall MagicItem_destr(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = this + 3; /*0x41a5c9*/
  *this = &MagicItem::`vftable'{for `MagicItem'}; /*0x41a5cc*/
  *v2 = &MagicItem::`vftable'{for `EffectItemList'}; /*0x41a5d2*/
  EffectItemList_Clear(v2); /*0x41a5de*/
  FormHeapFree(*(this + 1)); /*0x41a5e7*/
  *(this + 1) = 0; /*0x41a5ef*/
  *((_WORD *)this + 5) = 0; /*0x41a5f2*/
  *((_WORD *)this + 4) = 0; /*0x41a5f6*/
}
