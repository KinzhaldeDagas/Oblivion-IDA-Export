bool __thiscall sub_5A17B0(_DWORD *this)
{
  if ( !*(this + 0xF) ) /*0x5a17b3*/
    PrintError("pEnchantmentName is NULL"); /*0x5a17be*/
  if ( !*(this + 0x11) ) /*0x5a17c6*/
    PrintError("pUsesIcon is NULL"); /*0x5a17d1*/
  if ( !*(this + 0x14) ) /*0x5a17d9*/
    PrintError("pEnchantmentIcon is NULL"); /*0x5a17e4*/
  if ( !*(this + 0x12) ) /*0x5a17ec*/
    PrintError("pEnchantmentGoldCost is NULL"); /*0x5a17f7*/
  if ( !*(this + 0x13) ) /*0x5a17ff*/
    PrintError("pEnchantmentGoldCost is NULL"); /*0x5a180a*/
  if ( !*(this + 0x15) ) /*0x5a1812*/
    PrintError("pKnownEffectList is NULL"); /*0x5a181d*/
  if ( !*(this + 0x16) ) /*0x5a1825*/
    PrintError("pAddedEffectList is NULL"); /*0x5a1830*/
  if ( !*(this + 0x17) ) /*0x5a1838*/
    PrintError("pFocus is NULL"); /*0x5a1843*/
  if ( !*(this + 0x18) ) /*0x5a184b*/
    PrintError("pKnownEffectScroll is NULL"); /*0x5a1856*/
  if ( !*(this + 0x19) ) /*0x5a185e*/
    PrintError("pKnownEffectMarker is NULL"); /*0x5a1869*/
  if ( !*(this + 0x1A) ) /*0x5a1871*/
    PrintError("pAddedEffectScroll is NULL"); /*0x5a187c*/
  if ( !*(this + 0x1B) ) /*0x5a1884*/
    PrintError("pAddedEffectMarker is NULL"); /*0x5a188f*/
  if ( !*(this + 0x1C) ) /*0x5a1897*/
    PrintError("pCreateButton is NULL"); /*0x5a18a2*/
  if ( !*(this + 0x1D) ) /*0x5a18aa*/
    PrintError("pExitButton is NULL"); /*0x5a18b5*/
  if ( !*(this + 0x1E) ) /*0x5a18bd*/
    PrintError("pKnownEffectListText is NULL"); /*0x5a18c8*/
  if ( !*(this + 0x1F) ) /*0x5a18d0*/
    PrintError("pAddedEffectListText is NULL"); /*0x5a18db*/
  if ( !*(this + 0x20) ) /*0x5a18e3*/
    PrintError("pItemRect is NULL"); /*0x5a18f1*/
  if ( !*(this + 0x21) ) /*0x5a18f9*/
    PrintError("pSoulGemRect is NULL"); /*0x5a1907*/
  return *(this + 0xF) /*0x5a1983*/
      && *(this + 0x11)
      && *(this + 0x14)
      && *(this + 0x12)
      && *(this + 0x13)
      && *(this + 0x15)
      && *(this + 0x16)
      && *(this + 0x17)
      && *(this + 0x18)
      && *(this + 0x19)
      && *(this + 0x1A)
      && *(this + 0x1B)
      && *(this + 0x1C)
      && *(this + 0x1D)
      && *(this + 0x1E)
      && *(this + 0x1F)
      && *(this + 0x20)
      && *(this + 0x21);
}
