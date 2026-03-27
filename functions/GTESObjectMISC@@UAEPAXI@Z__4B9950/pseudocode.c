TESObjectMISC *__thiscall TESObjectMISC::`scalar deleting destructor'(TESObjectMISC *this, char a2)
{
  TESObjectMISC::~TESObjectMISC(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
