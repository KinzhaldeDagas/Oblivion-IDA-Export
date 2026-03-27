TESForm *__thiscall TESObjectLAND::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectLAND::~TESObjectLAND(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
