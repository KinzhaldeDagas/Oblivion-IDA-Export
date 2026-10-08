TESObjectACTI *__thiscall TESObjectACTI::`scalar deleting destructor'(TESObjectACTI *this, char a2)
{
  TESObjectACTI::~TESObjectACTI(this); /*0x4b4153*/
  if ( (a2 & 1) != 0 ) /*0x4b415d*/
    FormHeapFree((unsigned int)this); /*0x4b4160*/
  return this; /*0x4b416a*/
}
