TESForm *__thiscall TESObjectCELL_VDdestr(TESForm *this, char a2)
{
  TESObjectCELL_destr(this); /*0x4d55e3*/
  if ( (a2 & 1) != 0 ) /*0x4d55ed*/
    FormHeapFree((unsigned int)this); /*0x4d55f0*/
  return this; /*0x4d55fa*/
}
