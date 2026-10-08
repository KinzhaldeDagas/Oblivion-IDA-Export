TESForm *__thiscall TESKey::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESKey::~TESKey(this); /*0x4af573*/
  if ( (a2 & 1) != 0 ) /*0x4af57d*/
    FormHeapFree((unsigned int)this); /*0x4af580*/
  return this; /*0x4af58a*/
}
