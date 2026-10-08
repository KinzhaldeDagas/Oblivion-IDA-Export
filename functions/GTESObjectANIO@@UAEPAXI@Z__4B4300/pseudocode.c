TESForm *__thiscall TESObjectANIO::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectANIO::~TESObjectANIO(this); /*0x4b4303*/
  if ( (a2 & 1) != 0 ) /*0x4b430d*/
    FormHeapFree((unsigned int)this); /*0x4b4310*/
  return this; /*0x4b431a*/
}
