TESObjectCLOT *__thiscall TESObjectCLOT::`scalar deleting destructor'(TESObjectCLOT *this, char a2)
{
  TESObjectCLOT::~TESObjectCLOT(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
