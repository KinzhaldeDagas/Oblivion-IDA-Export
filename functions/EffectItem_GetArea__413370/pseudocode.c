// Effective area: returns 0 for EffectSetting NoArea (0x200) or Self range (0); otherwise raw EffectItem+0x8 area.
int __thiscall EffectItem_GetArea(_DWORD *this)
{
  if ( (*(_DWORD *)(*(this + 7) + 0x58) & 0x200) != 0 || !*(this + 4) ) /*0x41337e*/
    return 0; /*0x413388*/
  else
    return *(this + 2); /*0x413384*/
}
