char __thiscall sub_69F190(TESObjectREFR *this)
{
  TESObjectCELL *DwordAtOffset40; // eax

  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x69f198*/
  if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) ) /*0x69f1a4*/
    return 1; /*0x69f1c2*/
  if ( this ) /*0x69f1af*/
    this->vtbl->super.Destroy((TESForm *)this, 1); /*0x69f1ba*/
  return 0; /*0x69f1bc*/
}
