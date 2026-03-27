TESObjectBOOK *__thiscall TESObjectBOOK::`scalar deleting destructor'(TESObjectBOOK *this, char a2)
{
  TESObjectBOOK::~TESObjectBOOK(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
