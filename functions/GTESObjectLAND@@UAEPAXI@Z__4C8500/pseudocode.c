TESForm *__thiscall TESObjectLAND::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectLAND::~TESObjectLAND(this); /*0x4c8503*/
  if ( (a2 & 1) != 0 ) /*0x4c850d*/
    FormHeapFree((unsigned int)this); /*0x4c8510*/
  return this; /*0x4c851a*/
}
