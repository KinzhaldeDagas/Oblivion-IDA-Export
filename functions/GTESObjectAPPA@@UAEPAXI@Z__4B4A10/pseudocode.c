TESObjectAPPA *__thiscall TESObjectAPPA::`scalar deleting destructor'(TESObjectAPPA *this, char a2)
{
  TESObjectAPPA::~TESObjectAPPA(this); /*0x4b4a13*/
  if ( (a2 & 1) != 0 ) /*0x4b4a1d*/
    FormHeapFree((unsigned int)this); /*0x4b4a20*/
  return this; /*0x4b4a2a*/
}
