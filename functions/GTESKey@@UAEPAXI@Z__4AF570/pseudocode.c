TESForm *__thiscall TESKey::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESKey::~TESKey(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
