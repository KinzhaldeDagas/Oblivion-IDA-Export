TESForm *__thiscall TESObjectSTAT::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectSTAT::~TESObjectSTAT(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
