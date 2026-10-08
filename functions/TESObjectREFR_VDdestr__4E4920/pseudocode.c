TESObjectREFR *__thiscall TESObjectREFR_VDdestr(TESObjectREFR *this, char a2)
{
  TESObjectREFR_destr((TESChildCELL *)this); /*0x4e4923*/
  if ( (a2 & 1) != 0 ) /*0x4e492d*/
    FormHeapFree((unsigned int)this); /*0x4e4930*/
  return this; /*0x4e493a*/
}
