TESObjectBOOK *__thiscall TESObjectBOOK::`scalar deleting destructor'(TESObjectBOOK *this, char a2)
{
  TESObjectBOOK::~TESObjectBOOK(this); /*0x4b5b13*/
  if ( (a2 & 1) != 0 ) /*0x4b5b1d*/
    FormHeapFree((unsigned int)this); /*0x4b5b20*/
  return this; /*0x4b5b2a*/
}
