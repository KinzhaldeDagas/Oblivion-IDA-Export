TESForm *__thiscall TESObjectSTAT::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectSTAT::~TESObjectSTAT(this); /*0x4b9b13*/
  if ( (a2 & 1) != 0 ) /*0x4b9b1d*/
    FormHeapFree((unsigned int)this); /*0x4b9b20*/
  return this; /*0x4b9b2a*/
}
