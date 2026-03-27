TESObjectACTI *__thiscall TESObjectACTI::`scalar deleting destructor'(TESObjectACTI *this, char a2)
{
  TESObjectACTI::~TESObjectACTI(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
