TESEyes *__thiscall TESEyes::`scalar deleting destructor'(TESEyes *this, char a2)
{
  TESEyes::~TESEyes(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
