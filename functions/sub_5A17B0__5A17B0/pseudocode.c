bool __thiscall sub_5A17B0(_DWORD *this)
{
  if ( !*(this + 0xF) )
    PrintError("pEnchantmentName is NULL");
  if ( !*(this + 0x11) )
    PrintError("pUsesIcon is NULL");
  if ( !*(this + 0x14) )
    PrintError("pEnchantmentIcon is NULL");
  if ( !*(this + 0x12) )
    PrintError("pEnchantmentGoldCost is NULL");
  if ( !*(this + 0x13) )
    PrintError("pEnchantmentGoldCost is NULL");
  if ( !*(this + 0x15) )
    PrintError("pKnownEffectList is NULL");
  if ( !*(this + 0x16) )
    PrintError("pAddedEffectList is NULL");
  if ( !*(this + 0x17) )
    PrintError("pFocus is NULL");
  if ( !*(this + 0x18) )
    PrintError("pKnownEffectScroll is NULL");
  if ( !*(this + 0x19) )
    PrintError("pKnownEffectMarker is NULL");
  if ( !*(this + 0x1A) )
    PrintError("pAddedEffectScroll is NULL");
  if ( !*(this + 0x1B) )
    PrintError("pAddedEffectMarker is NULL");
  if ( !*(this + 0x1C) )
    PrintError("pCreateButton is NULL");
  if ( !*(this + 0x1D) )
    PrintError("pExitButton is NULL");
  if ( !*(this + 0x1E) )
    PrintError("pKnownEffectListText is NULL");
  if ( !*(this + 0x1F) )
    PrintError("pAddedEffectListText is NULL");
  if ( !*(this + 0x20) )
    PrintError("pItemRect is NULL");
  if ( !*(this + 0x21) )
    PrintError("pSoulGemRect is NULL");
  return *(this + 0xF)
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
