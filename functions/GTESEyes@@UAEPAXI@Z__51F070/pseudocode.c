TESEyes *__thiscall TESEyes::`scalar deleting destructor'(TESEyes *this, char a2)
{
  TESEyes::~TESEyes(this); /*0x51f073*/
  if ( (a2 & 1) != 0 ) /*0x51f07d*/
    FormHeapFree((unsigned int)this); /*0x51f080*/
  return this; /*0x51f08a*/
}
