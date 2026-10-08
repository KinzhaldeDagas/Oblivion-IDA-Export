TESWorldSpace *__thiscall TESWorldSpace::`scalar deleting destructor'(TESWorldSpace *this, char a2)
{
  TESWorldSpace::~TESWorldSpace(this); /*0x4f1de3*/
  if ( (a2 & 1) != 0 ) /*0x4f1ded*/
    FormHeapFree((unsigned int)this); /*0x4f1df0*/
  return this; /*0x4f1dfa*/
}
