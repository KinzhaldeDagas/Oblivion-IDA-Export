TESObjectMISC *__thiscall TESObjectMISC::`scalar deleting destructor'(TESObjectMISC *this, char a2)
{
  TESObjectMISC::~TESObjectMISC(this); /*0x4b9953*/
  if ( (a2 & 1) != 0 ) /*0x4b995d*/
    FormHeapFree((unsigned int)this); /*0x4b9960*/
  return this; /*0x4b996a*/
}
