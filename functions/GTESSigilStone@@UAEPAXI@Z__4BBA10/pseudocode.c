TESForm *__thiscall TESSigilStone::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESSigilStone::~TESSigilStone(this); /*0x4bba13*/
  if ( (a2 & 1) != 0 ) /*0x4bba1d*/
    FormHeapFree((unsigned int)this); /*0x4bba20*/
  return this; /*0x4bba2a*/
}
