TESForm *__thiscall TESObjectTREE::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectTREE::~TESObjectTREE(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
