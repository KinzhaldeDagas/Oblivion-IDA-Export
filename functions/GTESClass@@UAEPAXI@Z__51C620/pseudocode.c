TESClass *__thiscall TESClass::`scalar deleting destructor'(TESClass *this, char a2)
{
  TESClass::~TESClass(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
