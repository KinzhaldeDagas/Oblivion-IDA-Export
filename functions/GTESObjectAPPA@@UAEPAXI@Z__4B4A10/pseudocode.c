TESObjectAPPA *__thiscall TESObjectAPPA::`scalar deleting destructor'(TESObjectAPPA *this, char a2)
{
  TESObjectAPPA::~TESObjectAPPA(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
