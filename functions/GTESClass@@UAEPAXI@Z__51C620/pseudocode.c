TESClass *__thiscall TESClass::`scalar deleting destructor'(TESClass *this, char a2)
{
  TESClass::~TESClass(this); /*0x51c623*/
  if ( (a2 & 1) != 0 ) /*0x51c62d*/
    FormHeapFree((unsigned int)this); /*0x51c630*/
  return this; /*0x51c63a*/
}
